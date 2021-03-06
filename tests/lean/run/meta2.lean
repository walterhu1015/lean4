import Lean.Meta
open Lean
open Lean.Meta

set_option trace.Meta true
set_option trace.Meta.isDefEq.step false
set_option trace.Meta.isDefEq.delta false
set_option trace.Meta.isDefEq.assign false

def print (msg : MessageData) : MetaM Unit :=
trace! `Meta.debug msg

def check (x : MetaM Bool) : MetaM Unit :=
unlessM x $ throwError "check failed"

def getAssignment (m : Expr) : MetaM Expr :=
do v? ← getExprMVarAssignment? m.mvarId!;
   match v? with
   | some v => pure v
   | none   => throwError "metavariable is not assigned"

def nat   := mkConst `Nat
def boolE := mkConst `Bool
def succ  := mkConst `Nat.succ
def zero  := mkConst `Nat.zero
def add   := mkConst `Nat.add
def io    := mkConst `IO
def type  := mkSort levelOne
def boolFalse := mkConst `Bool.false
def boolTrue := mkConst `Bool.true

def tst1 : MetaM Unit :=
do print "----- tst1 -----";
   mvar ← mkFreshExprMVar nat;
   check $ isExprDefEq mvar (mkNatLit 10);
   check $ isExprDefEq mvar (mkNatLit 10);
   pure ()

#eval tst1

def tst2 : MetaM Unit :=
do print "----- tst2 -----";
   mvar ← mkFreshExprMVar nat;
   check $ isExprDefEq (mkApp succ mvar) (mkApp succ (mkNatLit 10));
   check $ isExprDefEq mvar (mkNatLit 10);
   pure ()

#eval tst2

def tst3 : MetaM Unit :=
do print "----- tst3 -----";
   let t   := mkLambda `x BinderInfo.default nat $ mkBVar 0;
   mvar ← mkFreshExprMVar (mkForall `x BinderInfo.default nat nat);
   lambdaTelescope t $ fun xs _ => do {
     let x := xs.get! 0;
     check $ isExprDefEq (mkApp mvar x) (mkAppN add #[x, mkAppN add #[mkNatLit 10, x]]);
     pure ()
   };
   v ← getAssignment mvar;
   print v;
   pure ()

#eval tst3

def tst4 : MetaM Unit :=
do print "----- tst4 -----";
   let t   := mkLambda `x BinderInfo.default nat $ mkBVar 0;
   lambdaTelescope t $ fun xs _ => do {
     let x := xs.get! 0;
     mvar ← mkFreshExprMVar (mkForall `x BinderInfo.default nat nat);
     -- the following `isExprDefEq` fails because `x` is also in the context of `mvar`
     check $ not <$> isExprDefEq (mkApp mvar x) (mkAppN add #[x, mkAppN add #[mkNatLit 10, x]]);
     check $ approxDefEq $ isExprDefEq (mkApp mvar x) (mkAppN add #[x, mkAppN add #[mkNatLit 10, x]]);
     v ← getAssignment mvar;
     print v;
     pure ()
   };
   pure ()

#eval tst4

def mkAppC (c : Name) (xs : Array Expr) : MetaM Expr :=
do r ← mkAppM c xs;
   check r;
   pure r

def mkProd (a b : Expr) : MetaM Expr := mkAppC `Prod #[a, b]
def mkPair (a b : Expr) : MetaM Expr := mkAppC `Prod.mk #[a, b]
def mkFst (s : Expr) : MetaM Expr := mkAppC `Prod.fst #[s]
def mkSnd (s : Expr) : MetaM Expr := mkAppC `Prod.snd #[s]

def tst5 : MetaM Unit :=
do print "----- tst5 -----";
   p₁ ← mkPair (mkNatLit 1) (mkNatLit 2);
   x  ← mkFst p₁;
   print x;
   v  ← whnf x;
   print v;
   v  ← withTransparency TransparencyMode.reducible $ whnf x;
   print v;
   x  ← mkId x;
   print x;
   prod ← mkProd nat nat;
   m ← mkFreshExprMVar prod;
   y ← mkFst m;
   check $ isExprDefEq y x;
   print y;
   x ← mkProjection p₁ `fst;
   print x;
   y ← mkProjection p₁ `snd;
   print y

#eval tst5

def tst6 : MetaM Unit :=
do print "----- tst6 -----";
   withLocalDeclD `x nat $ fun x => do
     m ← mkFreshExprMVar nat;
     let t := mkAppN add #[m, mkNatLit 4];
     let s := mkAppN add #[x, mkNatLit 3];
     check $ not <$> isExprDefEq t s;
     let s := mkAppN add #[x, mkNatLit 6];
     check $ isExprDefEq t s;
     v ← getAssignment m;
     check $ pure $ v == mkAppN add #[x, mkNatLit 2];
     print v;
     m ← mkFreshExprMVar nat;
     let t := mkAppN add #[m, mkNatLit 4];
     let s := mkNatLit 3;
     check $ not <$> isExprDefEq t s;
     let s := mkNatLit 10;
     check $ isExprDefEq t s;
     v ← getAssignment m;
     check $ pure $ v == mkNatLit 6;
     print v;
     pure ()

#eval tst6

def mkArrow (d b : Expr) : Expr := mkForall `_ BinderInfo.default d b

def tst7 : MetaM Unit :=
do print "----- tst7 -----";
   withLocalDeclD `x type $ fun x => do
     m1 ← mkFreshExprMVar (mkArrow type type);
     m2 ← mkFreshExprMVar type;
     let t := mkApp io x;
     -- we need to use foApprox to solve `?m1 ?m2 =?= IO x`
     check $ not <$> isDefEq (mkApp m1 m2) t;
     check $ approxDefEq $ isDefEq (mkApp m1 m2) t;
     v ← getAssignment m1;
     check $ pure $ v == io;
     v ← getAssignment m2;
     check $ pure $ v == x;
     pure ()

#eval tst7

def tst8 : MetaM Unit :=
do print "----- tst8 -----";
   let add := mkAppN (mkConst `HasAdd.add [levelOne]) #[nat, mkConst `Nat.HasAdd];
   let t   := mkAppN add #[mkNatLit 2, mkNatLit 3];
   t ← withTransparency TransparencyMode.reducible $ whnf t;
   print t;
   t ← whnf t;
   print t;
   t ← reduce t;
   print t;
   pure ()

#eval tst8

def tst9 : MetaM Unit :=
do print "----- tst9 -----";
   env ← getEnv;
   print (toString $ Lean.isReducible env `Prod.fst);
   print (toString $ Lean.isReducible env `HasAdd.add);
   pure ()

#eval tst9

def tst10 : MetaM Unit :=
do print "----- tst10 -----";
   t ← withLocalDeclD `x nat $ fun x => do {
     let b := mkAppN add #[x, mkAppN add #[mkNatLit 2, mkNatLit 3]];
     mkLambdaFVars #[x] b
   };
   print t;
   t ← reduce t;
   print t;
   pure ()

#eval tst10

def tst11 : MetaM Unit :=
do print "----- tst11 -----";
   check $ isType nat;
   check $ isType (mkArrow nat nat);
   check $ not <$> isType add;
   check $ not <$> isType (mkNatLit 1);
   withLocalDeclD `x nat $ fun x => do {
     check $ not <$> isType x;
     check $ not <$> (mkLambdaFVars #[x] x >>= isType);
     check $ not <$> (mkLambdaFVars #[x] nat >>= isType);
     t ← mkEq x (mkNatLit 0);
     (t, _) ← mkForallUsedOnly #[x] t;
     print t;
     check $ isType t;
     pure ()
   };
   pure ()

#eval tst11

def tst12 : MetaM Unit :=
do print "----- tst12 -----";
   withLocalDeclD `x nat $ fun x => do {
     t ← mkEqRefl x >>= mkLambdaFVars #[x];
     print t;
     type ← inferType t;
     print type;
     isProofQuick t >>= fun b => print (toString b);
     isProofQuick nat >>= fun b => print (toString b);
     isProofQuick type >>= fun b => print (toString b);
     pure ()
   };
   pure ()

#eval tst12

def tst13 : MetaM Unit :=
do print "----- tst13 -----";
   m₁ ← mkFreshExprMVar (mkArrow type type);
   m₂ ← mkFreshExprMVar (mkApp m₁ nat);
   t  ← mkId m₂;
   print t;
   r ← abstractMVars t;
   print r.expr;
   (_, _, e) ← openAbstractMVarsResult r;
   print e;
   pure ()

def mkDecEq (type : Expr) : MetaM Expr := mkAppC `DecidableEq #[type]
def mkStateM (σ : Expr) : MetaM Expr := mkAppC `StateM #[σ]
def mkMonad (m : Expr) : MetaM Expr := mkAppC `Monad #[m]
def mkMonadState (σ m : Expr) : MetaM Expr := mkAppC `MonadState #[σ, m]
def mkHasAdd (a : Expr) : MetaM Expr := mkAppC `HasAdd #[a]
def mkHasToString (a : Expr) : MetaM Expr := mkAppC `HasToString #[a]

def tst14 : MetaM Unit :=
do print "----- tst14 -----";
   stateM ← mkStateM nat;
   print stateM;
   monad ← mkMonad stateM;
   globalInsts ← getGlobalInstances;
   insts ← globalInsts.getUnify monad;
   print insts;
   pure ()

#eval tst14

def tst15 : MetaM Unit :=
do print "----- tst15 -----";
   inst ← mkHasAdd nat;
   r ← synthInstance inst;
   print r;
   pure ()

#eval tst15

def tst16 : MetaM Unit :=
do print "----- tst16 -----";
   prod ← mkProd nat nat;
   inst ← mkHasToString prod;
   print inst;
   r ← synthInstance inst;
   print r;
   pure ()

#eval tst16

def tst17 : MetaM Unit :=
do print "----- tst17 -----";
   prod ← mkProd nat nat;
   prod ← mkProd boolE prod;
   inst ← mkHasToString prod;
   print inst;
   r ← synthInstance inst;
   print r;
   pure ()

#eval tst17

def tst18 : MetaM Unit :=
do print "----- tst18 -----";
   decEqNat ← mkDecEq nat;
   r ← synthInstance decEqNat;
   print r;
   pure ()

#eval tst18

def tst19 : MetaM Unit :=
do print "----- tst19 -----";
   stateM ← mkStateM nat;
   print stateM;
   monad ← mkMonad stateM;
   print monad;
   r ← synthInstance monad;
   print r;
   pure ()

#eval tst19

def tst20 : MetaM Unit :=
do print "----- tst20 -----";
   stateM ← mkStateM nat;
   print stateM;
   monadState ← mkMonadState nat stateM;
   print monadState;
   r ← synthInstance monadState;
   print r;
   pure ()

#eval tst20

def tst21 : MetaM Unit :=
do print "----- tst21 -----";
   withLocalDeclD `x nat $ fun x => do
   withLocalDeclD `y nat $ fun y => do
   withLocalDeclD `z nat $ fun z => do
   eq₁ ← mkEq x y;
   eq₂ ← mkEq y z;
   withLocalDeclD `h₁ eq₁ $ fun h₁ => do
   withLocalDeclD `h₂ eq₂ $ fun h₂ => do
   h ← mkEqTrans h₁ h₂;
   h ← mkEqSymm h;
   h ← mkCongrArg succ h;
   h₂ ← mkEqRefl succ;
   h ← mkCongr h₂ h;
   t ← inferType h;
   check h;
   print h;
   print t;
   h ← mkCongrFun h₂ x;
   t ← inferType h;
   check h;
   print t;
   pure ()

#eval tst21

def tst22 : MetaM Unit :=
do print "----- tst22 -----";
   withLocalDeclD `x nat $ fun x => do
   withLocalDeclD `y nat $ fun y => do
   t ← mkAppC `HasAdd.add #[x, y];
   print t;
   t ← mkAppC `HasAdd.add #[y, x];
   print t;
   t ← mkAppC `HasToString.toString #[x];
   print t;
   pure ()

#eval tst22

def test1 : Nat := (fun x y => x + y) 0 1

def tst23 : MetaM Unit :=
do print "----- tst23 -----";
   cinfo ← getConstInfo `test1;
   let v := cinfo.value?.get!;
   print v;
   print v.headBeta

#eval tst23

def tst24 : MetaM Unit :=
do print "----- tst24 -----";
   m1 ← mkFreshExprMVar (mkArrow nat (mkArrow type type));
   m2 ← mkFreshExprMVar type;
   zero ← mkAppM `HasZero.zero #[nat];
   idNat ← mkAppM `Id #[nat];
   let lhs := mkAppB m1 zero m2;
   print zero;
   print idNat;
   print lhs;
   check $ fullApproxDefEq $ isDefEq lhs idNat;
   pure ()

#eval tst24

def tst25 : MetaM Unit :=
do print "----- tst25 -----";
   withLocalDeclD `α type $ fun α =>
   withLocalDeclD `β type $ fun β =>
   withLocalDeclD `σ type $ fun σ => do {
     (t1, n) ← mkForallUsedOnly #[α, β, σ] $ mkArrow α β;
     print t1;
     check $ pure $ n == 2;
     (t2, n) ← mkForallUsedOnly #[α, β, σ] $ mkArrow α (mkArrow β σ);
     check $ pure $ n == 3;
     print t2;
     (t3, n) ← mkForallUsedOnly #[α, β, σ] $ α;
     check $ pure $ n == 1;
     print t3;
     (t4, n) ← mkForallUsedOnly #[α, β, σ] $ σ;
     check $ pure $ n == 1;
     print t4;
     (t5, n) ← mkForallUsedOnly #[α, β, σ] $ nat;
     check $ pure $ n == 0;
     print t5;
     pure ()
   };
   pure ()

#eval tst25

def tst26 : MetaM Unit := do
print "----- tst26 -----";
m1 ← mkFreshExprMVar (mkArrow nat nat);
m2 ← mkFreshExprMVar nat;
m3 ← mkFreshExprMVar nat;
check $ approxDefEq $ isDefEq (mkApp m1 m2) m3;
check $ do { b ← isExprMVarAssigned $ m1.mvarId!; pure (!b) };
check $ isExprMVarAssigned $ m3.mvarId!;
pure ()

section
set_option ppOld false
#eval tst26
end

section
set_option trace.Meta.isDefEq.step true
set_option trace.Meta.isDefEq.delta true
set_option trace.Meta.isDefEq.assign true

def tst27 : MetaM Unit := do
print "----- tst27 -----";
m ← mkFreshExprMVar nat;
check $ isDefEq (mkNatLit 1) (mkApp (mkConst `Nat.succ) m);
pure ()

#eval tst27
end

def tst28 : MetaM Unit := do
print "----- tst28 -----";
withLocalDeclD `x nat $ fun x =>
withLocalDeclD `y nat $ fun y =>
withLocalDeclD `z nat $ fun z => do
  t1 ← mkAppM `HasAdd.add #[x, y];
  t1 ← mkAppM `HasAdd.add #[x, t1];
  t1 ← mkAppM `HasAdd.add #[t1, t1];
  t2 ← mkAppM `HasAdd.add #[z, y];
  t3 ← mkAppM `Eq #[t2, t1];
  t3 ← mkForallFVars #[z] t3;
  m  ← mkFreshExprMVar nat;
  p  ← mkAppM `HasAdd.add #[x, m];
  print t3;
  r  ← kabstract t3 p;
  print r;
  p ← mkAppM `HasAdd.add #[x, y];
  r  ← kabstract t3 p;
  print r;
  pure ()

#eval tst28

def norm : Level → Level := @Lean.Level.normalize

def tst29 : MetaM Unit := do
print "----- tst29 -----";
let u  := mkLevelParam `u;
let v  := mkLevelParam `v;
let u1 := mkLevelSucc u;
let m  := mkLevelMax levelOne u1;
print (norm m);
check $ pure $ norm m == u1;
let m  := mkLevelMax u1 levelOne;
print (norm m);
check $ pure $ norm m == u1;
let m  := mkLevelMax (mkLevelMax levelOne (mkLevelSucc u1)) (mkLevelSucc levelOne);
check $ pure $ norm m == mkLevelSucc u1;
print m;
print (norm m);
let m  := mkLevelMax (mkLevelMax (mkLevelSucc (mkLevelSucc u1)) (mkLevelSucc u1)) (mkLevelSucc levelOne);
print m;
print (norm m);
check $ pure $ norm m == mkLevelSucc (mkLevelSucc u1);
let m  := mkLevelMax (mkLevelMax (mkLevelSucc v) (mkLevelSucc u1)) (mkLevelSucc levelOne);
print m;
print (norm m);
pure ()

#eval tst29

def tst30 : MetaM Unit := do
print "----- tst30 -----";
m1 ← mkFreshExprMVar nat;
m2 ← mkFreshExprMVar (mkArrow nat nat);
withLocalDeclD `x nat $ fun x => do
  let t := mkApp succ $ mkApp m2 x;
  print t;
  check $ approxDefEq $ isDefEq m1 t;
  r ← instantiateMVars m1;
  print r;
  r ← instantiateMVars m2;
  print r;
  pure ()

#eval tst30

def tst31 : MetaM Unit := do
print "----- tst31 -----";
m ← mkFreshExprMVar nat;
let t := mkLet `x nat zero m;
print t;
check $ isDefEq t m;
pure ()

def tst32 : MetaM Unit := do
print "----- tst32 -----";
withLocalDeclD `a nat $ fun a => do
withLocalDeclD `b nat $ fun b => do
aeqb ← mkEq a b;
withLocalDeclD `h2 aeqb $ fun h2 => do
t ← mkEq (mkApp2 add a a) a;
print t;
let motive := mkLambda `x BinderInfo.default nat (mkApp3 (mkConst `Eq [levelOne]) nat (mkApp2 add a (mkBVar 0)) a);
withLocalDeclD `h1 t $ fun h1 => do
r ← mkEqNDRec motive h1 h2;
print r;
rType ← inferType r >>= whnf;
print rType;
check r;
pure ()

#eval tst32

def tst33 : MetaM Unit := do
print "----- tst33 -----";
withLocalDeclD `a nat $ fun a => do
withLocalDeclD `b nat $ fun b => do
aeqb ← mkEq a b;
withLocalDeclD `h2 aeqb $ fun h2 => do
t ← mkEq (mkApp2 add a a) a;
let motive :=
  mkLambda `x BinderInfo.default nat $
  mkLambda `h BinderInfo.default (mkApp3 (mkConst `Eq [levelOne]) nat a (mkBVar 0)) $
    (mkApp3 (mkConst `Eq [levelOne]) nat (mkApp2 add a (mkBVar 1)) a);
withLocalDeclD `h1 t $ fun h1 => do
r ← mkEqRec motive h1 h2;
print r;
rType ← inferType r >>= whnf;
print rType;
check r;
pure ()

#eval tst33

def tst34 : MetaM Unit := do
print "----- tst34 -----";
let type := mkSort levelOne;
withLocalDeclD `α type $ fun α => do
  m ← mkFreshExprMVar type;
  t ← mkLambdaFVars #[α] (mkArrow m m);
  print t;
  pure ()

set_option pp.purify_metavars false
#eval tst34

def tst35 : MetaM Unit := do
print "----- tst35 -----";
let type := mkSort levelOne;
withLocalDeclD `α type $ fun α => do
  m1 ← mkFreshExprMVar type;
  m2 ← mkFreshExprMVar (mkArrow nat type);
  let v := mkLambda `x BinderInfo.default nat m1;
  assignExprMVar m2.mvarId! v;
  let w := mkApp m2 zero;
  t1 ← mkLambdaFVars #[α] (mkArrow w w);
  print t1;
  m3 ← mkFreshExprMVar type;
  t2 ← mkLambdaFVars #[α] (mkArrow (mkBVar 0) (mkBVar 1));
  print t2;
  check $ isDefEq t1 t2;
  pure ()

#eval tst35
#check @Id

def tst36 : MetaM Unit := do
print "----- tst36 -----";
let type := mkSort levelOne;
m1 ← mkFreshExprMVar (mkArrow type type);
withLocalDeclD `α type $ fun α => do
  m2 ← mkFreshExprMVar type;
  t  ← mkAppM `Id #[m2];
  check $ approxDefEq $ isDefEq (mkApp m1 α) t;
  check $ approxDefEq $ isDefEq m1 (mkConst `Id [levelZero]);
  pure ()

#eval tst36

def tst37 : MetaM Unit := do
print "----- tst37 -----";
m1 ← mkFreshExprMVar (mkArrow nat (mkArrow type type));
m2 ← mkFreshExprMVar (mkArrow nat type);
withLocalDeclD `v nat $ fun v => do
  let lhs := mkApp2 m1 v (mkApp m2 v);
  rhs ← mkAppM `StateM #[nat, nat];
  print lhs;
  print rhs;
  check $ approxDefEq $ isDefEq lhs rhs;
  pure ()

#eval tst37

def tst38 : MetaM Unit := do
print "----- tst38 -----";
m1 ← mkFreshExprMVar nat;
withLocalDeclD `x nat $ fun x => do
m2 ← mkFreshExprMVar type;
withLocalDeclD `y m2 $ fun y => do
m3 ← mkFreshExprMVar (mkArrow m2 nat);
let rhs := mkApp m3 y;
check $ approxDefEq $ isDefEq m2 nat;
print m2;
check $ getAssignment m2 >>= fun v => pure $ v == nat;
check $ approxDefEq $ isDefEq m1 rhs;
print m2;
check $ getAssignment m2 >>= fun v => pure $ v == nat;
pure ()

set_option pp.all true
set_option trace.Meta.isDefEq.step true
set_option trace.Meta.isDefEq.delta true
set_option trace.Meta.isDefEq.assign true

#eval tst38

def tst39 : MetaM Unit := do
print "----- tst39 -----";
withLocalDeclD `α type $ fun α =>
withLocalDeclD `β type $ fun β => do
  p ← mkProd α β;
  t ← mkForallFVars #[α, β] p;
  print t;
  e ← instantiateForall t #[nat, boolE];
  print e;
  pure ()

#eval tst39


def tst40 : MetaM Unit := do
print "----- tst40 -----";
withLocalDeclD `α type $ fun α =>
withLocalDeclD `β type $ fun β =>
withLocalDeclD `a α    $ fun a =>
withLocalDeclD `b β    $ fun b =>
do
  p ← mkProd α β;
  t1 ← mkForallFVars #[α, β] p;
  t2 ← mkForallFVars #[α, β, a, b] p;
  print t1;
  print $ toString $ t1.bindingBody!.hasLooseBVarInExplicitDomain 0 false;
  print $ toString $ t1.bindingBody!.hasLooseBVarInExplicitDomain 0 true;
  print $ toString $ t2.bindingBody!.hasLooseBVarInExplicitDomain 0 false;
  print $ t1.inferImplicit 2 false;
  check $ pure $ ((t1.inferImplicit 2 false).bindingInfo! == BinderInfo.default);
  check $ pure $ ((t1.inferImplicit 2 false).bindingBody!.bindingInfo! == BinderInfo.default);
  print $ t1.inferImplicit 2 true;
  check $ pure $ ((t1.inferImplicit 2 true).bindingInfo! == BinderInfo.implicit);
  check $ pure $ ((t1.inferImplicit 2 true).bindingBody!.bindingInfo! == BinderInfo.implicit);
  print t2;
  print $ t2.inferImplicit 2 false;
  check $ pure $ ((t2.inferImplicit 2 false).bindingInfo! == BinderInfo.implicit);
  check $ pure $ ((t2.inferImplicit 2 false).bindingBody!.bindingInfo! == BinderInfo.implicit);
  print $ t2.inferImplicit 1 false;
  check $ pure $ ((t2.inferImplicit 1 false).bindingInfo! == BinderInfo.implicit);
  check $ pure $ ((t2.inferImplicit 1 false).bindingBody!.bindingInfo! == BinderInfo.default);
  pure ()

#eval tst40

universes u
structure A (α : Type u) :=
(x y : α)

structure B (α : Type u) :=
(z : α)

structure C (α : Type u) extends A α, B α :=
(w : Bool)

def mkA (x y : Expr) : MetaM Expr := mkAppC `A.mk #[x, y]
def mkB (z : Expr) : MetaM Expr := mkAppC `B.mk #[z]
def mkC (x y z w : Expr) : MetaM Expr := do
a ← mkA x y;
b ← mkB z;
mkAppC `C.mk #[a, b, w]

def tst41 : MetaM Unit := do
print "----- tst41 -----";
c ← mkC (mkNatLit 1) (mkNatLit 2) (mkNatLit 3) boolTrue;
print c;
x ← mkProjection c `x;
check x;
print x;
y ← mkProjection c `y;
check y;
print y;
z ← mkProjection c `z;
check z;
print z;
w ← mkProjection c `w;
check w;
print w;
pure ()

set_option trace.Meta.isDefEq.step false
set_option trace.Meta.isDefEq.delta false
set_option trace.Meta.isDefEq.assign false
#eval tst41

set_option pp.all false

def tst42 : MetaM Unit := do
print "----- tst42 -----";
t ← mkListLit nat [mkNatLit 1, mkNatLit 2];
print t;
check t;
t ← mkArrayLit nat [mkNatLit 1, mkNatLit 2];
print t;
check t;
match t.arrayLit? with
| some (_, xs) => do
  check $ pure $ xs.length == 2;
  match (xs.get! 0).natLit?, (xs.get! 1).natLit? with
  | some 1, some 2 => pure ()
  | _, _           => throwError "nat lits expected"
| none => throwError "array lit expected"

#eval tst42
