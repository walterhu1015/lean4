/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich, Leonardo de Moura
-/
prelude
import Init.Control.MonadLift

universes u v w

/-- A functor in the category of monads. Can be used to lift monad-transforming functions.
    Based on pipes' [MFunctor](https://hackage.haskell.org/package/pipes-2.4.0/docs/Control-MFunctor.html),
    but not restricted to monad transformers.
    Alternatively, an implementation of [MonadTransFunctor](http://duairc.netsoc.ie/layers-docs/Control-Monad-Layer.html#t:MonadTransFunctor).


    Remark: other libraries equate `m` and `m'`, and `n` and `n'`. We need to distinguish them to be able to implement
    ogadgets such as `MonadStateAdapter` and `MonadReaderAdapter`. -/
class MonadFunctor (m m' : Type u → Type v) (n n' : Type u → Type w) :=
(monadMap {α : Type u} : (∀ {β}, m β → m' β) → n α → n' α)

/-- The reflexive-transitive closure of `MonadFunctor`.
    `monadMap` is used to transitively lift Monad morphisms such as `StateT.zoom`.
    A generalization of [MonadLiftFunctor](http://duairc.netsoc.ie/layers-docs/Control-Monad-Layer.html#t:MonadLiftFunctor), which can only lift endomorphisms (i.e. m = m', n = n'). -/
class MonadFunctorT (m m' : Type u → Type v) (n n' : Type u → Type w) :=
(monadMap {α : Type u} : (∀ {β}, m β → m' β) → n α → n' α)

export MonadFunctorT (monadMap)

instance monadFunctorTrans (m m' n n' o o') [MonadFunctorT m m' n n'] [MonadFunctor n n' o o'] :
  MonadFunctorT m m' o o' :=
⟨fun α f => MonadFunctor.monadMap (fun β => (monadMap @f : n β → n' β))⟩

instance monadFunctorRefl (m m') : MonadFunctorT m m' m m' :=
⟨fun α f => f⟩
