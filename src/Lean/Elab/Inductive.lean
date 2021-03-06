/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Util.ReplaceLevel
import Lean.Util.ReplaceExpr
import Lean.Util.CollectLevelParams
import Lean.Util.Constructions
import Lean.Elab.Command
import Lean.Elab.CollectFVars
import Lean.Elab.DefView
import Lean.Elab.DeclUtil

namespace Lean
namespace Elab
namespace Command

open Meta

def checkValidInductiveModifier (modifiers : Modifiers) : CommandElabM Unit := do
when modifiers.isNoncomputable $
  throwError "invalid use of 'noncomputable' in inductive declaration";
when modifiers.isPartial $
  throwError "invalid use of 'partial' in inductive declaration";
unless (modifiers.attrs.size == 0 || (modifiers.attrs.size == 1 && (modifiers.attrs.get! 0).name == `class)) $
  throwError "invalid use of attributes in inductive declaration";
pure ()

def checkValidCtorModifier (modifiers : Modifiers) : CommandElabM Unit := do
when modifiers.isNoncomputable $
  throwError "invalid use of 'noncomputable' in constructor declaration";
when modifiers.isPartial $
  throwError "invalid use of 'partial' in constructor declaration";
when modifiers.isUnsafe $
  throwError "invalid use of 'unsafe' in constructor declaration";
when (modifiers.attrs.size != 0) $
  throwError "invalid use of attributes in constructor declaration";
pure ()


structure CtorView :=
(ref       : Syntax)
(modifiers : Modifiers)
(inferMod  : Bool)  -- true if `{}` is used in the constructor declaration
(declName  : Name)
(binders   : Syntax)
(type?     : Option Syntax)

instance CtorView.inhabited : Inhabited CtorView :=
⟨{ ref := arbitrary _, modifiers := {}, inferMod := false, declName := arbitrary _, binders := arbitrary _, type? := none }⟩

structure InductiveView :=
(ref           : Syntax)
(modifiers     : Modifiers)
(shortDeclName : Name)
(declName      : Name)
(levelNames    : List Name)
(binders       : Syntax)
(type?         : Option Syntax)
(ctors         : Array CtorView)

instance InductiveView.inhabited : Inhabited InductiveView :=
⟨{ ref := arbitrary _, modifiers := {}, shortDeclName := arbitrary _, declName := arbitrary _,
   levelNames := [], binders := arbitrary _, type? := none, ctors := #[] }⟩

structure ElabHeaderResult :=
(view       : InductiveView)
(lctx       : LocalContext)
(localInsts : LocalInstances)
(params     : Array Expr)
(type       : Expr)

instance ElabHeaderResult.inhabited : Inhabited ElabHeaderResult :=
⟨{ view := arbitrary _, lctx := arbitrary _, localInsts := arbitrary _, params := #[], type := arbitrary _ }⟩

private partial def elabHeaderAux (views : Array InductiveView)
    : Nat → Array ElabHeaderResult → TermElabM (Array ElabHeaderResult)
| i, acc =>
  if h : i < views.size then
    let view := views.get ⟨i, h⟩;
    Term.elabBinders view.binders.getArgs fun params => do
      lctx ← getLCtx;
      localInsts ← getLocalInstances;
      match view.type? with
      | none         => do
        u ← mkFreshLevelMVar;
        let type := mkSort (mkLevelSucc u);
        elabHeaderAux (i+1) (acc.push { lctx := lctx, localInsts := localInsts, params := params, type := type, view := view })
      | some typeStx => do
        type ← Term.elabTerm typeStx none;
        unlessM (isTypeFormerType type) $
          throwErrorAt typeStx "invalid inductive type, resultant type is not a sort";
        elabHeaderAux (i+1) (acc.push { lctx := lctx, localInsts := localInsts, params := params, type := type, view := view })
  else
    pure acc

private def checkNumParams (rs : Array ElabHeaderResult) : TermElabM Nat := do
let numParams := (rs.get! 0).params.size;
rs.forM fun r => unless (r.params.size == numParams) $
  throwErrorAt r.view.ref "invalid inductive type, number of parameters mismatch in mutually inductive datatypes";
pure numParams

private def checkUnsafe (rs : Array ElabHeaderResult) : TermElabM Unit :=
let isUnsafe := (rs.get! 0).view.modifiers.isUnsafe;
rs.forM fun r => unless (r.view.modifiers.isUnsafe == isUnsafe) $
  throwErrorAt r.view.ref "invalid inductive type, cannot mix unsafe and safe declarations in a mutually inductive datatypes"

private def checkLevelNames (views : Array InductiveView) : TermElabM Unit :=
when (views.size > 1) do
  let levelNames := (views.get! 0).levelNames;
  views.forM fun view => unless (view.levelNames == levelNames) $
    throwErrorAt view.ref "invalid inductive type, universe parameters mismatch in mutually inductive datatypes"

private def mkTypeFor (r : ElabHeaderResult) : TermElabM Expr := do
withLCtx r.lctx r.localInsts do
  mkForallFVars r.params r.type

private def throwUnexpectedInductiveType {α} : TermElabM α :=
throwError "unexpected inductive resulting type"

-- Given `e` of the form `forall As, B`, return `B`.
private def getResultingType (e : Expr) : TermElabM Expr :=
forallTelescopeReducing e fun _ r => pure r

private def eqvFirstTypeResult (firstType type : Expr) : MetaM Bool :=
forallTelescopeReducing firstType fun _ firstTypeResult => isDefEq firstTypeResult type

-- Auxiliary function for checking whether the types in mutually inductive declaration are compatible.
private partial def checkParamsAndResultType (type firstType : Expr) (numParams : Nat) : TermElabM Unit := do
catch
  (do forallTelescopeCompatible type firstType numParams fun _ type firstType =>
      forallTelescopeReducing type fun _ type =>
      forallTelescopeReducing firstType fun _ firstType =>
      match type with
      | Expr.sort _ _        =>
        unlessM (isDefEq firstType type) $
          throwError ("resulting universe mismatch, given " ++ indentExpr type ++ Format.line ++ "expected type" ++ indentExpr firstType)
      | _ =>
        throwError "unexpected inductive resulting type")
  (fun ex => match ex with
    | Exception.error ref msg => throw (Exception.error ref ("invalid mutually inductive types, " ++ msg))
    | _ => throw ex)

-- Auxiliary function for checking whether the types in mutually inductive declaration are compatible.
private def checkHeader (r : ElabHeaderResult) (numParams : Nat) (firstType? : Option Expr) : TermElabM Expr := do
type ← mkTypeFor r;
match firstType? with
| none           => pure type
| some firstType => do
  withRef r.view.ref $ checkParamsAndResultType type firstType numParams;
  pure firstType

-- Auxiliary function for checking whether the types in mutually inductive declaration are compatible.
private partial def checkHeaders (rs : Array ElabHeaderResult) (numParams : Nat) : Nat → Option Expr → TermElabM Unit
| i, firstType? => when (i < rs.size) do
  type ← checkHeader (rs.get! i) numParams firstType?;
  checkHeaders (i+1) type

private def elabHeader (views : Array InductiveView) : TermElabM (Array ElabHeaderResult) := do
rs ← elabHeaderAux views 0 #[];
when (rs.size > 1) do {
  checkUnsafe rs;
  numParams ← checkNumParams rs;
  checkHeaders rs numParams 0 none
};
pure rs

private partial def withInductiveLocalDeclsAux {α} (namesAndTypes : Array (Name × Expr)) (params : Array Expr)
    (x : Array Expr → Array Expr → TermElabM α) : Nat → Array Expr → TermElabM α
| i, indFVars =>
  if h : i < namesAndTypes.size then do
    let (id, type) := namesAndTypes.get ⟨i, h⟩;
    withLocalDeclD id type fun indFVar => withInductiveLocalDeclsAux (i+1) (indFVars.push indFVar)
  else
    x params indFVars

/- Create a local declaration for each inductive type in `rs`, and execute `x params indFVars`, where `params` are the inductive type parameters and
   `indFVars` are the new local declarations.
   We use the the local context/instances and parameters of rs[0].
   Note that this method is executed after we executed `checkHeaders` and established all
   parameters are compatible. -/
private def withInductiveLocalDecls {α} (rs : Array ElabHeaderResult) (x : Array Expr → Array Expr → TermElabM α) : TermElabM α := do
namesAndTypes ← rs.mapM fun r => do {
  type ← mkTypeFor r;
  pure (r.view.shortDeclName, type)
};
let r0     := rs.get! 0;
let params := r0.params;
withLCtx r0.lctx r0.localInsts $ withRef r0.view.ref $
  withInductiveLocalDeclsAux namesAndTypes params x 0 #[]

private def isInductiveFamily (numParams : Nat) (indFVar : Expr) : TermElabM Bool := do
indFVarType ← inferType indFVar;
forallTelescopeReducing indFVarType fun xs _ =>
  pure $ xs.size > numParams

/-
  Elaborate constructor types.

  Remark: we check whether the resulting type is correct, but
  we do not check for:
  - Positivity (it is a rare failure, and the kernel already checks for it).
  - Universe constraints (the kernel checks for it). -/
private def elabCtors (indFVar : Expr) (params : Array Expr) (r : ElabHeaderResult) : TermElabM (List Constructor) :=
withRef r.view.ref do
indFamily ← isInductiveFamily params.size indFVar;
r.view.ctors.toList.mapM fun ctorView => Term.elabBinders ctorView.binders.getArgs fun ctorParams =>
  withRef ctorView.ref $ do
  type ← match ctorView.type? with
    | none          => do
      when indFamily $
        throwError "constructor resulting type must be specified in inductive family declaration";
      pure (mkAppN indFVar params)
    | some ctorType => do {
      type ← Term.elabTerm ctorType none;
      resultingType ← getResultingType type;
      unless (resultingType.getAppFn == indFVar) $
        throwError ("unexpected constructor resulting type" ++ indentExpr resultingType);
      unlessM (isType resultingType) $
        throwError ("unexpected constructor resulting type, type expected" ++ indentExpr resultingType);
      pure type
    };
  type ← mkForallFVars ctorParams type;
  type ← mkForallFVars params type;
  pure { name := ctorView.declName, type := type }

/- Convert universe metavariables occurring in the `indTypes` into new parameters.
   Remark: if the resulting inductive datatype has universe metavariables, we will fix it later using
   `inferResultingUniverse`. -/
private def levelMVarToParamAux (indTypes : List InductiveType) : StateRefT Nat TermElabM (List InductiveType) :=
indTypes.mapM fun indType => do
  type  ← Term.levelMVarToParam' indType.type;
  ctors ← indType.ctors.mapM fun ctor => do {
    ctorType ← Term.levelMVarToParam' ctor.type;
    pure { ctor with type := ctorType }
  };
  pure { indType with ctors := ctors, type := type }

private def levelMVarToParam (indTypes : List InductiveType) : TermElabM (List InductiveType) :=
(levelMVarToParamAux indTypes).run' 1

private def getResultingUniverse : List InductiveType → TermElabM Level
| []           => throwError "unexpected empty inductive declaration"
| indType :: _ => do
  r ← getResultingType indType.type;
  match r with
  | Expr.sort u _ => pure u
  | _             => throwError "unexpected inductive type resulting type"

def tmpIndParam := mkLevelParam `_tmp_ind_univ_param

/--
  Return true if `u` is of the form `?m + k`.
  Return false if `u` does not contain universe metavariables.
  Throw exception otherwise. -/
def shouldInferResultUniverse (u : Level) : TermElabM Bool := do
u ← instantiateLevelMVars u;
if u.hasMVar then
  match u.getLevelOffset with
  | Level.mvar mvarId _ => do
    Term.assignLevelMVar mvarId tmpIndParam;
    pure true
  | _ =>
    throwError $
      "cannot infer resulting universe level of inductive datatype, given level contains metavariables " ++ mkSort u ++ ", provide universe explicitly"
else
  pure false

/-
  Auxiliary function for `updateResultingUniverse`
  `accLevelAtCtor u r rOffset us` add `u` components to `us` if they are not already there and it is different from the resulting universe level `r+rOffset`.
  If `u` is a `max`, then its components are recursively processed.
  If `u` is a `succ` and `rOffset > 0`, we process the `u`s child using `rOffset-1`.

  This method is used to infer the resulting universe level of an inductive datatype. -/
def accLevelAtCtor : Level → Level → Nat → Array Level → Except String (Array Level)
| Level.max u v _, r, rOffset,   us => do us ← accLevelAtCtor u r rOffset us; accLevelAtCtor v r rOffset us
| Level.zero _,    _, _,         us => pure us
| Level.succ u _,  r, rOffset+1, us => accLevelAtCtor u r rOffset us
| u,               r, rOffset,   us =>
  if rOffset == 0 && u == r then pure us
  else if r.occurs u then throw "failed to compute resulting universe level of inductive datatype, provide universe explicitly"
  else if us.contains u then pure us
  else pure (us.push u)

/- Auxiliary function for `updateResultingUniverse` -/
private partial def collectUniversesFromCtorTypeAux (r : Level) (rOffset : Nat) : Nat → Expr → Array Level → TermElabM (Array Level)
| 0,   Expr.forallE n d b c, us => do
  u ← getLevel d;
  u ← instantiateLevelMVars u;
  match accLevelAtCtor u r rOffset us with
  | Except.error msg => throwError msg
  | Except.ok us     => withLocalDecl n c.binderInfo d $ fun x =>
    let e := b.instantiate1 x;
    collectUniversesFromCtorTypeAux 0 e us
| i+1, Expr.forallE n d b c, us => do
  withLocalDecl n c.binderInfo d $ fun x =>
    let e := b.instantiate1 x;
    collectUniversesFromCtorTypeAux i e us
| _, _, us => pure us

/- Auxiliary function for `updateResultingUniverse` -/
private partial def collectUniversesFromCtorType
    (r : Level) (rOffset : Nat) (ctorType : Expr) (numParams : Nat) (us : Array Level) : TermElabM (Array Level) :=
collectUniversesFromCtorTypeAux r rOffset numParams ctorType us

/- Auxiliary function for `updateResultingUniverse` -/
private partial def collectUniverses (r : Level) (rOffset : Nat) (numParams : Nat) (indTypes : List InductiveType) : TermElabM (Array Level) :=
indTypes.foldlM
  (fun us indType => indType.ctors.foldlM
    (fun us ctor => collectUniversesFromCtorType r rOffset ctor.type numParams us)
    us)
  #[]

private def updateResultingUniverse (numParams : Nat) (indTypes : List InductiveType) : TermElabM (List InductiveType) := do
r ← getResultingUniverse indTypes;
let rOffset : Nat   := r.getOffset;
let r       : Level := r.getLevelOffset;
unless (r.isParam) $
  throwError "failed to compute resulting universe level of inductive datatype, provide universe explicitly";
us ← collectUniverses r rOffset numParams indTypes;
let rNew := Level.mkNaryMax us.toList;
pure $ indTypes.map fun indType =>
  let type := indType.type.replaceLevel fun u => if u == tmpIndParam then some rNew else none;
  { indType with type := type }

private def traceIndTypes (indTypes : List InductiveType) : TermElabM Unit :=
indTypes.forM fun indType =>
  indType.ctors.forM fun ctor => IO.println ("  >> " ++ toString ctor.name ++ " : " ++ toString ctor.type)

private def collectUsed (indTypes : List InductiveType) : StateRefT CollectFVars.State TermElabM Unit := do
indTypes.forM fun indType => do
    Term.collectUsedFVars indType.type;
    indType.ctors.forM fun ctor => Term.collectUsedFVars ctor.type

private def removeUnused (vars : Array Expr) (indTypes : List InductiveType) : TermElabM (LocalContext × LocalInstances × Array Expr) := do
(_, used) ← (collectUsed indTypes).run {};
Term.removeUnused vars used

private def withUsed {α} (vars : Array Expr) (indTypes : List InductiveType) (k : Array Expr → TermElabM α) : TermElabM α := do
(lctx, localInsts, vars) ← removeUnused vars indTypes;
withLCtx lctx localInsts $ k vars

private def updateParams (vars : Array Expr) (indTypes : List InductiveType) : TermElabM (List InductiveType) :=
indTypes.mapM fun indType => do
  type ← mkForallFVars vars indType.type;
  ctors ← indType.ctors.mapM fun ctor => do {
    ctorType ← mkForallFVars vars ctor.type;
    pure { ctor with type := ctorType }
  };
  pure { indType with type := type, ctors := ctors }

private def collectLevelParamsInInductive (indTypes : List InductiveType) : Array Name :=
let usedParams := indTypes.foldl
  (fun (usedParams : CollectLevelParams.State) indType =>
    let usedParams := collectLevelParams usedParams indType.type;
    indType.ctors.foldl
      (fun (usedParams : CollectLevelParams.State) ctor => collectLevelParams usedParams ctor.type)
      usedParams)
  {};
usedParams.params

private def mkIndFVar2Const (views : Array InductiveView) (indFVars : Array Expr) (levelNames : List Name) : ExprMap Expr :=
let levelParams := levelNames.map mkLevelParam;
views.size.fold
  (fun i (m : ExprMap Expr) =>
    let view    := views.get! i;
    let indFVar := indFVars.get! i;
    m.insert indFVar (mkConst view.declName levelParams))
  {}

/- Remark: `numVars <= numParams`. `numVars` is the number of context `variables` used in the inductive declaration,
   and `numParams` is `numVars` + number of explicit parameters provided in the declaration. -/
private def replaceIndFVarsWithConsts (views : Array InductiveView) (indFVars : Array Expr) (levelNames : List Name)
    (numVars : Nat) (numParams : Nat) (indTypes : List InductiveType) : TermElabM (List InductiveType) :=
let indFVar2Const := mkIndFVar2Const views indFVars levelNames;
indTypes.mapM fun indType => do
  ctors ← indType.ctors.mapM fun ctor => do {
     type ← forallBoundedTelescope ctor.type numParams fun params type => do {
      let type := type.replace fun e =>
        if !e.isFVar then
          none
        else match indFVar2Const.find? e with
          | none   => none
          | some c => mkAppN c (params.extract 0 numVars);
      mkForallFVars params type
    };
    pure { ctor with type := type }
  };
  pure { indType with ctors := ctors }

abbrev Ctor2InferMod := Std.HashMap Name Bool

private def mkCtor2InferMod (views : Array InductiveView) : Ctor2InferMod :=
views.foldl
  (fun (m : Ctor2InferMod) view => view.ctors.foldl
    (fun (m : Ctor2InferMod) ctorView => m.insert ctorView.declName ctorView.inferMod)
    m)
  {}

private def applyInferMod (views : Array InductiveView) (numParams : Nat) (indTypes : List InductiveType) : List InductiveType :=
let ctor2InferMod := mkCtor2InferMod views;
indTypes.map fun indType =>
  let ctors := indType.ctors.map fun ctor =>
    let inferMod := ctor2InferMod.find! ctor.name; -- true if `{}` was used
    let ctorType := ctor.type.inferImplicit numParams !inferMod;
    { ctor with type := ctorType };
  { indType with ctors := ctors }

private def mkAuxConstructions (views : Array InductiveView) : TermElabM Unit := do
env ← getEnv;
let hasEq   := env.contains `Eq;
let hasHEq  := env.contains `HEq;
let hasUnit := env.contains `PUnit;
let hasProd := env.contains `Prod;
views.forM fun view => do {
  let n := view.declName;
  modifyEnv fun env => mkRecOn env n;
  when hasUnit $ modifyEnv fun env => mkCasesOn env n;
  when (hasUnit && hasEq && hasHEq) $ modifyEnv fun env => mkNoConfusion env n;
  when (hasUnit && hasProd) $ modifyEnv fun env => mkBelow env n;
  when (hasUnit && hasProd) $ modifyEnv fun env => mkIBelow env n;
  pure ()
};
views.forM fun view => do {
  let n := view.declName;
  when (hasUnit && hasProd) $ modifyEnv fun env => mkBRecOn env n;
  when (hasUnit && hasProd) $ modifyEnv fun env => mkBInductionOn env n;
  pure ()
}

private def mkInductiveDecl (vars : Array Expr) (views : Array InductiveView) : TermElabM Unit := do
let view0             := views.get! 0;
scopeLevelNames ← Term.getLevelNames;
checkLevelNames views;
let allUserLevelNames := view0.levelNames;
let isUnsafe          := view0.modifiers.isUnsafe;
withRef view0.ref $ Term.withLevelNames allUserLevelNames do
  rs ← elabHeader views;
  withInductiveLocalDecls rs fun params indFVars => do
    let numExplicitParams := params.size;
    indTypes ← views.size.foldM
      (fun i (indTypes : List InductiveType) => do
        let indFVar := indFVars.get! i;
        let r       := rs.get! i;
        type  ← mkForallFVars params r.type;
        ctors ← elabCtors indFVar params r;
        let indType := { name := r.view.declName, type := type, ctors := ctors : InductiveType };
        pure (indType :: indTypes))
      [];
    let indTypes := indTypes.reverse;
    Term.synthesizeSyntheticMVarsNoPostponing;
    u ← getResultingUniverse indTypes;
    inferLevel ← shouldInferResultUniverse u;
    withUsed vars indTypes $ fun vars => do
      let numVars   := vars.size;
      let numParams := numVars + numExplicitParams;
      indTypes ← updateParams vars indTypes;
      indTypes ← levelMVarToParam indTypes;
      indTypes ← if inferLevel then updateResultingUniverse numParams indTypes else pure indTypes;
      let usedLevelNames := collectLevelParamsInInductive indTypes;
      match sortDeclLevelParams scopeLevelNames allUserLevelNames usedLevelNames with
      | Except.error msg      => throwError msg
      | Except.ok levelParams => do
        indTypes ← replaceIndFVarsWithConsts views indFVars levelParams numVars numParams indTypes;
        let indTypes := applyInferMod views numParams indTypes;
        let decl := Declaration.inductDecl levelParams numParams indTypes isUnsafe;
        Term.ensureNoUnassignedMVars decl;
        addDecl decl;
        mkAuxConstructions views;
        -- We need to invoke `applyAttributes` because `class` is implemented as an attribute.
        views.forM fun view => applyAttributes view.declName view.modifiers.attrs AttributeApplicationTime.afterTypeChecking

def elabInductiveViews (views : Array InductiveView) : CommandElabM Unit := do
let view0 := views.get! 0;
let ref := view0.ref;
runTermElabM view0.declName fun vars => withRef ref $ mkInductiveDecl vars views

end Command
end Elab
end Lean
