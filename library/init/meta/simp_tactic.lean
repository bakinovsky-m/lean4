/-
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.meta.tactic init.meta.attribute init.meta.constructor_tactic
import init.meta.relation_tactics init.meta.occurrences

open tactic

meta constant simp_lemmas : Type
meta constant simp_lemmas.mk : simp_lemmas
meta constant simp_lemmas.join : simp_lemmas → simp_lemmas → simp_lemmas
meta constant simp_lemmas.erase : simp_lemmas → list name → simp_lemmas
meta constant simp_lemmas.mk_default_core : transparency → tactic simp_lemmas
meta constant simp_lemmas.add_core : transparency → simp_lemmas → expr → tactic simp_lemmas
meta constant simp_lemmas.add_simp_core : transparency → simp_lemmas → name → tactic simp_lemmas
meta constant simp_lemmas.add_congr_core : transparency → simp_lemmas → name → tactic simp_lemmas

meta def simp_lemmas.mk_default : tactic simp_lemmas :=
simp_lemmas.mk_default_core reducible

meta def simp_lemmas.add : simp_lemmas → expr → tactic simp_lemmas :=
simp_lemmas.add_core reducible

meta def simp_lemmas.add_simp : simp_lemmas → name → tactic simp_lemmas :=
simp_lemmas.add_simp_core reducible

meta def simp_lemmas.add_congr : simp_lemmas → name → tactic simp_lemmas :=
simp_lemmas.add_congr_core reducible

meta def simp_lemmas.append : simp_lemmas → list expr → tactic simp_lemmas
| sls []      := return sls
| sls (l::ls) := do
  new_sls ← simp_lemmas.add sls l,
  simp_lemmas.append new_sls ls

/- (simp_lemmas.rewrite_core m s prove R e) apply a simplification lemma from 's'

   - 'prove' is used to discharge proof obligations.
   - 'R'     is the equivalence relation being used (e.g., 'eq', 'iff')
   - 'e'     is the expression to be "simplified"

   Result (new_e, pr) is the new expression 'new_e' and a proof (pr : e R new_e) -/
meta constant simp_lemmas.rewrite_core : transparency → simp_lemmas → tactic unit → name → expr → tactic (expr × expr)

meta def simp_lemmas.rewrite : simp_lemmas → tactic unit → name → expr → tactic (expr × expr) :=
simp_lemmas.rewrite_core reducible

/- (simp_lemmas.drewrite s e) tries to rewrite 'e' using only refl lemmas in 's' -/
meta constant simp_lemmas.drewrite_core : transparency → simp_lemmas → expr → tactic expr

meta def simp_lemmas.drewrite : simp_lemmas → expr → tactic expr :=
simp_lemmas.drewrite_core reducible

/- (Definitional) Simplify the given expression using *only* reflexivity equality lemmas from the given set of lemmas.
   The resulting expression is definitionally equal to the input. -/
meta constant simp_lemmas.dsimplify_core (max_steps : nat) (visit_instances : bool) : simp_lemmas → expr → tactic expr

meta constant is_valid_simp_lemma_cnst : transparency → name → tactic bool
meta constant is_valid_simp_lemma : transparency → expr → tactic bool

def default_max_steps := 10000000

meta def simp_lemmas.dsimplify : simp_lemmas → expr → tactic expr :=
simp_lemmas.dsimplify_core default_max_steps ff

meta constant simp_lemmas.pp : simp_lemmas → tactic format

namespace tactic
/- (get_eqn_lemmas_for deps d) returns the automatically generated equational lemmas for definition d.
   If deps is tt, then lemmas for automatically generated auxiliary declarations used to define d are also included. -/
meta constant get_eqn_lemmas_for : bool → name → tactic (list name)

meta constant dsimplify_core
  /- The user state type. -/
  {α : Type}
  /- Initial user data -/
  (a : α)
  (max_steps       : nat)
  /- If visit_instances = ff, then instance implicit arguments are not visited, but
     tactic will canonize them. -/
  (visit_instances : bool)
  /- (pre a e) is invoked before visiting the children of subterm 'e',
     if it succeeds the result (new_a, new_e, flag) where
       - 'new_a' is the new value for the user data
       - 'new_e' is a new expression that must be definitionally equal to 'e',
       - 'flag'  if tt 'new_e' children should be visited, and 'post' invoked. -/
  (pre             : α → expr → tactic (α × expr × bool))
  /- (post a e) is invoked after visiting the children of subterm 'e',
     The output is similar to (pre a e), but the 'flag' indicates whether
     the new expression should be revisited or not. -/
  (post            : α → expr → tactic (α × expr × bool))
  : expr → tactic (α × expr)

meta def dsimplify
  (pre             : expr → tactic (expr × bool))
  (post            : expr → tactic (expr × bool))
  : expr → tactic expr :=
λ e, do (a, new_e) ← dsimplify_core () default_max_steps ff
                       (λ u e, do r ← pre e, return (u, r))
                       (λ u e, do r ← post e, return (u, r)) e,
        return new_e

meta constant dunfold_expr_core : transparency → expr → tactic expr

meta def dunfold_expr : expr → tactic expr :=
dunfold_expr_core reducible

meta constant unfold_projection_core : transparency → expr → tactic expr

meta def unfold_projection : expr → tactic expr :=
unfold_projection_core reducible

meta def dunfold_occs_core (m : transparency) (max_steps : nat) (occs : occurrences) (cs : list name) (e : expr) : tactic expr :=
let unfold (c : nat) (e : expr) : tactic (nat × expr × bool) := do
  guard (cs^.any e^.is_app_of),
  new_e ← dunfold_expr_core m e,
  if occs^.contains c
  then return (c+1, new_e, tt)
  else return (c+1, e, tt)
in do (c, new_e) ← dsimplify_core 1 max_steps tt unfold (λ c e, failed) e,
      return new_e

meta def dunfold_core (m : transparency) (max_steps : nat) (cs : list name) (e : expr) : tactic expr :=
let unfold (u : unit) (e : expr) : tactic (unit × expr × bool) := do
  guard (cs^.any e^.is_app_of),
  new_e ← dunfold_expr_core m e,
  return (u, new_e, tt)
in do (c, new_e) ← dsimplify_core () max_steps tt (λ c e, failed) unfold e,
      return new_e

meta def dunfold : list name → tactic unit :=
λ cs, target >>= dunfold_core reducible default_max_steps cs >>= change

meta def dunfold_occs_of (occs : list nat) (c : name) : tactic unit :=
target >>= dunfold_occs_core reducible default_max_steps (occurrences.pos occs) [c] >>= change

meta def dunfold_core_at (occs : occurrences) (cs : list name) (h : expr) : tactic unit :=
do num_reverted ← revert h,
   (expr.pi n bi d b : expr) ← target,
   new_d : expr ← dunfold_occs_core reducible default_max_steps occs cs d,
   change $ expr.pi n bi new_d b,
   intron num_reverted

meta def dunfold_at (cs : list name) (h : expr) : tactic unit :=
do num_reverted ← revert h,
   (expr.pi n bi d b : expr) ← target,
   new_d : expr ← dunfold_core reducible default_max_steps cs d,
   change $ expr.pi n bi new_d b,
   intron num_reverted

structure delta_config :=
(max_steps       := default_max_steps)
(visit_instances := tt)

private meta def is_delta_target (e : expr) (cs : list name) : bool :=
cs^.any (λ c,
  if e^.is_app_of c then tt   /- Exact match -/
  else let f := e^.get_app_fn in
       /- f is an auxiliary constant generated when compiling c -/
       f^.is_constant && f^.const_name^.is_internal && to_bool (f^.const_name^.get_prefix = c))

/- Delta reduce the given constant names -/
meta def delta_core (cfg : delta_config) (cs : list name) (e : expr) : tactic expr :=
let unfold (u : unit) (e : expr) : tactic (unit × expr × bool) := do
  guard (is_delta_target e cs),
  (expr.const f_name f_lvls) ← return $ e^.get_app_fn,
  env   ← get_env,
  decl  ← returnex $ env^.get f_name,
  new_f ← returnopt $ decl^.instantiate_value_univ_params f_lvls,
  new_e ← beta (expr.mk_app new_f e^.get_app_args),
  return (u, new_e, tt)
in do (c, new_e) ← dsimplify_core () cfg^.max_steps cfg^.visit_instances (λ c e, failed) unfold e,
      return new_e

meta def delta (cs : list name) : tactic unit :=
target >>= delta_core {} cs >>= change

meta def delta_at (cs : list name) (h : expr) : tactic unit :=
do num_reverted ← revert h,
   (expr.pi n bi d b : expr) ← target,
   new_d : expr ← delta_core {} cs d,
   change $ expr.pi n bi new_d b,
   intron num_reverted

structure simplify_config :=
(max_steps : nat           := default_max_steps)
(contextual : bool         := ff)
(lift_eq : bool            := tt)
(canonize_instances : bool := tt)
(canonize_proofs : bool    := ff)
(use_axioms : bool         := tt)

meta constant simplify_core
  (c : simplify_config)
  (s : simp_lemmas)
  (r : name) :
  expr → tactic (expr × expr)

meta constant ext_simplify_core
  /- The user state type. -/
  {α : Type}
  /- Initial user data -/
  (a : α)
  (c : simplify_config)
  /- Congruence and simplification lemmas.
     Remark: the simplification lemmas at not applied automatically like in the simplify_core tactic.
     the caller must use them at pre/post. -/
  (s : simp_lemmas)
  /- Tactic for dischaging hypothesis in conditional rewriting rules.
     The argument 'α' is the current user state. -/
  (prove : α → tactic α)
  /- (pre a S r s p e) is invoked before visiting the children of subterm 'e',
     'r' is the simplification relation being used, 's' is the updated set of lemmas if 'contextual' is tt,
     'p' is the "parent" expression (if there is one).
     if it succeeds the result is (new_a, new_e, new_pr, flag) where
       - 'new_a' is the new value for the user data
       - 'new_e' is a new expression s.t. 'e r new_e'
       - 'new_pr' is a proof for 'e r new_e', If it is none, the proof is assumed to be by reflexivity
       - 'flag'  if tt 'new_e' children should be visited, and 'post' invoked. -/
  (pre : α → simp_lemmas → name → option expr → expr → tactic (α × expr × option expr × bool))
  /- (post a r s p e) is invoked after visiting the children of subterm 'e',
     The output is similar to (pre a r s p e), but the 'flag' indicates whether
     the new expression should be revisited or not. -/
  (post : α → simp_lemmas  → name → option expr → expr → tactic (α × expr × option expr × bool))
  /- simplification relation -/
  (r : name) :
  expr → tactic (α × expr × expr)

meta def simplify (cfg : simplify_config) (S : simp_lemmas) (e : expr) : tactic (expr × expr) :=
do e_type       ← infer_type e >>= whnf,
   simplify_core cfg S `eq e

meta def simplify_goal_core (cfg : simplify_config) (S : simp_lemmas) : tactic unit :=
do (new_target, heq) ← target >>= simplify cfg S,
   assert `htarget new_target, swap,
   ht ← get_local `htarget,
   mk_eq_mpr heq ht >>= exact

meta def simplify_goal (S : simp_lemmas) : tactic unit :=
simplify_goal_core {} S

meta def simp : tactic unit :=
do S ← simp_lemmas.mk_default,
simplify_goal S >> try triv >> try (reflexivity_core reducible)

meta def simp_using (hs : list expr) : tactic unit :=
do S ← simp_lemmas.mk_default,
   S ← S^.append hs,
simplify_goal S >> try triv

meta def ctx_simp : tactic unit :=
do S ← simp_lemmas.mk_default,
simplify_goal_core {contextual := tt} S >> try triv >> try (reflexivity_core reducible)

meta def dsimp_core (s : simp_lemmas) : tactic unit :=
target >>= s^.dsimplify >>= change

meta def dsimp : tactic unit :=
simp_lemmas.mk_default >>= dsimp_core

meta def dsimp_at_core (s : simp_lemmas) (h : expr) : tactic unit :=
do num_reverted : ℕ ← revert h,
   (expr.pi n bi d b : expr) ← target,
   h_simp ← s^.dsimplify d,
   change $ expr.pi n bi h_simp b,
   intron num_reverted

meta def dsimp_at (h : expr) : tactic unit :=
do s ← simp_lemmas.mk_default, dsimp_at_core s h

private meta def is_equation : expr → bool
| (expr.pi n bi d b) := is_equation b
| e                  := match (expr.is_eq e) with (some a) := tt | none := ff end

private meta def collect_simps : list expr → tactic (list expr)
| []        := return []
| (h :: hs) := do
  result ← collect_simps hs,
  htype  ← infer_type h >>= whnf,
  if is_equation htype
  then return (h :: result)
  else do
    pr ← is_prop htype,
    return $ if pr then (h :: result) else result

meta def collect_ctx_simps : tactic (list expr) :=
local_context >>= collect_simps

/- Simplify target using all hypotheses in the local context. -/
meta def simp_using_hs : tactic unit :=
collect_ctx_simps >>= simp_using

meta def simp_core_at (extra_lemmas : list expr) (h : expr) : tactic unit :=
do when (expr.is_local_constant h = ff) (fail "tactic simp_at failed, the given expression is not a hypothesis"),
   htype ← infer_type h,
   S     ← simp_lemmas.mk_default,
   S     ← S^.append extra_lemmas,
   (new_htype, heq) ← simplify {} S htype,
   assert (expr.local_pp_name h) new_htype,
   mk_eq_mp heq h >>= exact,
   try $ clear h

meta def simp_at : expr → tactic unit :=
simp_core_at []

meta def simp_at_using (hs : list expr) : expr → tactic unit :=
simp_core_at hs

meta def simp_at_using_hs (h : expr) : tactic unit :=
do hs ← collect_ctx_simps,
   simp_core_at (list.filter (ne h) hs) h

meta def mk_eq_simp_ext (simp_ext : expr → tactic (expr × expr)) : tactic unit :=
do (lhs, rhs)     ← target >>= match_eq,
   (new_rhs, heq) ← simp_ext lhs,
   unify rhs new_rhs,
   exact heq

/- Simp attribute support -/

meta def to_simp_lemmas : simp_lemmas → list name → tactic simp_lemmas
| S []      := return S
| S (n::ns) := do S' ← S^.add_simp n, to_simp_lemmas S' ns

meta def mk_simp_attr (attr_name : name) : command :=
do t ← to_expr `(caching_user_attribute simp_lemmas),
   a ← attr_name^.to_expr,
   v ← to_expr `({ name     := %%a,
                   descr    := "simplifier attribute",
                   mk_cache := λ ns, do {tactic.to_simp_lemmas simp_lemmas.mk ns},
                   dependencies := [`reducibility] } : caching_user_attribute simp_lemmas),
   add_decl (declaration.defn attr_name [] t v reducibility_hints.abbrev ff),
   attribute.register attr_name

meta def get_user_simp_lemmas (attr_name : name) : tactic simp_lemmas :=
if attr_name = `default then simp_lemmas.mk_default
else do
  cnst   ← return (expr.const attr_name []),
  attr   ← eval_expr (caching_user_attribute simp_lemmas) cnst,
  caching_user_attribute.get_cache attr

meta def join_user_simp_lemmas_core : simp_lemmas → list name → tactic simp_lemmas
| S []             := return S
| S (attr_name::R) := do S' ← get_user_simp_lemmas attr_name, join_user_simp_lemmas_core (S^.join S') R

meta def join_user_simp_lemmas : list name → tactic simp_lemmas
| []         := simp_lemmas.mk_default
| attr_names := join_user_simp_lemmas_core simp_lemmas.mk attr_names

/- Normalize numerical expression, returns a pair (n, pr) where n is the resultant numeral,
   and pr is a proof that the input argument is equal to n. -/
meta constant norm_num : expr → tactic (expr × expr)

meta def simplify_top_down (pre : expr → tactic (expr × expr)) (e : expr) (cfg : simplify_config := {}) : tactic (expr × expr) :=
do (_, new_e, pr) ← ext_simplify_core () cfg simp_lemmas.mk (λ _, failed)
                          (λ _ S r p e, do (new_e, pr) ← pre e, return ((), new_e, some pr, tt))
                          (λ _ _ _ _ _, failed)
                          `eq e,
   return (new_e, pr)

meta def simp_top_down (pre : expr → tactic (expr × expr)) (cfg : simplify_config := {}) : tactic unit :=
do t                 ← target,
   (new_target, heq) ← simplify_top_down pre t cfg,
   assert `htarget new_target, swap,
   ht ← get_local `htarget,
   mk_eq_mpr heq ht >>= exact

end tactic

export tactic (mk_simp_attr)
