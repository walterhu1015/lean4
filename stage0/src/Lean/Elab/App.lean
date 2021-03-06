/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Util.FindMVar
import Lean.Elab.Term
import Lean.Elab.Binders

namespace Lean
namespace Elab
namespace Term

open Meta

/--
  Auxiliary inductive datatype for combining unelaborated syntax
  and already elaborated expressions. It is used to elaborate applications. -/
inductive Arg
| stx  (val : Syntax)
| expr (val : Expr)

instance Arg.inhabited : Inhabited Arg := ⟨Arg.stx (arbitrary _)⟩

instance Arg.hasToString : HasToString Arg :=
⟨fun arg => match arg with
  | Arg.stx  val => toString val
  | Arg.expr val => toString val⟩

/-- Named arguments created using the notation `(x := val)` -/
structure NamedArg :=
(name : Name) (val : Arg)

instance NamedArg.hasToString : HasToString NamedArg :=
⟨fun s => "(" ++ toString s.name ++ " := " ++ toString s.val ++ ")"⟩

instance NamedArg.inhabited : Inhabited NamedArg := ⟨{ name := arbitrary _, val := arbitrary _ }⟩

/--
  Add a new named argument to `namedArgs`, and throw an error if it already contains a named argument
  with the same name. -/
def addNamedArg (namedArgs : Array NamedArg) (namedArg : NamedArg) : TermElabM (Array NamedArg) := do
when (namedArgs.any $ fun namedArg' => namedArg.name == namedArg'.name) $
  throwError ("argument '" ++ toString namedArg.name ++ "' was already set");
pure $ namedArgs.push namedArg

def synthesizeAppInstMVars (instMVars : Array MVarId) : TermElabM Unit :=
instMVars.forM $ fun mvarId =>
  unlessM (synthesizeInstMVarCore mvarId) $
    registerSyntheticMVarWithCurrRef mvarId SyntheticMVarKind.typeClass

private def ensureArgType (f : Expr) (arg : Expr) (expectedType : Expr) : TermElabM Expr := do
argType ← inferType arg;
ensureHasTypeAux expectedType argType arg f

private def elabArg (f : Expr) (arg : Arg) (expectedType : Expr) : TermElabM Expr :=
match arg with
| Arg.expr val => ensureArgType f val expectedType
| Arg.stx val  => do
  val ← elabTerm val expectedType;
  ensureArgType f val expectedType

private def mkArrow (d b : Expr) : TermElabM Expr := do
n ← mkFreshAnonymousName;
pure $ Lean.mkForall n BinderInfo.default d b

/-
  Relevant definitions:
  ```
  class CoeFun (α : Sort u) (γ : α → outParam (Sort v))
  abbrev coeFun {α : Sort u} {γ : α → Sort v} (a : α) [CoeFun α γ] : γ a
  ``` -/
private def tryCoeFun (α : Expr) (a : Expr) : TermElabM Expr := do
v ← mkFreshLevelMVar;
type ← mkArrow α (mkSort v);
γ ← mkFreshExprMVar type;
u ← getLevel α;
let coeFunInstType := mkAppN (Lean.mkConst `CoeFun [u, v]) #[α, γ];
mvar ← mkFreshExprMVar coeFunInstType MetavarKind.synthetic;
let mvarId := mvar.mvarId!;
synthesized ←
  catch (withoutMacroStackAtErr $ synthesizeInstMVarCore mvarId)
  (fun ex =>
    match ex with
    | Exception.error _ msg => throwError $ "function expected" ++ Format.line ++ msg
    | _                     => throwError "function expected");
if synthesized then
  pure $ mkAppN (Lean.mkConst `coeFun [u, v]) #[α, γ, a, mvar]
else
  throwError "function expected"

/-- Auxiliary structure used to elaborate function application arguments. -/
structure ElabAppArgsCtx :=
(ref           : Syntax)
(args          : Array Arg)
(expectedType? : Option Expr)
(explicit      : Bool)                -- if true, all arguments are treated as explicit
(argIdx        : Nat := 0)            -- position of next explicit argument to be processed
(namedArgs     : Array NamedArg)      -- remaining named arguments to be processed
(instMVars     : Array MVarId := #[]) -- metavariables for the instance implicit arguments that have already been processed
(typeMVars     : Array MVarId := #[]) -- metavariables for implicit arguments of the form `{α : Sort u}` that have already been processed
(toSetErrorCtx : Array MVarId := #[]) -- metavariables that we need the set the error context using the application being built
(foundExplicit : Bool := false)       -- true if an explicit argument has already been processed

/- Auxiliary function for retrieving the resulting type of a function application.
   See `propagateExpectedType`. -/
private partial def getForallBody : Nat → Array NamedArg → Expr → Option Expr
| i, namedArgs, type@(Expr.forallE n d b c) =>
  match namedArgs.findIdx? (fun namedArg => namedArg.name == n) with
  | some idx => getForallBody i (namedArgs.eraseIdx idx) b
  | none     =>
    if !c.binderInfo.isExplicit then
      getForallBody i namedArgs b
    else if i > 0 then
      getForallBody (i-1) namedArgs b
    else if d.isAutoParam || d.isOptParam then
      getForallBody i namedArgs b
    else
      some type
| i, namedArgs, type => if i == 0 && namedArgs.isEmpty then some type else none

private def hasTypeMVar (ctx : ElabAppArgsCtx) (type : Expr) : Bool :=
(type.findMVar? (fun mvarId => ctx.typeMVars.contains mvarId)).isSome

private def hasOnlyTypeMVar (ctx : ElabAppArgsCtx) (type : Expr) : Bool :=
(type.findMVar? (fun mvarId => !ctx.typeMVars.contains mvarId)).isNone

/-
  Auxiliary method for propagating the expected type. We call it as soon as we find the first explict
  argument. The goal is to propagate the expected type in applications of functions such as
  ```lean
  HasAdd.add {α : Type u} : α → α → α
  List.cons {α : Type u} : α → List α → List α
  ```
  This is particularly useful when there applicable coercions. For example,
  assume we have a coercion from `Nat` to `Int`, and we have
  `(x : Nat)` and the expected type is `List Int`. Then, if we don't use this function,
  the elaborator will fail to elaborate
  ```
  List.cons x []
  ```
  First, the elaborator creates a new metavariable `?α` for the implicit argument `{α : Type u}`.
  Then, when it processes `x`, it assigns `?α := Nat`, and then obtain the
  resultant type `List Nat` which is **not** definitionally equal to `List Int`.
  We solve the problem by executing this method before we elaborate the first explicit argument (`x` in this example).
  This method infers that the resultant type is `List ?α` and unifies it with `List Int`.
  Then, when we elaborate `x`, the elaborate realizes the coercion from `Nat` to `Int` must be used, and the
  term
  ```
  @List.cons Int (coe x) (@List.nil Int)
  ```
  is produced.

  The method will do nothing if
  1- The resultant type depends on the remaining arguments (i.e., `!eTypeBody.hasLooseBVars`)
  2- The resultant type does not contain any type metavariable.
  3- The resultant type contains a nontype metavariable.

  We added conditions 2&3 to be able to restrict this method to simple functions that are "morally" in
  the Hindley&Milner fragment.
  For example, consider the following definitions
  ```
  def foo {n m : Nat} (a : bv n) (b : bv m) : bv (n - m)
  ```
  Now, consider
  ```
  def test (x1 : bv 32) (x2 : bv 31) (y1 : bv 64) (y2 : bv 63) : bv 1 :=
  foo x1 x2 = foo y1 y2
  ```
  When the elaborator reaches the term `foo y1 y2`, the expected type is `bv (32-31)`.
  If we apply this method, we would solve the unification problem `bv (?n - ?m) =?= bv (32 - 31)`,
  by assigning `?n := 32` and `?m := 31`. Then, the elaborator fails elaborating `y1` since
  `bv 64` is **not** definitionally equal to `bv 32`.
-/
private def propagateExpectedType (ctx : ElabAppArgsCtx) (eType : Expr) : TermElabM Unit :=
withRef ctx.ref $
unless (ctx.explicit || ctx.foundExplicit || ctx.typeMVars.isEmpty)  $ do
  match ctx.expectedType? with
  | none              => pure ()
  | some expectedType =>
    let numRemainingArgs := ctx.args.size - ctx.argIdx;
    match getForallBody numRemainingArgs ctx.namedArgs eType with
    | none           => pure ()
    | some eTypeBody =>
      unless eTypeBody.hasLooseBVars $
      when (hasTypeMVar ctx eTypeBody && hasOnlyTypeMVar ctx eTypeBody) $ do
        _ ← isDefEq expectedType eTypeBody;
        pure ()

private def nextArgIsHole (ctx : ElabAppArgsCtx) : Bool :=
if h : ctx.argIdx < ctx.args.size then
  match ctx.args.get ⟨ctx.argIdx, h⟩ with
  | Arg.stx (Syntax.node `Lean.Parser.Term.hole _) => true
  | _                                              => false
else
  false

/- Elaborate function application arguments. -/
private partial def elabAppArgsAux : ElabAppArgsCtx → Expr → Expr → TermElabM Expr
| ctx, e, eType => withRef ctx.ref do
  let finalize : Unit → TermElabM Expr := fun _ => do {
    -- all user explicit arguments have been consumed
    trace `Elab.app.finalize $ fun _ => e;
    match ctx.expectedType? with
    | none              => pure ()
    | some expectedType => do {
      -- Try to propagate expected type. Ignore if types are not definitionally equal, caller must handle it.
      _ ← isDefEq expectedType eType;
      pure ()
    };
    synthesizeAppInstMVars ctx.instMVars;
    ctx.toSetErrorCtx.forM fun mvarId => registerMVarErrorContext mvarId ctx.ref e;
    pure e
  };
  eType ← whnfForall eType;
  match eType with
  | Expr.forallE n d b c =>
    match ctx.namedArgs.findIdx? (fun namedArg => namedArg.name == n) with
    | some idx => do
      let arg := ctx.namedArgs.get! idx;
      let namedArgs := ctx.namedArgs.eraseIdx idx;
      argElab ← elabArg e arg.val d;
      propagateExpectedType ctx eType;
      elabAppArgsAux { ctx with foundExplicit := true, namedArgs := namedArgs } (mkApp e argElab) (b.instantiate1 argElab)
    | none =>
      let processExplictArg : Unit → TermElabM Expr := fun _ => do {
        propagateExpectedType ctx eType;
        let ctx := { ctx with foundExplicit := true };
        if h : ctx.argIdx < ctx.args.size then do
          argElab ← elabArg e (ctx.args.get ⟨ctx.argIdx, h⟩) d;
          elabAppArgsAux { ctx with argIdx := ctx.argIdx + 1 } (mkApp e argElab) (b.instantiate1 argElab)
        else match ctx.explicit, d.getOptParamDefault?, d.getAutoParamTactic? with
          | false, some defVal, _                      => elabAppArgsAux ctx (mkApp e defVal) (b.instantiate1 defVal)
          | false, _, some (Expr.const tacticDecl _ _) => do
            env ← getEnv;
            match evalSyntaxConstant env tacticDecl with
            | Except.error err       => throwError err
            | Except.ok tacticSyntax => do
              tacticBlock ← `(by { $(tacticSyntax.getArgs)* });
              -- tacticBlock does not have any position information.
              -- So, we use ctx.ref
              let tacticBlock := tacticBlock.copyInfo ctx.ref;
              let d := d.getArg! 0; -- `autoParam type := by tactic` ==> `type`
              argElab ← elabArg e (Arg.stx tacticBlock) d;
              elabAppArgsAux ctx (mkApp e argElab) (b.instantiate1 argElab)
          | false, _, some _ =>
            throwError "invalid autoParam, argument must be a constant"
          | _, _, _ =>
            if ctx.namedArgs.isEmpty then
              finalize ()
            else
              throwError ("explicit parameter '" ++ n ++ "' is missing, unused named arguments " ++ toString (ctx.namedArgs.map $ fun narg => narg.name))
      };
      match c.binderInfo with
        | BinderInfo.implicit =>
          if ctx.explicit then
            processExplictArg ()
          else do
            a ← mkFreshExprMVar d;
            typeMVars ← condM (isTypeFormer a) (pure $ ctx.typeMVars.push a.mvarId!) (pure ctx.typeMVars);
            elabAppArgsAux { ctx with typeMVars := typeMVars, toSetErrorCtx := ctx.toSetErrorCtx.push a.mvarId! } (mkApp e a) (b.instantiate1 a)
        | BinderInfo.instImplicit =>
          if ctx.explicit && nextArgIsHole ctx then do
            /- Recall that if '@' has been used, and the argument is '_', then we still use
               type class resolution -/
            a ← mkFreshExprMVar d MetavarKind.synthetic;
            elabAppArgsAux { ctx with argIdx := ctx.argIdx + 1, instMVars := ctx.instMVars.push a.mvarId! } (mkApp e a) (b.instantiate1 a)
          else if ctx.explicit then
            processExplictArg ()
          else do
            a ← mkFreshExprMVar d MetavarKind.synthetic;
            elabAppArgsAux { ctx with instMVars := ctx.instMVars.push a.mvarId! } (mkApp e a) (b.instantiate1 a)
        | _ =>
          processExplictArg ()
  | _ =>
    if ctx.namedArgs.isEmpty && ctx.argIdx == ctx.args.size then
      finalize ()
    else do
      e ← tryCoeFun eType e;
      eType ← inferType e;
      elabAppArgsAux ctx e eType

private def elabAppArgs (f : Expr) (namedArgs : Array NamedArg) (args : Array Arg)
    (expectedType? : Option Expr) (explicit : Bool) : TermElabM Expr := do
fType ← inferType f;
fType ← instantiateMVars fType;
trace `Elab.app.args $ fun _ => "explicit: " ++ toString explicit ++ ", " ++ f ++ " : " ++ fType;
unless (namedArgs.isEmpty && args.isEmpty) $
  tryPostponeIfMVar fType;
ref ← getRef;
elabAppArgsAux {ref := ref, args := args, expectedType? := expectedType?, explicit := explicit, namedArgs := namedArgs } f fType

/-- Auxiliary inductive datatype that represents the resolution of an `LVal`. -/
inductive LValResolution
| projFn   (baseStructName : Name) (structName : Name) (fieldName : Name)
| projIdx  (structName : Name) (idx : Nat)
| const    (baseStructName : Name) (structName : Name) (constName : Name)
| localRec (baseName : Name) (fullName : Name) (fvar : Expr)
| getOp    (fullName : Name) (idx : Syntax)

private def throwLValError {α} (e : Expr) (eType : Expr) (msg : MessageData) : TermElabM α :=
throwError $ msg ++ indentExpr e ++ Format.line ++ "has type" ++ indentExpr eType

/-- `findMethod? env S fName`.
    1- If `env` contains `S ++ fName`, return `(S, S++fName)`
    2- Otherwise if `env` contains private name `prv` for `S ++ fName`, return `(S, prv)`, o
    3- Otherwise for each parent structure `S'` of  `S`, we try `findMethod? env S' fname` -/
private partial def findMethod? (env : Environment) : Name → Name → Option (Name × Name)
| structName, fieldName =>
  let fullName := structName ++ fieldName;
  match env.find? fullName with
  | some _ => some (structName, fullName)
  | none   =>
    let fullNamePrv := mkPrivateName env fullName;
    match env.find? fullNamePrv with
    | some _ => some (structName, fullNamePrv)
    | none   =>
      if isStructureLike env structName then
        (getParentStructures env structName).findSome? fun parentStructName => findMethod? parentStructName fieldName
      else
        none

private def resolveLValAux (e : Expr) (eType : Expr) (lval : LVal) : TermElabM LValResolution :=
match eType.getAppFn, lval with
| Expr.const structName _ _, LVal.fieldIdx idx => do
  when (idx == 0) $
    throwError "invalid projection, index must be greater than 0";
  env ← getEnv;
  unless (isStructureLike env structName) $
    throwLValError e eType "invalid projection, structure expected";
  let fieldNames := getStructureFields env structName;
  if h : idx - 1 < fieldNames.size then
    if isStructure env structName then
      pure $ LValResolution.projFn structName structName (fieldNames.get ⟨idx - 1, h⟩)
    else
      /- `structName` was declared using `inductive` command.
         So, we don't projection functions for it. Thus, we use `Expr.proj` -/
      pure $ LValResolution.projIdx structName (idx - 1)
  else
    throwLValError e eType ("invalid projection, structure has only " ++ toString fieldNames.size ++ " field(s)")
| Expr.const structName _ _, LVal.fieldName fieldName => do
  env ← getEnv;
  let searchEnv : Unit → TermElabM LValResolution := fun _ => do {
    match findMethod? env structName fieldName with
    | some (baseStructName, fullName) => pure $ LValResolution.const baseStructName structName fullName
    | none   => throwLValError e eType $
        "invalid field notation, '" ++ fieldName ++ "' is not a valid \"field\" because environment does not contain '" ++ (structName ++ fieldName) ++ "'"
  };
  -- search local context first, then environment
  let searchCtx : Unit → TermElabM LValResolution := fun _ => do {
    let fullName := structName ++ fieldName;
    currNamespace ← getCurrNamespace;
    let localName := fullName.replacePrefix currNamespace Name.anonymous;
    lctx ← getLCtx;
    match lctx.findFromUserName? localName with
    | some localDecl =>
      if localDecl.binderInfo == BinderInfo.auxDecl then
        /- LVal notation is being used to make a "local" recursive call. -/
        pure $ LValResolution.localRec structName fullName localDecl.toExpr
      else
        searchEnv ()
    | none => searchEnv ()
  };
  if isStructure env structName then
    match findField? env structName fieldName with
    | some baseStructName => pure $ LValResolution.projFn baseStructName structName fieldName
    | none                => searchCtx ()
  else
    searchCtx ()
| Expr.const structName _ _, LVal.getOp idx => do
  env ← getEnv;
  let fullName := mkNameStr structName "getOp";
  match env.find? fullName with
  | some _ => pure $ LValResolution.getOp fullName idx
  | none   => throwLValError e eType $ "invalid [..] notation because environment does not contain '" ++ fullName ++ "'"
| _, LVal.getOp idx =>
  throwLValError e eType "invalid [..] notation, type is not of the form (C ...) where C is a constant"
| _, _ =>
  throwLValError e eType "invalid field notation, type is not of the form (C ...) where C is a constant"

private partial def resolveLValLoop (e : Expr) (lval : LVal) : Expr → Array Exception → TermElabM LValResolution
| eType, previousExceptions => do
  eType ← whnfCore eType;
  tryPostponeIfMVar eType;
  catch
    (resolveLValAux e eType lval)
    (fun ex =>
      match ex with
      | Exception.error _ _ => do
        eType? ← unfoldDefinition? eType;
        match eType? with
        | some eType => resolveLValLoop eType (previousExceptions.push ex)
        | none       => do
          previousExceptions.forM $ fun ex => logException ex;
          throw ex
      | Exception.internal _ => throw ex)

private def resolveLVal (e : Expr) (lval : LVal) : TermElabM LValResolution := do
eType ← inferType e;
resolveLValLoop e lval eType #[]

private partial def mkBaseProjections (baseStructName : Name) (structName : Name) (e : Expr) : TermElabM Expr := do
env ← getEnv;
match getPathToBaseStructure? env baseStructName structName with
| none => throwError "failed to access field in parent structure"
| some path =>
  path.foldlM
    (fun e projFunName => do
      projFn ← mkConst projFunName;
      elabAppArgs projFn #[{ name := `self, val := Arg.expr e }] #[] none false)
    e

/- Auxiliary method for field notation. It tries to add `e` to `args` as the first explicit parameter
   which takes an element of type `(C ...)` where `C` is `baseName`.
   `fullName` is the name of the resolved "field" access function. It is used for reporting errors -/
private def addLValArg (baseName : Name) (fullName : Name) (e : Expr) (args : Array Arg) : Nat → Array NamedArg → Expr → TermElabM (Array Arg)
| i, namedArgs, Expr.forallE n d b c =>
  if !c.binderInfo.isExplicit then
    addLValArg i namedArgs b
  else
    /- If there is named argument with name `n`, then we should skip. -/
    match namedArgs.findIdx? (fun namedArg => namedArg.name == n) with
    | some idx => do
      let namedArgs := namedArgs.eraseIdx idx;
      addLValArg i namedArgs b
    | none => do
      if d.consumeMData.isAppOf baseName then
        pure $ args.insertAt i (Arg.expr e)
      else if i < args.size then
        addLValArg (i+1) namedArgs b
      else
        throwError $ "invalid field notation, insufficient number of arguments for '" ++ fullName ++ "'"
| _, _, fType =>
  throwError $
    "invalid field notation, function '" ++ fullName ++ "' does not have explicit argument with type (" ++ baseName ++ " ...)"

private def elabAppLValsAux (namedArgs : Array NamedArg) (args : Array Arg) (expectedType? : Option Expr) (explicit : Bool)
    : Expr → List LVal → TermElabM Expr
| f, []          => elabAppArgs f namedArgs args expectedType? explicit
| f, lval::lvals => do
  lvalRes ← resolveLVal f lval;
  match lvalRes with
  | LValResolution.projIdx structName idx =>
    let f := mkProj structName idx f;
    elabAppLValsAux f lvals
  | LValResolution.projFn baseStructName structName fieldName => do
    f ← mkBaseProjections baseStructName structName f;
    projFn ← mkConst (baseStructName ++ fieldName);
    if lvals.isEmpty then do
      namedArgs ← addNamedArg namedArgs { name := `self, val := Arg.expr f };
      elabAppArgs projFn namedArgs args expectedType? explicit
    else do
      f ← elabAppArgs projFn #[{ name := `self, val := Arg.expr f }] #[] none false;
      elabAppLValsAux f lvals
  | LValResolution.const baseStructName structName constName => do
    f ← if baseStructName != structName then mkBaseProjections baseStructName structName f else pure f;
    projFn ← mkConst constName;
    if lvals.isEmpty then do
      projFnType ← inferType projFn;
      args ← addLValArg baseStructName constName f args 0 namedArgs projFnType;
      elabAppArgs projFn namedArgs args expectedType? explicit
    else do
      f ← elabAppArgs projFn #[] #[Arg.expr f] none false;
      elabAppLValsAux f lvals
  | LValResolution.localRec baseName fullName fvar =>
    if lvals.isEmpty then do
      fvarType ← inferType fvar;
      args ← addLValArg baseName fullName f args 0 namedArgs fvarType;
      elabAppArgs fvar namedArgs args expectedType? explicit
    else do
      f ← elabAppArgs fvar #[] #[Arg.expr f] none false;
      elabAppLValsAux f lvals
  | LValResolution.getOp fullName idx => do
    getOpFn ← mkConst fullName;
    if lvals.isEmpty then do
      namedArgs ← addNamedArg namedArgs { name := `self, val := Arg.expr f };
      namedArgs ← addNamedArg namedArgs { name := `idx, val := Arg.stx idx };
      elabAppArgs getOpFn namedArgs args expectedType? explicit
    else do
      f ← elabAppArgs getOpFn #[{ name := `self, val := Arg.expr f }, { name := `idx, val := Arg.stx idx }] #[] none false;
      elabAppLValsAux f lvals

private def elabAppLVals (f : Expr) (lvals : List LVal) (namedArgs : Array NamedArg) (args : Array Arg)
    (expectedType? : Option Expr) (explicit : Bool) : TermElabM Expr := do
when (!lvals.isEmpty && explicit) $ throwError "invalid use of field notation with `@` modifier";
elabAppLValsAux namedArgs args expectedType? explicit f lvals

def elabExplicitUnivs (lvls : Array Syntax) : TermElabM (List Level) := do
lvls.foldrM
  (fun stx lvls => do
    lvl ← elabLevel stx;
    pure (lvl::lvls))
  []

/-
Interaction between `errToSorry` and `observing`.

- The method `elabTerm` catches exceptions, log them, and returns a synthetic sorry (IF `ctx.errToSorry` == true).

- When we elaborate choice nodes (and overloaded identifiers), we track multiple results using the `observing x` combinator.
  The `observing x` executes `x` and returns a `TermElabResult`.

`observing `x does not check for synthetic sorry's, just an exception. Thus, it may think `x` worked when it didn't
if a synthetic sorry was introduced. We decided that checking for synthetic sorrys at `observing` is not a good solution
because it would not be clear to decide what the "main" error message for the alternative is. When the result contains
a synthetic `sorry`, it is not clear which error message corresponds to the `sorry`. Moreover, while executing `x`, many
error messages may have been logged. Recall that we need an error per alternative at `mergeFailures`.

Thus, we decided to set `errToSorry` to `false` whenever processing choice nodes and overloaded symbols.

Important: we rely on the property that after `errToSorry` is set to
false, no elaboration function executed by `x` will reset it to
`true`.
-/

private partial def elabAppFnId (fIdent : Syntax) (fExplicitUnivs : List Level) (lvals : List LVal)
    (namedArgs : Array NamedArg) (args : Array Arg) (expectedType? : Option Expr) (explicit : Bool) (acc : Array TermElabResult)
    : TermElabM (Array TermElabResult) :=
match fIdent with
| Syntax.ident _ _ n preresolved => do
  funLVals ← withRef fIdent $ resolveName n preresolved fExplicitUnivs;
  -- Set `errToSorry` to `false` if `funLVals` > 1. See comment above about the interaction between `errToSorry` and `observing`.
  adaptReader (fun (ctx : Context) => { ctx with errToSorry := funLVals.length == 1 && ctx.errToSorry }) $
    funLVals.foldlM
      (fun acc ⟨f, fields⟩ => do
        let lvals' := fields.map LVal.fieldName;
        s ← observing $ elabAppLVals f (lvals' ++ lvals) namedArgs args expectedType? explicit;
        pure $ acc.push s)
      acc
| _ => throwUnsupportedSyntax

private partial def elabAppFn : Syntax → List LVal → Array NamedArg → Array Arg → Option Expr → Bool → Array TermElabResult → TermElabM (Array TermElabResult)
| f, lvals, namedArgs, args, expectedType?, explicit, acc =>
  if f.getKind == choiceKind then
    -- Set `errToSorry` to `false` when processing choice nodes. See comment above about the interaction between `errToSorry` and `observing`.
    adaptReader (fun (ctx : Context) => { ctx with errToSorry := false }) $
      f.getArgs.foldlM (fun acc f => elabAppFn f lvals namedArgs args expectedType? explicit acc) acc
  else match_syntax f with
  | `($(e).$idx:fieldIdx) =>
    let idx := idx.isFieldIdx?.get!;
    elabAppFn e (LVal.fieldIdx idx :: lvals) namedArgs args expectedType? explicit acc
  | `($(e).$field:ident) =>
    let newLVals := field.getId.eraseMacroScopes.components.map (fun n => LVal.fieldName (toString n));
    elabAppFn e (newLVals ++ lvals) namedArgs args expectedType? explicit acc
  | `($e[$idx]) =>
    elabAppFn e (LVal.getOp idx :: lvals) namedArgs args expectedType? explicit acc
  | `($id:ident@$t:term) =>
    throwError "unexpected occurrence of named pattern"
  | `($id:ident) => do
    elabAppFnId id [] lvals namedArgs args expectedType? explicit acc
  | `($id:ident.{$us*}) => do
    us ← elabExplicitUnivs us.getSepElems;
    elabAppFnId id us lvals namedArgs args expectedType? explicit acc
  | `(@$id:ident) =>
    elabAppFn id lvals namedArgs args expectedType? true acc
  | `(@$id:ident.{$us*}) =>
    elabAppFn (f.getArg 1) lvals namedArgs args expectedType? true acc
  | `(@$t)     => throwUnsupportedSyntax -- invalid occurrence of `@`
  | `(_)       => throwError "placeholders '_' cannot be used where a function is expected"
  | _ => do
    s ← observing $ do {
      f ← elabTerm f none;
      elabAppLVals f lvals namedArgs args expectedType? explicit
    };
    pure $ acc.push s

private def getSuccess (candidates : Array TermElabResult) : Array TermElabResult :=
candidates.filter $ fun c => match c with
  | EStateM.Result.ok _ _ => true
  | _ => false

private def toMessageData (ex : Exception) : TermElabM MessageData := do
pos ← getRefPos;
match ex.getRef.getPos with
| none       => pure ex.toMessageData
| some exPos =>
  if pos == exPos then
    pure ex.toMessageData
  else do
    fileMap ← getFileMap;
    let exPosition := fileMap.toPosition exPos;
    pure $ toString exPosition.line ++ ":" ++ toString exPosition.column ++ " " ++ ex.toMessageData

private def mergeFailures {α} (failures : Array TermElabResult) : TermElabM α := do
msgs ← failures.mapM $ fun failure =>
  match failure with
  | EStateM.Result.ok _ _     => unreachable!
  | EStateM.Result.error ex _ => toMessageData ex;
throwError ("overloaded, errors " ++ MessageData.ofArray msgs)

private def elabAppAux (f : Syntax) (namedArgs : Array NamedArg) (args : Array Arg) (expectedType? : Option Expr) : TermElabM Expr := do
/- TODO: if `f` contains `choice` or overloaded symbols, `mayPostpone == true`, and `expectedType? == some ?m` where `?m` is not assigned,
   then we should postpone until `?m` is assigned.
   Another (more expensive) option is: execute, and if successes > 1, `mayPostpone == true`, and `expectedType? == some ?m` where `?m` is not assigned,
   then we postpone `elabAppAux`. It is more expensive because we would have to re-elaborate the whole thing after we assign `?m`.
   We **can't** continue from `TermElabResult` since they contain a snapshot of the state, and state has changed. -/
candidates ← elabAppFn f [] namedArgs args expectedType? false #[];
if candidates.size == 1 then
  applyResult $ candidates.get! 0
else
  let successes := getSuccess candidates;
  if successes.size == 1 then
    applyResult $ successes.get! 0
  else if successes.size > 1 then do
    env ← getEnv;
    lctx ← getLCtx;
    mctx ← getMCtx;
    opts ← getOptions;
    let msgs : Array MessageData := successes.map $ fun success => match success with
      | EStateM.Result.ok e s => MessageData.withContext { env := env, mctx := mctx, lctx := lctx, opts := opts } e
      | _                     => unreachable!;
    throwErrorAt f ("ambiguous, possible interpretations " ++ MessageData.ofArray msgs)
  else
    withRef f $ mergeFailures candidates

partial def expandApp (stx : Syntax) : TermElabM (Syntax × Array NamedArg × Array Arg) := do
let f    := stx.getArg 0;
(namedArgs, args) ← (stx.getArg 1).getArgs.foldlM
  (fun (acc : Array NamedArg × Array Arg) (stx : Syntax) => do
    let (namedArgs, args) := acc;
    if stx.getKind == `Lean.Parser.Term.namedArgument then do
      -- tparser! try ("(" >> ident >> " := ") >> termParser >> ")"
      let name := (stx.getArg 1).getId.eraseMacroScopes;
      let val  := stx.getArg 3;
      namedArgs ← addNamedArg namedArgs { name := name, val := Arg.stx val };
      pure (namedArgs, args)
    else
      pure (namedArgs, args.push $ Arg.stx stx))
  (#[], #[]);
pure (f, namedArgs, args)

@[builtinTermElab app] def elabApp : TermElab :=
fun stx expectedType? => do
  (f, namedArgs, args) ← expandApp stx;
  elabAppAux f namedArgs args expectedType?

def elabAtom : TermElab :=
fun stx expectedType? => elabAppAux stx #[] #[] expectedType?

@[builtinTermElab ident] def elabIdent : TermElab := elabAtom
@[builtinTermElab namedPattern] def elabNamedPattern : TermElab := elabAtom
@[builtinTermElab explicitUniv] def elabExplicitUniv : TermElab := elabAtom

@[builtinTermElab explicit] def elabExplicit : TermElab :=
fun stx expectedType? => match_syntax stx with
  | `(@$id:ident)        => elabAtom stx expectedType?  -- Recall that `elabApp` also has support for `@`
  | `(@$id:ident.{$us*}) => elabAtom stx expectedType?
  | `(@($t))             => elabTermWithoutImplicitLambdas t expectedType?    -- `@` is being used just to disable implicit lambdas
  | `(@$t)               => elabTermWithoutImplicitLambdas t expectedType?    -- `@` is being used just to disable implicit lambdas
  | _                    => throwUnsupportedSyntax

@[builtinTermElab choice] def elabChoice : TermElab := elabAtom
@[builtinTermElab proj] def elabProj : TermElab := elabAtom
@[builtinTermElab arrayRef] def elabArrayRef : TermElab := elabAtom
/- A raw identiier is not a valid term,
   but it is nice to have a handler for them because it allows `macros` to insert them into terms. -/
@[builtinTermElab ident] def elabRawIdent : TermElab := elabAtom

@[init] private def regTraceClasses : IO Unit := do
registerTraceClass `Elab.app;
pure ()

end Term
end Elab
end Lean
