/-
Copyright (c) 2017 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich

The Reader monad transformer for passing immutable State.
-/

prelude
import Init.Control.MonadControl
import Init.Control.Id
import Init.Control.Alternative
import Init.Control.Except
universes u v w

/-- An implementation of [ReaderT](https://hackage.haskell.org/package/transformers-0.5.5.0/docs/Control-Monad-Trans-Reader.html#t:ReaderT) -/
def ReaderT (ρ : Type u) (m : Type u → Type v) (α : Type u) : Type (max u v) :=
ρ → m α

instance ReaderT.inhabited (ρ : Type u) (m : Type u → Type v) (α : Type u) [Inhabited (m α)] : Inhabited (ReaderT ρ m α) :=
⟨fun _ => arbitrary _⟩

@[inline] def ReaderT.run {ρ : Type u} {m : Type u → Type v} {α : Type u} (x : ReaderT ρ m α) (r : ρ) : m α :=
x r

@[reducible] def Reader (ρ : Type u) := ReaderT ρ id

namespace ReaderT

section
variables {ρ : Type u} {m : Type u → Type v} {α : Type u}

@[inline] protected def lift  (a : m α) : ReaderT ρ m α :=
fun r => a

instance  : MonadLift m (ReaderT ρ m) :=
⟨@ReaderT.lift ρ m⟩

instance (ε) [MonadExceptOf ε m] : MonadExceptOf ε (ReaderT ρ m) :=
{ throw := fun α => ReaderT.lift ∘ throwThe ε,
  catch := fun α x c r => catchThe ε (x r) (fun e => (c e) r) }

@[inline] protected def orelse [Alternative m] {α : Type u} (x₁ x₂ : ReaderT ρ m α) : ReaderT ρ m α :=
fun s => x₁ s <|> x₂ s

@[inline] protected def failure [Alternative m] {α : Type u} : ReaderT ρ m α :=
fun s => failure

end

section
variables {ρ : Type u} {m : Type u → Type v} [Monad m] {α β : Type u}

@[inline] protected def read : ReaderT ρ m ρ :=
pure

@[inline] protected def pure (a : α) : ReaderT ρ m α :=
fun r => pure a

@[inline] protected def bind (x : ReaderT ρ m α) (f : α → ReaderT ρ m β) : ReaderT ρ m β :=
fun r => do a ← x r; f a r

@[inline] protected def map (f : α → β) (x : ReaderT ρ m α) : ReaderT ρ m β :=
fun r => f <$> x r

instance : Monad (ReaderT ρ m) :=
{ pure := @ReaderT.pure _ _ _, bind := @ReaderT.bind _ _ _, map := @ReaderT.map _ _ _ }

instance (ρ m m') [Monad m] [Monad m'] : MonadFunctor m m' (ReaderT ρ m) (ReaderT ρ m') :=
⟨fun _ f x r => f (x r)⟩

@[inline] protected def adapt {ρ' : Type u} [Monad m] {α : Type u} (f : ρ' → ρ) : ReaderT ρ m α → ReaderT ρ' m α :=
fun x r => x (f r)

instance [Alternative m] : Alternative (ReaderT ρ m) :=
{ ReaderT.Monad with
  failure := @ReaderT.failure _ _ _,
  orelse  := @ReaderT.orelse _ _ _ }

end
end ReaderT

/-- An implementation of [MonadReader](https://hackage.haskell.org/package/mtl-2.2.2/docs/Control-Monad-Reader-Class.html#t:MonadReader).
    It does not contain `local` because this Function cannot be lifted using `monadLift`.
    Instead, the `MonadReaderAdapter` class provides the more general `adaptReader` Function.

    Note: This class can be seen as a simplification of the more "principled" definition
    ```
    class MonadReader (ρ : outParam (Type u)) (n : Type u → Type u) :=
    (lift {α : Type u} : (∀ {m : Type u → Type u} [Monad m], ReaderT ρ m α) → n α)
    ```
    -/
class MonadReaderOf (ρ : Type u) (m : Type u → Type v) :=
(read : m ρ)

@[inline] def readThe (ρ : Type u) {m : Type u → Type v} [MonadReaderOf ρ m] : m ρ :=
MonadReaderOf.read

/-- Similar to `MonadReaderOf`, but `ρ` is an outParam for convenience -/
class MonadReader (ρ : outParam (Type u)) (m : Type u → Type v) :=
(read : m ρ)

export MonadReader (read)

instance MonadReaderOf.isMonadReader (ρ : Type u) (m : Type u → Type v) [MonadReaderOf ρ m] : MonadReader ρ m :=
⟨readThe ρ⟩

instance monadReaderTrans {ρ : Type u} {m : Type u → Type v} {n : Type u → Type w}
  [MonadReaderOf ρ m] [MonadLift m n] : MonadReaderOf ρ n :=
⟨monadLift (MonadReader.read : m ρ)⟩

instance {ρ : Type u} {m : Type u → Type v} [Monad m] : MonadReaderOf ρ (ReaderT ρ m) :=
⟨ReaderT.read⟩


/-- Adapt a Monad stack, changing the Type of its top-most environment.

    This class is comparable to [Control.Lens.Magnify](https://hackage.haskell.org/package/lens-4.15.4/docs/Control-Lens-Zoom.html#t:Magnify), but does not use lenses (why would it), and is derived automatically for any transformer implementing `MonadFunctor`.

    Note: This class can be seen as a simplification of the more "principled" definition
    ```
    class MonadReaderFunctor (ρ ρ' : outParam (Type u)) (n n' : Type u → Type u) :=
    (map {α : Type u} : (∀ {m : Type u → Type u} [Monad m], ReaderT ρ m α → ReaderT ρ' m α) → n α → n' α)
    ```
    -/
class MonadReaderAdapterOf (ρ : outParam (Type u)) (ρ' : Type u) (m m' : Type u → Type v) :=
(adaptReader {α : Type u} : (ρ' → ρ) → m α → m' α)

@[inline] def adaptTheReader {ρ : Type u} (ρ' : Type u) {m m' : Type u → Type v} [MonadReaderAdapterOf ρ ρ' m m'] {α} : (ρ' → ρ) → m α → m' α :=
MonadReaderAdapterOf.adaptReader

/-- Similar to `MonadReaderAdapterOf`, but `ρ'` is an `outParam` for convenience -/
class MonadReaderAdapter (ρ ρ' : outParam (Type u)) (m m' : Type u → Type v) :=
(adaptReader {α : Type u} : (ρ' → ρ) → m α → m' α)

export MonadReaderAdapter (adaptReader)

instance MonadReaderAdapterOf.isMonadReaderAdapter (ρ ρ' : Type u) (m m' : Type u → Type v) [MonadReaderAdapterOf ρ ρ' m m'] : MonadReaderAdapter ρ ρ' m m' :=
⟨fun α => adaptTheReader ρ'⟩

section
variables {ρ ρ' : Type u} {m m' : Type u → Type v}

instance monadReaderAdapterTrans {n n' : Type u → Type v} [MonadReaderAdapterOf ρ ρ' m m'] [MonadFunctor m m' n n'] : MonadReaderAdapterOf ρ ρ' n n' :=
⟨fun α f => monadMap (fun α => (adaptReader f : m α → m' α))⟩

instance [Monad m] : MonadReaderAdapterOf ρ ρ' (ReaderT ρ m) (ReaderT ρ' m) :=
⟨fun α => ReaderT.adapt⟩
end

instance (ρ : Type u) (m out) [MonadRun out m] : MonadRun (fun α => ρ → out α) (ReaderT ρ m) :=
⟨fun α x => run ∘ x⟩

class MonadReaderRunner (ρ : Type u) (m m' : Type u → Type u) :=
(runReader {α : Type u} : m α → ρ → m' α)
export MonadReaderRunner (runReader)

section
variables {ρ ρ' : Type u} {m m' : Type u → Type u}

instance monadReaderRunnerTrans {n n' : Type u → Type u} [MonadReaderRunner ρ m m'] [MonadFunctor m m' n n'] : MonadReaderRunner ρ n n' :=
⟨fun α x r => monadMap (fun (α) (y : m α) => (runReader y r : m' α)) x⟩

instance ReaderT.MonadStateRunner [Monad m] : MonadReaderRunner ρ (ReaderT ρ m) m :=
⟨fun α x r => x r⟩
end

instance ReaderT.monadControl (ρ : Type u) (m : Type u → Type v) : MonadControl m (ReaderT ρ m) := {
  stM      := fun α       => α,
  liftWith := fun α f ctx => f fun β x => x ctx,
  restoreM := fun α x ctx => x,
}

instance ReaderT.finally {m : Type u → Type v} {ρ : Type u} [MonadFinally m] [Monad m] : MonadFinally (ReaderT ρ m) :=
{ finally' := fun α β x h ctx => finally' (x ctx) (fun a? => h a? ctx) }
