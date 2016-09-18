/-
Copyright (c) Luke Nelson and Jared Roesch. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Luke Nelson and Jared Roesch
-/
prelude
set_option new_elaborator true
structure [class] {u v} functor (F : Type u → Type v) : Type (max u+1 v) :=
(map : Π {A B : Type u}, (A → B) → F A → F B)

universe variables u v
attribute [inline]
definition fmap {F : Type u → Type v} [functor F] {A B : Type u} : (A → B) → F A → F B :=
functor.map

infixr ` <$> `:100 := fmap
