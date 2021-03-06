// Lean compiler output
// Module: Lean.Elab.BuiltinNotation
// Imports: Init Lean.Elab.Term Lean.Elab.Quotation Lean.Elab.SyntheticMVars
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
lean_object* l_Lean_Elab_Term_expandOrM___closed__2;
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__5;
extern lean_object* l_Lean_Meta_mkLe___rarg___closed__4;
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__25;
lean_object* l_Lean_Elab_Term_expandNot___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_elabParserMacro(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__22;
lean_object* l_Lean_mkAppStx(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Elab_Term_expandModN___closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_expandBEq(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_reduceNative_x3f___closed__2;
lean_object* l_Lean_Elab_Term_expandIf___closed__3;
lean_object* l_Lean_Elab_Term_expandseq___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_eq_x3f___closed__2;
lean_object* l_Lean_Elab_Term_expandseqRight___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandDiv(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandNe(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandseq___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandModN___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAndM(lean_object*);
lean_object* l_Lean_Elab_Term_expandNot___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandMap___closed__1;
lean_object* l_Lean_Elab_Term_expandPrefixOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandModN___closed__3;
lean_object* l_Lean_Elab_Term_expandNot___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__29;
lean_object* l_Lean_Elab_Term_expandMod(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandAndThen___closed__2;
lean_object* l_Lean_Elab_Term_expandHave___closed__2;
extern lean_object* l___private_Lean_Elab_Quotation_6__compileStxMatch___main___closed__33;
lean_object* l___regBuiltin_Lean_Elab_Term_expandOr___closed__1;
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandIf___closed__5;
lean_object* l___regBuiltin_Lean_Elab_Term_expandPow(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandModN___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandNe___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBAnd(lean_object*);
lean_object* l___private_Lean_Syntax_7__quoteName___main(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__1;
lean_object* l_Lean_Elab_Term_expandHEq___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBNe___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19;
lean_object* l_Lean_Elab_Term_expandModN___closed__4;
lean_object* l_Lean_Elab_Term_expandSubtype___closed__9;
lean_object* l_Lean_Elab_Term_expandBNot(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandMul(lean_object*);
lean_object* l_Lean_Elab_Term_expandHave___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandModN(lean_object*);
extern lean_object* l___private_Lean_Meta_DiscrTree_6__shouldAddAsStar___closed__5;
extern lean_object* l___private_Lean_Elab_Quotation_6__compileStxMatch___main___closed__30;
lean_object* l_Lean_Elab_Term_getDeclName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandBNe(lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___closed__1;
lean_object* l_Lean_Elab_Term_expandDiv___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBNe___closed__2;
lean_object* l_Lean_Elab_Term_expandOrM___closed__1;
lean_object* l_Lean_Elab_Term_expandGT___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandLE___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBOr(lean_object*);
lean_object* l_Lean_Elab_Term_expandPow___closed__2;
extern lean_object* l___private_Lean_Elab_Quotation_6__compileStxMatch___main___closed__18;
lean_object* l_Lean_Elab_Term_expandSub___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandHEq(lean_object*);
lean_object* l_Lean_Elab_Term_expandPow___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_4__liftMetaMFinalizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__6;
lean_object* l_Lean_Elab_Term_expandModN___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandPow___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOrM___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandDollarProj(lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_6__compileStxMatch___main___closed__13;
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Elab_Term_expandHave___closed__4;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandseqLeft(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermAndSynthesize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandDollar(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandBNot___closed__2;
extern lean_object* l_Lean_optionToExpr___rarg___lambda__1___closed__6;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__21;
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__8;
lean_object* l_Lean_Elab_Term_expandGT___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_10__toPreterm___main___lambda__4___closed__3;
lean_object* l_Lean_Elab_Term_elabNativeRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__4;
lean_object* l_Lean_Elab_Term_expandSubtype(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandLT(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOrM(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandIf___closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAndM___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__34;
lean_object* l_Lean_Elab_Term_expandWhere___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBNot___closed__1;
lean_object* l_Lean_Elab_Term_expandMul___closed__3;
lean_object* l_Lean_Elab_Term_expandSubtype___closed__10;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_mkExpectedTypeHint___at_Lean_Elab_Term_elabNativeRefl___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandBind___closed__1;
lean_object* l_Lean_Elab_Term_expandHEq(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandCons___closed__1;
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
extern lean_object* l___private_Lean_Meta_DiscrTree_6__shouldAddAsStar___closed__9;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAndM___closed__1;
lean_object* l_Lean_Elab_Term_mkAuxName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__33;
lean_object* l_Lean_Elab_Term_expandSubtype___closed__11;
lean_object* l_Lean_Elab_Term_ExpandFComp(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandProd___closed__3;
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__2;
lean_object* l_Lean_Elab_Term_expandModN(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__4;
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__14;
lean_object* l___regBuiltin_Lean_Elab_Term_expandOr___closed__3;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___closed__6;
lean_object* l_Lean_Elab_Term_expandWhere___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandSub(lean_object*);
lean_object* l_Lean_Elab_Term_expandShow___closed__1;
lean_object* l_Lean_Elab_Term_expandWhere___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandDollar___closed__1;
extern lean_object* l_Lean_mkAppStx___closed__8;
lean_object* l_Lean_Elab_Term_expandMod___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandPow___closed__2;
lean_object* l_Lean_Elab_Term_expandSubtype___closed__1;
lean_object* l_Lean_Elab_Term_expandAndM___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_expandCDot_x3f___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_expandShow___closed__1;
lean_object* l_Lean_Elab_Term_expandEquiv(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandAndM___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__32;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__10;
lean_object* l___regBuiltin_Lean_Elab_Term_expandMap(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandMap___closed__2;
lean_object* l_Lean_Elab_Term_expandseqLeft(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandDollarProj(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandDiv___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__16;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAnd(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandMod(lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__3;
lean_object* l_Lean_Elab_Term_expandBind___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandBOr___closed__3;
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_mkDecideProof___rarg___lambda__1___closed__2;
lean_object* l_Lean_Elab_Term_expandOrElse___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandInfix(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabTParserMacro(lean_object*);
extern lean_object* l___private_Lean_Elab_Term_5__hasCDot___main___closed__1;
lean_object* l_Lean_Elab_Term_expandShow___closed__2;
lean_object* l_Lean_Elab_Term_expandAndM___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__24;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__6;
extern lean_object* l_Lean_Meta_reduceNat_x3f___closed__12;
lean_object* l___regBuiltin_Lean_Elab_Term_expandseq___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandHave(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandAnd___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandGT___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_expandLE(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandBEq___closed__1;
lean_object* l_Lean_Elab_Term_expandInfixOp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandNot(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__13;
lean_object* l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_expandDiv___closed__1;
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__45;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBind(lean_object*);
extern lean_object* l_Lean_Meta_mkDecideProof___rarg___closed__2;
lean_object* l_Lean_Elab_Term_expandAndThen___closed__3;
lean_object* l_Lean_Elab_Term_expandSubtype___closed__6;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__8;
lean_object* l_Lean_Elab_Term_expandSub___closed__3;
lean_object* l_Lean_Elab_Term_elabAnonymousCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTParserMacro___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandIff___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNativeRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__40;
lean_object* l_Lean_Elab_Term_expandShow___closed__7;
lean_object* l_Lean_Elab_Term_expandSub(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandOr(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandGE___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__2;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandAdd___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandHave___closed__1;
lean_object* l_Lean_Elab_Term_elabNativeDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Elab_Term_expandEquiv___closed__4;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__8;
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__1;
lean_object* l_Lean_Elab_Term_expandAppend___closed__3;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandShow___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__1;
lean_object* l_Lean_Elab_Term_expandGT(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__6;
lean_object* l___regBuiltin_Lean_Elab_Term_expandMod___closed__1;
extern lean_object* l_Lean_Meta_mkDecideProof___rarg___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__1;
lean_object* l_Lean_Elab_Term_expandDiv___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__20;
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__9;
extern lean_object* l___regBuiltin_Lean_Elab_Tactic_evalSeq___closed__1;
lean_object* l_Lean_Elab_Term_expandPow(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandBAnd___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__9;
lean_object* l___regBuiltin_Lean_Elab_Term_expandProd(lean_object*);
lean_object* l_Lean_Elab_Term_expandAndM(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandGE___closed__1;
lean_object* l_Lean_Elab_Term_expandDiv___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandSub___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_heq_x3f___closed__2;
lean_object* l_Lean_Elab_Term_expandBEq___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__2;
lean_object* l_Lean_Elab_Term_expandBEq___closed__1;
lean_object* l_Lean_Elab_Term_expandMod___closed__1;
lean_object* l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandIf___closed__4;
lean_object* l_Lean_Elab_Term_expandBOr___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__3;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__18;
lean_object* l_Lean_Elab_Term_ExpandFComp___closed__4;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__15;
lean_object* l_Lean_Elab_Term_expandBAnd(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__4;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__30;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAppend(lean_object*);
lean_object* l_Lean_Elab_Term_expandShow___closed__3;
lean_object* l_Lean_Elab_Term_expandAndThen___closed__1;
extern lean_object* l_Lean_Meta_reduceNat_x3f___closed__10;
extern lean_object* l_Lean_Expr_iff_x3f___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandProd___closed__2;
lean_object* l_Lean_Elab_Term_expandAndThen___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_AppBuilder_2__mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandIf(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandWhere___closed__1;
lean_object* l_Lean_Elab_Term_expandMod___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__5;
lean_object* l_Lean_Elab_Term_expandGE___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandNe___closed__1;
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___closed__4;
lean_object* l_Lean_Elab_Term_expandPrefixOp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__28;
lean_object* l_Lean_Elab_Term_expandEquiv___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTParserMacro___closed__1;
lean_object* l_Lean_Elab_Term_expandIf___closed__6;
lean_object* l_Lean_Elab_Term_expandEq(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabDecide___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_elabDecide(lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_10__toPreterm___main___lambda__3___closed__1;
lean_object* l_Lean_Elab_Term_expandGE___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedTypeHint___at_Lean_Elab_Term_elabNativeRefl___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__7;
lean_object* l_Lean_Elab_Term_expandEquiv___closed__2;
lean_object* l_Lean_Elab_Term_expandShow___closed__5;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__1;
lean_object* l_Lean_Elab_Term_expandBEq___closed__2;
lean_object* l_Lean_Elab_Term_expandEquiv___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__2;
lean_object* l_Lean_Elab_Term_expandGE___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandLE___closed__2;
lean_object* l_Lean_Elab_Term_expandDollarProj___closed__4;
lean_object* l_Lean_Elab_Term_expandBNot___closed__1;
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__1;
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___closed__8;
lean_object* l_Lean_Elab_Term_expandIf___closed__9;
lean_object* l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor(lean_object*);
lean_object* l_Lean_Elab_Term_expandAndThen___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_expandNe___closed__2;
lean_object* l_Nat_repr(lean_object*);
extern lean_object* l_Lean_boolToExpr___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__23;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeDecide(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandAdd___closed__1;
lean_object* l_Lean_Meta_mkEq___at_Lean_Elab_Term_elabNativeRefl___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandGT(lean_object*);
lean_object* l_Lean_Elab_Term_expandSub___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAnd___closed__2;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandDollar___closed__2;
lean_object* l_Lean_Elab_Term_expandDollar___closed__1;
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_Meta_mkEq___at_Lean_Elab_Term_elabNativeRefl___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandPow___closed__1;
lean_object* l_Lean_Elab_Term_expandSubtype___closed__8;
lean_object* l_Lean_Elab_Term_expandMul(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_expandCDot_x3f___closed__6;
lean_object* l___regBuiltin_Lean_Elab_Term_expandMod___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandBNot___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl___at_Lean_Elab_Term_elabNativeRefl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandDollar___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__6;
lean_object* l___regBuiltin_Lean_Elab_Term_expandProd___closed__1;
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__41;
lean_object* l_Lean_Elab_Term_expandSubtype___closed__4;
lean_object* l_Lean_Elab_Term_expandInfixOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandShow(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__2___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_expandEquiv___closed__3;
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___closed__3;
lean_object* l_Lean_Elab_Term_expandProd___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__6;
lean_object* l___regBuiltin_Lean_Elab_Term_expandLT(lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__44;
lean_object* l_Lean_Elab_Term_expandBNe___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandOrM(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__31;
extern lean_object* l_Lean_Literal_type___closed__2;
extern lean_object* l_Lean_Elab_Term_expandCDot_x3f___closed__2;
lean_object* l_Lean_Elab_Term_expandBNe___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandWhere(lean_object*);
lean_object* l_Lean_Elab_Term_expandMap___closed__3;
lean_object* l_Lean_Elab_Term_expandProd(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandSubtype(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__12;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBOr___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_elabDecide___closed__2;
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
extern lean_object* l_Lean_Meta_mkLt___rarg___closed__4;
lean_object* l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__3;
extern lean_object* l___private_Lean_Elab_Quotation_5__explodeHeadPat___lambda__1___closed__3;
lean_object* l_Lean_Elab_Term_expandMod___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_expandDollarProj___closed__1;
lean_object* l_Lean_compileDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandDiv___closed__3;
lean_object* l_Lean_Elab_Term_expandPow___closed__4;
lean_object* l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandIff(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandAdd(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMul___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBOr___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__2;
lean_object* l_Lean_Elab_Term_ExpandFComp___closed__2;
lean_object* l_Lean_Elab_Term_expandLT___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabDecide___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
lean_object* l___regBuiltin_Lean_Elab_Term_expandLT___closed__3;
extern lean_object* l_Lean_Meta_reduceNat_x3f___closed__8;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandAppend___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__2;
extern lean_object* l_Lean_prodToExpr___rarg___lambda__1___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandNot___closed__2;
lean_object* l_Lean_Elab_Term_expandBAnd___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandSubtype___closed__7;
lean_object* l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__7;
lean_object* l_Lean_Elab_Term_expandLE___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParserMacro___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandShow___closed__6;
lean_object* l_Lean_Elab_Term_expandBAnd___closed__1;
lean_object* l_Lean_Elab_Term_expandGE(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabDecide___closed__1;
lean_object* l_Lean_Elab_Term_expandMul___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeRefl(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__6;
extern lean_object* l_Lean_nullKind___closed__2;
extern lean_object* l_Lean_boolToExpr___lambda__1___closed__6;
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l___regBuiltin_Lean_Elab_Term_expandMapRev(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__3;
lean_object* l_Lean_Elab_Term_ExpandFComp___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandNot___closed__1;
lean_object* l_Lean_Elab_Term_expandDollarProj___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__7;
lean_object* l_Lean_Elab_Term_expandBOr___closed__1;
lean_object* l_Lean_Elab_Term_ExpandFComp___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandIff___closed__3;
lean_object* l_Lean_Elab_Term_expandModN___closed__2;
lean_object* l_Lean_Elab_Term_expandDollarProj___closed__1;
lean_object* l_Lean_Elab_Term_expandSubtype___closed__3;
lean_object* l_Lean_Elab_Term_expandEq___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandModN___closed__3;
lean_object* l_Lean_Elab_Term_expandseq___closed__1;
lean_object* l_Lean_Elab_Term_expandHave(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_8__letBindRhss___main___closed__17;
lean_object* l_Lean_Elab_Term_elabTParserMacro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandMul___closed__2;
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
lean_object* l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandOr___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__2;
lean_object* l_Lean_Elab_Term_expandLE(lean_object*, lean_object*, lean_object*);
uint8_t l_List_beq___main___at___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_Quotation_stxQuot_expand___closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_expandShow(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandSubtype___closed__1;
extern lean_object* l_Lean_Elab_macroAttribute;
extern lean_object* l_Lean_Meta_evalNat___main___closed__4;
lean_object* l_Lean_Elab_Term_elabParserMacro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandSubtype___closed__2;
extern lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__6;
lean_object* l_Lean_Elab_Term_expandAppend(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
extern lean_object* l_Lean_SourceInfo_inhabited___closed__1;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandDiv(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26;
lean_object* l___regBuiltin_Lean_Elab_Term_expandGE(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandBind___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_expandIff(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Elab_Term_expandIf___closed__1;
lean_object* l_Lean_Elab_Term_expandMapRev(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_expandseq___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__1;
lean_object* l_Lean_Elab_Term_expandOr___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAdd(lean_object*);
extern lean_object* l_Lean_Meta_evalNat___main___closed__9;
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__28;
lean_object* l___regBuiltin_Lean_Elab_Term_expandCons(lean_object*);
lean_object* l_Lean_Elab_Term_expandMap___closed__2;
lean_object* l_Lean_Elab_Term_expandDollarProj___closed__3;
lean_object* l_Lean_Elab_Term_expandNot(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandBind(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandIff___closed__2;
lean_object* l_Lean_Elab_Term_expandIf___closed__2;
lean_object* l_Lean_Elab_Term_expandOr___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOr___closed__1;
lean_object* l_Lean_Elab_Term_expandIf___closed__8;
lean_object* l___regBuiltin_Lean_Elab_Term_expandseqRight(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__3;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__11;
lean_object* l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__5;
lean_object* l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_8__isMonad_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOr(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__5;
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__2;
extern lean_object* l___private_Lean_Syntax_9__quoteOption___rarg___closed__5;
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__10;
extern lean_object* l_Lean_Elab_Tactic_evalOrelse___closed__1;
lean_object* l_Lean_Elab_Term_expandHave___closed__3;
lean_object* l_Lean_Elab_Term_expandSubtype___closed__5;
lean_object* l_Lean_Elab_Term_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStxStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandShow___closed__8;
lean_object* l_Lean_Elab_Term_expandNe___closed__2;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandEq(lean_object*);
lean_object* l_Lean_Elab_Term_elabParserMacro___closed__1;
extern lean_object* l_Lean_Meta_mkSorry___rarg___lambda__1___closed__4;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__4;
lean_object* l_Lean_Elab_Term_expandNe___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParserMacro___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__9;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__27;
lean_object* l___regBuiltin_Lean_Elab_Term_expandOrM___closed__1;
lean_object* l_Lean_Elab_Term_expandNe___closed__1;
lean_object* l___private_Lean_Meta_AppBuilder_3__mkEqImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_TraceState_Inhabited___closed__1;
lean_object* l_Lean_Elab_Term_expandseqLeft___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_expandDollar(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__9;
lean_object* l_List_beq___main___at___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData___main(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandCons___closed__2;
lean_object* l_Lean_Elab_Term_ExpandFComp___closed__3;
lean_object* l_Lean_Elab_Term_expandDollarProj___closed__2;
lean_object* l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_expandEq___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandOrM___closed__2;
lean_object* l_Lean_Elab_Term_expandBOr(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__2;
lean_object* l_Lean_Elab_Term_expandShow___closed__4;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__8;
lean_object* l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__1;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandSubtype___closed__12;
lean_object* l___regBuiltin_Lean_Elab_Term_ExpandFComp(lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__1;
lean_object* l_Lean_Elab_Term_expandseqRight(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandLT___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandSub___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandLE___closed__3;
lean_object* l_Lean_Elab_Term_expandCons___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandBNot___closed__3;
extern lean_object* l_Lean_mkHole___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandGT___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandHEq___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAndThen(lean_object*);
lean_object* l_Lean_Elab_Term_elabNativeDecide___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__6;
lean_object* l_Lean_Elab_Term_elabNativeDecide___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandIf(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandMul___closed__1;
lean_object* l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_AppBuilder_5__mkEqReflImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandseqRight___closed__4;
extern lean_object* l___private_Lean_Elab_Quotation_10__toPreterm___main___lambda__4___closed__1;
lean_object* l_Lean_Elab_Term_expandseqLeft___closed__1;
lean_object* l_Lean_Elab_Term_expandseq(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandMul___closed__2;
lean_object* l_Lean_Elab_Term_expandMapRev___closed__1;
lean_object* l_Lean_Meta_reduceNative_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_reduceNative_x3f___closed__4;
lean_object* l___regBuiltin_Lean_Elab_Term_elabParserMacro___closed__1;
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___closed__5;
lean_object* l_Lean_Elab_Term_expandInfix___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_optionToExpr___rarg___lambda__1___closed__2;
lean_object* l_Lean_Elab_Term_expandseqLeft___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStxLit(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandOrElse(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandNot___closed__3;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandWhere___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandseqLeft___closed__2;
lean_object* l_Lean_Elab_Term_expandBNe(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__7;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_expandGT___closed__2;
extern lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__8;
lean_object* l_Lean_Elab_Term_expandCons(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandIf___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__10;
lean_object* l_Lean_Elab_Term_expandMap___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_ctorName___closed__11;
lean_object* l_Lean_Elab_Term_expandMap___closed__1;
lean_object* l_Lean_Elab_Term_elabAnonymousCtor___closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBEq(lean_object*);
lean_object* l_Lean_Elab_Term_expandMapRev___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandHEq___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandIff___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandAppend___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandNe(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandSub___closed__1;
lean_object* l_Lean_Elab_Term_expandMapRev___closed__2;
lean_object* l_Lean_Elab_Term_expandMap___closed__4;
lean_object* l_Lean_Elab_Term_elabTParserMacro___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandEquiv(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandLT___closed__1;
extern lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Quotation_2__quoteSyntax___main___spec__1___closed__8;
lean_object* l_Lean_Elab_Term_expandMap(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandGE___closed__3;
lean_object* l_Lean_Elab_Term_expandAnd(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__1;
lean_object* l_Lean_Elab_Term_expandAppend___closed__1;
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__2;
lean_object* l_Lean_Elab_Term_expandseqRight___closed__2;
lean_object* l_Lean_Elab_Term_expandPow___closed__3;
lean_object* l_Lean_Elab_Term_expandseqLeft___closed__3;
lean_object* l_Lean_Elab_Term_expandAppend___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__3;
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandAppend___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabTParserMacro___closed__1;
lean_object* l_Lean_Meta_mkEqRefl___at_Lean_Elab_Term_elabNativeRefl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNativeRefl___closed__3;
lean_object* l_Lean_Elab_Term_expandAnd___closed__2;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__17;
lean_object* l_Lean_Elab_Term_expandAdd___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___at___private_Lean_Elab_Term_7__isTypeApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_10__toPreterm___main___lambda__2___closed__4;
lean_object* l_Lean_Elab_Term_expandseqRight___closed__1;
lean_object* l_Lean_Elab_Term_expandGT___closed__2;
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__43;
lean_object* l_Lean_Elab_Term_expandOrElse(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandseq(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__3;
lean_object* l_Lean_Elab_Term_expandAnd___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBind___closed__2;
extern lean_object* l_Lean_Elab_Term_elabParen___closed__7;
lean_object* l_Lean_Elab_Term_expandseqRight___closed__3;
lean_object* l_Lean_Elab_Term_expandseq___closed__3;
extern lean_object* l_Lean_listToExpr___rarg___closed__6;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandWhere___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandHEq___closed__1;
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandAnd___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandBNe___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_expandBNot(lean_object*);
lean_object* l_Lean_Elab_Term_expandWhere(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__4;
extern lean_object* l_Lean_boolToExpr___lambda__1___closed__2;
lean_object* l_Lean_Elab_Term_expandAndThen(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__5;
lean_object* _init_l_Lean_Elab_Term_expandDollar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("dollar");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandDollar___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandDollar___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandDollar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_46; uint8_t x_47; 
x_46 = l_Lean_Elab_Term_expandDollar___closed__2;
lean_inc(x_1);
x_47 = l_Lean_Syntax_isOfKind(x_1, x_46);
if (x_47 == 0)
{
uint8_t x_48; 
x_48 = 0;
x_4 = x_48;
goto block_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = l_Lean_Syntax_getArgs(x_1);
x_50 = lean_array_get_size(x_49);
lean_dec(x_49);
x_51 = lean_unsigned_to_nat(3u);
x_52 = lean_nat_dec_eq(x_50, x_51);
lean_dec(x_50);
x_4 = x_52;
goto block_45;
}
block_45:
{
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = lean_box(1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_38; uint8_t x_39; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_38 = l_Lean_mkAppStx___closed__8;
lean_inc(x_8);
x_39 = l_Lean_Syntax_isOfKind(x_8, x_38);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = 0;
x_9 = x_40;
goto block_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = l_Lean_Syntax_getArgs(x_8);
x_42 = lean_array_get_size(x_41);
lean_dec(x_41);
x_43 = lean_unsigned_to_nat(2u);
x_44 = lean_nat_dec_eq(x_42, x_43);
lean_dec(x_42);
x_9 = x_44;
goto block_37;
}
block_37:
{
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = l_Array_empty___closed__1;
x_13 = lean_array_push(x_12, x_8);
x_14 = lean_array_push(x_12, x_11);
x_15 = l_Lean_nullKind___closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_array_push(x_13, x_16);
x_18 = l_Lean_mkAppStx___closed__8;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_3);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_21 = l_Lean_Syntax_getArg(x_8, x_7);
x_22 = lean_unsigned_to_nat(1u);
x_23 = l_Lean_Syntax_getArg(x_8, x_22);
lean_dec(x_8);
x_24 = lean_unsigned_to_nat(2u);
x_25 = l_Lean_Syntax_getArg(x_1, x_24);
lean_dec(x_1);
x_26 = l_Lean_Syntax_getArgs(x_23);
lean_dec(x_23);
x_27 = lean_array_push(x_26, x_25);
x_28 = l_Array_empty___closed__1;
x_29 = lean_array_push(x_28, x_21);
x_30 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_27, x_27, x_7, x_28);
lean_dec(x_27);
x_31 = l_Lean_nullKind___closed__2;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_array_push(x_29, x_32);
x_34 = l_Lean_mkAppStx___closed__8;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_3);
return x_36;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_expandDollar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandDollar(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandDollar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDollar___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandDollar(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Elab_Term_expandDollar___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandDollar___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandDollarProj___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("dollarProj");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandDollarProj___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandDollarProj___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandDollarProj___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Expr_ctorName___closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandDollarProj___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_System_FilePath_dirName___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandDollarProj(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Elab_Term_expandDollarProj___closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = l_Lean_Syntax_getArgs(x_1);
x_9 = lean_array_get_size(x_8);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(3u);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = l_Array_empty___closed__1;
x_19 = lean_array_push(x_18, x_15);
x_20 = l_Lean_Elab_Term_expandDollarProj___closed__4;
x_21 = lean_array_push(x_19, x_20);
x_22 = lean_array_push(x_21, x_17);
x_23 = l_Lean_Elab_Term_expandDollarProj___closed__3;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandDollarProj___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandDollarProj(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandDollarProj___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDollarProj___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandDollarProj(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Elab_Term_expandDollarProj___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandDollarProj___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandIf___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Quotation_10__toPreterm___main___lambda__4___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandIf___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandIf___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandIf___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandIf___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandIf___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("dite");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandIf___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_expandIf___closed__4;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_expandIf___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_expandIf___closed__4;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_expandIf___closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_expandIf___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandIf___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandIf___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandIf___closed__7;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandIf___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandIf___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandIf(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_106; uint8_t x_107; 
x_106 = l___private_Lean_Elab_Quotation_6__compileStxMatch___main___closed__13;
lean_inc(x_1);
x_107 = l_Lean_Syntax_isOfKind(x_1, x_106);
if (x_107 == 0)
{
uint8_t x_108; 
x_108 = 0;
x_4 = x_108;
goto block_105;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_109 = l_Lean_Syntax_getArgs(x_1);
x_110 = lean_array_get_size(x_109);
lean_dec(x_109);
x_111 = lean_unsigned_to_nat(7u);
x_112 = lean_nat_dec_eq(x_110, x_111);
lean_dec(x_110);
x_4 = x_112;
goto block_105;
}
block_105:
{
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_38; uint8_t x_39; uint8_t x_40; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_38 = l_Lean_nullKind___closed__2;
lean_inc(x_8);
x_39 = l_Lean_Syntax_isOfKind(x_8, x_38);
if (x_39 == 0)
{
uint8_t x_100; 
x_100 = 0;
x_40 = x_100;
goto block_99;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_101 = l_Lean_Syntax_getArgs(x_8);
x_102 = lean_array_get_size(x_101);
lean_dec(x_101);
x_103 = lean_unsigned_to_nat(2u);
x_104 = lean_nat_dec_eq(x_102, x_103);
lean_dec(x_102);
x_40 = x_104;
goto block_99;
}
block_37:
{
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(1);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(4u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(6u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = l_Lean_Elab_Term_expandIf___closed__1;
x_21 = l_Lean_addMacroScope(x_19, x_20, x_18);
x_22 = l_Lean_SourceInfo_inhabited___closed__1;
x_23 = l___private_Lean_Elab_Quotation_10__toPreterm___main___lambda__4___closed__3;
x_24 = l_Lean_Elab_Term_expandIf___closed__3;
x_25 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_21);
lean_ctor_set(x_25, 3, x_24);
x_26 = l_Array_empty___closed__1;
x_27 = lean_array_push(x_26, x_25);
x_28 = lean_array_push(x_26, x_13);
x_29 = lean_array_push(x_28, x_15);
x_30 = lean_array_push(x_29, x_17);
x_31 = l_Lean_nullKind___closed__2;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_array_push(x_27, x_32);
x_34 = l_Lean_mkAppStx___closed__8;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_3);
return x_36;
}
}
block_99:
{
if (x_40 == 0)
{
if (x_39 == 0)
{
uint8_t x_41; 
lean_dec(x_8);
x_41 = 0;
x_9 = x_41;
goto block_37;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = l_Lean_Syntax_getArgs(x_8);
lean_dec(x_8);
x_43 = lean_array_get_size(x_42);
lean_dec(x_42);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_nat_dec_eq(x_43, x_44);
lean_dec(x_43);
x_9 = x_45;
goto block_37;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_46 = lean_unsigned_to_nat(0u);
x_47 = l_Lean_Syntax_getArg(x_8, x_46);
lean_dec(x_8);
x_48 = lean_unsigned_to_nat(2u);
x_49 = l_Lean_Syntax_getArg(x_1, x_48);
x_50 = lean_unsigned_to_nat(4u);
x_51 = l_Lean_Syntax_getArg(x_1, x_50);
x_52 = lean_unsigned_to_nat(6u);
x_53 = l_Lean_Syntax_getArg(x_1, x_52);
lean_dec(x_1);
x_54 = lean_ctor_get(x_2, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_2, 0);
lean_inc(x_55);
lean_dec(x_2);
x_56 = l_Lean_Elab_Term_expandIf___closed__7;
x_57 = l_Lean_addMacroScope(x_55, x_56, x_54);
x_58 = l_Lean_SourceInfo_inhabited___closed__1;
x_59 = l_Lean_Elab_Term_expandIf___closed__6;
x_60 = l_Lean_Elab_Term_expandIf___closed__9;
x_61 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
lean_ctor_set(x_61, 2, x_57);
lean_ctor_set(x_61, 3, x_60);
x_62 = l_Array_empty___closed__1;
x_63 = lean_array_push(x_62, x_61);
x_64 = lean_array_push(x_62, x_49);
x_65 = lean_array_push(x_62, x_47);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_38);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_68 = lean_array_push(x_67, x_66);
x_69 = l_Lean_Elab_Term_expandCDot_x3f___closed__6;
x_70 = lean_array_push(x_68, x_69);
lean_inc(x_70);
x_71 = lean_array_push(x_70, x_51);
x_72 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_array_push(x_62, x_73);
x_75 = l___private_Lean_Elab_Quotation_8__letBindRhss___main___closed__17;
x_76 = lean_array_push(x_74, x_75);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_38);
lean_ctor_set(x_77, 1, x_76);
x_78 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__28;
x_79 = lean_array_push(x_78, x_77);
x_80 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__45;
x_81 = lean_array_push(x_79, x_80);
x_82 = l___private_Lean_Elab_Term_5__hasCDot___main___closed__1;
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = lean_array_push(x_64, x_83);
x_85 = lean_array_push(x_70, x_53);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_72);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_array_push(x_62, x_86);
x_88 = lean_array_push(x_87, x_75);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_38);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_array_push(x_78, x_89);
x_91 = lean_array_push(x_90, x_80);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_82);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_array_push(x_84, x_92);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_38);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_array_push(x_63, x_94);
x_96 = l_Lean_mkAppStx___closed__8;
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_3);
return x_98;
}
}
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandIf___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandIf), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandIf(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___private_Lean_Elab_Quotation_6__compileStxMatch___main___closed__13;
x_4 = l___regBuiltin_Lean_Elab_Term_expandIf___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Subtype");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_expandSubtype___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_expandSubtype___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_expandSubtype___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandSubtype___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandSubtype___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandSubtype___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_2 = l___private_Lean_Elab_Quotation_5__explodeHeadPat___lambda__1___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_elabParen___closed__7;
x_2 = l_Lean_Elab_Term_expandSubtype___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_expandSubtype___closed__8;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nullKind___closed__2;
x_2 = l_Lean_Elab_Term_expandSubtype___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("subtype");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSubtype___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandSubtype___closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandSubtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_136; uint8_t x_137; 
x_136 = l_Lean_Elab_Term_expandSubtype___closed__12;
lean_inc(x_1);
x_137 = l_Lean_Syntax_isOfKind(x_1, x_136);
if (x_137 == 0)
{
uint8_t x_138; 
x_138 = 0;
x_4 = x_138;
goto block_135;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_139 = l_Lean_Syntax_getArgs(x_1);
x_140 = lean_array_get_size(x_139);
lean_dec(x_139);
x_141 = lean_unsigned_to_nat(6u);
x_142 = lean_nat_dec_eq(x_140, x_141);
lean_dec(x_140);
x_4 = x_142;
goto block_135;
}
block_135:
{
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_60; uint8_t x_61; uint8_t x_62; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = lean_unsigned_to_nat(2u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_60 = l_Lean_nullKind___closed__2;
lean_inc(x_10);
x_61 = l_Lean_Syntax_isOfKind(x_10, x_60);
if (x_61 == 0)
{
uint8_t x_131; 
x_131 = 0;
x_62 = x_131;
goto block_130;
}
else
{
lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_132 = l_Lean_Syntax_getArgs(x_10);
x_133 = lean_array_get_size(x_132);
lean_dec(x_132);
x_134 = lean_nat_dec_eq(x_133, x_7);
lean_dec(x_133);
x_62 = x_134;
goto block_130;
}
block_59:
{
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_14 = lean_unsigned_to_nat(4u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_dec(x_2);
x_18 = l_Lean_Elab_Term_expandSubtype___closed__4;
x_19 = l_Lean_addMacroScope(x_17, x_18, x_16);
x_20 = l_Lean_SourceInfo_inhabited___closed__1;
x_21 = l_Lean_Elab_Term_expandSubtype___closed__3;
x_22 = l_Lean_Elab_Term_expandSubtype___closed__6;
x_23 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_19);
lean_ctor_set(x_23, 3, x_22);
x_24 = l_Array_empty___closed__1;
x_25 = lean_array_push(x_24, x_23);
x_26 = lean_array_push(x_24, x_8);
x_27 = l_Lean_Elab_Term_expandSubtype___closed__10;
x_28 = lean_array_push(x_26, x_27);
x_29 = l_Lean_nullKind___closed__2;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__28;
x_32 = lean_array_push(x_31, x_30);
x_33 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__45;
x_34 = lean_array_push(x_32, x_33);
x_35 = l___private_Lean_Elab_Term_5__hasCDot___main___closed__1;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_array_push(x_24, x_36);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_29);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_40 = lean_array_push(x_39, x_38);
x_41 = l_Lean_Elab_Term_expandCDot_x3f___closed__6;
x_42 = lean_array_push(x_40, x_41);
x_43 = lean_array_push(x_42, x_15);
x_44 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = lean_array_push(x_24, x_45);
x_47 = l___private_Lean_Elab_Quotation_8__letBindRhss___main___closed__17;
x_48 = lean_array_push(x_46, x_47);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_29);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_array_push(x_31, x_49);
x_51 = lean_array_push(x_50, x_33);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_35);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_array_push(x_24, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_29);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_array_push(x_25, x_54);
x_56 = l_Lean_mkAppStx___closed__8;
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_3);
return x_58;
}
}
block_130:
{
if (x_62 == 0)
{
if (x_61 == 0)
{
uint8_t x_63; 
lean_dec(x_10);
x_63 = 0;
x_11 = x_63;
goto block_59;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_64 = l_Lean_Syntax_getArgs(x_10);
lean_dec(x_10);
x_65 = lean_array_get_size(x_64);
lean_dec(x_64);
x_66 = lean_unsigned_to_nat(0u);
x_67 = lean_nat_dec_eq(x_65, x_66);
lean_dec(x_65);
x_11 = x_67;
goto block_59;
}
}
else
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_124; uint8_t x_125; 
x_68 = lean_unsigned_to_nat(0u);
x_69 = l_Lean_Syntax_getArg(x_10, x_68);
lean_dec(x_10);
x_124 = l_Lean_Elab_Term_elabLetDeclCore___closed__6;
lean_inc(x_69);
x_125 = l_Lean_Syntax_isOfKind(x_69, x_124);
if (x_125 == 0)
{
uint8_t x_126; 
x_126 = 0;
x_70 = x_126;
goto block_123;
}
else
{
lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_127 = l_Lean_Syntax_getArgs(x_69);
x_128 = lean_array_get_size(x_127);
lean_dec(x_127);
x_129 = lean_nat_dec_eq(x_128, x_9);
lean_dec(x_128);
x_70 = x_129;
goto block_123;
}
block_123:
{
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_69);
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_71 = lean_box(1);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_3);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_73 = l_Lean_Syntax_getArg(x_69, x_7);
lean_dec(x_69);
x_74 = lean_unsigned_to_nat(4u);
x_75 = l_Lean_Syntax_getArg(x_1, x_74);
lean_dec(x_1);
x_76 = lean_ctor_get(x_2, 1);
lean_inc(x_76);
x_77 = lean_ctor_get(x_2, 0);
lean_inc(x_77);
lean_dec(x_2);
x_78 = l_Lean_Elab_Term_expandSubtype___closed__4;
x_79 = l_Lean_addMacroScope(x_77, x_78, x_76);
x_80 = l_Lean_SourceInfo_inhabited___closed__1;
x_81 = l_Lean_Elab_Term_expandSubtype___closed__3;
x_82 = l_Lean_Elab_Term_expandSubtype___closed__6;
x_83 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
lean_ctor_set(x_83, 2, x_79);
lean_ctor_set(x_83, 3, x_82);
x_84 = l_Array_empty___closed__1;
x_85 = lean_array_push(x_84, x_83);
x_86 = lean_array_push(x_84, x_8);
x_87 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_88 = lean_array_push(x_87, x_73);
x_89 = l_Lean_Elab_Term_elabParen___closed__7;
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
x_91 = lean_array_push(x_84, x_90);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_60);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_array_push(x_86, x_92);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_60);
lean_ctor_set(x_94, 1, x_93);
x_95 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__28;
x_96 = lean_array_push(x_95, x_94);
x_97 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__45;
x_98 = lean_array_push(x_96, x_97);
x_99 = l___private_Lean_Elab_Term_5__hasCDot___main___closed__1;
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_98);
x_101 = lean_array_push(x_84, x_100);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_60);
lean_ctor_set(x_102, 1, x_101);
x_103 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_104 = lean_array_push(x_103, x_102);
x_105 = l_Lean_Elab_Term_expandCDot_x3f___closed__6;
x_106 = lean_array_push(x_104, x_105);
x_107 = lean_array_push(x_106, x_75);
x_108 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
x_110 = lean_array_push(x_84, x_109);
x_111 = l___private_Lean_Elab_Quotation_8__letBindRhss___main___closed__17;
x_112 = lean_array_push(x_110, x_111);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_60);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_array_push(x_95, x_113);
x_115 = lean_array_push(x_114, x_97);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_99);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_array_push(x_84, x_116);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_60);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_array_push(x_85, x_118);
x_120 = l_Lean_mkAppStx___closed__8;
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_3);
return x_122;
}
}
}
}
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandSubtype___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandSubtype), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandSubtype(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Elab_Term_expandSubtype___closed__12;
x_4 = l___regBuiltin_Lean_Elab_Term_expandSubtype___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid constructor ⟨...⟩, expected type must be known");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabAnonymousCtor___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabAnonymousCtor___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid constructor ⟨...⟩, expected type must be a structure ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabAnonymousCtor___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabAnonymousCtor___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("anonymousCtor");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_elabAnonymousCtor___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabAnonymousCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_184; uint8_t x_185; 
x_184 = l_Lean_Elab_Term_elabAnonymousCtor___closed__8;
lean_inc(x_1);
x_185 = l_Lean_Syntax_isOfKind(x_1, x_184);
if (x_185 == 0)
{
uint8_t x_186; 
x_186 = 0;
x_10 = x_186;
goto block_183;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_187 = l_Lean_Syntax_getArgs(x_1);
x_188 = lean_array_get_size(x_187);
lean_dec(x_187);
x_189 = lean_unsigned_to_nat(3u);
x_190 = lean_nat_dec_eq(x_188, x_189);
lean_dec(x_188);
x_10 = x_190;
goto block_183;
}
block_183:
{
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = l_Lean_Syntax_getArgs(x_13);
lean_dec(x_13);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_Elab_Term_elabAnonymousCtor___closed__3;
x_18 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_inc(x_3);
x_21 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Expr_consumeMData___main(x_22);
lean_dec(x_22);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_25 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_7__isTypeApp_x3f___spec__1(x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Expr_getAppFn___main(x_26);
if (lean_obj_tag(x_28) == 4)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_st_ref_get(x_8, x_27);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_environment_find(x_33, x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_26);
x_36 = l_Lean_indentExpr(x_35);
x_37 = l_Lean_Elab_Term_elabAnonymousCtor___closed__6;
x_38 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_39;
}
else
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_34, 0);
lean_inc(x_40);
lean_dec(x_34);
if (lean_obj_tag(x_40) == 5)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_ctor_get_uint8(x_41, sizeof(void*)*5);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 4);
lean_inc(x_43);
lean_dec(x_41);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_44 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_44, 0, x_26);
x_45 = l_Lean_indentExpr(x_44);
x_46 = l_Lean_Elab_Term_elabAnonymousCtor___closed__6;
x_47 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_48;
}
else
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_43, 1);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_43);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_43, 0);
x_52 = lean_ctor_get(x_43, 1);
lean_dec(x_52);
lean_inc(x_3);
x_53 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_51, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
if (lean_obj_tag(x_54) == 6)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
lean_dec(x_26);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_55);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_58);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_ctor_get(x_56, 0);
lean_inc(x_61);
lean_dec(x_56);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
lean_dec(x_61);
x_63 = l_Lean_mkCIdentFrom(x_1, x_62);
x_64 = l_Array_empty___closed__1;
x_65 = lean_array_push(x_64, x_63);
x_66 = lean_unsigned_to_nat(2u);
x_67 = lean_unsigned_to_nat(0u);
x_68 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_66, x_14, x_67, x_64);
lean_dec(x_14);
x_69 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_68, x_68, x_67, x_64);
lean_dec(x_68);
x_70 = l_Lean_nullKind___closed__2;
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = lean_array_push(x_65, x_71);
x_73 = l_Lean_mkAppStx___closed__8;
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = !lean_is_exclusive(x_3);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; 
x_76 = lean_ctor_get(x_3, 6);
lean_inc(x_74);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_1);
lean_ctor_set(x_77, 1, x_74);
lean_ctor_set(x_43, 1, x_76);
lean_ctor_set(x_43, 0, x_77);
lean_ctor_set(x_3, 6, x_43);
x_78 = 1;
x_79 = l_Lean_Elab_Term_elabTerm(x_74, x_2, x_78, x_3, x_4, x_5, x_6, x_7, x_8, x_60);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; uint8_t x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; lean_object* x_94; 
x_80 = lean_ctor_get(x_3, 0);
x_81 = lean_ctor_get(x_3, 1);
x_82 = lean_ctor_get(x_3, 2);
x_83 = lean_ctor_get(x_3, 3);
x_84 = lean_ctor_get(x_3, 4);
x_85 = lean_ctor_get(x_3, 5);
x_86 = lean_ctor_get(x_3, 6);
x_87 = lean_ctor_get(x_3, 7);
x_88 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_89 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_90 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_3);
lean_inc(x_74);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_1);
lean_ctor_set(x_91, 1, x_74);
lean_ctor_set(x_43, 1, x_86);
lean_ctor_set(x_43, 0, x_91);
x_92 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_92, 0, x_80);
lean_ctor_set(x_92, 1, x_81);
lean_ctor_set(x_92, 2, x_82);
lean_ctor_set(x_92, 3, x_83);
lean_ctor_set(x_92, 4, x_84);
lean_ctor_set(x_92, 5, x_85);
lean_ctor_set(x_92, 6, x_43);
lean_ctor_set(x_92, 7, x_87);
lean_ctor_set_uint8(x_92, sizeof(void*)*8, x_88);
lean_ctor_set_uint8(x_92, sizeof(void*)*8 + 1, x_89);
lean_ctor_set_uint8(x_92, sizeof(void*)*8 + 2, x_90);
x_93 = 1;
x_94 = l_Lean_Elab_Term_elabTerm(x_74, x_2, x_93, x_92, x_4, x_5, x_6, x_7, x_8, x_60);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_54);
lean_free_object(x_43);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_95 = lean_ctor_get(x_53, 1);
lean_inc(x_95);
lean_dec(x_53);
x_96 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_96, 0, x_26);
x_97 = l_Lean_indentExpr(x_96);
x_98 = l_Lean_Elab_Term_elabAnonymousCtor___closed__6;
x_99 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_99, x_3, x_4, x_5, x_6, x_7, x_8, x_95);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_100;
}
}
else
{
uint8_t x_101; 
lean_free_object(x_43);
lean_dec(x_26);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_101 = !lean_is_exclusive(x_53);
if (x_101 == 0)
{
return x_53;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_53, 0);
x_103 = lean_ctor_get(x_53, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_53);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
lean_object* x_105; lean_object* x_106; 
x_105 = lean_ctor_get(x_43, 0);
lean_inc(x_105);
lean_dec(x_43);
lean_inc(x_3);
x_106 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_105, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
if (lean_obj_tag(x_107) == 6)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; uint8_t x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; lean_object* x_144; 
lean_dec(x_26);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_109 = lean_ctor_get(x_107, 0);
lean_inc(x_109);
lean_dec(x_107);
x_110 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_108);
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
lean_dec(x_110);
x_112 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_111);
x_113 = lean_ctor_get(x_112, 1);
lean_inc(x_113);
lean_dec(x_112);
x_114 = lean_ctor_get(x_109, 0);
lean_inc(x_114);
lean_dec(x_109);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
lean_dec(x_114);
x_116 = l_Lean_mkCIdentFrom(x_1, x_115);
x_117 = l_Array_empty___closed__1;
x_118 = lean_array_push(x_117, x_116);
x_119 = lean_unsigned_to_nat(2u);
x_120 = lean_unsigned_to_nat(0u);
x_121 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_119, x_14, x_120, x_117);
lean_dec(x_14);
x_122 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_121, x_121, x_120, x_117);
lean_dec(x_121);
x_123 = l_Lean_nullKind___closed__2;
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
x_125 = lean_array_push(x_118, x_124);
x_126 = l_Lean_mkAppStx___closed__8;
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_125);
x_128 = lean_ctor_get(x_3, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_3, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_3, 2);
lean_inc(x_130);
x_131 = lean_ctor_get(x_3, 3);
lean_inc(x_131);
x_132 = lean_ctor_get(x_3, 4);
lean_inc(x_132);
x_133 = lean_ctor_get(x_3, 5);
lean_inc(x_133);
x_134 = lean_ctor_get(x_3, 6);
lean_inc(x_134);
x_135 = lean_ctor_get(x_3, 7);
lean_inc(x_135);
x_136 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_137 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_138 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_139 = x_3;
} else {
 lean_dec_ref(x_3);
 x_139 = lean_box(0);
}
lean_inc(x_127);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_1);
lean_ctor_set(x_140, 1, x_127);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_134);
if (lean_is_scalar(x_139)) {
 x_142 = lean_alloc_ctor(0, 8, 3);
} else {
 x_142 = x_139;
}
lean_ctor_set(x_142, 0, x_128);
lean_ctor_set(x_142, 1, x_129);
lean_ctor_set(x_142, 2, x_130);
lean_ctor_set(x_142, 3, x_131);
lean_ctor_set(x_142, 4, x_132);
lean_ctor_set(x_142, 5, x_133);
lean_ctor_set(x_142, 6, x_141);
lean_ctor_set(x_142, 7, x_135);
lean_ctor_set_uint8(x_142, sizeof(void*)*8, x_136);
lean_ctor_set_uint8(x_142, sizeof(void*)*8 + 1, x_137);
lean_ctor_set_uint8(x_142, sizeof(void*)*8 + 2, x_138);
x_143 = 1;
x_144 = l_Lean_Elab_Term_elabTerm(x_127, x_2, x_143, x_142, x_4, x_5, x_6, x_7, x_8, x_113);
return x_144;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_107);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_145 = lean_ctor_get(x_106, 1);
lean_inc(x_145);
lean_dec(x_106);
x_146 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_146, 0, x_26);
x_147 = l_Lean_indentExpr(x_146);
x_148 = l_Lean_Elab_Term_elabAnonymousCtor___closed__6;
x_149 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_150 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_149, x_3, x_4, x_5, x_6, x_7, x_8, x_145);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_26);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_151 = lean_ctor_get(x_106, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_106, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_153 = x_106;
} else {
 lean_dec_ref(x_106);
 x_153 = lean_box(0);
}
if (lean_is_scalar(x_153)) {
 x_154 = lean_alloc_ctor(1, 2, 0);
} else {
 x_154 = x_153;
}
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_152);
return x_154;
}
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_49);
lean_dec(x_43);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_155 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_155, 0, x_26);
x_156 = l_Lean_indentExpr(x_155);
x_157 = l_Lean_Elab_Term_elabAnonymousCtor___closed__6;
x_158 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_156);
x_159 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_158, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_159;
}
}
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_41);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_160 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_160, 0, x_26);
x_161 = l_Lean_indentExpr(x_160);
x_162 = l_Lean_Elab_Term_elabAnonymousCtor___closed__6;
x_163 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_163, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_164;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_40);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_165 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_165, 0, x_26);
x_166 = l_Lean_indentExpr(x_165);
x_167 = l_Lean_Elab_Term_elabAnonymousCtor___closed__6;
x_168 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
x_169 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_168, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_169;
}
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_28);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_170 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_170, 0, x_26);
x_171 = l_Lean_indentExpr(x_170);
x_172 = l_Lean_Elab_Term_elabAnonymousCtor___closed__6;
x_173 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_171);
x_174 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_173, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_174;
}
}
else
{
uint8_t x_175; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_175 = !lean_is_exclusive(x_25);
if (x_175 == 0)
{
return x_25;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_25, 0);
x_177 = lean_ctor_get(x_25, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_25);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
}
else
{
uint8_t x_179; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_179 = !lean_is_exclusive(x_15);
if (x_179 == 0)
{
return x_15;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_15, 0);
x_181 = lean_ctor_get(x_15, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_15);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabAnonymousCtor), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Elab_Term_elabAnonymousCtor___closed__8;
x_4 = l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandShow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("this");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandShow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandShow___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandShow___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_Elab_Term_elabLetDeclCore___closed__7;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandShow___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_expandShow___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandShow___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("fromTerm");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandShow___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandShow___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandShow___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("show");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandShow___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandShow___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandShow(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_53; uint8_t x_54; 
x_53 = l_Lean_Elab_Term_expandShow___closed__8;
lean_inc(x_1);
x_54 = l_Lean_Syntax_isOfKind(x_1, x_53);
if (x_54 == 0)
{
uint8_t x_55; 
x_55 = 0;
x_4 = x_55;
goto block_52;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_56 = l_Lean_Syntax_getArgs(x_1);
x_57 = lean_array_get_size(x_56);
lean_dec(x_56);
x_58 = lean_unsigned_to_nat(3u);
x_59 = lean_nat_dec_eq(x_57, x_58);
lean_dec(x_57);
x_4 = x_59;
goto block_52;
}
block_52:
{
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = lean_box(1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_46; uint8_t x_47; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = lean_unsigned_to_nat(2u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_46 = l_Lean_Elab_Term_expandShow___closed__6;
lean_inc(x_10);
x_47 = l_Lean_Syntax_isOfKind(x_10, x_46);
if (x_47 == 0)
{
uint8_t x_48; 
x_48 = 0;
x_11 = x_48;
goto block_45;
}
else
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = l_Lean_Syntax_getArgs(x_10);
x_50 = lean_array_get_size(x_49);
lean_dec(x_49);
x_51 = lean_nat_dec_eq(x_50, x_9);
lean_dec(x_50);
x_11 = x_51;
goto block_45;
}
block_45:
{
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_14 = l_Lean_Syntax_getArg(x_10, x_7);
lean_dec(x_10);
x_15 = l_Lean_Elab_Term_expandShow___closed__2;
x_16 = l_Lean_mkIdentFrom(x_1, x_15);
lean_dec(x_1);
x_17 = l_Array_empty___closed__1;
lean_inc(x_16);
x_18 = lean_array_push(x_17, x_16);
x_19 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__44;
x_20 = lean_array_push(x_18, x_19);
x_21 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_22 = lean_array_push(x_21, x_8);
x_23 = l_Lean_Elab_Term_elabLetDeclCore___closed__6;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_array_push(x_17, x_24);
x_26 = l_Lean_nullKind___closed__2;
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_array_push(x_20, x_27);
x_29 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
x_30 = lean_array_push(x_28, x_29);
x_31 = lean_array_push(x_30, x_14);
x_32 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__8;
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_array_push(x_17, x_33);
x_35 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__6;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_Elab_Term_expandShow___closed__4;
x_38 = lean_array_push(x_37, x_36);
x_39 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
x_40 = lean_array_push(x_38, x_39);
x_41 = lean_array_push(x_40, x_16);
x_42 = l_Lean_Elab_Term_elabLetDeclCore___closed__8;
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_3);
return x_44;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_expandShow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandShow(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandShow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandShow___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandShow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Elab_Term_expandShow___closed__8;
x_4 = l___regBuiltin_Lean_Elab_Term_expandShow___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandHave___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("haveAssign");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandHave___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandHave___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandHave___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("have");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandHave___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandHave___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandHave(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_200; uint8_t x_201; 
x_200 = l_Lean_Elab_Term_expandHave___closed__4;
lean_inc(x_1);
x_201 = l_Lean_Syntax_isOfKind(x_1, x_200);
if (x_201 == 0)
{
uint8_t x_202; 
x_202 = 0;
x_4 = x_202;
goto block_199;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_203 = l_Lean_Syntax_getArgs(x_1);
x_204 = lean_array_get_size(x_203);
lean_dec(x_203);
x_205 = lean_unsigned_to_nat(6u);
x_206 = lean_nat_dec_eq(x_204, x_205);
lean_dec(x_204);
x_4 = x_206;
goto block_199;
}
block_199:
{
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = lean_box(1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_99; uint8_t x_100; uint8_t x_101; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_99 = l_Lean_nullKind___closed__2;
lean_inc(x_8);
x_100 = l_Lean_Syntax_isOfKind(x_8, x_99);
if (x_100 == 0)
{
uint8_t x_194; 
x_194 = 0;
x_101 = x_194;
goto block_193;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; 
x_195 = l_Lean_Syntax_getArgs(x_8);
x_196 = lean_array_get_size(x_195);
lean_dec(x_195);
x_197 = lean_unsigned_to_nat(0u);
x_198 = lean_nat_dec_eq(x_196, x_197);
lean_dec(x_196);
x_101 = x_198;
goto block_193;
}
block_98:
{
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_1);
x_10 = lean_box(1);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_53; lean_object* x_92; uint8_t x_93; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_8, x_12);
lean_dec(x_8);
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(3u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_92 = l_Lean_Elab_Term_expandShow___closed__6;
lean_inc(x_17);
x_93 = l_Lean_Syntax_isOfKind(x_17, x_92);
if (x_93 == 0)
{
uint8_t x_94; 
x_94 = 0;
x_53 = x_94;
goto block_91;
}
else
{
lean_object* x_95; lean_object* x_96; uint8_t x_97; 
x_95 = l_Lean_Syntax_getArgs(x_17);
x_96 = lean_array_get_size(x_95);
lean_dec(x_95);
x_97 = lean_nat_dec_eq(x_96, x_14);
lean_dec(x_96);
x_53 = x_97;
goto block_91;
}
block_52:
{
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_1);
x_19 = lean_box(1);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_3);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_21 = l_Lean_Syntax_getArg(x_17, x_7);
lean_dec(x_17);
x_22 = lean_unsigned_to_nat(5u);
x_23 = l_Lean_Syntax_getArg(x_1, x_22);
lean_dec(x_1);
x_24 = l_Array_empty___closed__1;
x_25 = lean_array_push(x_24, x_13);
x_26 = l___private_Lean_Elab_Quotation_8__letBindRhss___main___closed__17;
x_27 = lean_array_push(x_25, x_26);
x_28 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_29 = lean_array_push(x_28, x_15);
x_30 = l_Lean_Elab_Term_elabLetDeclCore___closed__6;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_array_push(x_24, x_31);
x_33 = l_Lean_nullKind___closed__2;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_array_push(x_27, x_34);
x_36 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
x_37 = lean_array_push(x_35, x_36);
x_38 = lean_array_push(x_37, x_21);
x_39 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__8;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = lean_array_push(x_24, x_40);
x_42 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__6;
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_Lean_Elab_Term_expandShow___closed__4;
x_45 = lean_array_push(x_44, x_43);
x_46 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
x_47 = lean_array_push(x_45, x_46);
x_48 = lean_array_push(x_47, x_23);
x_49 = l_Lean_Elab_Term_elabLetDeclCore___closed__8;
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_3);
return x_51;
}
}
block_91:
{
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = l_Lean_Elab_Term_expandHave___closed__2;
lean_inc(x_17);
x_55 = l_Lean_Syntax_isOfKind(x_17, x_54);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = 0;
x_18 = x_56;
goto block_52;
}
else
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_57 = l_Lean_Syntax_getArgs(x_17);
x_58 = lean_array_get_size(x_57);
lean_dec(x_57);
x_59 = lean_nat_dec_eq(x_58, x_14);
lean_dec(x_58);
x_18 = x_59;
goto block_52;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_60 = l_Lean_Syntax_getArg(x_17, x_7);
lean_dec(x_17);
x_61 = lean_unsigned_to_nat(5u);
x_62 = l_Lean_Syntax_getArg(x_1, x_61);
lean_dec(x_1);
x_63 = l_Array_empty___closed__1;
x_64 = lean_array_push(x_63, x_13);
x_65 = l___private_Lean_Elab_Quotation_8__letBindRhss___main___closed__17;
x_66 = lean_array_push(x_64, x_65);
x_67 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_68 = lean_array_push(x_67, x_15);
x_69 = l_Lean_Elab_Term_elabLetDeclCore___closed__6;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = lean_array_push(x_63, x_70);
x_72 = l_Lean_nullKind___closed__2;
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_array_push(x_66, x_73);
x_75 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
x_76 = lean_array_push(x_74, x_75);
x_77 = lean_array_push(x_76, x_60);
x_78 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__8;
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = lean_array_push(x_63, x_79);
x_81 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__6;
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = l_Lean_Elab_Term_expandShow___closed__4;
x_84 = lean_array_push(x_83, x_82);
x_85 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
x_86 = lean_array_push(x_84, x_85);
x_87 = lean_array_push(x_86, x_62);
x_88 = l_Lean_Elab_Term_elabLetDeclCore___closed__8;
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_3);
return x_90;
}
}
}
}
block_193:
{
if (x_101 == 0)
{
if (x_100 == 0)
{
uint8_t x_102; 
x_102 = 0;
x_9 = x_102;
goto block_98;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_103 = l_Lean_Syntax_getArgs(x_8);
x_104 = lean_array_get_size(x_103);
lean_dec(x_103);
x_105 = lean_unsigned_to_nat(2u);
x_106 = lean_nat_dec_eq(x_104, x_105);
lean_dec(x_104);
x_9 = x_106;
goto block_98;
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; uint8_t x_147; lean_object* x_187; uint8_t x_188; 
lean_dec(x_8);
x_107 = lean_unsigned_to_nat(2u);
x_108 = l_Lean_Syntax_getArg(x_1, x_107);
x_109 = lean_unsigned_to_nat(3u);
x_110 = l_Lean_Syntax_getArg(x_1, x_109);
x_187 = l_Lean_Elab_Term_expandShow___closed__6;
lean_inc(x_110);
x_188 = l_Lean_Syntax_isOfKind(x_110, x_187);
if (x_188 == 0)
{
uint8_t x_189; 
x_189 = 0;
x_147 = x_189;
goto block_186;
}
else
{
lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_190 = l_Lean_Syntax_getArgs(x_110);
x_191 = lean_array_get_size(x_190);
lean_dec(x_190);
x_192 = lean_nat_dec_eq(x_191, x_107);
lean_dec(x_191);
x_147 = x_192;
goto block_186;
}
block_146:
{
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; 
lean_dec(x_110);
lean_dec(x_108);
lean_dec(x_1);
x_112 = lean_box(1);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_3);
return x_113;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_114 = l_Lean_Syntax_getArg(x_110, x_7);
lean_dec(x_110);
x_115 = lean_unsigned_to_nat(5u);
x_116 = l_Lean_Syntax_getArg(x_1, x_115);
x_117 = l_Lean_Elab_Term_expandShow___closed__2;
x_118 = l_Lean_mkIdentFrom(x_1, x_117);
lean_dec(x_1);
x_119 = l_Array_empty___closed__1;
x_120 = lean_array_push(x_119, x_118);
x_121 = l___private_Lean_Elab_Quotation_8__letBindRhss___main___closed__17;
x_122 = lean_array_push(x_120, x_121);
x_123 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_124 = lean_array_push(x_123, x_108);
x_125 = l_Lean_Elab_Term_elabLetDeclCore___closed__6;
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_124);
x_127 = lean_array_push(x_119, x_126);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_99);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_array_push(x_122, x_128);
x_130 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
x_131 = lean_array_push(x_129, x_130);
x_132 = lean_array_push(x_131, x_114);
x_133 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__8;
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
x_135 = lean_array_push(x_119, x_134);
x_136 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__6;
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
x_138 = l_Lean_Elab_Term_expandShow___closed__4;
x_139 = lean_array_push(x_138, x_137);
x_140 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
x_141 = lean_array_push(x_139, x_140);
x_142 = lean_array_push(x_141, x_116);
x_143 = l_Lean_Elab_Term_elabLetDeclCore___closed__8;
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_142);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_3);
return x_145;
}
}
block_186:
{
if (x_147 == 0)
{
lean_object* x_148; uint8_t x_149; 
x_148 = l_Lean_Elab_Term_expandHave___closed__2;
lean_inc(x_110);
x_149 = l_Lean_Syntax_isOfKind(x_110, x_148);
if (x_149 == 0)
{
uint8_t x_150; 
x_150 = 0;
x_111 = x_150;
goto block_146;
}
else
{
lean_object* x_151; lean_object* x_152; uint8_t x_153; 
x_151 = l_Lean_Syntax_getArgs(x_110);
x_152 = lean_array_get_size(x_151);
lean_dec(x_151);
x_153 = lean_nat_dec_eq(x_152, x_107);
lean_dec(x_152);
x_111 = x_153;
goto block_146;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_154 = l_Lean_Syntax_getArg(x_110, x_7);
lean_dec(x_110);
x_155 = lean_unsigned_to_nat(5u);
x_156 = l_Lean_Syntax_getArg(x_1, x_155);
x_157 = l_Lean_Elab_Term_expandShow___closed__2;
x_158 = l_Lean_mkIdentFrom(x_1, x_157);
lean_dec(x_1);
x_159 = l_Array_empty___closed__1;
x_160 = lean_array_push(x_159, x_158);
x_161 = l___private_Lean_Elab_Quotation_8__letBindRhss___main___closed__17;
x_162 = lean_array_push(x_160, x_161);
x_163 = l_Lean_Elab_Term_elabArrow___lambda__1___closed__4;
x_164 = lean_array_push(x_163, x_108);
x_165 = l_Lean_Elab_Term_elabLetDeclCore___closed__6;
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_164);
x_167 = lean_array_push(x_159, x_166);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_99);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_array_push(x_162, x_168);
x_170 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
x_171 = lean_array_push(x_169, x_170);
x_172 = lean_array_push(x_171, x_154);
x_173 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__8;
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
x_175 = lean_array_push(x_159, x_174);
x_176 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__6;
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_175);
x_178 = l_Lean_Elab_Term_expandShow___closed__4;
x_179 = lean_array_push(x_178, x_177);
x_180 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
x_181 = lean_array_push(x_179, x_180);
x_182 = lean_array_push(x_181, x_156);
x_183 = l_Lean_Elab_Term_elabLetDeclCore___closed__8;
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_182);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_3);
return x_185;
}
}
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_expandHave___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandHave(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandHave___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandHave___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandHave(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Elab_Term_expandHave___closed__4;
x_4 = l___regBuiltin_Lean_Elab_Term_expandHave___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandWhere___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_5, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_5, x_12);
lean_dec(x_5);
x_14 = lean_array_fget(x_4, x_13);
x_15 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__1;
lean_inc(x_2);
x_16 = lean_name_mk_string(x_2, x_15);
x_17 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__3;
lean_inc(x_3);
x_18 = lean_array_push(x_3, x_17);
x_19 = lean_array_push(x_18, x_14);
x_20 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
x_21 = lean_array_push(x_19, x_20);
x_22 = lean_array_push(x_21, x_7);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_22);
x_5 = x_13;
x_6 = lean_box(0);
x_7 = x_23;
goto _start;
}
else
{
lean_object* x_25; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_7);
lean_ctor_set(x_25, 1, x_9);
return x_25;
}
}
}
lean_object* _init_l_Lean_Elab_Term_expandWhere___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("where");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandWhere___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandWhere___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandWhere(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_Elab_Term_expandWhere___closed__2;
lean_inc(x_1);
x_19 = l_Lean_Syntax_isOfKind(x_1, x_18);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = 0;
x_4 = x_20;
goto block_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = l_Lean_Syntax_getArgs(x_1);
x_22 = lean_array_get_size(x_21);
lean_dec(x_21);
x_23 = lean_unsigned_to_nat(3u);
x_24 = lean_nat_dec_eq(x_22, x_23);
lean_dec(x_22);
x_4 = x_24;
goto block_17;
}
block_17:
{
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = lean_box(1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
x_9 = lean_unsigned_to_nat(2u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_getArgs(x_10);
lean_dec(x_10);
x_12 = l_Array_empty___closed__1;
x_13 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_9, x_11, x_7, x_12);
lean_dec(x_11);
x_14 = lean_array_get_size(x_13);
x_15 = l_Lean_mkAppStx___closed__6;
x_16 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandWhere___spec__1(x_1, x_15, x_12, x_13, x_14, lean_box(0), x_8, x_2, x_3);
lean_dec(x_13);
lean_dec(x_1);
return x_16;
}
}
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandWhere___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandWhere___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_expandWhere___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandWhere(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandWhere___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandWhere___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandWhere(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Elab_Term_expandWhere___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandWhere___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
uint8_t l_List_beq___main___at___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_nat_dec_eq(x_6, x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
x_1 = x_7;
x_2 = x_9;
goto _start;
}
}
}
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid `parser!` macro, unexpected declaration name");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid `parser!` macro, it must be used in definitions");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Parser.leadingNode");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__7;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__7;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__8;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("leadingNode");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__11;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasOrelse.orelse");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__14;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__14;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__15;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasOrelse");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__18;
x_2 = l_Lean_Elab_Tactic_evalOrelse___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__20;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Parser.mkAntiquot");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__22;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__22;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__23;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mkAntiquot");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__25;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__27;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Syntax_9__quoteOption___rarg___closed__5;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Syntax_9__quoteOption___rarg___closed__5;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__29;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Syntax_9__quoteOption___rarg___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_optionToExpr___rarg___lambda__1___closed__2;
x_2 = l___private_Lean_Syntax_9__quoteOption___rarg___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__32;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__33;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Term_getDeclName_x3f(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__6;
x_14 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
lean_inc(x_16);
x_17 = l_Lean_extractMacroScopes(x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 1)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_19 = lean_ctor_get(x_17, 3);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l___private_Lean_Syntax_7__quoteName___main(x_16);
x_22 = l_Lean_SourceInfo_inhabited___closed__1;
x_23 = l_Lean_mkStxStrLit(x_20, x_22);
x_24 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_15);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__11;
x_31 = l_Lean_addMacroScope(x_28, x_30, x_25);
x_32 = lean_box(0);
x_33 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__9;
x_34 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__13;
x_35 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_35, 0, x_22);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_31);
lean_ctor_set(x_35, 3, x_34);
x_36 = l_Array_empty___closed__1;
x_37 = lean_array_push(x_36, x_35);
x_38 = lean_array_push(x_36, x_21);
lean_inc(x_38);
x_39 = lean_array_push(x_38, x_1);
x_40 = lean_array_push(x_39, x_2);
x_41 = l_Lean_nullKind___closed__2;
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = lean_array_push(x_37, x_42);
x_44 = l_Lean_mkAppStx___closed__8;
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = l_List_beq___main___at___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___spec__1(x_19, x_32);
lean_dec(x_19);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_dec(x_38);
x_47 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_3);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_49);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19;
lean_inc(x_48);
lean_inc(x_52);
x_54 = l_Lean_addMacroScope(x_52, x_53, x_48);
x_55 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__16;
x_56 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__21;
x_57 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_57, 0, x_22);
lean_ctor_set(x_57, 1, x_55);
lean_ctor_set(x_57, 2, x_54);
lean_ctor_set(x_57, 3, x_56);
x_58 = lean_array_push(x_36, x_57);
x_59 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26;
lean_inc(x_48);
lean_inc(x_52);
x_60 = l_Lean_addMacroScope(x_52, x_59, x_48);
x_61 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__24;
x_62 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__28;
x_63 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_63, 0, x_22);
lean_ctor_set(x_63, 1, x_61);
lean_ctor_set(x_63, 2, x_60);
lean_ctor_set(x_63, 3, x_62);
x_64 = lean_array_push(x_36, x_63);
x_65 = lean_array_push(x_36, x_23);
x_66 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__41;
x_67 = l_Lean_addMacroScope(x_52, x_66, x_48);
x_68 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__40;
x_69 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__43;
x_70 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_70, 0, x_22);
lean_ctor_set(x_70, 1, x_68);
lean_ctor_set(x_70, 2, x_67);
lean_ctor_set(x_70, 3, x_69);
x_71 = lean_array_push(x_65, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_41);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_array_push(x_64, x_72);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_44);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_array_push(x_36, x_74);
x_76 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__44;
x_77 = lean_array_push(x_75, x_76);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_41);
lean_ctor_set(x_78, 1, x_77);
x_79 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__28;
x_80 = lean_array_push(x_79, x_78);
x_81 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__45;
x_82 = lean_array_push(x_80, x_81);
x_83 = l___private_Lean_Elab_Term_5__hasCDot___main___closed__1;
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = lean_array_push(x_36, x_84);
x_86 = lean_array_push(x_85, x_45);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_41);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_array_push(x_58, x_87);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_44);
lean_ctor_set(x_89, 1, x_88);
lean_ctor_set(x_50, 0, x_89);
return x_50;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_90 = lean_ctor_get(x_50, 0);
x_91 = lean_ctor_get(x_50, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_50);
x_92 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19;
lean_inc(x_48);
lean_inc(x_90);
x_93 = l_Lean_addMacroScope(x_90, x_92, x_48);
x_94 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__16;
x_95 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__21;
x_96 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_96, 0, x_22);
lean_ctor_set(x_96, 1, x_94);
lean_ctor_set(x_96, 2, x_93);
lean_ctor_set(x_96, 3, x_95);
x_97 = lean_array_push(x_36, x_96);
x_98 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26;
lean_inc(x_48);
lean_inc(x_90);
x_99 = l_Lean_addMacroScope(x_90, x_98, x_48);
x_100 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__24;
x_101 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__28;
x_102 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_102, 0, x_22);
lean_ctor_set(x_102, 1, x_100);
lean_ctor_set(x_102, 2, x_99);
lean_ctor_set(x_102, 3, x_101);
x_103 = lean_array_push(x_36, x_102);
x_104 = lean_array_push(x_36, x_23);
x_105 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__41;
x_106 = l_Lean_addMacroScope(x_90, x_105, x_48);
x_107 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__40;
x_108 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__43;
x_109 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_109, 0, x_22);
lean_ctor_set(x_109, 1, x_107);
lean_ctor_set(x_109, 2, x_106);
lean_ctor_set(x_109, 3, x_108);
x_110 = lean_array_push(x_104, x_109);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_41);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_array_push(x_103, x_111);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_44);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_array_push(x_36, x_113);
x_115 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__44;
x_116 = lean_array_push(x_114, x_115);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_41);
lean_ctor_set(x_117, 1, x_116);
x_118 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__28;
x_119 = lean_array_push(x_118, x_117);
x_120 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__45;
x_121 = lean_array_push(x_119, x_120);
x_122 = l___private_Lean_Elab_Term_5__hasCDot___main___closed__1;
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
x_124 = lean_array_push(x_36, x_123);
x_125 = lean_array_push(x_124, x_45);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_41);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_array_push(x_97, x_126);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_44);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_91);
return x_129;
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_130 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_3);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_132);
x_134 = !lean_is_exclusive(x_133);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_135 = lean_ctor_get(x_133, 0);
x_136 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19;
lean_inc(x_131);
lean_inc(x_135);
x_137 = l_Lean_addMacroScope(x_135, x_136, x_131);
x_138 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__16;
x_139 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__21;
x_140 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_140, 0, x_22);
lean_ctor_set(x_140, 1, x_138);
lean_ctor_set(x_140, 2, x_137);
lean_ctor_set(x_140, 3, x_139);
x_141 = lean_array_push(x_36, x_140);
x_142 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26;
lean_inc(x_131);
lean_inc(x_135);
x_143 = l_Lean_addMacroScope(x_135, x_142, x_131);
x_144 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__24;
x_145 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__28;
x_146 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_146, 0, x_22);
lean_ctor_set(x_146, 1, x_144);
lean_ctor_set(x_146, 2, x_143);
lean_ctor_set(x_146, 3, x_145);
x_147 = lean_array_push(x_36, x_146);
x_148 = lean_array_push(x_36, x_23);
x_149 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__31;
x_150 = l_Lean_addMacroScope(x_135, x_149, x_131);
x_151 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__30;
x_152 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__34;
x_153 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_153, 0, x_22);
lean_ctor_set(x_153, 1, x_151);
lean_ctor_set(x_153, 2, x_150);
lean_ctor_set(x_153, 3, x_152);
x_154 = lean_array_push(x_36, x_153);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_41);
lean_ctor_set(x_155, 1, x_38);
x_156 = lean_array_push(x_154, x_155);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_44);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_array_push(x_36, x_157);
x_159 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__44;
x_160 = lean_array_push(x_158, x_159);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_41);
lean_ctor_set(x_161, 1, x_160);
x_162 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__28;
x_163 = lean_array_push(x_162, x_161);
x_164 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__45;
x_165 = lean_array_push(x_163, x_164);
x_166 = l___private_Lean_Elab_Term_5__hasCDot___main___closed__1;
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_165);
x_168 = lean_array_push(x_148, x_167);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_41);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_array_push(x_147, x_169);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_44);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_array_push(x_36, x_171);
x_173 = lean_array_push(x_172, x_159);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_41);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_array_push(x_162, x_174);
x_176 = lean_array_push(x_175, x_164);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_166);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_array_push(x_36, x_177);
x_179 = lean_array_push(x_178, x_45);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_41);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_array_push(x_141, x_180);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_44);
lean_ctor_set(x_182, 1, x_181);
lean_ctor_set(x_133, 0, x_182);
return x_133;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_183 = lean_ctor_get(x_133, 0);
x_184 = lean_ctor_get(x_133, 1);
lean_inc(x_184);
lean_inc(x_183);
lean_dec(x_133);
x_185 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19;
lean_inc(x_131);
lean_inc(x_183);
x_186 = l_Lean_addMacroScope(x_183, x_185, x_131);
x_187 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__16;
x_188 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__21;
x_189 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_189, 0, x_22);
lean_ctor_set(x_189, 1, x_187);
lean_ctor_set(x_189, 2, x_186);
lean_ctor_set(x_189, 3, x_188);
x_190 = lean_array_push(x_36, x_189);
x_191 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26;
lean_inc(x_131);
lean_inc(x_183);
x_192 = l_Lean_addMacroScope(x_183, x_191, x_131);
x_193 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__24;
x_194 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__28;
x_195 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_195, 0, x_22);
lean_ctor_set(x_195, 1, x_193);
lean_ctor_set(x_195, 2, x_192);
lean_ctor_set(x_195, 3, x_194);
x_196 = lean_array_push(x_36, x_195);
x_197 = lean_array_push(x_36, x_23);
x_198 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__31;
x_199 = l_Lean_addMacroScope(x_183, x_198, x_131);
x_200 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__30;
x_201 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__34;
x_202 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_202, 0, x_22);
lean_ctor_set(x_202, 1, x_200);
lean_ctor_set(x_202, 2, x_199);
lean_ctor_set(x_202, 3, x_201);
x_203 = lean_array_push(x_36, x_202);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_41);
lean_ctor_set(x_204, 1, x_38);
x_205 = lean_array_push(x_203, x_204);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_44);
lean_ctor_set(x_206, 1, x_205);
x_207 = lean_array_push(x_36, x_206);
x_208 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__44;
x_209 = lean_array_push(x_207, x_208);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_41);
lean_ctor_set(x_210, 1, x_209);
x_211 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__28;
x_212 = lean_array_push(x_211, x_210);
x_213 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__45;
x_214 = lean_array_push(x_212, x_213);
x_215 = l___private_Lean_Elab_Term_5__hasCDot___main___closed__1;
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_214);
x_217 = lean_array_push(x_197, x_216);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_41);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_array_push(x_196, x_218);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_44);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_array_push(x_36, x_220);
x_222 = lean_array_push(x_221, x_208);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_41);
lean_ctor_set(x_223, 1, x_222);
x_224 = lean_array_push(x_211, x_223);
x_225 = lean_array_push(x_224, x_213);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_215);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_array_push(x_36, x_226);
x_228 = lean_array_push(x_227, x_45);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_41);
lean_ctor_set(x_229, 1, x_228);
x_230 = lean_array_push(x_190, x_229);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_44);
lean_ctor_set(x_231, 1, x_230);
x_232 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_184);
return x_232;
}
}
}
else
{
lean_object* x_233; lean_object* x_234; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_233 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__3;
x_234 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_233, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_234;
}
}
}
}
lean_object* l_List_beq___main___at___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_beq___main___at___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_maxPrec;
x_2 = l_Nat_repr(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_numLitKind;
x_2 = l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__1;
x_3 = l_Lean_SourceInfo_inhabited___closed__1;
x_4 = l_Lean_mkStxLit(x_1, x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("parser!");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabParserMacro___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_36; uint8_t x_37; 
x_36 = l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__4;
lean_inc(x_1);
x_37 = l_Lean_Syntax_isOfKind(x_1, x_36);
if (x_37 == 0)
{
uint8_t x_38; 
x_38 = 0;
x_9 = x_38;
goto block_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = l_Lean_Syntax_getArgs(x_1);
x_40 = lean_array_get_size(x_39);
lean_dec(x_39);
x_41 = lean_unsigned_to_nat(3u);
x_42 = lean_nat_dec_eq(x_40, x_41);
lean_dec(x_40);
x_9 = x_42;
goto block_35;
}
block_35:
{
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__2___rarg(x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_nullKind___closed__2;
lean_inc(x_12);
x_14 = l_Lean_Syntax_isOfKind(x_12, x_13);
if (x_14 == 0)
{
uint8_t x_30; 
x_30 = 0;
x_15 = x_30;
goto block_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = l_Lean_Syntax_getArgs(x_12);
x_32 = lean_array_get_size(x_31);
lean_dec(x_31);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_32);
x_15 = x_34;
goto block_29;
}
block_29:
{
if (x_15 == 0)
{
if (x_14 == 0)
{
lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_16 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__2___rarg(x_8);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = l_Lean_Syntax_getArgs(x_12);
x_18 = lean_array_get_size(x_17);
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(2u);
x_20 = lean_nat_dec_eq(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_21 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__2___rarg(x_8);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = l_Lean_Syntax_getArg(x_12, x_11);
lean_dec(x_12);
x_23 = l_Lean_Syntax_getArg(x_1, x_19);
lean_dec(x_1);
x_24 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux(x_22, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_12);
x_25 = lean_unsigned_to_nat(2u);
x_26 = l_Lean_Syntax_getArg(x_1, x_25);
lean_dec(x_1);
x_27 = l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__2;
x_28 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux(x_27, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_28;
}
}
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabParserMacro___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabParserMacro___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_elabParserMacro(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Term_elabParserMacro___closed__1;
x_11 = l_Lean_Elab_Term_adaptExpander(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabParserMacro___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabParserMacro___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabParserMacro___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabParserMacro), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabParserMacro(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__4;
x_4 = l___regBuiltin_Lean_Elab_Term_elabParserMacro___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid `tparser!` macro, it must be used in definitions");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Parser.trailingNode");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__4;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__4;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("trailingNode");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__4;
x_2 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__8;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Term_getDeclName_x3f(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__3;
x_14 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = l___private_Lean_Syntax_7__quoteName___main(x_16);
x_18 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_3);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__8;
x_25 = l_Lean_addMacroScope(x_23, x_24, x_19);
x_26 = l_Lean_SourceInfo_inhabited___closed__1;
x_27 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__6;
x_28 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__10;
x_29 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_29, 2, x_25);
lean_ctor_set(x_29, 3, x_28);
x_30 = l_Array_empty___closed__1;
x_31 = lean_array_push(x_30, x_29);
x_32 = lean_array_push(x_30, x_17);
x_33 = lean_array_push(x_32, x_1);
x_34 = lean_array_push(x_33, x_2);
x_35 = l_Lean_nullKind___closed__2;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_array_push(x_31, x_36);
x_38 = l_Lean_mkAppStx___closed__8;
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
lean_ctor_set(x_21, 0, x_39);
return x_21;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_40 = lean_ctor_get(x_21, 0);
x_41 = lean_ctor_get(x_21, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_21);
x_42 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__8;
x_43 = l_Lean_addMacroScope(x_40, x_42, x_19);
x_44 = l_Lean_SourceInfo_inhabited___closed__1;
x_45 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__6;
x_46 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__10;
x_47 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_45);
lean_ctor_set(x_47, 2, x_43);
lean_ctor_set(x_47, 3, x_46);
x_48 = l_Array_empty___closed__1;
x_49 = lean_array_push(x_48, x_47);
x_50 = lean_array_push(x_48, x_17);
x_51 = lean_array_push(x_50, x_1);
x_52 = lean_array_push(x_51, x_2);
x_53 = l_Lean_nullKind___closed__2;
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = lean_array_push(x_49, x_54);
x_56 = l_Lean_mkAppStx___closed__8;
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_41);
return x_58;
}
}
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* _init_l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tparser!");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabTParserMacro___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_36; uint8_t x_37; 
x_36 = l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__2;
lean_inc(x_1);
x_37 = l_Lean_Syntax_isOfKind(x_1, x_36);
if (x_37 == 0)
{
uint8_t x_38; 
x_38 = 0;
x_9 = x_38;
goto block_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = l_Lean_Syntax_getArgs(x_1);
x_40 = lean_array_get_size(x_39);
lean_dec(x_39);
x_41 = lean_unsigned_to_nat(3u);
x_42 = lean_nat_dec_eq(x_40, x_41);
lean_dec(x_40);
x_9 = x_42;
goto block_35;
}
block_35:
{
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__2___rarg(x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_nullKind___closed__2;
lean_inc(x_12);
x_14 = l_Lean_Syntax_isOfKind(x_12, x_13);
if (x_14 == 0)
{
uint8_t x_30; 
x_30 = 0;
x_15 = x_30;
goto block_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = l_Lean_Syntax_getArgs(x_12);
x_32 = lean_array_get_size(x_31);
lean_dec(x_31);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_32);
x_15 = x_34;
goto block_29;
}
block_29:
{
if (x_15 == 0)
{
if (x_14 == 0)
{
lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_16 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__2___rarg(x_8);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = l_Lean_Syntax_getArgs(x_12);
x_18 = lean_array_get_size(x_17);
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(2u);
x_20 = lean_nat_dec_eq(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_21 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__2___rarg(x_8);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = l_Lean_Syntax_getArg(x_12, x_11);
lean_dec(x_12);
x_23 = l_Lean_Syntax_getArg(x_1, x_19);
lean_dec(x_1);
x_24 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux(x_22, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_12);
x_25 = lean_unsigned_to_nat(2u);
x_26 = l_Lean_Syntax_getArg(x_1, x_25);
lean_dec(x_1);
x_27 = l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__2;
x_28 = l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux(x_27, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_28;
}
}
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabTParserMacro___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTParserMacro___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_elabTParserMacro(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Term_elabTParserMacro___closed__1;
x_11 = l_Lean_Elab_Term_adaptExpander(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabTParserMacro___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabTParserMacro___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabTParserMacro___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTParserMacro), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabTParserMacro(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabTParserMacro___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_nativeRefl");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__2;
lean_inc(x_3);
x_11 = l_Lean_Elab_Term_mkAuxName(x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
lean_inc(x_12);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_15, 2, x_1);
x_16 = lean_box(1);
x_17 = 0;
x_18 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_2);
lean_ctor_set(x_18, 2, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*3, x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
lean_inc(x_7);
lean_inc(x_3);
x_20 = l_Lean_addDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__1(x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_compileDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__4(x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_21);
lean_dec(x_19);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_12);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_12);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_12);
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_3);
x_31 = !lean_is_exclusive(x_20);
if (x_31 == 0)
{
return x_20;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_20, 0);
x_33 = lean_ctor_get(x_20, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_20);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_11);
if (x_35 == 0)
{
return x_11;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_11, 0);
x_37 = lean_ctor_get(x_11, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_11);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid macro application, term contains free variables");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid macro application, term contains metavariables");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = l_Lean_Elab_Term_elabTermAndSynthesize(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Lean_Expr_hasMVar(x_12);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_Expr_hasFVar(x_12);
if (x_15 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_free_object(x_10);
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_12);
x_17 = l_Lean_indentExpr(x_16);
x_18 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__3;
x_19 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_free_object(x_10);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_12);
x_26 = l_Lean_indentExpr(x_25);
x_27 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__6;
x_28 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_10, 0);
x_35 = lean_ctor_get(x_10, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_10);
x_36 = l_Lean_Expr_hasMVar(x_34);
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = l_Lean_Expr_hasFVar(x_34);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_34);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_34);
x_40 = l_Lean_indentExpr(x_39);
x_41 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__3;
x_42 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_42, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_46 = x_43;
} else {
 lean_dec_ref(x_43);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(1, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_48, 0, x_34);
x_49 = l_Lean_indentExpr(x_48);
x_50 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__6;
x_51 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_51, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_55 = x_52;
} else {
 lean_dec_ref(x_52);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(1, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_57 = !lean_is_exclusive(x_10);
if (x_57 == 0)
{
return x_10;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_10, 0);
x_59 = lean_ctor_get(x_10, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_10);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
lean_object* l_Lean_Meta_mkEqRefl___at_Lean_Elab_Term_elabNativeRefl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_take(x_7, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_14, 2);
lean_dec(x_17);
x_18 = l_Lean_TraceState_Inhabited___closed__1;
lean_ctor_set(x_14, 2, x_18);
x_19 = lean_st_ref_set(x_7, x_14, x_15);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_21 = l___private_Lean_Meta_AppBuilder_5__mkEqReflImp(x_1, x_4, x_5, x_6, x_7, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_21, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_dec(x_21);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_ctor_get(x_14, 0);
x_37 = lean_ctor_get(x_14, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_14);
x_38 = l_Lean_TraceState_Inhabited___closed__1;
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_37);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_st_ref_set(x_7, x_39, x_15);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_42 = l___private_Lean_Meta_AppBuilder_5__mkEqReflImp(x_1, x_4, x_5, x_6, x_7, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_44);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_49 = lean_ctor_get(x_42, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
lean_dec(x_42);
x_51 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
 lean_ctor_set_tag(x_54, 1);
}
lean_ctor_set(x_54, 0, x_49);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
}
lean_object* l_Lean_Meta_mkEq___at_Lean_Elab_Term_elabNativeRefl___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 2);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_8, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_15, 2);
lean_dec(x_18);
x_19 = l_Lean_TraceState_Inhabited___closed__1;
lean_ctor_set(x_15, 2, x_19);
x_20 = lean_st_ref_set(x_8, x_15, x_16);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_22 = l___private_Lean_Meta_AppBuilder_3__mkEqImp(x_1, x_2, x_5, x_6, x_7, x_8, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_23);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_22, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_dec(x_22);
x_32 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set_tag(x_32, 1);
lean_ctor_set(x_32, 0, x_30);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_15, 0);
x_38 = lean_ctor_get(x_15, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_15);
x_39 = l_Lean_TraceState_Inhabited___closed__1;
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_40, 2, x_39);
x_41 = lean_st_ref_set(x_8, x_40, x_16);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_43 = l___private_Lean_Meta_AppBuilder_3__mkEqImp(x_1, x_2, x_5, x_6, x_7, x_8, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_45);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_44);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_43, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_43, 1);
lean_inc(x_51);
lean_dec(x_43);
x_52 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_51);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
 lean_ctor_set_tag(x_55, 1);
}
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
}
lean_object* l_Lean_Meta_mkExpectedTypeHint___at_Lean_Elab_Term_elabNativeRefl___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 2);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_8, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_15, 2);
lean_dec(x_18);
x_19 = l_Lean_TraceState_Inhabited___closed__1;
lean_ctor_set(x_15, 2, x_19);
x_20 = lean_st_ref_set(x_8, x_15, x_16);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_22 = l___private_Lean_Meta_AppBuilder_2__mkExpectedTypeHint(x_1, x_2, x_5, x_6, x_7, x_8, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_23);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_22, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_22, 1);
lean_inc(x_31);
lean_dec(x_22);
x_32 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set_tag(x_32, 1);
lean_ctor_set(x_32, 0, x_30);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_15, 0);
x_38 = lean_ctor_get(x_15, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_15);
x_39 = l_Lean_TraceState_Inhabited___closed__1;
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_40, 2, x_39);
x_41 = lean_st_ref_set(x_8, x_40, x_16);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_43 = l___private_Lean_Meta_AppBuilder_2__mkExpectedTypeHint(x_1, x_2, x_5, x_6, x_7, x_8, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_45);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_44);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_43, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_43, 1);
lean_inc(x_51);
lean_dec(x_43);
x_52 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_51);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
 lean_ctor_set_tag(x_55, 1);
}
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to reduce term at `nativeRefl!` macro application");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabNativeRefl___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabNativeRefl___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofReduceNat");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__2;
x_2 = l_Lean_Elab_Term_elabNativeRefl___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofReduceBool");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__2;
x_2 = l_Lean_Elab_Term_elabNativeRefl___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid `nativeRefl!` macro application, term must have type `Nat` or `Bool`");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabNativeRefl___closed__8;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeRefl___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabNativeRefl___closed__9;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabNativeRefl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_14);
x_16 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_19 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_7__isTypeApp_x3f___spec__1(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_boolToExpr___lambda__1___closed__2;
x_23 = l_Lean_Expr_isConstOf(x_20, x_22);
if (x_23 == 0)
{
lean_object* x_138; uint8_t x_139; 
x_138 = l_Lean_Literal_type___closed__2;
x_139 = l_Lean_Expr_isConstOf(x_20, x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
lean_dec(x_14);
x_140 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_140, 0, x_20);
x_141 = l_Lean_indentExpr(x_140);
x_142 = l_Lean_Elab_Term_elabNativeRefl___closed__10;
x_143 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_141);
x_144 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_143, x_3, x_4, x_5, x_6, x_7, x_8, x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_145 = !lean_is_exclusive(x_144);
if (x_145 == 0)
{
return x_144;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_144, 0);
x_147 = lean_ctor_get(x_144, 1);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_144);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
else
{
x_24 = x_21;
goto block_137;
}
}
else
{
x_24 = x_21;
goto block_137;
}
block_137:
{
lean_object* x_25; 
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_14);
x_25 = l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl(x_20, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_box(0);
x_29 = l_Lean_mkConst(x_26, x_28);
x_30 = lean_st_ref_get(x_8, x_27);
if (x_23 == 0)
{
uint8_t x_131; 
x_131 = 0;
x_31 = x_131;
goto block_130;
}
else
{
uint8_t x_132; 
x_132 = 1;
x_31 = x_132;
goto block_130;
}
block_130:
{
lean_object* x_32; 
if (x_31 == 0)
{
lean_object* x_128; 
x_128 = l_Lean_Meta_reduceNative_x3f___closed__4;
x_32 = x_128;
goto block_127;
}
else
{
lean_object* x_129; 
x_129 = l_Lean_Meta_reduceNative_x3f___closed__2;
x_32 = x_129;
goto block_127;
}
block_127:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = l_Lean_mkConst(x_32, x_28);
lean_inc(x_29);
x_34 = l_Lean_mkApp(x_33, x_29);
if (x_31 == 0)
{
lean_object* x_125; 
x_125 = l_Lean_Elab_Term_elabNativeRefl___closed__5;
x_35 = x_125;
goto block_124;
}
else
{
lean_object* x_126; 
x_126 = l_Lean_Elab_Term_elabNativeRefl___closed__7;
x_35 = x_126;
goto block_124;
}
block_124:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_36 = lean_ctor_get(x_30, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_dec(x_30);
x_38 = lean_ctor_get(x_36, 2);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_st_ref_take(x_8, x_37);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = !lean_is_exclusive(x_40);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_40, 2);
lean_dec(x_43);
x_44 = l_Lean_TraceState_Inhabited___closed__1;
lean_ctor_set(x_40, 2, x_44);
x_45 = lean_st_ref_set(x_8, x_40, x_41);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Meta_reduceNative_x3f(x_34, x_5, x_6, x_7, x_8, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
lean_inc(x_3);
x_50 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_49);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_35);
lean_dec(x_29);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_14);
x_53 = l_Lean_indentExpr(x_52);
x_54 = l_Lean_Elab_Term_elabNativeRefl___closed__3;
x_55 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_55, x_3, x_4, x_5, x_6, x_7, x_8, x_51);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_50, 1);
lean_inc(x_57);
lean_dec(x_50);
x_58 = lean_ctor_get(x_48, 0);
lean_inc(x_58);
lean_dec(x_48);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_58);
x_59 = l_Lean_Meta_mkEqRefl___at_Lean_Elab_Term_elabNativeRefl___spec__1(x_58, x_3, x_4, x_5, x_6, x_7, x_8, x_57);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = l_Lean_mkConst(x_35, x_28);
lean_inc(x_58);
x_63 = l_Lean_mkApp3(x_62, x_29, x_58, x_60);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_64 = l_Lean_Meta_mkEq___at_Lean_Elab_Term_elabNativeRefl___spec__2(x_14, x_58, x_3, x_4, x_5, x_6, x_7, x_8, x_61);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_Lean_Meta_mkExpectedTypeHint___at_Lean_Elab_Term_elabNativeRefl___spec__3(x_63, x_65, x_3, x_4, x_5, x_6, x_7, x_8, x_66);
lean_dec(x_4);
return x_67;
}
else
{
uint8_t x_68; 
lean_dec(x_63);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_68 = !lean_is_exclusive(x_64);
if (x_68 == 0)
{
return x_64;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_64, 0);
x_70 = lean_ctor_get(x_64, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_64);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_58);
lean_dec(x_35);
lean_dec(x_29);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_72 = !lean_is_exclusive(x_59);
if (x_72 == 0)
{
return x_59;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_59, 0);
x_74 = lean_ctor_get(x_59, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_59);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
lean_dec(x_35);
lean_dec(x_29);
lean_dec(x_14);
x_76 = lean_ctor_get(x_47, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_47, 1);
lean_inc(x_77);
lean_dec(x_47);
x_78 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_77);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_79 = !lean_is_exclusive(x_78);
if (x_79 == 0)
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_78, 0);
lean_dec(x_80);
lean_ctor_set_tag(x_78, 1);
lean_ctor_set(x_78, 0, x_76);
return x_78;
}
else
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_83 = lean_ctor_get(x_40, 0);
x_84 = lean_ctor_get(x_40, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_40);
x_85 = l_Lean_TraceState_Inhabited___closed__1;
x_86 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
lean_ctor_set(x_86, 2, x_85);
x_87 = lean_st_ref_set(x_8, x_86, x_41);
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = l_Lean_Meta_reduceNative_x3f(x_34, x_5, x_6, x_7, x_8, x_88);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
lean_inc(x_3);
x_92 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_91);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_35);
lean_dec(x_29);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_94 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_94, 0, x_14);
x_95 = l_Lean_indentExpr(x_94);
x_96 = l_Lean_Elab_Term_elabNativeRefl___closed__3;
x_97 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
x_98 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_97, x_3, x_4, x_5, x_6, x_7, x_8, x_93);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_92, 1);
lean_inc(x_99);
lean_dec(x_92);
x_100 = lean_ctor_get(x_90, 0);
lean_inc(x_100);
lean_dec(x_90);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_100);
x_101 = l_Lean_Meta_mkEqRefl___at_Lean_Elab_Term_elabNativeRefl___spec__1(x_100, x_3, x_4, x_5, x_6, x_7, x_8, x_99);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = l_Lean_mkConst(x_35, x_28);
lean_inc(x_100);
x_105 = l_Lean_mkApp3(x_104, x_29, x_100, x_102);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_106 = l_Lean_Meta_mkEq___at_Lean_Elab_Term_elabNativeRefl___spec__2(x_14, x_100, x_3, x_4, x_5, x_6, x_7, x_8, x_103);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_109 = l_Lean_Meta_mkExpectedTypeHint___at_Lean_Elab_Term_elabNativeRefl___spec__3(x_105, x_107, x_3, x_4, x_5, x_6, x_7, x_8, x_108);
lean_dec(x_4);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_105);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_110 = lean_ctor_get(x_106, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_106, 1);
lean_inc(x_111);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_112 = x_106;
} else {
 lean_dec_ref(x_106);
 x_112 = lean_box(0);
}
if (lean_is_scalar(x_112)) {
 x_113 = lean_alloc_ctor(1, 2, 0);
} else {
 x_113 = x_112;
}
lean_ctor_set(x_113, 0, x_110);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_100);
lean_dec(x_35);
lean_dec(x_29);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_114 = lean_ctor_get(x_101, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_101, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_116 = x_101;
} else {
 lean_dec_ref(x_101);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(1, 2, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_115);
return x_117;
}
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_35);
lean_dec(x_29);
lean_dec(x_14);
x_118 = lean_ctor_get(x_89, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_89, 1);
lean_inc(x_119);
lean_dec(x_89);
x_120 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_119);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_121 = lean_ctor_get(x_120, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_122 = x_120;
} else {
 lean_dec_ref(x_120);
 x_122 = lean_box(0);
}
if (lean_is_scalar(x_122)) {
 x_123 = lean_alloc_ctor(1, 2, 0);
} else {
 x_123 = x_122;
 lean_ctor_set_tag(x_123, 1);
}
lean_ctor_set(x_123, 0, x_118);
lean_ctor_set(x_123, 1, x_121);
return x_123;
}
}
}
}
}
}
else
{
uint8_t x_133; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_133 = !lean_is_exclusive(x_25);
if (x_133 == 0)
{
return x_25;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_25, 0);
x_135 = lean_ctor_get(x_25, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_25);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
return x_136;
}
}
}
}
else
{
uint8_t x_149; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_149 = !lean_is_exclusive(x_19);
if (x_149 == 0)
{
return x_19;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_19, 0);
x_151 = lean_ctor_get(x_19, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_19);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_153 = !lean_is_exclusive(x_16);
if (x_153 == 0)
{
return x_16;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_16, 0);
x_155 = lean_ctor_get(x_16, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_16);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_157 = !lean_is_exclusive(x_13);
if (x_157 == 0)
{
return x_13;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_13, 0);
x_159 = lean_ctor_get(x_13, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_13);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
}
lean_object* l_Lean_Meta_mkEqRefl___at_Lean_Elab_Term_elabNativeRefl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_mkEqRefl___at_Lean_Elab_Term_elabNativeRefl___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_mkEq___at_Lean_Elab_Term_elabNativeRefl___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_mkEq___at_Lean_Elab_Term_elabNativeRefl___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Meta_mkExpectedTypeHint___at_Lean_Elab_Term_elabNativeRefl___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_mkExpectedTypeHint___at_Lean_Elab_Term_elabNativeRefl___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_elabNativeRefl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabNativeRefl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nativeRefl");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabNativeRefl___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeRefl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_getAppArgs___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid macro, expected type is not available");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected type must not contain free or meta variables");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_mkHole___closed__2;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_12 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__1;
x_13 = l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_14 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__4;
x_17 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
lean_inc(x_3);
x_20 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = l_Lean_Expr_hasFVar(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Expr_hasMVar(x_22);
if (x_25 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_free_object(x_20);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_22);
x_27 = l_Lean_indentExpr(x_26);
x_28 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__7;
x_29 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
return x_30;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_free_object(x_20);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_22);
x_36 = l_Lean_indentExpr(x_35);
x_37 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__7;
x_38 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_ctor_get(x_20, 0);
x_45 = lean_ctor_get(x_20, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_20);
x_46 = l_Lean_Expr_hasFVar(x_44);
if (x_46 == 0)
{
uint8_t x_47; 
x_47 = l_Lean_Expr_hasMVar(x_44);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_44);
lean_ctor_set(x_48, 1, x_45);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_44);
x_50 = l_Lean_indentExpr(x_49);
x_51 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__7;
x_52 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_52, x_3, x_4, x_5, x_6, x_7, x_8, x_45);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_44);
x_59 = l_Lean_indentExpr(x_58);
x_60 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__7;
x_61 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
x_62 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_61, x_3, x_4, x_5, x_6, x_7, x_8, x_45);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_67 = !lean_is_exclusive(x_14);
if (x_67 == 0)
{
return x_14;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_14, 0);
x_69 = lean_ctor_get(x_14, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_14);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabNativeDecide___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_elabNativeRefl___closed__7;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabNativeDecide(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_13);
x_16 = lean_array_push(x_15, x_13);
x_17 = l_Lean_Meta_mkDecideProof___rarg___closed__2;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_18 = l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_8__isMonad_x3f___spec__1(x_17, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_box(0);
x_22 = l_Lean_boolToExpr___closed__1;
lean_inc(x_7);
lean_inc(x_3);
x_23 = l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl(x_22, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Meta_mkSorry___rarg___lambda__1___closed__4;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_27 = l_Lean_Meta_mkEqRefl___at_Lean_Elab_Term_elabNativeRefl___spec__1(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_mkConst(x_24, x_21);
x_31 = l_Lean_Elab_Term_elabNativeDecide___closed__1;
x_32 = l_Lean_mkApp3(x_31, x_30, x_26, x_28);
x_33 = l_Lean_Meta_mkExpectedTypeHint___at_Lean_Elab_Term_elabNativeRefl___spec__3(x_32, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_4);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_24);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_27);
if (x_34 == 0)
{
return x_27;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_27, 0);
x_36 = lean_ctor_get(x_27, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_27);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_23);
if (x_38 == 0)
{
return x_23;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_23, 0);
x_40 = lean_ctor_get(x_23, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_23);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_42 = !lean_is_exclusive(x_18);
if (x_42 == 0)
{
return x_18;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_18, 0);
x_44 = lean_ctor_get(x_18, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_18);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_12);
if (x_46 == 0)
{
return x_12;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_12, 0);
x_48 = lean_ctor_get(x_12, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_12);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabNativeDecide___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabNativeDecide(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nativeDecide");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabNativeDecide___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabNativeDecide(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_elabDecide___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_mkDecideProof___rarg___lambda__1___closed__2;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabDecide(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_13);
x_16 = lean_array_push(x_15, x_13);
x_17 = l_Lean_Meta_mkDecideProof___rarg___closed__2;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_18 = l_Lean_Meta_mkAppM___at___private_Lean_Elab_Term_8__isMonad_x3f___spec__1(x_17, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
x_21 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Expr_appArg_x21(x_22);
lean_dec(x_22);
x_25 = l_Lean_boolToExpr___lambda__1___closed__6;
x_26 = l_Lean_Meta_mkEqRefl___at_Lean_Elab_Term_elabNativeRefl___spec__1(x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_4);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = l_Lean_Elab_Term_elabDecide___closed__1;
x_30 = l_Lean_mkApp3(x_29, x_13, x_24, x_28);
lean_ctor_set(x_26, 0, x_30);
return x_26;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_26, 0);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_26);
x_33 = l_Lean_Elab_Term_elabDecide___closed__1;
x_34 = l_Lean_mkApp3(x_33, x_13, x_24, x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_24);
lean_dec(x_13);
x_36 = !lean_is_exclusive(x_26);
if (x_36 == 0)
{
return x_26;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_26, 0);
x_38 = lean_ctor_get(x_26, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_26);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_40 = !lean_is_exclusive(x_18);
if (x_40 == 0)
{
return x_18;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_18, 0);
x_42 = lean_ctor_get(x_18, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_18);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_12);
if (x_44 == 0)
{
return x_12;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_12, 0);
x_46 = lean_ctor_get(x_12, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_12);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabDecide___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabDecide(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDecide___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Meta_mkDecideProof___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDecide___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabDecide___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabDecide(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabDecide___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_elabDecide___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandInfix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_2, x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Syntax_getArg(x_2, x_7);
x_9 = l_Lean_mkAppStx___closed__9;
x_10 = lean_array_push(x_9, x_6);
x_11 = lean_array_push(x_10, x_8);
x_12 = l_Lean_mkAppStx(x_1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_4);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_expandInfix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandInfix(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandInfixOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_2, x_5);
x_7 = l_Lean_mkCIdentFrom(x_6, x_1);
lean_dec(x_6);
x_8 = l_Lean_Elab_Term_expandInfix(x_7, x_2, x_3, x_4);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_expandInfixOp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandInfixOp(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandPrefixOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_2, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Lean_Syntax_getArg(x_2, x_7);
x_9 = l_Lean_mkCIdentFrom(x_8, x_1);
lean_dec(x_8);
x_10 = l_Lean_mkOptionalNode___closed__2;
x_11 = lean_array_push(x_10, x_6);
x_12 = l_Lean_mkAppStx(x_9, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_4);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_expandPrefixOp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandPrefixOp(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandProd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_prodToExpr___rarg___lambda__1___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandProd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandProd(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandProd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("prod");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandProd___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandProd___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandProd___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandProd___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandProd(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandProd___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandProd___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_ExpandFComp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Function");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_ExpandFComp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_ExpandFComp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_ExpandFComp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("comp");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_ExpandFComp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_ExpandFComp___closed__2;
x_2 = l_Lean_Elab_Term_ExpandFComp___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_ExpandFComp(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_ExpandFComp___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_ExpandFComp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_ExpandFComp(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("fcomp");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_ExpandFComp___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_ExpandFComp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l___private_Lean_Meta_DiscrTree_6__shouldAddAsStar___closed__9;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandAdd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandAdd(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAdd___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___private_Lean_Meta_DiscrTree_6__shouldAddAsStar___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAdd___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandAdd___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandAdd(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandAdd___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandAdd___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSub___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasSub");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSub___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandSub___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandSub___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandSub___closed__2;
x_2 = l_Lean_Meta_evalNat___main___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandSub(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandSub___closed__3;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandSub___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandSub(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandSub___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Meta_evalNat___main___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandSub___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandSub___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandSub(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandSub___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandSub___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasMul");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMul___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandMul___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMul___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandMul___closed__2;
x_2 = l_Lean_Meta_evalNat___main___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandMul(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandMul___closed__3;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandMul(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandMul___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Meta_evalNat___main___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandMul___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandMul___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandMul(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandMul___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandMul___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandDiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasDiv");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandDiv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandDiv___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandDiv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandDiv___closed__2;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandDiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandDiv___closed__3;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandDiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandDiv(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandDiv___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandDiv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDiv___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandDiv(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandDiv___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandDiv___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMod___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasMod");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMod___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandMod___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMod___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandMod___closed__2;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandMod(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandMod___closed__3;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandMod___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandMod(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandMod___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandMod___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandMod___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandMod(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandMod___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandMod___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandModN___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasModN");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandModN___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandModN___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandModN___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("modn");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandModN___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandModN___closed__2;
x_2 = l_Lean_Elab_Term_expandModN___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandModN(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandModN___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandModN___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandModN(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandModN___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("modN");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandModN___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandModN___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandModN___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandModN___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandModN(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandModN___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandModN___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandPow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasPow");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandPow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandPow___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandPow___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("pow");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandPow___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandPow___closed__2;
x_2 = l_Lean_Elab_Term_expandPow___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandPow(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandPow___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandPow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandPow(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandPow___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandPow___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandPow___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandPow___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandPow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandPow___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandPow___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandLE(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Meta_mkLe___rarg___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandLE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandLE(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandLE___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("le");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandLE___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandLE___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandLE___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandLE___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandLE(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandLE___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandLE___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandGE___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("GreaterEq");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandGE___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandGE___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandGE(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandGE___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandGE___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandGE(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandGE___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ge");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandGE___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandGE___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandGE___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandGE___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandGE(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandGE___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandGE___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandLT(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Meta_mkLt___rarg___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandLT___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandLT(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandLT___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("lt");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandLT___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandLT___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandLT___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandLT___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandLT(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandLT___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandLT___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandGT___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Greater");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandGT___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandGT___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandGT(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandGT___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandGT___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandGT(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandGT___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("gt");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandGT___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandGT___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandGT___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandGT___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandGT(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandGT___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandGT___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandEq(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Expr_eq_x3f___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandEq(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandEq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandEq___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandEq(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___private_Lean_Elab_Quotation_6__compileStxMatch___main___closed__18;
x_4 = l___regBuiltin_Lean_Elab_Term_expandEq___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandNe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Ne");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandNe___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandNe___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandNe(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandNe___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandNe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandNe(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandNe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ne");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandNe___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandNe___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandNe___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandNe___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandNe(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandNe___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandNe___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandBEq___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Quotation_10__toPreterm___main___lambda__2___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandBEq___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandBEq___closed__1;
x_2 = l_Lean_Meta_reduceNat_x3f___closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandBEq(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandBEq___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandBEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandBEq(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBEq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandBEq___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandBEq(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___private_Lean_Elab_Quotation_6__compileStxMatch___main___closed__33;
x_4 = l___regBuiltin_Lean_Elab_Term_expandBEq___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandBNe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bne");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandBNe___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandBNe___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandBNe(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandBNe___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandBNe___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandBNe(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBNe___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandBNe___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBNe___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandBNe___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandBNe(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandBNe___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandBNe___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandHEq(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Expr_heq_x3f___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandHEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandHEq(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandHEq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("heq");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandHEq___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandHEq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandHEq___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandHEq___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandHEq(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandHEq___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandHEq___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasEquiv");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandEquiv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandEquiv___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandEquiv___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Equiv");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandEquiv___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandEquiv___closed__2;
x_2 = l_Lean_Elab_Term_expandEquiv___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandEquiv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandEquiv___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandEquiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandEquiv(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("equiv");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandEquiv___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandEquiv(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAnd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("And");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAnd___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandAnd___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandAnd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandAnd___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandAnd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandAnd(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAnd___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___private_Lean_Elab_Quotation_10__toPreterm___main___lambda__3___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAnd___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandAnd___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandAnd(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandAnd___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandAnd___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandOr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Or");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandOr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandOr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandOr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandOr___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandOr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandOr(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandOr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("or");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandOr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandOr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandOr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandOr___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandOr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandOr___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandOr___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandIff(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Expr_iff_x3f___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandIff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandIff(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandIff___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("iff");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandIff___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandIff___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandIff___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandIff___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandIff(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandIff___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandIff___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandBAnd___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Quotation_10__toPreterm___main___lambda__3___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandBAnd(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandBAnd___closed__1;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandBAnd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandBAnd(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBAnd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandBAnd___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandBAnd(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___private_Lean_Elab_Quotation_6__compileStxMatch___main___closed__30;
x_4 = l___regBuiltin_Lean_Elab_Term_expandBAnd___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandBOr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___regBuiltin_Lean_Elab_Term_expandOr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandBOr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandBOr___closed__1;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandBOr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandBOr(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBOr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bor");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBOr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandBOr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBOr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandBOr___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandBOr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandBOr___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandBOr___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAppend___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasAppend");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAppend___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandAppend___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAppend___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandAppend___closed__2;
x_2 = l_Array_iterateMAux___main___at___private_Lean_Elab_Quotation_2__quoteSyntax___main___spec__1___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandAppend(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandAppend___closed__3;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandAppend___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandAppend(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAppend___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Array_iterateMAux___main___at___private_Lean_Elab_Quotation_2__quoteSyntax___main___spec__1___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAppend___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandAppend___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandAppend(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandAppend___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandAppend___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandCons(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_listToExpr___rarg___closed__6;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandCons___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandCons(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandCons___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_optionToExpr___rarg___lambda__1___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandCons___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandCons___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandCons(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandCons___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandCons___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAndThen___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasAndthen");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAndThen___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandAndThen___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAndThen___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("andthen");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAndThen___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandAndThen___closed__2;
x_2 = l_Lean_Elab_Term_expandAndThen___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandAndThen(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandAndThen___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandAndThen___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandAndThen(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandAndThen___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandAndThen___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandAndThen(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandBind(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_Quotation_stxQuot_expand___closed__7;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandBind___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandBind(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bindOp");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBind___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandBind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBind___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandBind___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandBind(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandBind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandBind___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasSeq");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseq___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandseq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseq___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandseq___closed__2;
x_2 = l___regBuiltin_Lean_Elab_Tactic_evalSeq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandseq(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandseq___closed__3;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandseq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandseq(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandseq___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Tactic_evalSeq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandseq___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandseq___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandseq(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandseq___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandseq___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseqLeft___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasSeqLeft");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseqLeft___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandseqLeft___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseqLeft___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("seqLeft");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseqLeft___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandseqLeft___closed__2;
x_2 = l_Lean_Elab_Term_expandseqLeft___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandseqLeft(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandseqLeft___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandseqLeft___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandseqLeft(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandseqLeft___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandseqLeft___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandseqLeft(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseqRight___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasSeqRight");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseqRight___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandseqRight___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseqRight___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("seqRight");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandseqRight___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandseqRight___closed__2;
x_2 = l_Lean_Elab_Term_expandseqRight___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandseqRight(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandseqRight___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandseqRight___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandseqRight(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandseqRight___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandseqRight___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandseqRight(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMap___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Functor");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMap___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandMap___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMap___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("map");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMap___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandMap___closed__2;
x_2 = l_Lean_Elab_Term_expandMap___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandMap___closed__4;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandMap(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandMap___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandMap___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandMap___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandMap___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandMap(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandMap___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandMap___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMapRev___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mapRev");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandMapRev___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_expandMap___closed__2;
x_2 = l_Lean_Elab_Term_expandMapRev___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandMapRev(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandMapRev___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandMapRev___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandMapRev(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandMapRev___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandMapRev___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandMapRev(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandOrElse(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandOrElse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandOrElse(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Tactic_evalOrelse___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandOrElse___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandOrElse(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandOrM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("orM");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandOrM___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandOrM___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandOrM(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandOrM___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandOrM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandOrM(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandOrM___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandOrM___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandOrM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandOrM___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandOrM(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandOrM___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandOrM___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAndM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("andM");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandAndM___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandAndM___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandAndM(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandAndM___closed__2;
x_5 = l_Lean_Elab_Term_expandInfixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandAndM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandAndM(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAndM___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_expandAndM___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandAndM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandAndM___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandAndM(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandAndM___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_expandAndM___closed__2;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandNot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Not");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandNot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandNot___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandNot(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandNot___closed__2;
x_5 = l_Lean_Elab_Term_expandPrefixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandNot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandNot(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandNot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("not");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandNot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandNot___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandNot___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandNot___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandNot(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandNot___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandNot___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandBNot___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___regBuiltin_Lean_Elab_Term_expandNot___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandBNot(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Elab_Term_expandBNot___closed__1;
x_5 = l_Lean_Elab_Term_expandPrefixOp(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_expandBNot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandBNot(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBNot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bnot");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBNot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_expandBNot___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandBNot___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandBNot___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandBNot(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_expandBNot___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandBNot___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_Term(lean_object*);
lean_object* initialize_Lean_Elab_Quotation(lean_object*);
lean_object* initialize_Lean_Elab_SyntheticMVars(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_BuiltinNotation(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Quotation(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandDollar___closed__1 = _init_l_Lean_Elab_Term_expandDollar___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandDollar___closed__1);
l_Lean_Elab_Term_expandDollar___closed__2 = _init_l_Lean_Elab_Term_expandDollar___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandDollar___closed__2);
l___regBuiltin_Lean_Elab_Term_expandDollar___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandDollar___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandDollar___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandDollar(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandDollarProj___closed__1 = _init_l_Lean_Elab_Term_expandDollarProj___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandDollarProj___closed__1);
l_Lean_Elab_Term_expandDollarProj___closed__2 = _init_l_Lean_Elab_Term_expandDollarProj___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandDollarProj___closed__2);
l_Lean_Elab_Term_expandDollarProj___closed__3 = _init_l_Lean_Elab_Term_expandDollarProj___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandDollarProj___closed__3);
l_Lean_Elab_Term_expandDollarProj___closed__4 = _init_l_Lean_Elab_Term_expandDollarProj___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandDollarProj___closed__4);
l___regBuiltin_Lean_Elab_Term_expandDollarProj___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandDollarProj___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandDollarProj___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandDollarProj(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandIf___closed__1 = _init_l_Lean_Elab_Term_expandIf___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandIf___closed__1);
l_Lean_Elab_Term_expandIf___closed__2 = _init_l_Lean_Elab_Term_expandIf___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandIf___closed__2);
l_Lean_Elab_Term_expandIf___closed__3 = _init_l_Lean_Elab_Term_expandIf___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandIf___closed__3);
l_Lean_Elab_Term_expandIf___closed__4 = _init_l_Lean_Elab_Term_expandIf___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandIf___closed__4);
l_Lean_Elab_Term_expandIf___closed__5 = _init_l_Lean_Elab_Term_expandIf___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_expandIf___closed__5);
l_Lean_Elab_Term_expandIf___closed__6 = _init_l_Lean_Elab_Term_expandIf___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_expandIf___closed__6);
l_Lean_Elab_Term_expandIf___closed__7 = _init_l_Lean_Elab_Term_expandIf___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_expandIf___closed__7);
l_Lean_Elab_Term_expandIf___closed__8 = _init_l_Lean_Elab_Term_expandIf___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_expandIf___closed__8);
l_Lean_Elab_Term_expandIf___closed__9 = _init_l_Lean_Elab_Term_expandIf___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_expandIf___closed__9);
l___regBuiltin_Lean_Elab_Term_expandIf___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandIf___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandIf___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandIf(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandSubtype___closed__1 = _init_l_Lean_Elab_Term_expandSubtype___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__1);
l_Lean_Elab_Term_expandSubtype___closed__2 = _init_l_Lean_Elab_Term_expandSubtype___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__2);
l_Lean_Elab_Term_expandSubtype___closed__3 = _init_l_Lean_Elab_Term_expandSubtype___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__3);
l_Lean_Elab_Term_expandSubtype___closed__4 = _init_l_Lean_Elab_Term_expandSubtype___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__4);
l_Lean_Elab_Term_expandSubtype___closed__5 = _init_l_Lean_Elab_Term_expandSubtype___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__5);
l_Lean_Elab_Term_expandSubtype___closed__6 = _init_l_Lean_Elab_Term_expandSubtype___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__6);
l_Lean_Elab_Term_expandSubtype___closed__7 = _init_l_Lean_Elab_Term_expandSubtype___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__7);
l_Lean_Elab_Term_expandSubtype___closed__8 = _init_l_Lean_Elab_Term_expandSubtype___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__8);
l_Lean_Elab_Term_expandSubtype___closed__9 = _init_l_Lean_Elab_Term_expandSubtype___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__9);
l_Lean_Elab_Term_expandSubtype___closed__10 = _init_l_Lean_Elab_Term_expandSubtype___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__10);
l_Lean_Elab_Term_expandSubtype___closed__11 = _init_l_Lean_Elab_Term_expandSubtype___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__11);
l_Lean_Elab_Term_expandSubtype___closed__12 = _init_l_Lean_Elab_Term_expandSubtype___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_expandSubtype___closed__12);
l___regBuiltin_Lean_Elab_Term_expandSubtype___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandSubtype___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandSubtype___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandSubtype(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabAnonymousCtor___closed__1 = _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabAnonymousCtor___closed__1);
l_Lean_Elab_Term_elabAnonymousCtor___closed__2 = _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabAnonymousCtor___closed__2);
l_Lean_Elab_Term_elabAnonymousCtor___closed__3 = _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabAnonymousCtor___closed__3);
l_Lean_Elab_Term_elabAnonymousCtor___closed__4 = _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabAnonymousCtor___closed__4);
l_Lean_Elab_Term_elabAnonymousCtor___closed__5 = _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_elabAnonymousCtor___closed__5);
l_Lean_Elab_Term_elabAnonymousCtor___closed__6 = _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_elabAnonymousCtor___closed__6);
l_Lean_Elab_Term_elabAnonymousCtor___closed__7 = _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_elabAnonymousCtor___closed__7);
l_Lean_Elab_Term_elabAnonymousCtor___closed__8 = _init_l_Lean_Elab_Term_elabAnonymousCtor___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_elabAnonymousCtor___closed__8);
l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabAnonymousCtor(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandShow___closed__1 = _init_l_Lean_Elab_Term_expandShow___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandShow___closed__1);
l_Lean_Elab_Term_expandShow___closed__2 = _init_l_Lean_Elab_Term_expandShow___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandShow___closed__2);
l_Lean_Elab_Term_expandShow___closed__3 = _init_l_Lean_Elab_Term_expandShow___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandShow___closed__3);
l_Lean_Elab_Term_expandShow___closed__4 = _init_l_Lean_Elab_Term_expandShow___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandShow___closed__4);
l_Lean_Elab_Term_expandShow___closed__5 = _init_l_Lean_Elab_Term_expandShow___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_expandShow___closed__5);
l_Lean_Elab_Term_expandShow___closed__6 = _init_l_Lean_Elab_Term_expandShow___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_expandShow___closed__6);
l_Lean_Elab_Term_expandShow___closed__7 = _init_l_Lean_Elab_Term_expandShow___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_expandShow___closed__7);
l_Lean_Elab_Term_expandShow___closed__8 = _init_l_Lean_Elab_Term_expandShow___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_expandShow___closed__8);
l___regBuiltin_Lean_Elab_Term_expandShow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandShow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandShow___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandShow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandHave___closed__1 = _init_l_Lean_Elab_Term_expandHave___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandHave___closed__1);
l_Lean_Elab_Term_expandHave___closed__2 = _init_l_Lean_Elab_Term_expandHave___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandHave___closed__2);
l_Lean_Elab_Term_expandHave___closed__3 = _init_l_Lean_Elab_Term_expandHave___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandHave___closed__3);
l_Lean_Elab_Term_expandHave___closed__4 = _init_l_Lean_Elab_Term_expandHave___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandHave___closed__4);
l___regBuiltin_Lean_Elab_Term_expandHave___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandHave___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandHave___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandHave(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandWhere___closed__1 = _init_l_Lean_Elab_Term_expandWhere___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandWhere___closed__1);
l_Lean_Elab_Term_expandWhere___closed__2 = _init_l_Lean_Elab_Term_expandWhere___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandWhere___closed__2);
l___regBuiltin_Lean_Elab_Term_expandWhere___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandWhere___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandWhere___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandWhere(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__1 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__1);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__2 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__2);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__3 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__3);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__4 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__4();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__4);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__5 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__5();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__5);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__6 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__6();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__6);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__7 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__7();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__7);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__8 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__8();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__8);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__9 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__9();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__9);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__10 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__10();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__10);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__11 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__11();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__11);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__12 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__12();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__12);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__13 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__13();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__13);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__14 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__14();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__14);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__15 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__15();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__15);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__16 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__16();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__16);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__17 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__17();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__17);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__18 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__18();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__18);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__19);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__20 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__20();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__20);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__21 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__21();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__21);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__22 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__22();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__22);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__23 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__23();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__23);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__24 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__24();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__24);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__25 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__25();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__25);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__26);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__27 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__27();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__27);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__28 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__28();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__28);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__29 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__29();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__29);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__30 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__30();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__30);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__31 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__31();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__31);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__32 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__32();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__32);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__33 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__33();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__33);
l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__34 = _init_l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__34();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_1__elabParserMacroAux___closed__34);
l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__1 = _init_l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__1);
l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__2 = _init_l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__2);
l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__3 = _init_l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__3);
l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__4 = _init_l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabParserMacro___lambda__1___closed__4);
l_Lean_Elab_Term_elabParserMacro___closed__1 = _init_l_Lean_Elab_Term_elabParserMacro___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabParserMacro___closed__1);
l___regBuiltin_Lean_Elab_Term_elabParserMacro___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabParserMacro___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabParserMacro___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabParserMacro(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__1 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__1);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__2 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__2);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__3 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__3);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__4 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__4();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__4);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__5 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__5();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__5);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__6 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__6();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__6);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__7 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__7();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__7);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__8 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__8();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__8);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__9 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__9();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__9);
l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__10 = _init_l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__10();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_2__elabTParserMacroAux___closed__10);
l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__1 = _init_l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__1);
l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__2 = _init_l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabTParserMacro___lambda__1___closed__2);
l_Lean_Elab_Term_elabTParserMacro___closed__1 = _init_l_Lean_Elab_Term_elabTParserMacro___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabTParserMacro___closed__1);
l___regBuiltin_Lean_Elab_Term_elabTParserMacro___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabTParserMacro___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabTParserMacro___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabTParserMacro(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__1 = _init_l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__1();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__1);
l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__2 = _init_l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__2();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_3__mkNativeReflAuxDecl___closed__2);
l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__1 = _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__1();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__1);
l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__2 = _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__2();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__2);
l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__3 = _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__3();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__3);
l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__4 = _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__4();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__4);
l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__5 = _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__5();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__5);
l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__6 = _init_l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__6();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_4__elabClosedTerm___closed__6);
l_Lean_Elab_Term_elabNativeRefl___closed__1 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__1);
l_Lean_Elab_Term_elabNativeRefl___closed__2 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__2);
l_Lean_Elab_Term_elabNativeRefl___closed__3 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__3);
l_Lean_Elab_Term_elabNativeRefl___closed__4 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__4);
l_Lean_Elab_Term_elabNativeRefl___closed__5 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__5);
l_Lean_Elab_Term_elabNativeRefl___closed__6 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__6);
l_Lean_Elab_Term_elabNativeRefl___closed__7 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__7);
l_Lean_Elab_Term_elabNativeRefl___closed__8 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__8);
l_Lean_Elab_Term_elabNativeRefl___closed__9 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__9);
l_Lean_Elab_Term_elabNativeRefl___closed__10 = _init_l_Lean_Elab_Term_elabNativeRefl___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeRefl___closed__10);
l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__1);
l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__2);
l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNativeRefl___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabNativeRefl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__1 = _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__1();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__1);
l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__2 = _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__2();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__2);
l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__3 = _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__3();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__3);
l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__4 = _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__4();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__4);
l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__5 = _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__5();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__5);
l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__6 = _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__6();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__6);
l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__7 = _init_l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__7();
lean_mark_persistent(l___private_Lean_Elab_BuiltinNotation_5__getPropToDecide___closed__7);
l_Lean_Elab_Term_elabNativeDecide___closed__1 = _init_l_Lean_Elab_Term_elabNativeDecide___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabNativeDecide___closed__1);
l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__1);
l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__2);
l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNativeDecide___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabNativeDecide(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabDecide___closed__1 = _init_l_Lean_Elab_Term_elabDecide___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabDecide___closed__1);
l___regBuiltin_Lean_Elab_Term_elabDecide___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabDecide___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDecide___closed__1);
l___regBuiltin_Lean_Elab_Term_elabDecide___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabDecide___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDecide___closed__2);
res = l___regBuiltin_Lean_Elab_Term_elabDecide(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandProd___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandProd___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandProd___closed__1);
l___regBuiltin_Lean_Elab_Term_expandProd___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandProd___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandProd___closed__2);
l___regBuiltin_Lean_Elab_Term_expandProd___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandProd___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandProd___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandProd(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_ExpandFComp___closed__1 = _init_l_Lean_Elab_Term_ExpandFComp___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_ExpandFComp___closed__1);
l_Lean_Elab_Term_ExpandFComp___closed__2 = _init_l_Lean_Elab_Term_ExpandFComp___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_ExpandFComp___closed__2);
l_Lean_Elab_Term_ExpandFComp___closed__3 = _init_l_Lean_Elab_Term_ExpandFComp___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_ExpandFComp___closed__3);
l_Lean_Elab_Term_ExpandFComp___closed__4 = _init_l_Lean_Elab_Term_ExpandFComp___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_ExpandFComp___closed__4);
l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__1);
l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__2);
l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_ExpandFComp___closed__3);
res = l___regBuiltin_Lean_Elab_Term_ExpandFComp(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandAdd___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandAdd___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAdd___closed__1);
l___regBuiltin_Lean_Elab_Term_expandAdd___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandAdd___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAdd___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandAdd(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandSub___closed__1 = _init_l_Lean_Elab_Term_expandSub___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandSub___closed__1);
l_Lean_Elab_Term_expandSub___closed__2 = _init_l_Lean_Elab_Term_expandSub___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandSub___closed__2);
l_Lean_Elab_Term_expandSub___closed__3 = _init_l_Lean_Elab_Term_expandSub___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandSub___closed__3);
l___regBuiltin_Lean_Elab_Term_expandSub___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandSub___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandSub___closed__1);
l___regBuiltin_Lean_Elab_Term_expandSub___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandSub___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandSub___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandSub(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandMul___closed__1 = _init_l_Lean_Elab_Term_expandMul___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandMul___closed__1);
l_Lean_Elab_Term_expandMul___closed__2 = _init_l_Lean_Elab_Term_expandMul___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandMul___closed__2);
l_Lean_Elab_Term_expandMul___closed__3 = _init_l_Lean_Elab_Term_expandMul___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandMul___closed__3);
l___regBuiltin_Lean_Elab_Term_expandMul___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandMul___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandMul___closed__1);
l___regBuiltin_Lean_Elab_Term_expandMul___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandMul___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandMul___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandMul(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandDiv___closed__1 = _init_l_Lean_Elab_Term_expandDiv___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandDiv___closed__1);
l_Lean_Elab_Term_expandDiv___closed__2 = _init_l_Lean_Elab_Term_expandDiv___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandDiv___closed__2);
l_Lean_Elab_Term_expandDiv___closed__3 = _init_l_Lean_Elab_Term_expandDiv___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandDiv___closed__3);
l___regBuiltin_Lean_Elab_Term_expandDiv___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandDiv___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandDiv___closed__1);
l___regBuiltin_Lean_Elab_Term_expandDiv___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandDiv___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandDiv___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandDiv(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandMod___closed__1 = _init_l_Lean_Elab_Term_expandMod___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandMod___closed__1);
l_Lean_Elab_Term_expandMod___closed__2 = _init_l_Lean_Elab_Term_expandMod___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandMod___closed__2);
l_Lean_Elab_Term_expandMod___closed__3 = _init_l_Lean_Elab_Term_expandMod___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandMod___closed__3);
l___regBuiltin_Lean_Elab_Term_expandMod___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandMod___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandMod___closed__1);
l___regBuiltin_Lean_Elab_Term_expandMod___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandMod___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandMod___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandMod(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandModN___closed__1 = _init_l_Lean_Elab_Term_expandModN___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandModN___closed__1);
l_Lean_Elab_Term_expandModN___closed__2 = _init_l_Lean_Elab_Term_expandModN___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandModN___closed__2);
l_Lean_Elab_Term_expandModN___closed__3 = _init_l_Lean_Elab_Term_expandModN___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandModN___closed__3);
l_Lean_Elab_Term_expandModN___closed__4 = _init_l_Lean_Elab_Term_expandModN___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandModN___closed__4);
l___regBuiltin_Lean_Elab_Term_expandModN___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandModN___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandModN___closed__1);
l___regBuiltin_Lean_Elab_Term_expandModN___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandModN___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandModN___closed__2);
l___regBuiltin_Lean_Elab_Term_expandModN___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandModN___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandModN___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandModN(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandPow___closed__1 = _init_l_Lean_Elab_Term_expandPow___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandPow___closed__1);
l_Lean_Elab_Term_expandPow___closed__2 = _init_l_Lean_Elab_Term_expandPow___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandPow___closed__2);
l_Lean_Elab_Term_expandPow___closed__3 = _init_l_Lean_Elab_Term_expandPow___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandPow___closed__3);
l_Lean_Elab_Term_expandPow___closed__4 = _init_l_Lean_Elab_Term_expandPow___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandPow___closed__4);
l___regBuiltin_Lean_Elab_Term_expandPow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandPow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandPow___closed__1);
l___regBuiltin_Lean_Elab_Term_expandPow___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandPow___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandPow___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandPow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandLE___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandLE___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandLE___closed__1);
l___regBuiltin_Lean_Elab_Term_expandLE___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandLE___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandLE___closed__2);
l___regBuiltin_Lean_Elab_Term_expandLE___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandLE___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandLE___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandLE(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandGE___closed__1 = _init_l_Lean_Elab_Term_expandGE___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandGE___closed__1);
l_Lean_Elab_Term_expandGE___closed__2 = _init_l_Lean_Elab_Term_expandGE___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandGE___closed__2);
l___regBuiltin_Lean_Elab_Term_expandGE___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandGE___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandGE___closed__1);
l___regBuiltin_Lean_Elab_Term_expandGE___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandGE___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandGE___closed__2);
l___regBuiltin_Lean_Elab_Term_expandGE___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandGE___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandGE___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandGE(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandLT___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandLT___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandLT___closed__1);
l___regBuiltin_Lean_Elab_Term_expandLT___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandLT___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandLT___closed__2);
l___regBuiltin_Lean_Elab_Term_expandLT___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandLT___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandLT___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandLT(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandGT___closed__1 = _init_l_Lean_Elab_Term_expandGT___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandGT___closed__1);
l_Lean_Elab_Term_expandGT___closed__2 = _init_l_Lean_Elab_Term_expandGT___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandGT___closed__2);
l___regBuiltin_Lean_Elab_Term_expandGT___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandGT___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandGT___closed__1);
l___regBuiltin_Lean_Elab_Term_expandGT___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandGT___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandGT___closed__2);
l___regBuiltin_Lean_Elab_Term_expandGT___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandGT___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandGT___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandGT(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandEq___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandEq___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandEq___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandNe___closed__1 = _init_l_Lean_Elab_Term_expandNe___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandNe___closed__1);
l_Lean_Elab_Term_expandNe___closed__2 = _init_l_Lean_Elab_Term_expandNe___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandNe___closed__2);
l___regBuiltin_Lean_Elab_Term_expandNe___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandNe___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandNe___closed__1);
l___regBuiltin_Lean_Elab_Term_expandNe___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandNe___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandNe___closed__2);
l___regBuiltin_Lean_Elab_Term_expandNe___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandNe___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandNe___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandNe(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandBEq___closed__1 = _init_l_Lean_Elab_Term_expandBEq___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandBEq___closed__1);
l_Lean_Elab_Term_expandBEq___closed__2 = _init_l_Lean_Elab_Term_expandBEq___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandBEq___closed__2);
l___regBuiltin_Lean_Elab_Term_expandBEq___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandBEq___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBEq___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandBEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandBNe___closed__1 = _init_l_Lean_Elab_Term_expandBNe___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandBNe___closed__1);
l_Lean_Elab_Term_expandBNe___closed__2 = _init_l_Lean_Elab_Term_expandBNe___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandBNe___closed__2);
l___regBuiltin_Lean_Elab_Term_expandBNe___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandBNe___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBNe___closed__1);
l___regBuiltin_Lean_Elab_Term_expandBNe___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandBNe___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBNe___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandBNe(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandHEq___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandHEq___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandHEq___closed__1);
l___regBuiltin_Lean_Elab_Term_expandHEq___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandHEq___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandHEq___closed__2);
l___regBuiltin_Lean_Elab_Term_expandHEq___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandHEq___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandHEq___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandHEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandEquiv___closed__1 = _init_l_Lean_Elab_Term_expandEquiv___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandEquiv___closed__1);
l_Lean_Elab_Term_expandEquiv___closed__2 = _init_l_Lean_Elab_Term_expandEquiv___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandEquiv___closed__2);
l_Lean_Elab_Term_expandEquiv___closed__3 = _init_l_Lean_Elab_Term_expandEquiv___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandEquiv___closed__3);
l_Lean_Elab_Term_expandEquiv___closed__4 = _init_l_Lean_Elab_Term_expandEquiv___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandEquiv___closed__4);
l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__1);
l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__2);
l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandEquiv___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandEquiv(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandAnd___closed__1 = _init_l_Lean_Elab_Term_expandAnd___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandAnd___closed__1);
l_Lean_Elab_Term_expandAnd___closed__2 = _init_l_Lean_Elab_Term_expandAnd___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandAnd___closed__2);
l___regBuiltin_Lean_Elab_Term_expandAnd___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandAnd___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAnd___closed__1);
l___regBuiltin_Lean_Elab_Term_expandAnd___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandAnd___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAnd___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandAnd(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandOr___closed__1 = _init_l_Lean_Elab_Term_expandOr___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandOr___closed__1);
l_Lean_Elab_Term_expandOr___closed__2 = _init_l_Lean_Elab_Term_expandOr___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandOr___closed__2);
l___regBuiltin_Lean_Elab_Term_expandOr___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandOr___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandOr___closed__1);
l___regBuiltin_Lean_Elab_Term_expandOr___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandOr___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandOr___closed__2);
l___regBuiltin_Lean_Elab_Term_expandOr___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandOr___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandOr___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandOr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandIff___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandIff___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandIff___closed__1);
l___regBuiltin_Lean_Elab_Term_expandIff___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandIff___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandIff___closed__2);
l___regBuiltin_Lean_Elab_Term_expandIff___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandIff___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandIff___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandIff(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandBAnd___closed__1 = _init_l_Lean_Elab_Term_expandBAnd___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandBAnd___closed__1);
l___regBuiltin_Lean_Elab_Term_expandBAnd___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandBAnd___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBAnd___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandBAnd(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandBOr___closed__1 = _init_l_Lean_Elab_Term_expandBOr___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandBOr___closed__1);
l___regBuiltin_Lean_Elab_Term_expandBOr___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandBOr___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBOr___closed__1);
l___regBuiltin_Lean_Elab_Term_expandBOr___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandBOr___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBOr___closed__2);
l___regBuiltin_Lean_Elab_Term_expandBOr___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandBOr___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBOr___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandBOr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandAppend___closed__1 = _init_l_Lean_Elab_Term_expandAppend___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandAppend___closed__1);
l_Lean_Elab_Term_expandAppend___closed__2 = _init_l_Lean_Elab_Term_expandAppend___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandAppend___closed__2);
l_Lean_Elab_Term_expandAppend___closed__3 = _init_l_Lean_Elab_Term_expandAppend___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandAppend___closed__3);
l___regBuiltin_Lean_Elab_Term_expandAppend___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandAppend___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAppend___closed__1);
l___regBuiltin_Lean_Elab_Term_expandAppend___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandAppend___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAppend___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandAppend(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandCons___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandCons___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandCons___closed__1);
l___regBuiltin_Lean_Elab_Term_expandCons___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandCons___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandCons___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandCons(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandAndThen___closed__1 = _init_l_Lean_Elab_Term_expandAndThen___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandAndThen___closed__1);
l_Lean_Elab_Term_expandAndThen___closed__2 = _init_l_Lean_Elab_Term_expandAndThen___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandAndThen___closed__2);
l_Lean_Elab_Term_expandAndThen___closed__3 = _init_l_Lean_Elab_Term_expandAndThen___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandAndThen___closed__3);
l_Lean_Elab_Term_expandAndThen___closed__4 = _init_l_Lean_Elab_Term_expandAndThen___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandAndThen___closed__4);
l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__1);
l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAndThen___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandAndThen(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandBind___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandBind___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBind___closed__1);
l___regBuiltin_Lean_Elab_Term_expandBind___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandBind___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBind___closed__2);
l___regBuiltin_Lean_Elab_Term_expandBind___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandBind___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBind___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandBind(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandseq___closed__1 = _init_l_Lean_Elab_Term_expandseq___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandseq___closed__1);
l_Lean_Elab_Term_expandseq___closed__2 = _init_l_Lean_Elab_Term_expandseq___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandseq___closed__2);
l_Lean_Elab_Term_expandseq___closed__3 = _init_l_Lean_Elab_Term_expandseq___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandseq___closed__3);
l___regBuiltin_Lean_Elab_Term_expandseq___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandseq___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandseq___closed__1);
l___regBuiltin_Lean_Elab_Term_expandseq___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandseq___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandseq___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandseq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandseqLeft___closed__1 = _init_l_Lean_Elab_Term_expandseqLeft___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandseqLeft___closed__1);
l_Lean_Elab_Term_expandseqLeft___closed__2 = _init_l_Lean_Elab_Term_expandseqLeft___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandseqLeft___closed__2);
l_Lean_Elab_Term_expandseqLeft___closed__3 = _init_l_Lean_Elab_Term_expandseqLeft___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandseqLeft___closed__3);
l_Lean_Elab_Term_expandseqLeft___closed__4 = _init_l_Lean_Elab_Term_expandseqLeft___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandseqLeft___closed__4);
l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__1);
l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandseqLeft___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandseqLeft(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandseqRight___closed__1 = _init_l_Lean_Elab_Term_expandseqRight___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandseqRight___closed__1);
l_Lean_Elab_Term_expandseqRight___closed__2 = _init_l_Lean_Elab_Term_expandseqRight___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandseqRight___closed__2);
l_Lean_Elab_Term_expandseqRight___closed__3 = _init_l_Lean_Elab_Term_expandseqRight___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandseqRight___closed__3);
l_Lean_Elab_Term_expandseqRight___closed__4 = _init_l_Lean_Elab_Term_expandseqRight___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandseqRight___closed__4);
l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__1);
l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandseqRight___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandseqRight(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandMap___closed__1 = _init_l_Lean_Elab_Term_expandMap___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandMap___closed__1);
l_Lean_Elab_Term_expandMap___closed__2 = _init_l_Lean_Elab_Term_expandMap___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandMap___closed__2);
l_Lean_Elab_Term_expandMap___closed__3 = _init_l_Lean_Elab_Term_expandMap___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandMap___closed__3);
l_Lean_Elab_Term_expandMap___closed__4 = _init_l_Lean_Elab_Term_expandMap___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandMap___closed__4);
l___regBuiltin_Lean_Elab_Term_expandMap___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandMap___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandMap___closed__1);
l___regBuiltin_Lean_Elab_Term_expandMap___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandMap___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandMap___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandMap(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandMapRev___closed__1 = _init_l_Lean_Elab_Term_expandMapRev___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandMapRev___closed__1);
l_Lean_Elab_Term_expandMapRev___closed__2 = _init_l_Lean_Elab_Term_expandMapRev___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandMapRev___closed__2);
l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__1);
l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandMapRev___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandMapRev(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__1);
l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandOrElse___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandOrElse(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandOrM___closed__1 = _init_l_Lean_Elab_Term_expandOrM___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandOrM___closed__1);
l_Lean_Elab_Term_expandOrM___closed__2 = _init_l_Lean_Elab_Term_expandOrM___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandOrM___closed__2);
l___regBuiltin_Lean_Elab_Term_expandOrM___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandOrM___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandOrM___closed__1);
l___regBuiltin_Lean_Elab_Term_expandOrM___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandOrM___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandOrM___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandOrM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandAndM___closed__1 = _init_l_Lean_Elab_Term_expandAndM___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandAndM___closed__1);
l_Lean_Elab_Term_expandAndM___closed__2 = _init_l_Lean_Elab_Term_expandAndM___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandAndM___closed__2);
l___regBuiltin_Lean_Elab_Term_expandAndM___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandAndM___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAndM___closed__1);
l___regBuiltin_Lean_Elab_Term_expandAndM___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandAndM___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandAndM___closed__2);
res = l___regBuiltin_Lean_Elab_Term_expandAndM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandNot___closed__1 = _init_l_Lean_Elab_Term_expandNot___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandNot___closed__1);
l_Lean_Elab_Term_expandNot___closed__2 = _init_l_Lean_Elab_Term_expandNot___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandNot___closed__2);
l___regBuiltin_Lean_Elab_Term_expandNot___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandNot___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandNot___closed__1);
l___regBuiltin_Lean_Elab_Term_expandNot___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandNot___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandNot___closed__2);
l___regBuiltin_Lean_Elab_Term_expandNot___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandNot___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandNot___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandNot(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandBNot___closed__1 = _init_l_Lean_Elab_Term_expandBNot___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandBNot___closed__1);
l___regBuiltin_Lean_Elab_Term_expandBNot___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandBNot___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBNot___closed__1);
l___regBuiltin_Lean_Elab_Term_expandBNot___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandBNot___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBNot___closed__2);
l___regBuiltin_Lean_Elab_Term_expandBNot___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandBNot___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandBNot___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandBNot(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
