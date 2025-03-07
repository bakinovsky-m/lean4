// Lean compiler output
// Module: Lean.Meta.Tactic.Constructor
// Imports: Init Lean.Meta.Check Lean.Meta.Tactic.Util Lean.Meta.Tactic.Apply
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Meta_existsIntro___lambda__2___closed__5;
lean_object* l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__2___closed__3;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___closed__1;
lean_object* l_Lean_Meta_existsIntro___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__2___closed__1;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__2___closed__2;
lean_object* l_Lean_Meta_existsIntro_match__1(lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Lean_Meta_checkNotAssigned___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__2___closed__4;
lean_object* l_Lean_Meta_getMVarType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_termExists___x2c_____closed__3;
lean_object* l_Lean_Meta_throwTacticEx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__1___closed__1;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__1___closed__2;
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_Meta_existsIntro_match__2(lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__1___closed__3;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro___lambda__2___closed__6;
lean_object* l_Lean_Meta_existsIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_existsIntro_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l_Lean_Meta_existsIntro_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_existsIntro_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_existsIntro_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_existsIntro_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_existsIntro_match__2___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected number of subgoals");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_existsIntro___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_existsIntro___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_existsIntro___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_mkConst(x_14, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Expr_getAppNumArgsAux(x_3, x_16);
x_18 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_17);
x_19 = lean_mk_array(x_17, x_18);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_17, x_20);
lean_dec(x_17);
x_22 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_3, x_19, x_21);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
x_24 = l_Array_toSubarray___rarg(x_22, x_16, x_23);
x_25 = l_Array_ofSubarray___rarg(x_24);
lean_dec(x_24);
x_26 = l_Lean_mkAppN(x_15, x_25);
lean_dec(x_25);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_26);
x_27 = l_Lean_Meta_inferType(x_26, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; uint8_t x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_1, 4);
lean_inc(x_30);
lean_dec(x_1);
x_31 = lean_unsigned_to_nat(2u);
x_32 = lean_nat_sub(x_30, x_31);
lean_dec(x_30);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = 1;
x_35 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_36 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_28, x_34, x_33, x_35, x_8, x_9, x_10, x_11, x_29);
lean_dec(x_33);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_mkAppN(x_26, x_39);
lean_dec(x_39);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_40);
x_41 = l_Lean_Meta_checkApp(x_40, x_4, x_8, x_9, x_10, x_11, x_38);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_Lean_mkApp(x_40, x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_5);
x_44 = l_Lean_Meta_apply(x_5, x_43, x_8, x_9, x_10, x_11, x_42);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Meta_existsIntro___lambda__1___closed__3;
x_48 = lean_box(0);
x_49 = l_Lean_Meta_throwTacticEx___rarg(x_6, x_5, x_47, x_48, x_8, x_9, x_10, x_11, x_46);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_49;
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_51 = !lean_is_exclusive(x_44);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_44, 0);
lean_dec(x_52);
x_53 = lean_ctor_get(x_45, 0);
lean_inc(x_53);
lean_dec(x_45);
lean_ctor_set(x_44, 0, x_53);
return x_44;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_44, 1);
lean_inc(x_54);
lean_dec(x_44);
x_55 = lean_ctor_get(x_45, 0);
lean_inc(x_55);
lean_dec(x_45);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_50);
lean_dec(x_45);
x_57 = lean_ctor_get(x_44, 1);
lean_inc(x_57);
lean_dec(x_44);
x_58 = l_Lean_Meta_existsIntro___lambda__1___closed__3;
x_59 = lean_box(0);
x_60 = l_Lean_Meta_throwTacticEx___rarg(x_6, x_5, x_58, x_59, x_8, x_9, x_10, x_11, x_57);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_61 = !lean_is_exclusive(x_44);
if (x_61 == 0)
{
return x_44;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_44, 0);
x_63 = lean_ctor_get(x_44, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_44);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_40);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_65 = !lean_is_exclusive(x_41);
if (x_65 == 0)
{
return x_41;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_41, 0);
x_67 = lean_ctor_get(x_41, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_41);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_26);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_69 = !lean_is_exclusive(x_36);
if (x_69 == 0)
{
return x_36;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_36, 0);
x_71 = lean_ctor_get(x_36, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_36);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_26);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_27);
if (x_73 == 0)
{
return x_27;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_27, 0);
x_75 = lean_ctor_get(x_27, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_27);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("target is not an inductive datatype with one constructor");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_existsIntro___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_existsIntro___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___lambda__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("constructor must have at least two fields");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_existsIntro___lambda__2___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_existsIntro___lambda__2___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_existsIntro___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Meta_getMVarType_x27(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Expr_getAppFn(x_11);
if (lean_obj_tag(x_13) == 4)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_8, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_environment_find(x_19, x_14);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_3);
x_21 = l_Lean_Meta_existsIntro___lambda__2___closed__3;
x_22 = lean_box(0);
x_23 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_1, x_21, x_22, x_5, x_6, x_7, x_8, x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_inc(x_24);
lean_dec(x_20);
if (lean_obj_tag(x_24) == 5)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get_uint8(x_25, sizeof(void*)*5);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 4);
lean_inc(x_27);
lean_dec(x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_3);
x_28 = l_Lean_Meta_existsIntro___lambda__2___closed__3;
x_29 = lean_box(0);
x_30 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_1, x_28, x_29, x_5, x_6, x_7, x_8, x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_30;
}
else
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_27, 0);
lean_inc(x_32);
lean_dec(x_27);
x_33 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_32, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 6)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_36, 4);
lean_inc(x_37);
x_38 = lean_unsigned_to_nat(2u);
x_39 = lean_nat_dec_lt(x_37, x_38);
lean_dec(x_37);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_box(0);
x_41 = l_Lean_Meta_existsIntro___lambda__1(x_36, x_15, x_11, x_3, x_1, x_2, x_40, x_5, x_6, x_7, x_8, x_35);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_36);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_3);
x_42 = l_Lean_Meta_existsIntro___lambda__2___closed__6;
x_43 = lean_box(0);
x_44 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_1, x_42, x_43, x_5, x_6, x_7, x_8, x_35);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
return x_44;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_34);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_3);
x_49 = lean_ctor_get(x_33, 1);
lean_inc(x_49);
lean_dec(x_33);
x_50 = l_Lean_Meta_existsIntro___lambda__2___closed__3;
x_51 = lean_box(0);
x_52 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_1, x_50, x_51, x_5, x_6, x_7, x_8, x_49);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_33);
if (x_53 == 0)
{
return x_33;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_33, 0);
x_55 = lean_ctor_get(x_33, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_33);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_3);
x_57 = l_Lean_Meta_existsIntro___lambda__2___closed__3;
x_58 = lean_box(0);
x_59 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_1, x_57, x_58, x_5, x_6, x_7, x_8, x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_25);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_3);
x_60 = l_Lean_Meta_existsIntro___lambda__2___closed__3;
x_61 = lean_box(0);
x_62 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_1, x_60, x_61, x_5, x_6, x_7, x_8, x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_24);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_3);
x_63 = l_Lean_Meta_existsIntro___lambda__2___closed__3;
x_64 = lean_box(0);
x_65 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_1, x_63, x_64, x_5, x_6, x_7, x_8, x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_3);
x_66 = l_Lean_Meta_existsIntro___lambda__2___closed__3;
x_67 = lean_box(0);
x_68 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_1, x_66, x_67, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_68;
}
}
else
{
uint8_t x_69; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_10);
if (x_69 == 0)
{
return x_10;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_10, 0);
x_71 = lean_ctor_get(x_10, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_10);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
static lean_object* _init_l_Lean_Meta_existsIntro___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_termExists___x2c_____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_existsIntro(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_Lean_Meta_existsIntro___closed__1;
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_checkNotAssigned___boxed), 7, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_existsIntro___lambda__2___boxed), 9, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_8);
lean_closure_set(x_10, 2, x_2);
x_11 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_1, x_11, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
lean_object* l_Lean_Meta_existsIntro___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_existsIntro___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
return x_13;
}
}
lean_object* l_Lean_Meta_existsIntro___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_existsIntro___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Check(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Util(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Apply(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Tactic_Constructor(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_existsIntro___lambda__1___closed__1 = _init_l_Lean_Meta_existsIntro___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_existsIntro___lambda__1___closed__1);
l_Lean_Meta_existsIntro___lambda__1___closed__2 = _init_l_Lean_Meta_existsIntro___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Meta_existsIntro___lambda__1___closed__2);
l_Lean_Meta_existsIntro___lambda__1___closed__3 = _init_l_Lean_Meta_existsIntro___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Meta_existsIntro___lambda__1___closed__3);
l_Lean_Meta_existsIntro___lambda__2___closed__1 = _init_l_Lean_Meta_existsIntro___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_existsIntro___lambda__2___closed__1);
l_Lean_Meta_existsIntro___lambda__2___closed__2 = _init_l_Lean_Meta_existsIntro___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Meta_existsIntro___lambda__2___closed__2);
l_Lean_Meta_existsIntro___lambda__2___closed__3 = _init_l_Lean_Meta_existsIntro___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Meta_existsIntro___lambda__2___closed__3);
l_Lean_Meta_existsIntro___lambda__2___closed__4 = _init_l_Lean_Meta_existsIntro___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Meta_existsIntro___lambda__2___closed__4);
l_Lean_Meta_existsIntro___lambda__2___closed__5 = _init_l_Lean_Meta_existsIntro___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Meta_existsIntro___lambda__2___closed__5);
l_Lean_Meta_existsIntro___lambda__2___closed__6 = _init_l_Lean_Meta_existsIntro___lambda__2___closed__6();
lean_mark_persistent(l_Lean_Meta_existsIntro___lambda__2___closed__6);
l_Lean_Meta_existsIntro___closed__1 = _init_l_Lean_Meta_existsIntro___closed__1();
lean_mark_persistent(l_Lean_Meta_existsIntro___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
