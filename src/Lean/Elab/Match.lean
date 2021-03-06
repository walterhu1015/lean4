/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.Match.MatchPatternAttr
import Lean.Meta.Match.Match
import Lean.Elab.SyntheticMVars
import Lean.Elab.App

namespace Lean
namespace Elab
namespace Term

open Meta

/- This modules assumes "match"-expressions use the following syntax.

```lean
def matchAlt : Parser :=
nodeWithAntiquot "matchAlt" `Lean.Parser.Term.matchAlt $
  sepBy1 termParser ", " >> darrow >> termParser

def matchAlts (optionalFirstBar := true) : Parser :=
group $ withPosition $ fun pos =>
  (if optionalFirstBar then optional "| " else "| ") >>
  sepBy1 matchAlt (checkColGe pos.column "alternatives must be indented" >> "|")

def matchDiscr := parser! optional (try (ident >> checkNoWsBefore "no space before ':'" >> ":")) >> termParser

def «match» := parser!:leadPrec "match " >> sepBy1 matchDiscr ", " >> optType >> " with " >> matchAlts
```
-/

structure MatchAltView :=
(ref      : Syntax)
(patterns : Array Syntax)
(rhs      : Syntax)

def mkMatchAltView (ref : Syntax) (matchAlt : Syntax) : MatchAltView :=
{ ref := ref, patterns := (matchAlt.getArg 0).getArgs.getSepElems, rhs := matchAlt.getArg 2 }

private def expandSimpleMatch (stx discr lhsVar rhs : Syntax) (expectedType? : Option Expr) : TermElabM Expr := do
newStx ← `(let $lhsVar := $discr; $rhs);
withMacroExpansion stx newStx $ elabTerm newStx expectedType?

private def expandSimpleMatchWithType (stx discr lhsVar type rhs : Syntax) (expectedType? : Option Expr) : TermElabM Expr := do
newStx ← `(let $lhsVar : $type := $discr; $rhs);
withMacroExpansion stx newStx $ elabTerm newStx expectedType?

private def expandMatchOptTypeAux (ref : Syntax) : Nat → MacroM Syntax
| 0   => pure $ mkHole ref
| n+1 => do t ← expandMatchOptTypeAux n; r ← `(forall _, $t); pure (r.copyInfo ref)

private def expandMatchOptType (ref : Syntax) (optType : Syntax) (numDiscrs : Nat) : MacroM Syntax :=
if optType.isNone then
  expandMatchOptTypeAux ref numDiscrs
else
  pure $ (optType.getArg 0).getArg 1

private def elabMatchOptType (matchOptType : Syntax) (numDiscrs : Nat) : TermElabM Expr := do
ref ← getRef;
typeStx ← liftMacroM $ expandMatchOptType ref matchOptType numDiscrs;
elabType typeStx

private partial def elabDiscrsAux (discrStxs : Array Syntax) (expectedType : Expr) : Nat → Expr → Array Expr → TermElabM (Array Expr)
| i, matchType, discrs =>
  if h : i < discrStxs.size then do
    let discrStx := discrStxs.get ⟨i, h⟩;
    matchType ← whnf matchType;
    match matchType with
    | Expr.forallE _ d b _ => do
      discr ← elabTermEnsuringType discrStx d;
      trace `Elab.match fun _ => "discr #" ++ toString i ++ " " ++ discr ++ " : " ++ d;
      elabDiscrsAux (i+1) (b.instantiate1 discr) (discrs.push discr)
    | _ => throwError ("invalid type provided to match-expression, function type with arity #" ++ toString discrStxs ++ " expected")
  else do
    unlessM (isDefEq matchType expectedType) $
      throwError ("invalid result type provided to match-expression" ++ indentExpr matchType ++ Format.line ++ "expected type" ++ indentExpr expectedType);
    pure discrs

private def elabDiscrs (discrStxs : Array Syntax) (matchType : Expr) (expectedType : Expr) : TermElabM (Array Expr) :=
elabDiscrsAux discrStxs expectedType 0 matchType #[]

/-
nodeWithAntiquot "matchAlt" `Lean.Parser.Term.matchAlt $ sepBy1 termParser ", " >> darrow >> termParser
-/
def expandMacrosInPatterns (matchAlts : Array MatchAltView) : TermElabM (Array MatchAltView) := do
env ← getEnv;
matchAlts.mapM fun matchAlt => do
  patterns ← liftMacroM $ matchAlt.patterns.mapM $ expandMacros env;
  pure $ { matchAlt with patterns := patterns }

private partial def getMatchAltsAux (args : Array Syntax) : Nat → Syntax → Array MatchAltView → Array MatchAltView
| i, ref, result =>
  if h : i < args.size then
    let arg := args.get ⟨i, h⟩;
    let ref := if ref.isNone then arg else ref; -- The first vertical is optional
    if arg.getKind == `Lean.Parser.Term.matchAlt then
      getMatchAltsAux (i+1) ref (result.push (mkMatchAltView ref arg))
    else
      -- current `arg` is the vertical bar delimiter
      getMatchAltsAux (i+1) arg result
  else
    result

/- Given `stx` a match-expression, return its alternatives. -/
private def getMatchAlts (stx : Syntax) : Array MatchAltView :=
let matchAlts  := stx.getArg 4;
let firstVBar  := matchAlts.getArg 0;
getMatchAltsAux (matchAlts.getArg 1).getArgs 0 firstVBar #[]

/--
  Auxiliary annotation used to mark terms marked with the "inaccessible" annotation `.(t)` and
  `_` in patterns. -/
def mkInaccessible (e : Expr) : Expr :=
mkAnnotation `_inaccessible e

def inaccessible? (e : Expr) : Option Expr :=
annotation? `_inaccessible e

inductive PatternVar
| localVar     (userName : Name)
-- anonymous variables (`_`) are encoded using metavariables
| anonymousVar (mvarId   : MVarId)

instance PatternVar.hasToString : HasToString PatternVar :=
⟨fun v => match v with
  | PatternVar.localVar x          => toString x
  | PatternVar.anonymousVar mvarId => "?m" ++ toString mvarId⟩

@[init] private def registerAuxiliaryNodeKind : IO Unit :=
Parser.registerBuiltinNodeKind `MVarWithIdKind

/--
  Create an auxiliary Syntax node wrapping a fresh metavariable id.
  We use this kind of Syntax for representing `_` occurring in patterns.
  The metavariables are created before we elaborate the patterns into `Expr`s. -/
private def mkMVarSyntax : TermElabM Syntax := do
mvarId ← mkFreshId;
pure $ Syntax.node `MVarWithIdKind #[Syntax.node mvarId #[]]

/-- Given a syntax node constructed using `mkMVarSyntax`, return its MVarId -/
private def getMVarSyntaxMVarId (stx : Syntax) : MVarId :=
(stx.getArg 0).getKind

/--
  The elaboration function for `Syntax` created using `mkMVarSyntax`.
  It just converts the metavariable id wrapped by the Syntax into an `Expr`. -/
@[builtinTermElab MVarWithIdKind] def elabMVarWithIdKind : TermElab :=
fun stx expectedType? => pure $ mkInaccessible $ mkMVar (getMVarSyntaxMVarId stx)

@[builtinTermElab inaccessible] def elabInaccessible : TermElab :=
fun stx expectedType? => do
  e ← elabTerm (stx.getArg 1) expectedType?;
  pure $ mkInaccessible e

/-
  Patterns define new local variables.
  This module collect them and preprocess `_` occurring in patterns.
  Recall that an `_` may represent anonymous variables or inaccessible terms
  that are implied by typing constraints. Thus, we represent them with fresh named holes `?x`.
  After we elaborate the pattern, if the metavariable remains unassigned, we transform it into
  a regular pattern variable. Otherwise, it becomes an inaccessible term.

  Macros occurring in patterns are expanded before the `collectPatternVars` method is executed.
  The following kinds of Syntax are handled by this module
  - Constructor applications
  - Applications of functions tagged with the `[matchPattern]` attribute
  - Identifiers
  - Anonymous constructors
  - Structure instances
  - Inaccessible terms
  - Named patterns
  - Tuple literals
  - Type ascriptions
  - Literals: num, string and char
-/
namespace CollectPatternVars

structure State :=
(found     : NameSet := {})
(vars      : Array PatternVar := #[])

abbrev M := StateRefT State TermElabM

private def throwCtorExpected {α} : M α :=
throwError "invalid pattern, constructor or constant marked with '[matchPattern]' expected"

private def getNumExplicitCtorParams (ctorVal : ConstructorVal) : TermElabM Nat :=
forallBoundedTelescope ctorVal.type ctorVal.nparams fun ps _ =>
  ps.foldlM
    (fun acc p => do
      localDecl ← getLocalDecl p.fvarId!;
      if localDecl.binderInfo.isExplicit then pure $ acc+1 else pure acc)
    0

private def throwAmbiguous {α} (fs : List Expr) : M α :=
throwError ("ambiguous pattern, use fully qualified name, possible interpretations " ++ fs)

def resolveId? (stx : Syntax) : M (Option Expr) :=
match stx with
| Syntax.ident _ _ val preresolved => do
  rs ← liftM $ catch (resolveName val preresolved []) (fun _ => pure []);
  let rs := rs.filter fun ⟨f, projs⟩ => projs.isEmpty;
  let fs := rs.map fun ⟨f, _⟩ => f;
  match fs with
  | []  => pure none
  | [f] => pure (some f)
  | _   => throwAmbiguous fs
| _ => throwError "identifier expected"

private def throwInvalidPattern {α} : M α :=
throwError "invalid pattern"

namespace CtorApp

/-
An application in a pattern can be

1- A constructor application
   The elaborator assumes fields are accessible and inductive parameters are not accessible.

2- A regular application `(f ...)` where `f` is tagged with `[matchPattern]`.
   The elaborator assumes implicit arguments are not accessible and explicit ones are accessible.
-/

structure Context :=
(funId         : Syntax)
(ctorVal?      : Option ConstructorVal) -- It is `some`, if constructor application
(explicit      : Bool)
(ellipsis      : Bool)
(paramDecls    : Array LocalDecl)
(paramDeclIdx  : Nat := 0)
(namedArgs     : Array NamedArg)
(args          : List Arg)
(newArgs       : Array Syntax := #[])

instance Context.inhabited : Inhabited Context :=
⟨⟨arbitrary _, none, false, false, #[], 0, #[], [], #[]⟩⟩

private def isDone (ctx : Context) : Bool :=
ctx.paramDeclIdx ≥ ctx.paramDecls.size

private def finalize (ctx : Context) : M Syntax :=
if ctx.namedArgs.isEmpty && ctx.args.isEmpty then do
  fStx ← `(@$(ctx.funId):ident);
  pure $ mkAppStx fStx ctx.newArgs
else
  throwError "too many arguments"

private def isNextArgAccessible (ctx : Context) : Bool :=
let i := ctx.paramDeclIdx;
match ctx.ctorVal? with
| some ctorVal => i ≥ ctorVal.nparams -- For constructor applications only fields are accessible
| none =>
  if h : i < ctx.paramDecls.size then
    -- For `[matchPattern]` applications, only explicit parameters are accessible.
    let d := ctx.paramDecls.get ⟨i, h⟩;
    d.binderInfo.isExplicit
  else
    false

private def getNextParam (ctx : Context) : LocalDecl × Context :=
let i := ctx.paramDeclIdx;
let d := ctx.paramDecls.get! i;
(d, { ctx with paramDeclIdx := ctx.paramDeclIdx + 1 })

private def pushNewArg (collect : Syntax → M Syntax) (accessible : Bool) (ctx : Context) (arg : Arg) : M Context :=
match arg with
| Arg.stx stx => do
  stx ← if accessible then collect stx else pure stx;
  pure { ctx with newArgs := ctx.newArgs.push stx }
| _           => unreachable!

private def processExplicitArg (collect : Syntax → M Syntax) (accessible : Bool) (ctx : Context) : M Context :=
match ctx.args with
| [] =>
  if ctx.ellipsis then do
    hole ← `(_);
    pushNewArg collect accessible ctx (Arg.stx hole)
  else
    throwError ("explicit parameter is missing, unused named arguments " ++ toString (ctx.namedArgs.map $ fun narg => narg.name))
| arg::args => do
  let ctx := { ctx with args := args };
  pushNewArg collect accessible ctx arg

private def processImplicitArg (collect : Syntax → M Syntax) (accessible : Bool) (ctx : Context) : M Context :=
if ctx.explicit then
  processExplicitArg collect accessible ctx
else do
  hole ← `(_);
  pushNewArg collect accessible ctx (Arg.stx hole)

private partial def processCtorAppAux (collect : Syntax → M Syntax) : Context → M Syntax
| ctx =>
  if isDone ctx then finalize ctx
  else
    let accessible := isNextArgAccessible ctx;
    let (d, ctx)   := getNextParam ctx;
    match ctx.namedArgs.findIdx? (fun namedArg => namedArg.name == d.userName) with
    | some idx => do
      let arg := ctx.namedArgs.get! idx;
      let ctx := { ctx with namedArgs := ctx.namedArgs.eraseIdx idx };
      ctx ← pushNewArg collect accessible ctx arg.val;
      processCtorAppAux ctx
    | none => do
      ctx ← match d.binderInfo with
      | BinderInfo.implicit     => processImplicitArg collect accessible ctx
      | BinderInfo.instImplicit => processImplicitArg collect accessible ctx
      | _                       => processExplicitArg collect accessible ctx;
      processCtorAppAux ctx

def processCtorApp (collect : Syntax → M Syntax) (f : Syntax) (namedArgs : Array NamedArg) (args : Array Arg) (ellipsis : Bool) : M Syntax := do
let args := args.toList;
(fId, explicit) ← match_syntax f with
| `($fId:ident)  => pure (fId, false)
| `(@$fId:ident) => pure (fId, true)
| _              => throwError "identifier expected";
some (Expr.const fName _ _) ← resolveId? fId | throwCtorExpected;
fInfo ← getConstInfo fName;
forallTelescopeReducing fInfo.type fun xs _ => do
paramDecls ← xs.mapM getFVarLocalDecl;
match fInfo with
| ConstantInfo.ctorInfo val =>
  processCtorAppAux collect
    { funId := fId, explicit := explicit, ctorVal? := val, paramDecls := paramDecls, namedArgs := namedArgs, args := args, ellipsis := ellipsis }
| _ => do
  env ← getEnv;
  if hasMatchPatternAttribute env fName then
    processCtorAppAux collect
      { funId := fId, explicit := explicit, ctorVal? := none, paramDecls := paramDecls, namedArgs := namedArgs, args := args, ellipsis := ellipsis }
  else
    throwCtorExpected

end CtorApp

def processCtorApp (collect : Syntax → M Syntax) (stx : Syntax) : M Syntax := do
(f, namedArgs, args, ellipsis) ← liftM $ expandApp stx true;
CtorApp.processCtorApp collect f namedArgs args ellipsis

def processCtor (collect : Syntax → M Syntax) (stx : Syntax) : M Syntax := do
CtorApp.processCtorApp collect stx #[] #[] false

private def processVar (idStx : Syntax) : M Syntax := do
unless idStx.isIdent $
  throwErrorAt idStx "identifier expected";
let id := idStx.getId;
unless id.eraseMacroScopes.isAtomic $ throwError "invalid pattern variable, must be atomic";
s ← get;
when (s.found.contains id) $ throwError ("invalid pattern, variable '" ++ id ++ "' occurred more than once");
modify fun s => { s with vars := s.vars.push (PatternVar.localVar id), found := s.found.insert id };
pure idStx

/- Check whether `stx` is a pattern variable or constructor-like (i.e., constructor or constant tagged with `[matchPattern]` attribute) -/
private def processId (collect : Syntax → M Syntax) (stx : Syntax) : M Syntax := do
env ← getEnv;
f? ← resolveId? stx;
match f? with
| none   => processVar stx
| some f => match f with
  | Expr.const fName _ _ => do
    match env.find? fName with
    | some (ConstantInfo.ctorInfo _) => processCtor collect stx
    | some _ =>
      if hasMatchPatternAttribute env fName then
        processCtor collect stx
      else
        processVar stx
    | none => throwCtorExpected
  | _ => processVar stx

private partial def collect : Syntax → M Syntax
| stx@(Syntax.node k args) => withRef stx $ withFreshMacroScope $
  if k == `Lean.Parser.Term.app then do
    processCtorApp collect stx
  else if k == `Lean.Parser.Term.anonymousCtor then do
    elems ← (args.get! 1).getArgs.mapSepElemsM $ collect;
    pure $ Syntax.node k $ args.set! 1 $ mkNullNode elems
  else if k == `Lean.Parser.Term.structInst then do
    /- { " >> optional (try (termParser >> " with ")) >> sepBy structInstField ", " true >> optional ".." >> optional (" : " >> termParser) >> " }" -/
    let withMod := args.get! 1;
    unless withMod.isNone $
      throwErrorAt withMod "invalid struct instance pattern, 'with' is not allowed in patterns";
    let fields := (args.get! 2).getArgs;
    fields ← fields.mapSepElemsM fun field => do {
      -- parser! structInstLVal >> " := " >> termParser
      newVal ← collect (field.getArg 3); -- `structInstLVal` has arity 2
      pure $ field.setArg 3 newVal
    };
    pure $ Syntax.node k $ args.set! 2 $ mkNullNode fields
  else if k == `Lean.Parser.Term.hole then do
    r ← liftM mkMVarSyntax;
    modify fun s => { s with vars := s.vars.push $ PatternVar.anonymousVar $ getMVarSyntaxMVarId r };
    pure r
  else if k == `Lean.Parser.Term.paren then
    let arg := args.get! 1;
    if arg.isNone then
      pure stx -- `()`
    else do
      let t := arg.getArg 0;
      let s := arg.getArg 1;
      if s.isNone || (s.getArg 0).isOfKind `Lean.Parser.Term.typeAscription then do
        -- Ignore `s`, since it empty or it is a type ascription
        t ← collect t;
        let arg := arg.setArg 0 t;
        pure $ Syntax.node k $ args.set! 1 arg
      else do
        -- Tuple literal is a constructor
        t ← collect t;
        let arg := arg.setArg 0 t;
        let tupleTail := s.getArg 0;
        let tupleTailElems := (tupleTail.getArg 1).getArgs;
        tupleTailElems ← tupleTailElems.mapSepElemsM collect;
        let tupleTail := tupleTail.setArg 1 $ mkNullNode tupleTailElems;
        let s         := s.setArg 0 tupleTail;
        let arg       := arg.setArg 1 s;
        pure $ Syntax.node k $ args.set! 1 arg
  else if k == `Lean.Parser.Term.explicitUniv then do
    processCtor collect (stx.getArg 0)
  else if k == `Lean.Parser.Term.namedPattern then do
    /- Recall that
       def namedPattern := check... >> tparser! "@" >> termParser -/
    let id := stx.getArg 0;
    processVar id;
    let pat := stx.getArg 2;
    pat ← collect pat;
    `(namedPattern $id $pat)
  else if k == `Lean.Parser.Term.inaccessible then
    pure stx
  else if k == strLitKind then
    pure stx
  else if k == numLitKind then
    pure stx
  else if k == charLitKind then
    pure stx
  else if k == choiceKind then
    throwError "invalid pattern, notation is ambiguous"
  else
    throwInvalidPattern
| stx@(Syntax.ident _ _ _ _) =>
  processId collect stx
| stx =>
  throwInvalidPattern

def main (alt : MatchAltView) : M MatchAltView := do
patterns ← alt.patterns.mapM fun p => do {
  trace `Elab.match fun _ => "collecting variables at pattern: " ++ p;
  collect p
};
pure { alt with patterns := patterns }

end CollectPatternVars

private def collectPatternVars (alt : MatchAltView) : TermElabM (Array PatternVar × MatchAltView) := do
(alt, s) ← (CollectPatternVars.main alt).run {};
pure (s.vars, alt)

/- We convert the collected `PatternVar`s intro `PatternVarDecl` -/
inductive PatternVarDecl
/- For `anonymousVar`, we create both a metavariable and a free variable. The free variable is used as an assignment for the metavariable
   when it is not assigned during pattern elaboration. -/
| anonymousVar (mvarId : MVarId) (fvarId : FVarId)
| localVar     (fvarId : FVarId)

private partial def withPatternVarsAux {α} (pVars : Array PatternVar) (k : Array PatternVarDecl → TermElabM α)
    : Nat → Array PatternVarDecl → TermElabM α
| i, decls =>
  if h : i < pVars.size then
    match pVars.get ⟨i, h⟩ with
    | PatternVar.anonymousVar mvarId => do
      type ← mkFreshTypeMVar;
      withLocalDecl ((`_x).appendIndexAfter i) BinderInfo.default type fun x =>
        withPatternVarsAux (i+1) (decls.push (PatternVarDecl.anonymousVar mvarId x.fvarId!))
    | PatternVar.localVar userName   => do
      type ← mkFreshTypeMVar;
      withLocalDecl userName BinderInfo.default type fun x =>
        withPatternVarsAux (i+1) (decls.push (PatternVarDecl.localVar x.fvarId!))
  else do
    /- We must create the metavariables for `PatternVar.anonymousVar` AFTER we create the new local decls using `withLocalDecl`.
       Reason: their scope must include the new local decls since some of them are assigned by typing constraints. -/
    decls.forM fun decl => match decl with
      | PatternVarDecl.anonymousVar mvarId fvarId => do
        type ← inferType (mkFVar fvarId);
        _ ← mkFreshExprMVarWithId mvarId type;
        pure ()
      | _ => pure ();
    k decls

private def withPatternVars {α} (pVars : Array PatternVar) (k : Array PatternVarDecl → TermElabM α) : TermElabM α :=
withPatternVarsAux pVars k 0 #[]

private partial def elabPatternsAux (patternStxs : Array Syntax) : Nat → Expr → Array Expr → TermElabM (Array Expr × Expr)
| i, matchType, patterns =>
  if h : i < patternStxs.size then do
    matchType ← whnf matchType;
    match matchType with
    | Expr.forallE _ d b _ => do
      let patternStx := patternStxs.get ⟨i, h⟩;
      pattern ← elabTermEnsuringType patternStx d;
      elabPatternsAux (i+1) (b.instantiate1 pattern) (patterns.push pattern)
    | _ => throwError "unexpected match type"
  else
    pure (patterns, matchType)

def finalizePatternDecls (patternVarDecls : Array PatternVarDecl) : TermElabM (Array LocalDecl) :=
patternVarDecls.foldlM
  (fun (decls : Array LocalDecl) pdecl => do
    match pdecl with
    | PatternVarDecl.localVar fvarId => do
      decl ← getLocalDecl fvarId;
      decl ← instantiateLocalDeclMVars decl;
      pure $ decls.push decl
    | PatternVarDecl.anonymousVar mvarId fvarId => do
      e ← instantiateMVars (mkMVar mvarId);
      trace `Elab.match fun _ => "finalizePatternDecls: mvarId: " ++ mvarId ++ " := " ++ e ++ ", fvarId: " ++ mkFVar fvarId;
      match e with
      | Expr.mvar newMVarId _ => do
        /- Metavariable was not assigned, or assigned to another metavariable. So,
           we assign to the auxiliary free variable we created at `withPatternVars` to `newMVarId`. -/
        assignExprMVar newMVarId (mkFVar fvarId);
        trace `Elab.match fun _ => "finalizePatternDecls: " ++ mkMVar newMVarId ++ " := " ++ mkFVar fvarId;
        decl ← getLocalDecl fvarId;
        decl ← instantiateLocalDeclMVars decl;
        pure $ decls.push decl
      | _ => pure decls)
  #[]

open Meta.Match (Pattern Pattern.var Pattern.inaccessible Pattern.ctor Pattern.as Pattern.val Pattern.arrayLit AltLHS MatcherResult)

namespace ToDepElimPattern

structure State :=
(found      : NameSet := {})
(localDecls : Array LocalDecl)
(newLocals  : NameSet := {})

abbrev M := StateRefT State TermElabM

private def alreadyVisited (fvarId : FVarId) : M Bool := do
s ← get;
pure $ s.found.contains fvarId

private def markAsVisited (fvarId : FVarId) : M Unit :=
modify $ fun s => { s with found := s.found.insert fvarId }

private def throwInvalidPattern {α} (e : Expr) : M α :=
throwError ("invalid pattern " ++ indentExpr e)

/- Create a new LocalDecl `x` for the metavariable `mvar`, and return `Pattern.var x` -/
private def mkLocalDeclFor (mvar : Expr) : M Pattern := do
let mvarId := mvar.mvarId!;
s ← get;
val? ← getExprMVarAssignment? mvarId;
match val? with
| some val => pure $ Pattern.inaccessible val
| none => do
  fvarId ← mkFreshId;
  type   ← inferType mvar;
  /- HACK: `fvarId` is not in the scope of `mvarId`
     If this generates problems in the future, we should update the metavariable declarations. -/
  assignExprMVar mvarId (mkFVar fvarId);
  let userName := (`_x).appendIndexAfter (s.localDecls.size+1);
  let newDecl := LocalDecl.cdecl (arbitrary _) fvarId userName type BinderInfo.default;
  modify $ fun s =>
    { s with
      newLocals  := s.newLocals.insert fvarId,
      localDecls :=
      match s.localDecls.findIdx? fun decl => mvar.occurs decl.type with
      | none   => s.localDecls.push newDecl -- None of the existing declarations depend on `mvar`
      | some i => s.localDecls.insertAt i newDecl };
  pure $ Pattern.var fvarId

partial def main : Expr → M Pattern
| e =>
  let isLocalDecl (fvarId : FVarId) : M Bool := do {
    s ← get;
    pure $ s.localDecls.any fun d => d.fvarId == fvarId
  };
  let mkPatternVar (fvarId : FVarId) (e : Expr) : M Pattern := do {
    condM (alreadyVisited fvarId)
      (pure $ Pattern.inaccessible e)
      (do markAsVisited fvarId; pure $ Pattern.var e.fvarId!)
  };
  let mkInaccessible (e : Expr) : M Pattern := do {
    match e with
    | Expr.fvar fvarId _ =>
      condM (isLocalDecl fvarId)
        (mkPatternVar fvarId e)
        (pure $ Pattern.inaccessible e)
    | _ =>
      pure $ Pattern.inaccessible e
  };
  match inaccessible? e with
  | some t => mkInaccessible t
  | none   =>
  match e.arrayLit? with
  | some (α, lits) => do
    ps ← lits.mapM main;
    pure $ Pattern.arrayLit α ps
  | none =>
  if e.isAppOfArity `namedPattern 3 then do
    p ← main $ e.getArg! 2;
    match e.getArg! 1 with
    | Expr.fvar fvarId _ => pure $ Pattern.as fvarId p
    | _                  => throwError "unexpected occurrence of auxiliary declaration 'namedPattern'"
  else if e.isNatLit || e.isStringLit || e.isCharLit then
    pure $ Pattern.val e
  else if e.isFVar then do
    let fvarId := e.fvarId!;
    unlessM (isLocalDecl fvarId) $ throwInvalidPattern e;
    mkPatternVar fvarId e
  else if e.isMVar then do
    mkLocalDeclFor e
  else do
    newE ← whnf e;
    if newE != e then
      main newE
    else matchConstCtor e.getAppFn (fun _ => throwInvalidPattern e) fun v us => do
      let args := e.getAppArgs;
      unless (args.size == v.nparams + v.nfields) $ throwInvalidPattern e;
      let params := args.extract 0 v.nparams;
      let fields := args.extract v.nparams args.size;
      fields ← fields.mapM main;
      pure $ Pattern.ctor v.name us params.toList fields.toList

end ToDepElimPattern

def withDepElimPatterns {α} (localDecls : Array LocalDecl) (ps : Array Expr) (k : Array LocalDecl → Array Pattern → TermElabM α) : TermElabM α := do
(patterns, s) ← (ps.mapM ToDepElimPattern.main).run { localDecls := localDecls };
localDecls ← s.localDecls.mapM fun d => instantiateLocalDeclMVars d;
/- toDepElimPatterns may have added new localDecls. Thus, we must update the local context before we execute `k` -/
lctx ← getLCtx;
let lctx := localDecls.foldl (fun (lctx : LocalContext) d => lctx.erase d.fvarId) lctx;
let lctx := localDecls.foldl (fun (lctx : LocalContext) d => lctx.addDecl d) lctx;
adaptTheReader Meta.Context (fun ctx => { ctx with lctx := lctx }) $ k localDecls patterns

private def withElaboratedLHS {α} (ref : Syntax) (patternVarDecls : Array PatternVarDecl) (patternStxs : Array Syntax) (matchType : Expr)
  (k : AltLHS → Expr → TermElabM α) : TermElabM α := do
(patterns, matchType) ← withSynthesize $ elabPatternsAux patternStxs 0 matchType #[];
localDecls ← finalizePatternDecls patternVarDecls;
patterns ← patterns.mapM instantiateMVars;
withDepElimPatterns localDecls patterns fun localDecls patterns =>
  k { ref := ref, fvarDecls := localDecls.toList, patterns := patterns.toList } matchType

def elabMatchAltView (alt : MatchAltView) (matchType : Expr) : TermElabM (AltLHS × Expr) :=
withRef alt.ref do
(patternVars, alt) ← collectPatternVars alt;
trace `Elab.match fun _ => "patternVars: " ++ toString patternVars;
withPatternVars patternVars fun patternVarDecls => do
  withElaboratedLHS alt.ref patternVarDecls alt.patterns matchType fun altLHS matchType => do
    rhs ← elabTermEnsuringType alt.rhs matchType;
    let xs := altLHS.fvarDecls.toArray.map LocalDecl.toExpr;
    rhs ← if xs.isEmpty then pure $ mkThunk rhs else mkLambdaFVars xs rhs;
    trace `Elab.match fun _ => "rhs: " ++ rhs;
    -- TODO: check whether altLHS still has metavariables
    pure (altLHS, rhs)

def mkMotiveType (matchType : Expr) (numDiscrs : Nat) : TermElabM Expr := do
forallBoundedTelescope matchType numDiscrs fun xs matchType => do
  u ← getLevel matchType;
  mkForallFVars xs (mkSort u)

def mkMatcher (elimName : Name) (motiveType : Expr) (numDiscrs : Nat) (lhss : List AltLHS) : TermElabM MatcherResult :=
liftMetaM $ Meta.Match.mkMatcher elimName motiveType numDiscrs lhss

def reportMatcherResultErrors (result : MatcherResult) : TermElabM Unit := do
-- TODO: improve error messages
unless result.counterExamples.isEmpty $
  throwError ("missing cases:" ++ Format.line ++ Meta.Match.counterExamplesToMessageData result.counterExamples);
unless result.unusedAltIdxs.isEmpty $
  throwError ("unused alternatives: " ++ toString (result.unusedAltIdxs.map fun idx => "#" ++ toString (idx+1)))

private def elabMatchAux (discrStxs : Array Syntax) (altViews : Array MatchAltView) (matchOptType : Syntax) (expectedType : Expr)
    : TermElabM Expr := do
matchType ← elabMatchOptType matchOptType discrStxs.size;
matchAlts ← expandMacrosInPatterns altViews;
discrs ← elabDiscrs discrStxs matchType expectedType;
trace `Elab.match fun _ => "matchType: " ++ matchType;
alts ← matchAlts.mapM $ fun alt => elabMatchAltView alt matchType;
let rhss := alts.map Prod.snd;
let altLHSS := alts.map Prod.fst;
let numDiscrs := discrs.size;
motiveType ← mkMotiveType matchType numDiscrs;
motive ← forallBoundedTelescope matchType numDiscrs fun xs matchType => mkLambdaFVars xs matchType;
matcherName ← mkAuxName `match;
matcherResult ← mkMatcher matcherName motiveType numDiscrs altLHSS.toList;
reportMatcherResultErrors matcherResult;
let r := mkApp matcherResult.matcher motive;
let r := mkAppN r discrs;
let r := mkAppN r rhss;
trace `Elab.match fun _ => "result: " ++ r;
pure r

private def waitExpectedType (expectedType? : Option Expr) : TermElabM Expr := do
tryPostponeIfNoneOrMVar expectedType?;
match expectedType? with
  | some expectedType => pure expectedType
  | none              => mkFreshTypeMVar

/-
```
parser!:leadPrec "match " >> sepBy1 matchDiscr ", " >> optType >> " with " >> matchAlts
```
Remark the `optIdent` must be `none` at `matchDiscr`. They are expanded by `expandMatchDiscr?`.
-/
private def elabMatchCore (stx : Syntax) (expectedType? : Option Expr) : TermElabM Expr := do
expectedType ← waitExpectedType expectedType?;
let discrStxs := (stx.getArg 1).getArgs.getSepElems.map fun d => d.getArg 1;
let altViews  := getMatchAlts stx;
let matchOptType := stx.getArg 2;
elabMatchAux discrStxs altViews matchOptType expectedType

/- Auxiliary method for `expandMatchDiscr?` -/
private partial def mkMatchType (discrs : Array Syntax) : Nat → MacroM Syntax
| i => withFreshMacroScope $
  if h : i < discrs.size then
    let discr := discrs.get ⟨i, h⟩;
    if discr.isOfKind `Lean.Parser.Term.matchDiscr then do
      type ← mkMatchType (i+1);
      if (discr.getArg 0).isNone then
        `(_ → $type)
      else
        let t := discr.getArg 1;
        `((x : _) → $t = x → $type)
    else
      mkMatchType (i+1)
  else
    `(_)

private def mkOptType (typeStx : Syntax) : Syntax :=
mkNullNode #[mkNode `Lean.Parser.Term.typeSpec #[mkAtomFrom typeStx ", ", typeStx]]

/- Auxiliary method for `expandMatchDiscr?` -/
private partial def mkNewDiscrs (discrs : Array Syntax) : Nat → Array Syntax → MacroM (Array Syntax)
| i, newDiscrs =>
  if h : i < discrs.size then
    let discr := discrs.get ⟨i, h⟩;
    if discr.isOfKind `Lean.Parser.Term.matchDiscr then do
      if (discr.getArg 0).isNone then
        mkNewDiscrs (i+1) (newDiscrs.push discr)
      else do
        let newDiscrs := newDiscrs.push $ discr.setArg 0 mkNullNode;
        let newDiscrs := newDiscrs.push $ mkAtomFrom discr ", ";
        eqPrf ← `(Eq.refl _);
        let newDiscrs := newDiscrs.push $ mkNode `Lean.Parser.Term.matchDiscr #[mkNullNode, eqPrf];
        mkNewDiscrs (i+1) newDiscrs
    else
      mkNewDiscrs (i+1) (newDiscrs.push discr)
  else
    pure newDiscrs

/- Auxiliary method for `expandMatchDiscr?` -/
private partial def mkNewPatterns (ref : Syntax) (discrs patterns : Array Syntax) : Nat → Array Syntax → MacroM (Array Syntax)
| i, newPatterns =>
  if h : i < discrs.size then
    let discr := discrs.get ⟨i, h⟩;
    if h : i < patterns.size then
      let pattern := patterns.get ⟨i, h⟩;
      if discr.isOfKind `Lean.Parser.Term.matchDiscr then do
        if (discr.getArg 0).isNone then
          mkNewPatterns (i+1) (newPatterns.push pattern)
        else
          let newPatterns := newPatterns.push pattern;
          let newPatterns := newPatterns.push $ mkAtomFrom pattern ", ";
          let ident       := (discr.getArg 0).getArg 0;
          let newPatterns := newPatterns.push ident;
          mkNewPatterns (i+1) newPatterns
      else
        -- it is a ", "
        mkNewPatterns (i+1) (newPatterns.push pattern)
    else
      throw $ Macro.Exception.error ref ("invalid number of patterns, expected #" ++ toString discrs.size)
  else
    pure newPatterns

/- Auxiliary method for `expandMatchDiscr?` -/
private partial def mkNewAlt (discrs : Array Syntax) (alt : Syntax) : MacroM Syntax := do
let patterns := (alt.getArg 0).getArgs;
newPatterns ← mkNewPatterns alt discrs patterns 0 #[];
pure $ alt.setArg 0 (mkNullNode newPatterns)

/- Auxiliary method for `expandMatchDiscr?` -/
private partial def mkNewAlts (discrs : Array Syntax) (alts : Array Syntax) : MacroM (Array Syntax) :=
alts.mapSepElemsM $ mkNewAlt discrs

/-- Expand discriminants of the form `h : t` -/
private def expandMatchDiscr? (stx : Syntax) : MacroM (Option Syntax) := do
let discrs := (stx.getArg 1).getArgs;
if discrs.getSepElems.all fun d => (d.getArg 0).isNone then
  pure none -- nothing to be done
else do
  unless (stx.getArg 2).isNone $
    throw $ Macro.Exception.error (stx.getArg 2) "match expected type should not be provided when discriminants with equality proofs are used";
  matchType ← mkMatchType discrs 0;
  let matchType := matchType.copyInfo stx;
  let stx := stx.setArg 2 (mkOptType matchType);
  newDiscrs ← mkNewDiscrs discrs 0 #[];
  let stx := stx.setArg 1 (mkNullNode newDiscrs);
  let matchAlts := stx.getArg 4;
  let alts      := (matchAlts.getArg 1).getArgs;
  newAlts ← mkNewAlts discrs alts;
  let stx := stx.setArg 4 (matchAlts.setArg 1 (mkNullNode newAlts));
  pure stx

-- parser! "match " >> sepBy1 termParser ", " >> optType >> " with " >> matchAlts
@[builtinTermElab «match»] def elabMatch : TermElab :=
fun stx expectedType? => match_syntax stx with
  | `(match $discr:term with $y:ident => $rhs:term)           => expandSimpleMatch stx discr y rhs expectedType?
  | `(match $discr:term with | $y:ident => $rhs:term)         => expandSimpleMatch stx discr y rhs expectedType?
  | `(match $discr:term : $type with $y:ident => $rhs:term)   => expandSimpleMatchWithType stx discr y type rhs expectedType?
  | `(match $discr:term : $type with | $y:ident => $rhs:term) => expandSimpleMatchWithType stx discr y type rhs expectedType?
  | _ => do
    stxNew? ← liftMacroM $ expandMatchDiscr? stx;
    match stxNew? with
    | some stxNew => withMacroExpansion stx stxNew $ elabTerm stxNew expectedType?
    | none        => elabMatchCore stx expectedType?

@[init] private def regTraceClasses : IO Unit := do
registerTraceClass `Elab.match;
pure ()

-- parser!:leadPrec "nomatch " >> termParser
@[builtinTermElab «nomatch»] def elabNoMatch : TermElab :=
fun stx expectedType? => match_syntax stx with
  | `(nomatch $discr) => do
      expectedType ← waitExpectedType expectedType?;
      elabMatchAux #[discr] #[] mkNullNode expectedType
  | _ => throwUnsupportedSyntax

end Term
end Elab
end Lean
