universes u v

theorem eqLitOfSize0 {α : Type u} (a : Array α) (hsz : a.size = 0) : a = #[] :=
a.toArrayLitEq 0 hsz

theorem eqLitOfSize1 {α : Type u} (a : Array α) (hsz : a.size = 1) : a = #[a.getLit 0 hsz (ofDecideEqTrue rfl)] :=
a.toArrayLitEq 1 hsz

theorem eqLitOfSize2 {α : Type u} (a : Array α) (hsz : a.size = 2) : a = #[a.getLit 0 hsz (ofDecideEqTrue rfl), a.getLit 1 hsz (ofDecideEqTrue rfl)] :=
a.toArrayLitEq 2 hsz

theorem eqLitOfSize3 {α : Type u} (a : Array α) (hsz : a.size = 3) :
  a = #[a.getLit 0 hsz (ofDecideEqTrue rfl), a.getLit 1 hsz (ofDecideEqTrue rfl), a.getLit 2 hsz (ofDecideEqTrue rfl)] :=
a.toArrayLitEq 3 hsz

/-
Matcher for the following patterns
```
| #[]           => _
| #[a₁]         => _
| #[a₁, a₂, a₃] => _
| a             => _
``` -/
def matchArrayLit {α : Type u} (C : Array α → Sort v) (a : Array α)
    (h₁ : Unit →      C #[])
    (h₂ : ∀ a₁,       C #[a₁])
    (h₃ : ∀ a₁ a₂ a₃, C #[a₁, a₂, a₃])
    (h₄ : ∀ a,        C a)
    : C a :=
if h : a.size = 0 then
  @Eq.rec _ _ (fun x _ => C x) (h₁ ()) _ (a.toArrayLitEq 0 h).symm
else if h : a.size = 1 then
  @Eq.rec _ _ (fun x _ => C x) (h₂ (a.getLit 0 h (ofDecideEqTrue rfl))) _ (a.toArrayLitEq 1 h).symm
else if h : a.size = 3 then
  @Eq.rec _ _ (fun x _ => C x) (h₃ (a.getLit 0 h (ofDecideEqTrue rfl)) (a.getLit 1 h (ofDecideEqTrue rfl)) (a.getLit 2 h (ofDecideEqTrue rfl))) _ (a.toArrayLitEq 3 h).symm
else
  h₄ a

/- Equational lemmas that should be generated automatically. -/
theorem matchArrayLit.eq1 {α : Type u} (C : Array α → Sort v)
    (h₁ : Unit →      C #[])
    (h₂ : ∀ a₁,       C #[a₁])
    (h₃ : ∀ a₁ a₂ a₃, C #[a₁, a₂, a₃])
    (h₄ : ∀ a,        C a)
    : matchArrayLit C #[] h₁ h₂ h₃ h₄ = h₁ () :=
rfl

theorem matchArrayLit.eq2 {α : Type u} (C : Array α → Sort v)
    (h₁ : Unit →      C #[])
    (h₂ : ∀ a₁,       C #[a₁])
    (h₃ : ∀ a₁ a₂ a₃, C #[a₁, a₂, a₃])
    (h₄ : ∀ a,        C a)
    (a₁ : α)
    : matchArrayLit C #[a₁] h₁ h₂ h₃ h₄ = h₂ a₁ :=
rfl

theorem matchArrayLit.eq3 {α : Type u} (C : Array α → Sort v)
    (h₁ : Unit →      C #[])
    (h₂ : ∀ a₁,       C #[a₁])
    (h₃ : ∀ a₁ a₂ a₃, C #[a₁, a₂, a₃])
    (h₄ : ∀ a,        C a)
    (a₁ a₂ a₃ : α)
    : matchArrayLit C #[a₁, a₂, a₃] h₁ h₂ h₃ h₄ = h₃ a₁ a₂ a₃ :=
rfl

theorem matchArrayLit.eq4 {α : Type u} (C : Array α → Sort v)
    (h₁ : Unit →      C #[])
    (h₂ : ∀ a₁,       C #[a₁])
    (h₃ : ∀ a₁ a₂ a₃, C #[a₁, a₂, a₃])
    (h₄ : ∀ a,        C a)
    (a : Array α)
    (n₁ : a.size ≠ 0) (n₂ : a.size ≠ 1) (n₃ : a.size ≠ 3)
    : matchArrayLit C a h₁ h₂ h₃ h₄ = h₄ a :=
match a, n₁, n₂, n₃ with
| ⟨0, _⟩,   n₁, _, _  => absurd rfl n₁
| ⟨1, _⟩,   _,  n₂, _ => absurd rfl n₂
| ⟨2, _⟩,   _, _, _   => rfl
| ⟨3, _⟩,   _, _, n₃  => absurd rfl n₃
| ⟨n+4, _⟩, _, _, _   => rfl
