import Lean.Meta
open Lean
open Lean.Meta

def fact : Nat → Nat
| 0 => 1
| n+1 => (n+1)*fact n

set_option trace.Meta true
set_option trace.Meta.isDefEq false
set_option trace.Meta.check false

def print (msg : MessageData) : MetaM Unit :=
trace! `Meta.debug msg

def check (x : MetaM Bool) : MetaM Unit :=
unlessM x $ throwError "check failed"

def ex (x_1 x_2 x_3 : Nat) : Nat × Nat :=
let x  := fact (10 + x_1 + x_2 + x_3);
let ty := Nat → Nat;
let f  : ty := fun x => x;
let n  := 20;
let z  := f 10;
(let y  : { v : Nat // v = n } := ⟨20, rfl⟩; y.1 + n + f x, z + 10)

def tst1 : MetaM Unit := do
print "----- tst1 -----";
c ← getConstInfo `ex;
lambdaTelescope c.value?.get! fun xs body =>
  withTrackingZeta do
    Meta.check body;
    ys ← getZetaFVarIds;
    let ys := ys.toList.map mkFVar;
    print ys;
    check $ pure $ ys.length == 2;
    c ← mkAuxDefinitionFor `foo body;
    print c;
    Meta.check c;
    pure ()

#eval tst1

#print foo

def tst2 : MetaM Unit := do
print "----- tst2 -----";
let nat := mkConst `Nat;
let t0  := mkApp (mkConst `IO) nat;
let t   := mkForall `_ BinderInfo.default nat t0;
print t;
Meta.check t;
forallBoundedTelescope t (some 1) fun xs b => do
  print b;
  check $ pure $ xs.size == 1;
  check $ pure $ b == t0;
  pure ()

#eval tst2


def tst3 : MetaM Unit := do
print "----- tst2 -----";
let nat := mkConst `Nat;
let t0  := mkApp (mkConst `IO) nat;
let t   := t0;
print t;
Meta.check t;
forallBoundedTelescope t (some 0) fun xs b => do
  print b;
  check $ pure $ xs.size == 0;
  check $ pure $ b == t0;
  pure ()

#eval tst3
