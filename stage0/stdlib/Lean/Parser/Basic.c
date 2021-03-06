// Lean compiler output
// Module: Lean.Parser.Basic
// Imports: Init Lean.Data.Trie Lean.Data.Position Lean.Syntax Lean.ToExpr Lean.Environment Lean.Attributes Lean.Message Lean.Compiler.InitAttr
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
lean_object* l_Lean_Parser_nonReservedSymbol___boxed(lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Lean_Parser_identEq(lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_decimalNumberFn___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_foldArgs___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserOfStack___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_finishCommentBlock(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Parser_charLit___closed__1;
lean_object* l_Lean_Parser_andthenInfo___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Basic_4__isToken___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_hashOrelse;
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Parser_manyAux___main___closed__1;
lean_object* l_Lean_Parser_numLit___elambda__1___closed__2;
extern lean_object* l_Lean_fieldIdxKind;
lean_object* l_Lean_Syntax_forArgsM___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_checkTailWs(lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_hexNumberFn___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_identFn___closed__1;
lean_object* l_Lean_Parser_try(lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolInfo___elambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_prattParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_foldSepRevArgs___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLitNoAntiquot___closed__2;
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_octalNumberFn___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Parser_InputContext_inhabited___closed__1;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Parser_sepByInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_shrinkStack___boxed(lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Parser_decimalNumberFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedByFn___closed__1;
lean_object* l_Lean_Syntax_foldSepRevArgsM(lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Parser_strLitNoAntiquot;
lean_object* l_Lean_Parser_octalNumberFn___closed__1;
lean_object* l_Lean_Parser_many1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_many(lean_object*);
extern lean_object* l_Lean_identKind___closed__1;
lean_object* l_Lean_Parser_FirstTokens_toStr(lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepBy___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Basic_2__sepByFnAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_fieldIdxKind___closed__2;
lean_object* l_Lean_Parser_strAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_rawCh___elambda__1___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__1;
lean_object* l___private_Lean_Parser_Basic_3__rawAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern uint32_t l_Lean_idBeginEscape;
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_optionaInfo___elambda__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserFn_inhabited___rarg(lean_object*);
lean_object* l_Lean_Parser_binNumberFn___closed__1;
lean_object* l_Lean_Parser_hexNumberFn___closed__1;
lean_object* l_Lean_Parser_checkInsideQuotFn(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_foldSepRevArgs(lean_object*);
lean_object* l_Lean_Parser_binNumberFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numberFnAux(lean_object*, lean_object*);
lean_object* l_Lean_Parser_identEqFn___closed__1;
lean_object* l_Lean_Parser_lookahead(lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolInfo___elambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_foldSepArgs___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit;
lean_object* l_Lean_Parser_hexNumberFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_trailingLoop___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldSepBy___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit___elambda__1___closed__1;
lean_object* l_Lean_Parser_longestMatchFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_fieldIdx___closed__6;
lean_object* l_Lean_Parser_nameLitNoAntiquot;
lean_object* l_Lean_Syntax_foldSepArgs___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLitNoAntiquot___closed__2;
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_decimalNumberFn___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Trie_matchPrefix___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_octalNumberFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_stackSize___boxed(lean_object*);
lean_object* l___private_Lean_Parser_Basic_2__sepByFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_octalNumberFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_identFnAux___main___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_hexNumberFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldSepBy___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLitFnAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Basic_2__sepByFnAux(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Prod_HasRepr___rarg___closed__1;
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected___elambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_PrattParsingTables_inhabited;
lean_object* l_Lean_Parser_categoryParserFnRef;
lean_object* l_Lean_Parser_pushNone;
lean_object* l_Lean_Parser_checkNoImmediateColon___closed__1;
lean_object* l___private_Lean_Parser_Basic_1__expectedToString___main___closed__1;
lean_object* l_Lean_Parser_InputContext_inhabited;
lean_object* l_Lean_Parser_Error_HasToString___closed__1;
size_t l_USize_sub(size_t, size_t);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__17;
lean_object* l_Lean_Syntax_foldSepArgsM(lean_object*, lean_object*);
lean_object* l_Lean_Parser_unquotedSymbolFn___closed__1;
lean_object* l_Lean_Parser_group(lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbolInfo___closed__2;
lean_object* l_Lean_Parser_dollarSymbol___closed__1;
lean_object* l_Lean_Parser_ident;
uint8_t l_Lean_Parser_isLitKind(lean_object*);
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_whitespace___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_binNumberFn___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_fieldIdxKind___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__1;
lean_object* l_Lean_Parser_withAntiquotFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserOfStackFn___closed__2;
lean_object* l_Lean_Parser_checkColGe(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object*, lean_object*, lean_object*);
uint8_t l_Char_isDigit(uint32_t);
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserFnExtension___closed__2;
lean_object* l_Lean_Parser_nameLitNoAntiquot___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_satisfyFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern uint32_t l_Lean_idEndEscape;
lean_object* l_Lean_Parser_mkAntiquot___closed__9;
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__8;
lean_object* l_Lean_Parser_pushNone___elambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_notFollowedByFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolNoWsFn___closed__1;
lean_object* l_Array_foldSepByM(lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelseFn(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Position_Inhabited___closed__1;
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolNoWsFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_finishCommentBlock___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_quotedSymbol___closed__2;
lean_object* l_Lean_Parser_mkAntiquot___closed__4;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawCh___elambda__1(uint32_t, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
extern lean_object* l_Lean_charLitKind___closed__1;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolNoWsFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_tokenFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAtomicInfo(lean_object*);
lean_object* l_Lean_Parser_notFollowedBy(lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_binNumberFn___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit___elambda__1___closed__1;
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Basic_10__mkResult(lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit___closed__3;
lean_object* l_Lean_Parser_charLit___elambda__1___closed__2;
uint8_t l_Char_isWhitespace(uint32_t);
extern lean_object* l_String_splitAux___main___closed__1;
lean_object* l_Lean_Parser_mkCategoryParserFnExtension___lambda__1(lean_object*);
lean_object* l_Lean_Parser_withPosition(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__11;
lean_object* l_Lean_Parser_charLitFnAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__3;
lean_object* l_Lean_Parser_checkPrecFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_quotedSymbol___closed__1;
lean_object* l_Lean_Parser_leadingParserAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_identFnAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkNodeToken(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_tryAnti___boxed(lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_Parser_identFnAux___main___closed__1;
lean_object* l_Lean_Parser_symbolInfo___elambda__1(lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol(lean_object*, uint8_t);
lean_object* l_Lean_Parser_symbolFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkNodeToken___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkPrecFn___closed__1;
lean_object* l_Lean_Parser_initCacheForInput___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1(lean_object*);
lean_object* l_Lean_Parser_symbolNoWs___boxed(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Syntax_forSepArgsM(lean_object*);
lean_object* l_Lean_Parser_ParserState_mkErrorsAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___closed__1;
lean_object* l_Lean_Parser_checkStackTopFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_foldSepRevArgs___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolNoWsInfo___elambda__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGeFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLitFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_quotedSymbolFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_HasOfNat___closed__1;
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__1___rarg(lean_object*);
lean_object* l_Lean_Parser_takeUntilFn___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLitFnAux___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nameLitKind;
lean_object* l_Lean_Parser_categoryParserFnExtension___closed__1;
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit___closed__1;
lean_object* l_Lean_Parser_unquotedSymbol___closed__2;
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_binNumberFn___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__2(lean_object*);
lean_object* l_Lean_Parser_fieldIdx___closed__4;
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkPrecFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident___closed__1;
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_finishCommentBlock___main(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Parser_indexed___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Parser_takeWhileFn___lambda__1(lean_object*, uint32_t);
lean_object* l___private_Lean_Parser_Basic_8__updateCache(lean_object*, lean_object*);
uint32_t l_Lean_Parser_getNext(lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenInfo___elambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__3;
lean_object* l_Lean_Parser_many1Fn(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_satisfyFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawIdent___closed__3;
lean_object* l_Lean_Parser_symbolNoWsInfo___elambda__1(lean_object*);
lean_object* l___private_Init_Data_Array_QSort_1__qpartitionAux___main___at_Lean_Parser_Error_toString___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_identEqFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional(lean_object*);
uint8_t l___private_Lean_Parser_Basic_5__isIdFirstOrBeginEscape(uint32_t);
lean_object* l_Lean_Parser_antiquotExpr___closed__2;
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgs___spec__1(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__3;
lean_object* l_Lean_Parser_numLit___closed__1;
lean_object* l_Lean_Parser_rawIdentFn(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeUntilFn___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_stringToParserCoe(lean_object*);
lean_object* l_Lean_Parser_indexed(lean_object*);
lean_object* l_Lean_Parser_setExpectedFn___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit___elambda__1(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgs___spec__1(lean_object*);
lean_object* l___private_Lean_Parser_Basic_5__isIdFirstOrBeginEscape___boxed(lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l_Lean_Parser_invalidLongestMatchParser(lean_object*);
lean_object* l_Lean_Parser_invalidLongestMatchParser___closed__1;
lean_object* l_Lean_Parser_mkAntiquot___closed__5;
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_binNumberFn___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_forArgsM(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__15;
lean_object* l_Lean_Parser_decimalNumberFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_PrattParsingTables_inhabited___closed__1;
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_quotedSymbolFn___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit___closed__2;
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbolInfo___elambda__2(lean_object*);
lean_object* l_Lean_Parser_checkOutsideQuot___closed__1;
lean_object* l_Lean_Parser_initCacheForInput(lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_identFnAux___main___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__4;
lean_object* l_Lean_Parser_mkAntiquot___closed__18;
lean_object* l_Lean_Parser_termParser___closed__1;
lean_object* l_Lean_Parser_mkIdResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_fieldIdx___closed__1;
lean_object* l_Lean_Parser_unquotedSymbol___closed__1;
lean_object* l_Lean_Parser_TokenMap_insert(lean_object*);
lean_object* l_Lean_Parser_setExpected___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_unicodeSymbol(lean_object*, lean_object*);
lean_object* l_Lean_Parser_longestMatchFn___closed__1;
lean_object* l_Lean_Parser_checkStackTopFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_setBlack___rarg(lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolInfo___elambda__1(lean_object*);
lean_object* l_Lean_Parser_identNoAntiquot___closed__1;
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotExpr___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkTokenAndFixPos___closed__1;
lean_object* l_Lean_Parser_whitespace___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkTokenAndFixPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_quotedCharFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__9;
lean_object* l_Lean_Parser_checkNoWsBeforeFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAtomicInfo___elambda__2(lean_object*);
lean_object* l_Lean_Parser_strLitFn___closed__1;
lean_object* l_Lean_Parser_manyAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_hasAndthen;
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_rawCh___elambda__1___spec__1(uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident___closed__2;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_HasBeq___closed__1;
lean_object* l_Lean_Parser_nonReservedSymbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4(lean_object*);
lean_object* l_Lean_Syntax_foldSepArgsM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Parser_inhabited;
lean_object* l_Lean_Parser_hasAndthen___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__6;
lean_object* l_Lean_Parser_takeUntilFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_TokenMap_insert___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_quotedSymbolFn___spec__2(uint32_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Parser_longestMatchFnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_lookaheadFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_dollarSymbol___elambda__1___closed__2;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawIdentNoAntiquot___closed__1;
lean_object* l_Lean_Parser_symbolNoWsFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_dollarSymbol;
lean_object* l_Lean_Parser_symbolFn___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Parser_symbolNoWsInfo___elambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_quotedSymbol;
lean_object* l_Lean_Parser_numLitNoAntiquot___closed__1;
lean_object* l___private_Lean_Parser_Basic_6__nameLitAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_keepLatest(lean_object*, lean_object*);
lean_object* l_Lean_Parser_dollarSymbol___elambda__1___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr___closed__1;
lean_object* l_Lean_Syntax_foldSepRevArgsM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_TokenMap_HasEmptyc(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgs___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkNoWsBefore(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___closed__2;
lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_PersistentHashMap_insertAux___main___rarg___closed__3;
extern lean_object* l_Lean_strLitKind;
lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object*, uint8_t);
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_eraseRepsAux___main___at_Lean_Parser_Error_toString___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_finishCommentBlock___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkNoWsBefore___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_foldArgs(lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbolInfo___elambda__1(lean_object*);
lean_object* l_Lean_Parser_nodeInfo___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_merge(lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkWsBeforeFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_keepLatest___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_foldArgsM(lean_object*, lean_object*);
lean_object* l_Array_shrink___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLitNoAntiquot___closed__2;
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_fieldIdx___closed__3;
uint8_t l_Lean_Parser_Error_beq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_keepNewError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotExpr;
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_octalNumberFn___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolInfo___elambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_whitespace___main(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit___closed__3;
lean_object* l_Lean_Syntax_foldArgsM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLitFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_identFnAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_tryAnti(lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind___closed__1;
lean_object* l_Lean_Parser_optionaInfo(lean_object*);
lean_object* l_Lean_Parser_FirstTokens_seq(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Basic_9__pickNonNone___boxed(lean_object*);
lean_object* l_Lean_Parser_peekToken(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString___closed__4;
lean_object* l_Lean_Parser_anyOfFn___main___closed__1;
lean_object* l_Lean_Parser_strLit___elambda__1___closed__2;
lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_strLitKind___closed__1;
uint8_t l___private_Lean_Parser_Basic_4__isToken(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___closed__4;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit;
lean_object* l_Lean_Parser_binNumberFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLitNoAntiquot___closed__3;
lean_object* l_Lean_Parser_peekTokenAux(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_HasBeq;
lean_object* l_Lean_Parser_nonReservedSymbolInfo___closed__3;
lean_object* l_Lean_Parser_Error_Inhabited___closed__1;
lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkOutsideQuot___closed__2;
uint8_t l_Lean_Parser_checkTailNoWs(lean_object*);
lean_object* l_Lean_Parser_checkTailWs___boxed(lean_object*);
lean_object* l_Lean_Parser_charLitFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_trailingLoopStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLitNoAntiquot___closed__2;
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_longestMatchStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpectedFn(lean_object*);
lean_object* l_Lean_Parser_strLitFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__12;
lean_object* l_Lean_Parser_charLit___closed__3;
size_t l_Lean_Name_hash(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___closed__7;
lean_object* l_Lean_Parser_nameLit___closed__1;
lean_object* l_Lean_Parser_antiquotExpr___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__5;
lean_object* l_Lean_Parser_categoryParserOfStack(lean_object*, lean_object*);
extern lean_object* l_Char_HasRepr___closed__1;
lean_object* l_Lean_Parser_mkAntiquot___closed__20;
lean_object* l___private_Lean_Parser_Basic_1__expectedToString___main(lean_object*);
lean_object* l_Lean_Parser_checkWsBefore(lean_object*);
lean_object* l_Lean_Parser_checkNoWsBeforeFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_setCache(lean_object*, lean_object*);
lean_object* l_Lean_Parser_strAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__10;
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_chFn___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___closed__5;
lean_object* l___private_Lean_Parser_Basic_3__rawAux(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkIdResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_decimalNumberFn___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_octalNumberFn___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit___closed__2;
lean_object* l_Lean_Parser_strLitNoAntiquot___closed__1;
lean_object* l_Lean_Parser_sepByFn(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_fieldIdx___closed__2;
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_chFn___spec__1(uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawCh___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_getNext___boxed(lean_object*, lean_object*);
lean_object* l_IO_mkRef___at_Lean_Parser_mkCategoryParserFnRef___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser___closed__2;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
extern lean_object* l_Lean_choiceKind;
extern lean_object* l_List_repr___rarg___closed__2;
extern lean_object* l_Lean_charLitKind;
extern lean_object* l_List_reprAux___main___rarg___closed__1;
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_hexNumberFn___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_Parser_TokenMap_Inhabited(lean_object*);
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__1___rarg___boxed(lean_object*);
lean_object* l_Lean_Parser_rawIdent;
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_TokenMap_insert___spec__1(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__10;
lean_object* l_Lean_Parser_FirstTokens_merge(lean_object*, lean_object*);
extern size_t l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l_Lean_Parser_strLit___elambda__1___closed__1;
lean_object* l_Lean_Parser_pushNone___elambda__1___rarg(lean_object*);
lean_object* l___private_Init_Data_Array_QSort_1__qpartitionAux___main___at_Lean_Parser_Error_toString___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_fieldIdx___closed__5;
lean_object* l_Lean_Parser_symbolInfo___elambda__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_hexNumberFn___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit___closed__2;
lean_object* l___private_Lean_Parser_Basic_7__tokenFnAux(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserFn_inhabited(lean_object*);
lean_object* l_Lean_Parser_ParserState_mkEOIError___closed__1;
uint8_t l_Lean_Parser_isIdCont(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mergeOrElseErrors___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkNoImmediateColon___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_quotedSymbolFn___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbolInfo___elambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_octalNumberFn___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgs___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgs___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__13;
extern lean_object* l_IO_Error_Inhabited___closed__1;
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_octalNumberFn___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_hasError___boxed(lean_object*);
lean_object* l_Lean_Parser_unicodeSymbol___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeInfo___elambda__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__23;
lean_object* l_Lean_Parser_identFnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_identFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLitNoAntiquot___closed__3;
lean_object* l_Lean_Parser_charLitNoAntiquot___closed__1;
lean_object* l_Lean_Parser_categoryParserFnExtension___closed__3;
lean_object* l_Array_qsortAux___main___at_Lean_Parser_Error_toString___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Basic_2__sepByFnAux___main(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Parser_inhabited___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkTailNoWs___boxed(lean_object*);
lean_object* l_Lean_Parser_takeUntilFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolNoWsInfo(lean_object*);
lean_object* l_Lean_Parser_epsilonInfo___elambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_checkOutsideQuot;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAtomicInfo___elambda__1(lean_object*);
lean_object* l_Lean_Parser_anyOfFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkEmptySubstringAt(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_binNumberFn___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLitFnAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString___closed__2;
lean_object* l_Lean_Parser_checkInsideQuot;
lean_object* l_Lean_Parser_nameLitNoAntiquot___closed__3;
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgs___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_longestMatchMkResult(lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Lean_Parser_toggleInsideQuot(lean_object*);
lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
lean_object* l_List_redLength___main___rarg(lean_object*);
lean_object* l_Lean_Parser_rawCh(uint32_t, uint8_t);
lean_object* l_Lean_Parser_sepByInfo___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at___private_Lean_Parser_Basic_9__pickNonNone___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_restore___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Basic_11__mkTrailingResult(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__21;
lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___closed__3;
lean_object* l_Lean_Parser_sepBy1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_quotedSymbolKind;
lean_object* l_Lean_Parser_strLit___closed__3;
lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object*);
lean_object* l_Lean_Parser_termParser(lean_object*);
lean_object* l_Lean_Parser_sepByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_FirstTokens_toStr___closed__3;
lean_object* l_Lean_Parser_manyAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkInsideQuotFn___closed__1;
lean_object* l_Lean_Parser_mkAntiquot___closed__7;
uint8_t l_List_beq___main___at_Lean_Syntax_structEq___main___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Parser_pushNone___closed__1;
lean_object* l_Lean_Parser_chFn(uint32_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr;
lean_object* l_Lean_Parser_mkAtomicInfo___elambda__2___boxed(lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_quotedSymbolFn___spec__1(uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_trailingNodeAux(lean_object*, lean_object*);
lean_object* l_Lean_Parser_trailingNodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawIdent___closed__2;
lean_object* l_Lean_Syntax_foldSepArgsM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkNoImmediateColon;
lean_object* l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__7;
lean_object* l_Lean_Parser_rawIdentNoAntiquot___closed__2;
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_Parser_nameLit___elambda__1___closed__1;
lean_object* l_Lean_Parser_mkAntiquot___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkOutsideQuotFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkInsideQuot___closed__1;
extern lean_object* l___private_Lean_Environment_5__envExtensionsRef;
lean_object* l_Lean_Parser_mkCategoryParserFnExtension___closed__1;
lean_object* l_Lean_Parser_sepBy1Info(lean_object*, lean_object*);
lean_object* l_Lean_Parser_quotedCharFn___closed__1;
lean_object* l_Lean_Parser_charLitFnAux___closed__1;
lean_object* l_Lean_Parser_symbolNoWs(lean_object*);
lean_object* l_Lean_Parser_hexDigitFn___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkInsideQuotFn___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mergeErrors___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldSepBy(lean_object*);
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__2(lean_object*);
lean_object* l_Lean_Parser_trailingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelseInfo___elambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkInsideQuot___closed__2;
lean_object* l_Lean_Parser_pushNone___closed__2;
lean_object* l_Lean_Parser_quotedCharFn___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_sepBy1Fn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_dollarSymbol___elambda__1___closed__5;
lean_object* l_Lean_Parser_noFirstTokenInfo___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident___elambda__1___closed__1;
lean_object* l_Lean_Parser_checkColGeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLitFnAux___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Option_HasRepr___rarg___closed__3;
lean_object* l_Lean_Parser_prattParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldSepByM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_quotedSymbolKind___closed__1;
extern lean_object* l_Lean_identKind;
lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_fieldIdxFn___closed__1;
lean_object* l_Lean_Parser_ident___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_HasToString;
lean_object* l_Lean_Parser_trailingLoop(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgs___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit___elambda__1(lean_object*, lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_Lean_Parser_toggleInsideQuotFn(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Syntax_inhabited;
lean_object* l_Lean_Parser_unquotedSymbolFn(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit;
lean_object* l_Lean_Parser_leadingParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_hexDigitFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkCategoryParserFnRef___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__16;
lean_object* l___private_Lean_Parser_Basic_1__expectedToString(lean_object*);
lean_object* l_Lean_Parser_checkNoImmediateColon___elambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_FirstTokens_HasToString___closed__1;
lean_object* l_Lean_Parser_FirstTokens_HasToString;
lean_object* l_Lean_Parser_numLit___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_Lean_Parser_categoryParserOfStackFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolNoWsFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkNoImmediateColon___elambda__1___closed__1;
lean_object* l_Lean_Parser_runLongestMatchParser(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkTrailingNode___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findRevMAux___main___at___private_Lean_Parser_Basic_9__pickNonNone___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepBy___spec__1(lean_object*);
lean_object* l_Lean_Parser_ParserState_keepNewError___boxed(lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_quotedSymbolKind___closed__2;
lean_object* l_Lean_Parser_mkAntiquot___closed__24;
lean_object* l_Lean_Parser_mergeOrElseErrors(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_tryFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_whitespace___main___boxed(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__3___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withPosition___lambda__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Lean_Parser_takeWhileFn___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLitNoAntiquot___closed__3;
lean_object* l_Lean_Parser_Error_Inhabited;
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
uint8_t l_Std_RBNode_isRed___rarg(lean_object*);
lean_object* l_Lean_Parser_quotedSymbolFn___closed__2;
lean_object* l___private_Lean_Parser_Basic_6__nameLitAux___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr___closed__6;
lean_object* l_Lean_Parser_mkAntiquot___closed__22;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_chFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3(lean_object*);
lean_object* l_Lean_Parser_numLitNoAntiquot;
lean_object* l___private_Lean_Parser_Basic_6__nameLitAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelseInfo___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__14;
lean_object* l_Lean_Parser_FirstTokens_toStr___closed__1;
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__3(lean_object*);
lean_object* l_Lean_Parser_setExpectedFn___boxed(lean_object*);
lean_object* l_Lean_Parser_quotedSymbolFn___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_dollarSymbol___closed__3;
lean_object* l_Lean_Parser_satisfySymbolFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolInfo(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__11;
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_binNumberFn___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_quotedSymbolFn___closed__1;
lean_object* l_Lean_Parser_checkStackTop(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1Fn(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_octalNumberFn___spec__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Util_1__mkPanicMessage___closed__2;
lean_object* l_Lean_Parser_epsilonInfo;
lean_object* l_Lean_Parser_anyOfFn___main(lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___at_Lean_Parser_FirstTokens_toStr___spec__1(lean_object*);
lean_object* l_Lean_Parser_epsilonInfo___closed__3;
lean_object* l_Lean_Parser_unquotedSymbol;
lean_object* l___private_Lean_Parser_Basic_9__pickNonNone(lean_object*);
lean_object* l_Lean_Parser_hashOrelse___closed__1;
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbolInfo___elambda__2___boxed(lean_object*);
lean_object* l_Lean_Parser_many1Indent(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_whitespace___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParser___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolNoWsInfo___closed__1;
lean_object* l_Lean_Parser_pushNone___elambda__1(lean_object*);
lean_object* l_Lean_Parser_FirstTokens_toStr___closed__2;
lean_object* l_Lean_Parser_rawIdentNoAntiquot;
lean_object* l_Lean_Parser_ParserState_replaceLongest(lean_object*, lean_object*);
extern lean_object* l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_object* l_Lean_Parser_ident___elambda__1___closed__2;
lean_object* l_Lean_Parser_fieldIdxFn___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserCategory_inhabited;
lean_object* l_Lean_Parser_mkAntiquot___closed__19;
lean_object* l_Lean_Parser_dollarSymbol___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolFn___closed__1;
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_hexNumberFn___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__5(lean_object*);
lean_object* l_Lean_Parser_checkNoWsBefore___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_noFirstTokenInfo___elambda__2(lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkCategoryParserFnRef___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_epsilonInfo___closed__2;
lean_object* l_Lean_Parser_Parser_inhabited___closed__2;
lean_object* l_Lean_Parser_mkCategoryParserFnExtension(lean_object*);
lean_object* l_Lean_Parser_dollarSymbol___closed__2;
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawCh___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numberFnAux___closed__1;
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbolInfo___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1(lean_object*, lean_object*);
lean_object* l_List_eraseReps___at_Lean_Parser_Error_toString___spec__3(lean_object*);
lean_object* l_Lean_Parser_ParserCategory_inhabited___closed__1;
lean_object* l_Lean_Parser_isIdCont___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Parser_strAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhile1Fn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_identNoAntiquot___closed__3;
lean_object* l_Lean_Parser_epsilonInfo___closed__1;
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7(lean_object*);
lean_object* l_Lean_Parser_checkPrec(lean_object*);
lean_object* l_Lean_Parser_checkNoImmediateColon___closed__2;
extern lean_object* l_Lean_FileMap_Inhabited___closed__1;
extern lean_object* l_Lean_mkOptionalNode___closed__1;
lean_object* l_Lean_Parser_rawIdentFn___boxed(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_TokenMap_insert___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepBy___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* l_Lean_Parser_leadingParserAux(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_forSepArgsM___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawFn(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLitFn___closed__1;
lean_object* l_Lean_Parser_dollarSymbol___elambda__1___closed__4;
lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toList___rarg(lean_object*);
lean_object* l_Lean_Parser_checkWsBeforeFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optionalFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLitFn___closed__1;
lean_object* l_Lean_Parser_checkOutsideQuotFn___closed__1;
lean_object* l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkOutsideQuotFn___boxed(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Parser_TokenMap_insert___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isIdFirst(uint32_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_initializing(lean_object*);
lean_object* l_Lean_Parser_sepByInfo___elambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolInfo___closed__1;
lean_object* l_Lean_Syntax_forSepArgsM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_getStateUnsafe___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__6;
lean_object* l_Lean_Parser_rawIdent___closed__1;
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_fieldIdx___closed__7;
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_optionaInfo___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__4(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStxLit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAtomicInfo___closed__1;
lean_object* l_Lean_Parser_Error_toString___closed__3;
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__1(lean_object*);
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
lean_object* l_Lean_Parser_fieldIdx;
lean_object* l_Lean_Parser_Parser_inhabited___closed__3;
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_hexNumberFn___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserOfStackFn___closed__1;
lean_object* l_Lean_Parser_manyFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_next___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_Parser_Parser_inhabited___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1Info___elambda__2(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Syntax_isAntiquot___closed__1;
lean_object* l_Lean_Parser_epsilonInfo___elambda__2(lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgs___spec__1(lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_epsilonInfo___elambda__1(lean_object*);
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_hexNumberFn___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserFnExtension;
lean_object* l_Lean_Parser_epsilonInfo___elambda__2___boxed(lean_object*);
lean_object* l_List_toStringAux___main___at_Lean_Parser_FirstTokens_toStr___spec__2(uint8_t, lean_object*);
lean_object* l_List_toArrayAux___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_dollarSymbol___elambda__1___closed__3;
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_Parser_node(lean_object*, lean_object*);
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_stringToParserCoe___boxed(lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__8;
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_identNoAntiquot;
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkCategoryParserFnRef(lean_object*);
lean_object* l_Lean_Parser_ParserState_keepPrevError___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Fn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkCategoryParserFnRef___closed__1;
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__2(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Parser_mkTokenAndFixPos(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAtomicInfo___elambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object*);
lean_object* l_Lean_Parser_checkWsBefore___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*);
uint8_t l_UInt32_decLe(uint32_t, uint32_t);
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__3___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Parser_ParserState_hasError(lean_object*);
lean_object* l_Lean_Parser_symbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_hexDigitFn___closed__1;
lean_object* l_Lean_Parser_mkAtom(lean_object*, lean_object*);
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6(lean_object*);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident___closed__3;
lean_object* l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(lean_object*);
lean_object* l_Lean_Parser_indexed___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserOfStackFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_identFnAux___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_foldSepArgs(lean_object*);
lean_object* l_Lean_Parser_ParserState_keepPrevError(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__25;
lean_object* l_Lean_Parser_checkWsBefore___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserFn_inhabited___rarg___boxed(lean_object*);
extern lean_object* l_String_Inhabited;
lean_object* l_List_toStringAux___main___at_Lean_Parser_FirstTokens_toStr___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected___elambda__1(lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolInfo___closed__1;
lean_object* l_Lean_Parser_quotedSymbolFn___closed__3;
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_identFnAux___main___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_foldArgs___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_replaceLongest___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_longestMatchStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString___closed__1;
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__2;
lean_object* l_Lean_Parser_Parser_inhabited___closed__1;
lean_object* l_Lean_Syntax_getTailInfo___main(lean_object*);
lean_object* l_Lean_Parser_categoryParserOfStack___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_identFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_decimalNumberFn___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_qsortAux___main___at_Lean_Parser_Error_toString___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgs___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotExpr___closed__3;
lean_object* l_Lean_Parser_charLitNoAntiquot;
lean_object* l_Lean_Parser_strLitFnAux___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkErrorStringWithPos(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_unicodeSymbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit___elambda__1___closed__2;
lean_object* l_Lean_Parser_sepBy1Info___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawIdent___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit;
lean_object* l_Lean_Parser_many1(lean_object*, uint8_t);
lean_object* l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__2(lean_object*);
lean_object* l_Lean_Parser_mkAtomicInfo___closed__2;
lean_object* l_Lean_Parser_sepBy___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_identNoAntiquot___closed__2;
lean_object* l_Lean_Parser_strLit___closed__2;
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
lean_object* l_Lean_Parser_nonReservedSymbolInfo___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mergeErrors(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isIdRest(uint32_t);
lean_object* l_Lean_Parser_numberFnAux___boxed(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Parser_fieldIdxFn(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkIdent(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nameLitKind___closed__1;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_isLitKind___boxed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_longestMatchFnAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot___closed__1;
lean_object* l_Lean_Parser_ParserFn_inhabited___boxed(lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* _init_l_Lean_quotedSymbolKind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("quotedSymbol");
return x_1;
}
}
lean_object* _init_l_Lean_quotedSymbolKind___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_quotedSymbolKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_quotedSymbolKind() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_quotedSymbolKind___closed__2;
return x_1;
}
}
uint8_t l_Lean_Parser_isLitKind(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_strLitKind;
x_3 = lean_name_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_numLitKind;
x_5 = lean_name_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_charLitKind;
x_7 = lean_name_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_nameLitKind;
x_9 = lean_name_eq(x_1, x_8);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
}
lean_object* l_Lean_Parser_isLitKind___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_isLitKind(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_mkAtom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_mkIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
uint32_t l_Lean_Parser_getNext(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint32_t x_4; 
x_3 = lean_string_utf8_next(x_1, x_2);
x_4 = lean_string_utf8_get(x_1, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_getNext___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = l_Lean_Parser_getNext(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box_uint32(x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_maxPrec() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1024u);
return x_1;
}
}
lean_object* l_Lean_Parser_initCacheForInput(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
lean_dec(x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_initCacheForInput___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_initCacheForInput(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__4(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Name_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__3(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__4(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = 1;
x_9 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = l_Lean_Name_hash(x_2);
x_15 = 1;
x_16 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___main___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* _init_l_Lean_Parser_InputContext_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_String_splitAux___main___closed__1;
x_2 = l_Lean_FileMap_Inhabited___closed__1;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_InputContext_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_InputContext_inhabited___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_Error_Inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_String_splitAux___main___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_Error_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Error_Inhabited___closed__1;
return x_1;
}
}
lean_object* _init_l___private_Lean_Parser_Basic_1__expectedToString___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" or ");
return x_1;
}
}
lean_object* l___private_Lean_Parser_Basic_1__expectedToString___main(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_String_splitAux___main___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l___private_Lean_Parser_Basic_1__expectedToString___main___closed__1;
x_9 = lean_string_append(x_6, x_8);
x_10 = lean_string_append(x_9, x_7);
lean_dec(x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_List_reprAux___main___rarg___closed__1;
x_13 = lean_string_append(x_11, x_12);
x_14 = l___private_Lean_Parser_Basic_1__expectedToString___main(x_3);
x_15 = lean_string_append(x_13, x_14);
lean_dec(x_14);
return x_15;
}
}
}
}
}
lean_object* l___private_Lean_Parser_Basic_1__expectedToString(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Parser_Basic_1__expectedToString___main(x_1);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_QSort_1__qpartitionAux___main___at_Lean_Parser_Error_toString___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_7 = lean_array_swap(x_3, x_4, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_String_Inhabited;
x_10 = lean_array_get(x_9, x_3, x_5);
x_11 = lean_string_dec_lt(x_10, x_2);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_5 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_swap(x_3, x_4, x_5);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_4, x_16);
lean_dec(x_4);
x_18 = lean_nat_add(x_5, x_16);
lean_dec(x_5);
x_3 = x_15;
x_4 = x_17;
x_5 = x_18;
goto _start;
}
}
}
}
lean_object* l_Array_qsortAux___main___at_Lean_Parser_Error_toString___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_2, x_3);
if (x_13 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_14 = lean_nat_add(x_2, x_3);
x_15 = lean_unsigned_to_nat(2u);
x_16 = lean_nat_div(x_14, x_15);
lean_dec(x_14);
x_37 = l_String_Inhabited;
x_38 = lean_array_get(x_37, x_1, x_16);
x_39 = lean_array_get(x_37, x_1, x_2);
x_40 = lean_string_dec_lt(x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
if (x_40 == 0)
{
x_17 = x_1;
goto block_36;
}
else
{
lean_object* x_41; 
x_41 = lean_array_swap(x_1, x_2, x_16);
x_17 = x_41;
goto block_36;
}
block_36:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = l_String_Inhabited;
x_19 = lean_array_get(x_18, x_17, x_3);
x_20 = lean_array_get(x_18, x_17, x_2);
x_21 = lean_string_dec_lt(x_19, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_array_get(x_18, x_17, x_16);
x_23 = lean_string_dec_lt(x_22, x_19);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_16);
lean_inc_n(x_2, 2);
x_24 = l___private_Init_Data_Array_QSort_1__qpartitionAux___main___at_Lean_Parser_Error_toString___spec__2(x_3, x_19, x_17, x_2, x_2);
lean_dec(x_19);
x_4 = x_24;
goto block_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_19);
x_25 = lean_array_swap(x_17, x_16, x_3);
lean_dec(x_16);
x_26 = lean_array_get(x_18, x_25, x_3);
lean_inc_n(x_2, 2);
x_27 = l___private_Init_Data_Array_QSort_1__qpartitionAux___main___at_Lean_Parser_Error_toString___spec__2(x_3, x_26, x_25, x_2, x_2);
lean_dec(x_26);
x_4 = x_27;
goto block_12;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_19);
x_28 = lean_array_swap(x_17, x_2, x_3);
x_29 = lean_array_get(x_18, x_28, x_16);
x_30 = lean_array_get(x_18, x_28, x_3);
x_31 = lean_string_dec_lt(x_29, x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_16);
lean_inc_n(x_2, 2);
x_32 = l___private_Init_Data_Array_QSort_1__qpartitionAux___main___at_Lean_Parser_Error_toString___spec__2(x_3, x_30, x_28, x_2, x_2);
lean_dec(x_30);
x_4 = x_32;
goto block_12;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_30);
x_33 = lean_array_swap(x_28, x_16, x_3);
lean_dec(x_16);
x_34 = lean_array_get(x_18, x_33, x_3);
lean_inc_n(x_2, 2);
x_35 = l___private_Init_Data_Array_QSort_1__qpartitionAux___main___at_Lean_Parser_Error_toString___spec__2(x_3, x_34, x_33, x_2, x_2);
lean_dec(x_34);
x_4 = x_35;
goto block_12;
}
}
}
}
block_12:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_nat_dec_le(x_3, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Array_qsortAux___main___at_Lean_Parser_Error_toString___spec__1(x_6, x_2, x_5);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_1 = x_8;
x_2 = x_10;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
}
}
lean_object* l_List_eraseRepsAux___main___at_Lean_Parser_Error_toString___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_string_dec_eq(x_1, x_7);
if (x_9 == 0)
{
lean_ctor_set(x_2, 1, x_3);
lean_ctor_set(x_2, 0, x_1);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_8;
lean_object* _tmp_2 = x_2;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_free_object(x_2);
lean_dec(x_7);
x_2 = x_8;
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_14 = lean_string_dec_eq(x_1, x_12);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_3);
x_1 = x_12;
x_2 = x_13;
x_3 = x_15;
goto _start;
}
else
{
lean_dec(x_12);
x_2 = x_13;
goto _start;
}
}
}
}
}
lean_object* l_List_eraseReps___at_Lean_Parser_Error_toString___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_1;
}
else
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = l_List_eraseRepsAux___main___at_Lean_Parser_Error_toString___spec__4(x_2, x_3, x_4);
return x_5;
}
}
}
lean_object* _init_l_Lean_Parser_Error_toString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected ");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_Error_toString___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("; ");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_Error_toString___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_List_append___rarg(x_1, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_Error_toString___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Error_toString___closed__2;
x_2 = l_Lean_Parser_Error_toString___closed__3;
x_3 = l_String_intercalate(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Error_toString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_String_splitAux___main___closed__1;
x_5 = lean_string_dec_eq(x_2, x_4);
x_6 = lean_box(0);
x_7 = l_List_beq___main___at_Lean_Syntax_structEq___main___spec__3(x_3, x_6);
if (x_5 == 0)
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_6);
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_9 = l_List_redLength___main___rarg(x_3);
x_10 = lean_mk_empty_array_with_capacity(x_9);
lean_dec(x_9);
x_11 = l_List_toArrayAux___main___rarg(x_3, x_10);
x_12 = lean_array_get_size(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_12, x_13);
lean_dec(x_12);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_qsortAux___main___at_Lean_Parser_Error_toString___spec__1(x_11, x_15, x_14);
lean_dec(x_14);
x_17 = l_Array_toList___rarg(x_16);
lean_dec(x_16);
x_18 = l_List_eraseReps___at_Lean_Parser_Error_toString___spec__3(x_17);
x_19 = l___private_Lean_Parser_Basic_1__expectedToString___main(x_18);
x_20 = l_Lean_Parser_Error_toString___closed__1;
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_6);
x_23 = l_List_append___rarg(x_8, x_22);
x_24 = l_Lean_Parser_Error_toString___closed__2;
x_25 = l_String_intercalate(x_24, x_23);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_3);
x_26 = l_List_append___rarg(x_8, x_6);
x_27 = l_Lean_Parser_Error_toString___closed__2;
x_28 = l_String_intercalate(x_27, x_26);
return x_28;
}
}
else
{
lean_dec(x_2);
if (x_7 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_29 = l_List_redLength___main___rarg(x_3);
x_30 = lean_mk_empty_array_with_capacity(x_29);
lean_dec(x_29);
x_31 = l_List_toArrayAux___main___rarg(x_3, x_30);
x_32 = lean_array_get_size(x_31);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_sub(x_32, x_33);
lean_dec(x_32);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l_Array_qsortAux___main___at_Lean_Parser_Error_toString___spec__1(x_31, x_35, x_34);
lean_dec(x_34);
x_37 = l_Array_toList___rarg(x_36);
lean_dec(x_36);
x_38 = l_List_eraseReps___at_Lean_Parser_Error_toString___spec__3(x_37);
x_39 = l___private_Lean_Parser_Basic_1__expectedToString___main(x_38);
x_40 = l_Lean_Parser_Error_toString___closed__1;
x_41 = lean_string_append(x_40, x_39);
lean_dec(x_39);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
x_43 = l_List_append___rarg(x_6, x_42);
x_44 = l_Lean_Parser_Error_toString___closed__2;
x_45 = l_String_intercalate(x_44, x_43);
return x_45;
}
else
{
lean_object* x_46; 
lean_dec(x_3);
x_46 = l_Lean_Parser_Error_toString___closed__4;
return x_46;
}
}
}
}
lean_object* l___private_Init_Data_Array_QSort_1__qpartitionAux___main___at_Lean_Parser_Error_toString___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Data_Array_QSort_1__qpartitionAux___main___at_Lean_Parser_Error_toString___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_qsortAux___main___at_Lean_Parser_Error_toString___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsortAux___main___at_Lean_Parser_Error_toString___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_Error_HasToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Error_toString), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_Error_HasToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Error_HasToString___closed__1;
return x_1;
}
}
uint8_t l_Lean_Parser_Error_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_string_dec_eq(x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_2, 1);
x_9 = l_List_beq___main___at_Lean_Syntax_structEq___main___spec__3(x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Parser_Error_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Parser_Error_beq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_Error_HasBeq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Error_beq___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_Error_HasBeq() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Error_HasBeq___closed__1;
return x_1;
}
}
lean_object* l_Lean_Parser_Error_merge(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_String_splitAux___main___closed__1;
x_6 = lean_string_dec_eq(x_3, x_5);
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = l_List_append___rarg(x_9, x_4);
if (x_6 == 0)
{
lean_dec(x_8);
lean_ctor_set(x_1, 1, x_10);
lean_ctor_set(x_1, 0, x_3);
return x_1;
}
else
{
lean_dec(x_3);
lean_ctor_set(x_1, 1, x_10);
return x_1;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = l_List_append___rarg(x_12, x_4);
if (x_6 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
}
uint8_t l_Lean_Parser_ParserState_hasError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 3);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
}
}
lean_object* l_Lean_Parser_ParserState_hasError___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_ParserState_hasError(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_array_get_size(x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_ParserState_stackSize___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ParserState_stackSize(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_ParserState_restore(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 3);
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_dec(x_7);
x_8 = l_Array_shrink___main___rarg(x_5, x_2);
x_9 = lean_box(0);
lean_ctor_set(x_1, 3, x_9);
lean_ctor_set(x_1, 1, x_3);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l_Array_shrink___main___rarg(x_10, x_2);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_11);
lean_ctor_set(x_14, 3, x_13);
return x_14;
}
}
}
lean_object* l_Lean_Parser_ParserState_restore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_ParserState_restore(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_ParserState_setPos(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_dec(x_4);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_6);
lean_ctor_set(x_8, 3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Parser_ParserState_setCache(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 2);
lean_dec(x_4);
lean_ctor_set(x_1, 2, x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_2);
lean_ctor_set(x_8, 3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_array_push(x_4, x_2);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_10 = lean_array_push(x_6, x_2);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_array_pop(x_3);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_9 = lean_array_pop(x_5);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_8);
return x_10;
}
}
}
lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Array_shrink___main___rarg(x_4, x_2);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_10 = l_Array_shrink___main___rarg(x_6, x_2);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Parser_ParserState_shrinkStack___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_ParserState_shrinkStack(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_ParserState_next(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_dec(x_5);
x_6 = lean_string_utf8_next(x_2, x_3);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_10 = lean_string_utf8_next(x_2, x_3);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Parser_ParserState_next___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_ParserState_next(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 3);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = l_String_splitAux___main___closed__1;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Lean_FileMap_toPosition(x_7, x_8);
lean_dec(x_7);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_Parser_Error_toString(x_5);
x_14 = l_Lean_mkErrorStringWithPos(x_10, x_11, x_12, x_13);
lean_dec(x_13);
return x_14;
}
}
}
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 3);
lean_dec(x_7);
x_8 = lean_array_get_size(x_6);
lean_inc(x_3);
x_9 = l_Array_extract___rarg(x_6, x_3, x_8);
lean_dec(x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Array_shrink___main___rarg(x_6, x_3);
lean_dec(x_3);
x_12 = lean_array_push(x_11, x_10);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_16 = lean_array_get_size(x_13);
lean_inc(x_3);
x_17 = l_Array_extract___rarg(x_13, x_3, x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Array_shrink___main___rarg(x_13, x_3);
lean_dec(x_3);
x_20 = lean_array_push(x_19, x_18);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_15);
lean_ctor_set(x_21, 3, x_4);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 2);
lean_inc(x_24);
x_25 = lean_array_get_size(x_22);
x_26 = lean_nat_dec_eq(x_25, x_3);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_1);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_28 = lean_ctor_get(x_1, 3);
lean_dec(x_28);
x_29 = lean_ctor_get(x_1, 2);
lean_dec(x_29);
x_30 = lean_ctor_get(x_1, 1);
lean_dec(x_30);
x_31 = lean_ctor_get(x_1, 0);
lean_dec(x_31);
lean_inc(x_3);
x_32 = l_Array_extract___rarg(x_22, x_3, x_25);
lean_dec(x_25);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_2);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Array_shrink___main___rarg(x_22, x_3);
lean_dec(x_3);
x_35 = lean_array_push(x_34, x_33);
lean_ctor_set(x_1, 0, x_35);
return x_1;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_1);
lean_inc(x_3);
x_36 = l_Array_extract___rarg(x_22, x_3, x_25);
lean_dec(x_25);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Array_shrink___main___rarg(x_22, x_3);
lean_dec(x_3);
x_39 = lean_array_push(x_38, x_37);
x_40 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_23);
lean_ctor_set(x_40, 2, x_24);
lean_ctor_set(x_40, 3, x_4);
return x_40;
}
}
else
{
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
}
lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
x_8 = lean_array_get_size(x_5);
x_9 = l_Array_extract___rarg(x_5, x_7, x_8);
lean_dec(x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Array_shrink___main___rarg(x_5, x_3);
x_12 = lean_array_push(x_11, x_10);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
x_15 = lean_ctor_get(x_1, 2);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_3, x_17);
x_19 = lean_array_get_size(x_13);
x_20 = l_Array_extract___rarg(x_13, x_18, x_19);
lean_dec(x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Array_shrink___main___rarg(x_13, x_3);
x_23 = lean_array_push(x_22, x_21);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_14);
lean_ctor_set(x_24, 2, x_15);
lean_ctor_set(x_24, 3, x_16);
return x_24;
}
}
}
lean_object* l_Lean_Parser_ParserState_mkTrailingNode___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_ParserState_mkTrailingNode(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_ParserState_mkError(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 3);
lean_dec(x_4);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_String_splitAux___main___closed__1;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_1, 3, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_String_splitAux___main___closed__1;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_11);
lean_ctor_set(x_18, 2, x_12);
lean_ctor_set(x_18, 3, x_17);
return x_18;
}
}
}
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 3);
lean_dec(x_4);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_1, 3, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_10);
lean_ctor_set(x_14, 3, x_13);
return x_14;
}
}
}
lean_object* _init_l_Lean_Parser_ParserState_mkEOIError___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("end of input");
return x_1;
}
}
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_3 = l_Lean_Parser_ParserState_mkUnexpectedError(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 3);
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_dec(x_6);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_String_splitAux___main___closed__1;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_1, 3, x_11);
lean_ctor_set(x_1, 1, x_3);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_String_splitAux___main___closed__1;
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_3);
lean_ctor_set(x_19, 2, x_13);
lean_ctor_set(x_19, 3, x_18);
return x_19;
}
}
}
lean_object* l_Lean_Parser_ParserState_mkErrorsAt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 3);
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_dec(x_6);
x_7 = l_String_splitAux___main___closed__1;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_1, 3, x_9);
lean_ctor_set(x_1, 1, x_3);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l_String_splitAux___main___closed__1;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_2);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
lean_ctor_set(x_15, 3, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 3);
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_dec(x_6);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_1, 3, x_9);
lean_ctor_set(x_1, 1, x_3);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
lean_ctor_set(x_15, 3, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Parser_ParserFn_inhabited___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ParserFn_inhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_ParserFn_inhabited___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_ParserFn_inhabited___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ParserFn_inhabited___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_ParserFn_inhabited___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ParserFn_inhabited(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_FirstTokens_seq(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
return x_2;
}
case 3:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_List_append___rarg(x_3, x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_List_append___rarg(x_3, x_7);
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
case 3:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = l_List_append___rarg(x_10, x_12);
lean_ctor_set(x_2, 0, x_13);
return x_2;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_List_append___rarg(x_10, x_14);
x_16 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
default: 
{
lean_dec(x_2);
return x_1;
}
}
}
default: 
{
lean_dec(x_2);
return x_1;
}
}
}
}
lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_ctor_set_tag(x_1, 3);
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
else
{
return x_1;
}
}
}
lean_object* l_Lean_Parser_FirstTokens_merge(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_FirstTokens_toOptional(x_2);
return x_3;
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_FirstTokens_toOptional(x_1);
return x_4;
}
case 1:
{
return x_2;
}
default: 
{
lean_dec(x_2);
return x_1;
}
}
}
case 2:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_FirstTokens_toOptional(x_1);
return x_5;
}
case 1:
{
lean_dec(x_1);
return x_2;
}
case 2:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = l_List_append___rarg(x_6, x_8);
lean_ctor_set(x_2, 0, x_9);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_List_append___rarg(x_6, x_10);
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
default: 
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_List_append___rarg(x_13, x_15);
lean_ctor_set(x_2, 0, x_16);
return x_2;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_dec(x_2);
x_18 = l_List_append___rarg(x_13, x_17);
x_19 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
}
default: 
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_20; 
x_20 = l_Lean_Parser_FirstTokens_toOptional(x_1);
return x_20;
}
case 1:
{
lean_dec(x_1);
return x_2;
}
case 2:
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_2);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_2, 0);
x_24 = l_List_append___rarg(x_21, x_23);
lean_ctor_set_tag(x_2, 3);
lean_ctor_set(x_2, 0, x_24);
return x_2;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
lean_dec(x_2);
x_26 = l_List_append___rarg(x_21, x_25);
x_27 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
default: 
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_2);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_2, 0);
x_31 = l_List_append___rarg(x_28, x_30);
lean_ctor_set(x_2, 0, x_31);
return x_2;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_2, 0);
lean_inc(x_32);
lean_dec(x_2);
x_33 = l_List_append___rarg(x_28, x_32);
x_34 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
}
}
}
}
}
}
lean_object* l_List_toStringAux___main___at_Lean_Parser_FirstTokens_toStr___spec__2(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_String_splitAux___main___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_List_reprAux___main___rarg___closed__1;
x_7 = lean_string_append(x_6, x_4);
lean_dec(x_4);
x_8 = l_List_toStringAux___main___at_Lean_Parser_FirstTokens_toStr___spec__2(x_1, x_5);
x_9 = lean_string_append(x_7, x_8);
lean_dec(x_8);
return x_9;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
x_10 = l_String_splitAux___main___closed__1;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = 0;
x_14 = l_List_toStringAux___main___at_Lean_Parser_FirstTokens_toStr___spec__2(x_13, x_12);
x_15 = lean_string_append(x_11, x_14);
lean_dec(x_14);
return x_15;
}
}
}
}
lean_object* l_List_toString___at_Lean_Parser_FirstTokens_toStr___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_repr___rarg___closed__1;
return x_2;
}
else
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = 1;
x_4 = l_List_toStringAux___main___at_Lean_Parser_FirstTokens_toStr___spec__2(x_3, x_1);
x_5 = l_List_repr___rarg___closed__2;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_List_repr___rarg___closed__3;
x_8 = lean_string_append(x_6, x_7);
return x_8;
}
}
}
lean_object* _init_l_Lean_Parser_FirstTokens_toStr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("epsilon");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_FirstTokens_toStr___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_FirstTokens_toStr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("?");
return x_1;
}
}
lean_object* l_Lean_Parser_FirstTokens_toStr(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_FirstTokens_toStr___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_FirstTokens_toStr___closed__2;
return x_3;
}
case 2:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_List_toString___at_Lean_Parser_FirstTokens_toStr___spec__1(x_4);
return x_5;
}
default: 
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_List_toString___at_Lean_Parser_FirstTokens_toStr___spec__1(x_6);
x_8 = l_Lean_Parser_FirstTokens_toStr___closed__3;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
}
}
lean_object* l_List_toStringAux___main___at_Lean_Parser_FirstTokens_toStr___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_toStringAux___main___at_Lean_Parser_FirstTokens_toStr___spec__2(x_3, x_2);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_FirstTokens_HasToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_FirstTokens_toStr), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_FirstTokens_HasToString() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_FirstTokens_HasToString___closed__1;
return x_1;
}
}
lean_object* l_Lean_Parser_Parser_inhabited___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_2);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_Parser_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_HasOfNat___closed__1;
x_2 = lean_box(1);
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_Parser_inhabited___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Parser_inhabited___lambda__1___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_Parser_inhabited___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_Parser_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__3;
return x_1;
}
}
lean_object* l_Lean_Parser_Parser_inhabited___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_Parser_inhabited___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_epsilonInfo___elambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_epsilonInfo___elambda__2(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_epsilonInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_epsilonInfo___elambda__2___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_epsilonInfo___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_epsilonInfo___elambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_epsilonInfo___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_epsilonInfo___closed__1;
x_2 = l_Lean_Parser_epsilonInfo___closed__2;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_epsilonInfo() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_epsilonInfo___closed__3;
return x_1;
}
}
lean_object* l_Lean_Parser_epsilonInfo___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_epsilonInfo___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_epsilonInfo___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_epsilonInfo___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_checkStackTopFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_5);
lean_dec(x_5);
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Lean_Parser_ParserState_mkUnexpectedError(x_4, x_2);
return x_9;
}
else
{
lean_dec(x_2);
return x_4;
}
}
}
lean_object* l_Lean_Parser_checkStackTopFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_checkStackTopFn(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_checkStackTop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_checkStackTopFn___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_Lean_Parser_epsilonInfo;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_andthenFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_5 = lean_apply_2(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_apply_2(x_2, x_3, x_5);
return x_7;
}
else
{
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
}
lean_object* l_Lean_Parser_andthenInfo___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_andthenInfo___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_andthenInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___elambda__2), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___elambda__1), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_Lean_Parser_FirstTokens_seq(x_9, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
lean_object* l_Lean_Parser_andthen(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Lean_Parser_andthenInfo(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
lean_object* _init_l_Lean_Parser_hasAndthen___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_andthen), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_hasAndthen() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_hasAndthen___closed__1;
return x_1;
}
}
lean_object* l_Lean_Parser_nodeFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_apply_2(x_2, x_3, x_4);
x_8 = l_Lean_Parser_ParserState_mkNode(x_7, x_1, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_trailingNodeFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_apply_2(x_2, x_3, x_4);
x_8 = l_Lean_Parser_ParserState_mkTrailingNode(x_7, x_1, x_6);
lean_dec(x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_nodeInfo___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_box(0);
x_7 = l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(x_5, x_1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_nodeInfo___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_nodeInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_nodeInfo___elambda__2), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nodeInfo___elambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_2, 1);
lean_dec(x_6);
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
lean_ctor_set(x_2, 1, x_4);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_4);
lean_ctor_set(x_9, 2, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Parser_node(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_Lean_Parser_nodeInfo(x_1, x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* _init_l_Lean_Parser_checkPrecFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected token at this precedence level; consider parenthesizing the term");
return x_1;
}
}
lean_object* l_Lean_Parser_checkPrecFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_nat_dec_le(x_4, x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_checkPrecFn___closed__1;
x_7 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_6);
return x_7;
}
else
{
return x_3;
}
}
}
lean_object* l_Lean_Parser_checkPrecFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_checkPrecFn(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Parser_checkPrec(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Lean_Parser_epsilonInfo;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_checkInsideQuotFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected syntax outside syntax quotation");
return x_1;
}
}
lean_object* l_Lean_Parser_checkInsideQuotFn(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Parser_checkInsideQuotFn___closed__1;
x_5 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_4);
return x_5;
}
else
{
return x_2;
}
}
}
lean_object* l_Lean_Parser_checkInsideQuotFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_checkInsideQuotFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_checkInsideQuot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_checkInsideQuotFn___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_checkInsideQuot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_checkInsideQuot___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_checkInsideQuot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_checkInsideQuot___closed__2;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_checkOutsideQuotFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected syntax inside syntax quotation");
return x_1;
}
}
lean_object* l_Lean_Parser_checkOutsideQuotFn(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_3 == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Parser_checkOutsideQuotFn___closed__1;
x_5 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_4);
return x_5;
}
}
}
lean_object* l_Lean_Parser_checkOutsideQuotFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_checkOutsideQuotFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_checkOutsideQuot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_checkOutsideQuotFn___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_checkOutsideQuot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_checkOutsideQuot___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_checkOutsideQuot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_checkOutsideQuot___closed__2;
return x_1;
}
}
lean_object* l_Lean_Parser_toggleInsideQuotFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_2, sizeof(void*)*4);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; 
x_6 = 1;
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_6);
x_7 = lean_apply_2(x_1, x_2, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_2, 2);
x_11 = lean_ctor_get(x_2, 3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_2);
x_12 = 1;
x_13 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_10);
lean_ctor_set(x_13, 3, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*4, x_12);
x_14 = lean_apply_2(x_1, x_13, x_3);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_2);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; 
x_16 = 0;
lean_ctor_set_uint8(x_2, sizeof(void*)*4, x_16);
x_17 = lean_apply_2(x_1, x_2, x_3);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_ctor_get(x_2, 2);
x_21 = lean_ctor_get(x_2, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_2);
x_22 = 0;
x_23 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_19);
lean_ctor_set(x_23, 2, x_20);
lean_ctor_set(x_23, 3, x_21);
lean_ctor_set_uint8(x_23, sizeof(void*)*4, x_22);
x_24 = lean_apply_2(x_1, x_23, x_3);
return x_24;
}
}
}
}
lean_object* l_Lean_Parser_toggleInsideQuot(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_toggleInsideQuotFn), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Parser_epsilonInfo;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_leadingNode(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Lean_Parser_nodeInfo(x_1, x_5);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = l_Lean_Parser_epsilonInfo;
x_10 = l_Lean_Parser_andthenInfo(x_9, x_6);
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
lean_object* l_Lean_Parser_trailingNodeAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = l_Lean_Parser_nodeInfo(x_1, x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_trailingNodeFn), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_trailingNode(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Lean_Parser_nodeInfo(x_1, x_5);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_trailingNodeFn), 4, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = l_Lean_Parser_epsilonInfo;
x_10 = l_Lean_Parser_andthenInfo(x_9, x_6);
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
lean_object* l_Lean_Parser_group(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_nullKind;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_mergeOrElseErrors(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_nat_dec_eq(x_6, x_3);
if (x_10 == 0)
{
lean_free_object(x_4);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_1;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_1, 3);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 0);
lean_dec(x_15);
x_16 = l_Lean_Parser_Error_merge(x_2, x_9);
lean_ctor_set(x_4, 0, x_16);
return x_1;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_17 = l_Lean_Parser_Error_merge(x_2, x_9);
lean_ctor_set(x_4, 0, x_17);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_6);
lean_ctor_set(x_18, 2, x_7);
lean_ctor_set(x_18, 3, x_4);
return x_18;
}
}
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_4, 0);
lean_inc(x_19);
lean_dec(x_4);
x_20 = lean_nat_dec_eq(x_6, x_3);
if (x_20 == 0)
{
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_21 = x_1;
} else {
 lean_dec_ref(x_1);
 x_21 = lean_box(0);
}
x_22 = l_Lean_Parser_Error_merge(x_2, x_19);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
if (lean_is_scalar(x_21)) {
 x_24 = lean_alloc_ctor(0, 4, 0);
} else {
 x_24 = x_21;
}
lean_ctor_set(x_24, 0, x_5);
lean_ctor_set(x_24, 1, x_6);
lean_ctor_set(x_24, 2, x_7);
lean_ctor_set(x_24, 3, x_23);
return x_24;
}
}
}
}
}
lean_object* l_Lean_Parser_mergeOrElseErrors___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_mergeOrElseErrors(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_orelseFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_3);
x_8 = lean_apply_2(x_1, x_3, x_4);
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
x_12 = lean_nat_dec_eq(x_11, x_7);
lean_dec(x_11);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_7);
x_13 = l_Lean_Parser_ParserState_restore(x_8, x_6, x_7);
lean_dec(x_6);
x_14 = lean_apply_2(x_2, x_3, x_13);
x_15 = l_Lean_Parser_mergeOrElseErrors(x_14, x_10, x_7);
lean_dec(x_7);
return x_15;
}
}
}
}
lean_object* l_Lean_Parser_orelseInfo___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_orelseInfo___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_orelseInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_orelseInfo___elambda__2), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_orelseInfo___elambda__1), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_Lean_Parser_FirstTokens_merge(x_9, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
lean_object* l_Lean_Parser_orelse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_orelseFn), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
lean_object* _init_l_Lean_Parser_hashOrelse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_orelse), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_hashOrelse() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_hashOrelse___closed__1;
return x_1;
}
}
lean_object* l_Lean_Parser_noFirstTokenInfo___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_noFirstTokenInfo___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_noFirstTokenInfo___elambda__2), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_noFirstTokenInfo___elambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_box(1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_tryFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_array_get_size(x_4);
lean_dec(x_4);
x_7 = lean_apply_2(x_1, x_2, x_3);
x_8 = lean_ctor_get(x_7, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_7, 3);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_dec(x_12);
x_13 = l_Array_shrink___main___rarg(x_10, x_6);
lean_dec(x_6);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 0, x_13);
return x_7;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_16 = l_Array_shrink___main___rarg(x_14, x_6);
lean_dec(x_6);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_5);
lean_ctor_set(x_17, 2, x_15);
lean_ctor_set(x_17, 3, x_8);
return x_17;
}
}
}
}
lean_object* l_Lean_Parser_try(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_tryFn), 3, 1);
lean_closure_set(x_4, 0, x_3);
lean_ctor_set(x_1, 1, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_tryFn), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Parser_optionalFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_apply_2(x_1, x_2, x_3);
x_8 = lean_ctor_get(x_7, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
x_9 = l_Lean_nullKind;
x_10 = l_Lean_Parser_ParserState_mkNode(x_7, x_9, x_5);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
lean_dec(x_8);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
x_12 = lean_nat_dec_eq(x_11, x_6);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_13 = l_Lean_nullKind;
x_14 = l_Lean_Parser_ParserState_mkNode(x_7, x_13, x_5);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = l_Lean_Parser_ParserState_restore(x_7, x_5, x_6);
x_16 = l_Lean_nullKind;
x_17 = l_Lean_Parser_ParserState_mkNode(x_15, x_16, x_5);
return x_17;
}
}
}
}
lean_object* l_Lean_Parser_optionaInfo___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_optionaInfo___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_optionaInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optionaInfo___elambda__2), 2, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_optionaInfo___elambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_Parser_FirstTokens_toOptional(x_4);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_5);
return x_6;
}
}
lean_object* l_Lean_Parser_optional(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_optionaInfo(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_optionalFn), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_Lean_Parser_lookaheadFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_apply_2(x_1, x_2, x_3);
x_8 = lean_ctor_get(x_7, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = l_Lean_Parser_ParserState_restore(x_7, x_5, x_6);
lean_dec(x_5);
return x_9;
}
else
{
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
}
lean_object* l_Lean_Parser_lookahead(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_lookaheadFn), 3, 1);
lean_closure_set(x_4, 0, x_3);
lean_ctor_set(x_1, 1, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_lookaheadFn), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* _init_l_Lean_Parser_notFollowedByFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("notFollowedBy");
return x_1;
}
}
lean_object* l_Lean_Parser_notFollowedByFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_apply_2(x_1, x_2, x_3);
x_8 = lean_ctor_get(x_7, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Parser_ParserState_restore(x_7, x_5, x_6);
lean_dec(x_5);
x_10 = l_Lean_Parser_notFollowedByFn___closed__1;
x_11 = l_Lean_Parser_ParserState_mkError(x_9, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_8);
x_12 = l_Lean_Parser_ParserState_restore(x_7, x_5, x_6);
lean_dec(x_5);
return x_12;
}
}
}
lean_object* l_Lean_Parser_notFollowedBy(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn), 3, 1);
lean_closure_set(x_4, 0, x_3);
lean_ctor_set(x_1, 1, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn), 3, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* _init_l_Lean_Parser_manyAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'many' parser combinator application, parser did not consume anything");
return x_1;
}
}
lean_object* l_Lean_Parser_manyAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_1);
lean_inc(x_2);
x_7 = lean_apply_2(x_1, x_2, x_3);
x_8 = lean_ctor_get(x_7, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
lean_dec(x_5);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = lean_nat_dec_eq(x_6, x_9);
lean_dec(x_9);
lean_dec(x_6);
if (x_10 == 0)
{
x_3 = x_7;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Parser_manyAux___main___closed__1;
x_13 = l_Lean_Parser_ParserState_mkUnexpectedError(x_7, x_12);
return x_13;
}
}
else
{
lean_object* x_14; uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
x_15 = lean_nat_dec_eq(x_6, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
else
{
lean_object* x_16; 
x_16 = l_Lean_Parser_ParserState_restore(x_7, x_5, x_6);
lean_dec(x_5);
return x_16;
}
}
}
}
lean_object* l_Lean_Parser_manyAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_manyAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_manyFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
lean_dec(x_4);
x_6 = l_Lean_Parser_manyAux___main(x_1, x_2, x_3);
x_7 = l_Lean_nullKind;
x_8 = l_Lean_Parser_ParserState_mkNode(x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_many(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_noFirstTokenInfo(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_manyFn), 3, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_Lean_Parser_many1Fn(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
lean_inc(x_1);
lean_inc(x_3);
x_7 = lean_apply_2(x_1, x_3, x_4);
x_8 = lean_ctor_get(x_7, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = l_Lean_Parser_manyAux___main(x_1, x_3, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_array_get_size(x_10);
lean_dec(x_10);
x_12 = lean_nat_sub(x_11, x_6);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_dec_eq(x_12, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_nullKind;
x_16 = l_Lean_Parser_ParserState_mkNode(x_9, x_15, x_6);
return x_16;
}
else
{
if (x_2 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = l_Lean_nullKind;
x_18 = l_Lean_Parser_ParserState_mkNode(x_9, x_17, x_6);
return x_18;
}
else
{
lean_dec(x_6);
return x_9;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_19 = lean_ctor_get(x_7, 0);
lean_inc(x_19);
x_20 = lean_array_get_size(x_19);
lean_dec(x_19);
x_21 = lean_nat_sub(x_20, x_6);
lean_dec(x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_dec_eq(x_21, x_22);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = l_Lean_nullKind;
x_25 = l_Lean_Parser_ParserState_mkNode(x_7, x_24, x_6);
return x_25;
}
else
{
if (x_2 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_Lean_nullKind;
x_27 = l_Lean_Parser_ParserState_mkNode(x_7, x_26, x_6);
return x_27;
}
else
{
lean_dec(x_6);
return x_7;
}
}
}
}
}
lean_object* l_Lean_Parser_many1Fn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_Parser_many1Fn(x_1, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Parser_many1(lean_object* x_1, uint8_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_box(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_many1Fn___boxed), 4, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_5);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_9 = lean_box(x_2);
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_many1Fn___boxed), 4, 2);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
lean_object* l_Lean_Parser_many1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Lean_Parser_many1(x_1, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Parser_Basic_2__sepByFnAux___main(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_array_get_size(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_1);
lean_inc(x_7);
x_12 = lean_apply_2(x_1, x_7, x_8);
x_13 = lean_ctor_get(x_12, 3);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_10);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_array_get_size(x_14);
lean_dec(x_14);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_2);
lean_inc(x_7);
x_17 = lean_apply_2(x_2, x_7, x_12);
x_18 = lean_ctor_get(x_17, 3);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_dec(x_16);
lean_dec(x_15);
{
uint8_t _tmp_5 = x_3;
lean_object* _tmp_7 = x_17;
x_6 = _tmp_5;
x_8 = _tmp_7;
}
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_20 = l_Lean_Parser_ParserState_restore(x_17, x_15, x_16);
lean_dec(x_15);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_array_get_size(x_21);
lean_dec(x_21);
x_23 = lean_nat_sub(x_22, x_4);
lean_dec(x_22);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_dec_eq(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_Lean_nullKind;
x_27 = l_Lean_Parser_ParserState_mkNode(x_20, x_26, x_4);
return x_27;
}
else
{
if (x_5 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = l_Lean_nullKind;
x_29 = l_Lean_Parser_ParserState_mkNode(x_20, x_28, x_4);
return x_29;
}
else
{
lean_dec(x_4);
return x_20;
}
}
}
}
else
{
lean_object* x_30; uint8_t x_31; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_30 = lean_ctor_get(x_12, 1);
lean_inc(x_30);
x_31 = lean_nat_dec_lt(x_11, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
if (x_6 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_11);
lean_dec(x_10);
x_32 = lean_box(0);
x_33 = l_Lean_Parser_ParserState_pushSyntax(x_12, x_32);
x_34 = l_Lean_nullKind;
x_35 = l_Lean_Parser_ParserState_mkNode(x_33, x_34, x_4);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_36 = l_Lean_Parser_ParserState_restore(x_12, x_10, x_11);
lean_dec(x_10);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_array_get_size(x_37);
lean_dec(x_37);
x_39 = lean_nat_sub(x_38, x_4);
lean_dec(x_38);
x_40 = lean_unsigned_to_nat(2u);
x_41 = lean_nat_dec_eq(x_39, x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = l_Lean_nullKind;
x_43 = l_Lean_Parser_ParserState_mkNode(x_36, x_42, x_4);
return x_43;
}
else
{
if (x_5 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = l_Lean_nullKind;
x_45 = l_Lean_Parser_ParserState_mkNode(x_36, x_44, x_4);
return x_45;
}
else
{
lean_object* x_46; 
lean_dec(x_4);
x_46 = l_Lean_Parser_ParserState_popSyntax(x_36);
return x_46;
}
}
}
}
else
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
return x_12;
}
}
}
}
lean_object* l___private_Lean_Parser_Basic_2__sepByFnAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = l___private_Lean_Parser_Basic_2__sepByFnAux___main(x_1, x_2, x_9, x_4, x_10, x_11, x_7, x_8);
return x_12;
}
}
lean_object* l___private_Lean_Parser_Basic_2__sepByFnAux(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Parser_Basic_2__sepByFnAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Parser_Basic_2__sepByFnAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = l___private_Lean_Parser_Basic_2__sepByFnAux(x_1, x_2, x_9, x_4, x_10, x_11, x_7, x_8);
return x_12;
}
}
lean_object* l_Lean_Parser_sepByFn(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_array_get_size(x_6);
lean_dec(x_6);
x_8 = 0;
x_9 = 1;
x_10 = l___private_Lean_Parser_Basic_2__sepByFnAux___main(x_2, x_3, x_1, x_7, x_8, x_9, x_4, x_5);
return x_10;
}
}
lean_object* l_Lean_Parser_sepByFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Lean_Parser_sepByFn(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_sepBy1Fn(uint8_t x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = l___private_Lean_Parser_Basic_2__sepByFnAux___main(x_2, x_3, x_1, x_8, x_4, x_9, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Parser_sepBy1Fn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = l_Lean_Parser_sepBy1Fn(x_7, x_2, x_3, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_Parser_sepByInfo___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_sepByInfo___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_sepByInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_sepByInfo___elambda__2), 3, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_sepByInfo___elambda__1), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_box(1);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
lean_object* l_Lean_Parser_sepBy1Info___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_sepBy1Info___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_1(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_sepBy1Info(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1Info___elambda__2), 3, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1Info___elambda__1), 3, 2);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_8);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1Info___elambda__2), 3, 2);
lean_closure_set(x_14, 0, x_10);
lean_closure_set(x_14, 1, x_13);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1Info___elambda__1), 3, 2);
lean_closure_set(x_16, 0, x_11);
lean_closure_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_12);
return x_17;
}
}
}
lean_object* l_Lean_Parser_sepBy(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = l_Lean_Parser_sepByInfo(x_4, x_5);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_box(x_3);
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_sepByFn___boxed), 5, 3);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
lean_object* l_Lean_Parser_sepBy___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Parser_sepBy(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_sepBy1(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = l_Lean_Parser_sepBy1Info(x_5, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_box(x_3);
x_11 = lean_box(x_4);
x_12 = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1Fn___boxed), 6, 4);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_8);
lean_closure_set(x_12, 2, x_9);
lean_closure_set(x_12, 3, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
lean_object* l_Lean_Parser_sepBy1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Parser_sepBy1(x_1, x_2, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_satisfyFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_6, 0);
x_8 = lean_string_utf8_at_end(x_7, x_5);
if (x_8 == 0)
{
uint32_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_string_utf8_get(x_7, x_5);
x_10 = lean_box_uint32(x_9);
x_11 = lean_apply_1(x_1, x_10);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_5);
x_13 = l_Lean_Parser_ParserState_mkUnexpectedError(x_4, x_2);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_2);
x_14 = l_Lean_Parser_ParserState_next(x_4, x_7, x_5);
lean_dec(x_5);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_16 = l_Lean_Parser_ParserState_mkUnexpectedError(x_4, x_15);
return x_16;
}
}
}
lean_object* l_Lean_Parser_satisfyFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_satisfyFn(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_string_utf8_at_end(x_6, x_4);
if (x_7 == 0)
{
uint32_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_string_utf8_get(x_6, x_4);
x_9 = lean_box_uint32(x_8);
lean_inc(x_1);
x_10 = lean_apply_1(x_1, x_9);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
x_3 = x_12;
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_1);
return x_3;
}
}
else
{
lean_dec(x_4);
lean_dec(x_1);
return x_3;
}
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_takeUntilFn___main(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_takeUntilFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_takeUntilFn___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_takeUntilFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_takeUntilFn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
uint8_t l_Lean_Parser_takeWhileFn___lambda__1(lean_object* x_1, uint32_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_box_uint32(x_2);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
lean_object* l_Lean_Parser_takeWhileFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_takeWhileFn___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Lean_Parser_takeUntilFn___main(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_takeWhileFn___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_Lean_Parser_takeWhileFn___lambda__1(x_1, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_takeWhileFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_takeWhileFn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_takeWhile1Fn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_5 = l_Lean_Parser_satisfyFn(x_1, x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_Lean_Parser_takeWhileFn(x_1, x_3, x_5);
return x_7;
}
else
{
lean_dec(x_6);
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Lean_Parser_takeWhile1Fn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_takeWhile1Fn(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_finishCommentBlock___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_string_utf8_at_end(x_5, x_6);
if (x_7 == 0)
{
uint32_t x_8; lean_object* x_9; uint32_t x_10; uint8_t x_11; uint8_t x_42; 
x_8 = lean_string_utf8_get(x_5, x_6);
x_9 = lean_string_utf8_next(x_5, x_6);
lean_dec(x_6);
x_10 = 45;
x_42 = x_8 == x_10;
if (x_42 == 0)
{
uint8_t x_43; 
x_43 = 0;
x_11 = x_43;
goto block_41;
}
else
{
uint8_t x_44; 
x_44 = 1;
x_11 = x_44;
goto block_41;
}
block_41:
{
if (x_11 == 0)
{
uint32_t x_12; uint8_t x_13; 
x_12 = 47;
x_13 = x_8 == x_12;
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = l_Lean_Parser_ParserState_setPos(x_3, x_9);
x_3 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
x_16 = lean_string_utf8_at_end(x_5, x_9);
if (x_16 == 0)
{
uint32_t x_17; uint8_t x_18; 
x_17 = lean_string_utf8_get(x_5, x_9);
x_18 = x_17 == x_10;
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = l_Lean_Parser_ParserState_setPos(x_3, x_9);
x_3 = x_19;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_1, x_21);
lean_dec(x_1);
x_23 = l_Lean_Parser_ParserState_next(x_3, x_5, x_9);
lean_dec(x_9);
x_1 = x_22;
x_3 = x_23;
goto _start;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_9);
lean_dec(x_1);
x_25 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_26 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = lean_string_utf8_at_end(x_5, x_9);
if (x_27 == 0)
{
uint32_t x_28; uint32_t x_29; uint8_t x_30; 
x_28 = lean_string_utf8_get(x_5, x_9);
x_29 = 47;
x_30 = x_28 == x_29;
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = l_Lean_Parser_ParserState_next(x_3, x_5, x_9);
lean_dec(x_9);
x_3 = x_31;
goto _start;
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_dec_eq(x_1, x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_nat_sub(x_1, x_33);
lean_dec(x_1);
x_36 = l_Lean_Parser_ParserState_next(x_3, x_5, x_9);
lean_dec(x_9);
x_1 = x_35;
x_3 = x_36;
goto _start;
}
else
{
lean_object* x_38; 
lean_dec(x_1);
x_38 = l_Lean_Parser_ParserState_next(x_3, x_5, x_9);
lean_dec(x_9);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_9);
lean_dec(x_1);
x_39 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_40 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_39);
return x_40;
}
}
}
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_6);
lean_dec(x_1);
x_45 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_46 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_45);
return x_46;
}
}
}
lean_object* l_Lean_Parser_finishCommentBlock___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_finishCommentBlock___main(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_finishCommentBlock(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_finishCommentBlock___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_finishCommentBlock___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_finishCommentBlock(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_whitespace___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_string_utf8_at_end(x_5, x_3);
if (x_6 == 0)
{
uint32_t x_7; uint32_t x_8; uint8_t x_9; 
x_7 = lean_string_utf8_get(x_5, x_3);
x_8 = 10;
x_9 = x_7 == x_8;
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_2;
}
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
lean_object* l_Lean_Parser_whitespace___main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_string_utf8_at_end(x_4, x_5);
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; 
x_7 = lean_string_utf8_get(x_4, x_5);
x_8 = l_Char_isWhitespace(x_7);
if (x_8 == 0)
{
uint32_t x_9; uint8_t x_10; uint8_t x_36; 
x_9 = 45;
x_36 = x_7 == x_9;
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = 0;
x_10 = x_37;
goto block_35;
}
else
{
uint8_t x_38; 
x_38 = 1;
x_10 = x_38;
goto block_35;
}
block_35:
{
if (x_10 == 0)
{
uint32_t x_11; uint8_t x_12; uint8_t x_25; 
x_11 = 47;
x_25 = x_7 == x_11;
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = 0;
x_12 = x_26;
goto block_24;
}
else
{
uint8_t x_27; 
x_27 = 1;
x_12 = x_27;
goto block_24;
}
block_24:
{
if (x_12 == 0)
{
lean_dec(x_5);
return x_2;
}
else
{
lean_object* x_13; uint32_t x_14; uint8_t x_15; 
x_13 = lean_string_utf8_next(x_4, x_5);
lean_dec(x_5);
x_14 = lean_string_utf8_get(x_4, x_13);
x_15 = x_14 == x_9;
if (x_15 == 0)
{
lean_dec(x_13);
return x_2;
}
else
{
lean_object* x_16; uint32_t x_17; uint8_t x_18; 
x_16 = lean_string_utf8_next(x_4, x_13);
lean_dec(x_13);
x_17 = lean_string_utf8_get(x_4, x_16);
x_18 = x_17 == x_9;
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = l_Lean_Parser_ParserState_next(x_2, x_4, x_16);
lean_dec(x_16);
x_20 = lean_unsigned_to_nat(1u);
x_21 = l_Lean_Parser_finishCommentBlock___main(x_20, x_1, x_19);
x_22 = lean_ctor_get(x_21, 3);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
x_2 = x_21;
goto _start;
}
else
{
lean_dec(x_22);
return x_21;
}
}
else
{
lean_dec(x_16);
return x_2;
}
}
}
}
}
else
{
lean_object* x_28; uint32_t x_29; uint8_t x_30; 
x_28 = lean_string_utf8_next(x_4, x_5);
lean_dec(x_5);
x_29 = lean_string_utf8_get(x_4, x_28);
x_30 = x_29 == x_9;
if (x_30 == 0)
{
lean_dec(x_28);
return x_2;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Lean_Parser_ParserState_next(x_2, x_4, x_28);
lean_dec(x_28);
x_32 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_whitespace___main___spec__1(x_1, x_31);
x_33 = lean_ctor_get(x_32, 3);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 0)
{
x_2 = x_32;
goto _start;
}
else
{
lean_dec(x_33);
return x_32;
}
}
}
}
}
else
{
lean_object* x_39; 
x_39 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_5);
x_2 = x_39;
goto _start;
}
}
else
{
lean_dec(x_5);
return x_2;
}
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_whitespace___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_whitespace___main___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_whitespace___main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_whitespace___main(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_whitespace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_whitespace___main(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_whitespace___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_whitespace(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_mkEmptySubstringAt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Parser_Basic_3__rawAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc_n(x_1, 2);
lean_inc(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_1);
lean_ctor_set(x_8, 2, x_1);
x_9 = lean_string_utf8_extract(x_6, x_1, x_7);
if (x_2 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc(x_7);
lean_inc(x_6);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_7);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_8);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_1);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_10);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
x_16 = l_Lean_Parser_ParserState_pushSyntax(x_4, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = l_Lean_Parser_whitespace___main(x_3, x_4);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_inc(x_6);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_6);
lean_ctor_set(x_19, 1, x_7);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_8);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_1);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_19);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_22);
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_9);
x_25 = l_Lean_Parser_ParserState_pushSyntax(x_17, x_24);
return x_25;
}
}
}
lean_object* l___private_Lean_Parser_Basic_3__rawAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l___private_Lean_Parser_Basic_3__rawAux(x_1, x_5, x_3, x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Parser_rawFn(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_inc(x_3);
x_6 = lean_apply_2(x_1, x_3, x_4);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = l___private_Lean_Parser_Basic_3__rawAux(x_5, x_2, x_3, x_6);
lean_dec(x_3);
return x_8;
}
else
{
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
}
lean_object* l_Lean_Parser_rawFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_Parser_rawFn(x_1, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_chFn___spec__1(uint32_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_6, 0);
x_8 = lean_string_utf8_at_end(x_7, x_5);
if (x_8 == 0)
{
uint32_t x_9; uint8_t x_10; 
x_9 = lean_string_utf8_get(x_7, x_5);
x_10 = x_1 == x_9;
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = l_Lean_Parser_ParserState_mkUnexpectedError(x_4, x_2);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = l_Lean_Parser_ParserState_next(x_4, x_7, x_5);
lean_dec(x_5);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_2);
x_13 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_14 = l_Lean_Parser_ParserState_mkUnexpectedError(x_4, x_13);
return x_14;
}
}
}
lean_object* l_Lean_Parser_chFn(uint32_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = l_String_splitAux___main___closed__1;
x_6 = lean_string_push(x_5, x_1);
x_7 = l_Char_HasRepr___closed__1;
x_8 = lean_string_append(x_7, x_6);
lean_dec(x_6);
x_9 = lean_string_append(x_8, x_7);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = l_Lean_Parser_satisfyFn___at_Lean_Parser_chFn___spec__1(x_1, x_9, x_3, x_4);
x_12 = lean_ctor_get(x_11, 3);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = l___private_Lean_Parser_Basic_3__rawAux(x_10, x_2, x_3, x_11);
return x_13;
}
else
{
lean_dec(x_12);
lean_dec(x_10);
return x_11;
}
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_chFn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_6 = l_Lean_Parser_satisfyFn___at_Lean_Parser_chFn___spec__1(x_5, x_2, x_3, x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Parser_chFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_Parser_chFn(x_5, x_6, x_3, x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_rawCh___elambda__1___spec__1(uint32_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_6, 0);
x_8 = lean_string_utf8_at_end(x_7, x_5);
if (x_8 == 0)
{
uint32_t x_9; uint8_t x_10; 
x_9 = lean_string_utf8_get(x_7, x_5);
x_10 = x_1 == x_9;
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = l_Lean_Parser_ParserState_mkUnexpectedError(x_4, x_2);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = l_Lean_Parser_ParserState_next(x_4, x_7, x_5);
lean_dec(x_5);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_2);
x_13 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_14 = l_Lean_Parser_ParserState_mkUnexpectedError(x_4, x_13);
return x_14;
}
}
}
lean_object* l_Lean_Parser_rawCh___elambda__1(uint32_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = l_String_splitAux___main___closed__1;
x_6 = lean_string_push(x_5, x_1);
x_7 = l_Char_HasRepr___closed__1;
x_8 = lean_string_append(x_7, x_6);
lean_dec(x_6);
x_9 = lean_string_append(x_8, x_7);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = l_Lean_Parser_satisfyFn___at_Lean_Parser_rawCh___elambda__1___spec__1(x_1, x_9, x_3, x_4);
x_12 = lean_ctor_get(x_11, 3);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = l___private_Lean_Parser_Basic_3__rawAux(x_10, x_2, x_3, x_11);
return x_13;
}
else
{
lean_dec(x_12);
lean_dec(x_10);
return x_11;
}
}
}
lean_object* l_Lean_Parser_rawCh(uint32_t x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_box_uint32(x_1);
x_4 = lean_box(x_2);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_rawCh___elambda__1___boxed), 4, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = l_Lean_Parser_Parser_inhabited___closed__1;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_rawCh___elambda__1___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_6 = l_Lean_Parser_satisfyFn___at_Lean_Parser_rawCh___elambda__1___spec__1(x_5, x_2, x_3, x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Parser_rawCh___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_Parser_rawCh___elambda__1(x_5, x_6, x_3, x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Parser_rawCh___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lean_Parser_rawCh(x_3, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Parser_hexDigitFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid hexadecimal numeral");
return x_1;
}
}
lean_object* l_Lean_Parser_hexDigitFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_string_utf8_at_end(x_4, x_5);
if (x_6 == 0)
{
uint32_t x_7; lean_object* x_8; uint8_t x_9; uint8_t x_21; 
x_7 = lean_string_utf8_get(x_4, x_5);
x_8 = lean_string_utf8_next(x_4, x_5);
lean_dec(x_5);
x_21 = l_Char_isDigit(x_7);
if (x_21 == 0)
{
uint32_t x_22; uint8_t x_23; 
x_22 = 97;
x_23 = x_22 <= x_7;
if (x_23 == 0)
{
x_9 = x_21;
goto block_20;
}
else
{
uint32_t x_24; uint8_t x_25; 
x_24 = 102;
x_25 = x_7 <= x_24;
if (x_25 == 0)
{
x_9 = x_25;
goto block_20;
}
else
{
lean_object* x_26; 
x_26 = l_Lean_Parser_ParserState_setPos(x_2, x_8);
return x_26;
}
}
}
else
{
lean_object* x_27; 
x_27 = l_Lean_Parser_ParserState_setPos(x_2, x_8);
return x_27;
}
block_20:
{
uint32_t x_10; uint8_t x_11; 
x_10 = 65;
x_11 = x_10 <= x_7;
if (x_11 == 0)
{
if (x_9 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
x_12 = l_Lean_Parser_hexDigitFn___closed__1;
x_13 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_12);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = l_Lean_Parser_ParserState_setPos(x_2, x_8);
return x_14;
}
}
else
{
uint32_t x_15; uint8_t x_16; 
x_15 = 70;
x_16 = x_7 <= x_15;
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_8);
x_17 = l_Lean_Parser_hexDigitFn___closed__1;
x_18 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_17);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = l_Lean_Parser_ParserState_setPos(x_2, x_8);
return x_19;
}
}
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_5);
x_28 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_29 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_28);
return x_29;
}
}
}
lean_object* l_Lean_Parser_hexDigitFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_hexDigitFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_quotedCharFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid escape sequence");
return x_1;
}
}
lean_object* l_Lean_Parser_quotedCharFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_string_utf8_at_end(x_4, x_5);
if (x_6 == 0)
{
uint32_t x_7; uint32_t x_8; uint8_t x_9; 
x_7 = lean_string_utf8_get(x_4, x_5);
x_8 = 92;
x_9 = x_7 == x_8;
if (x_9 == 0)
{
uint32_t x_10; uint8_t x_11; 
x_10 = 34;
x_11 = x_7 == x_10;
if (x_11 == 0)
{
uint32_t x_12; uint8_t x_13; uint8_t x_47; 
x_12 = 39;
x_47 = x_7 == x_12;
if (x_47 == 0)
{
uint8_t x_48; 
x_48 = 0;
x_13 = x_48;
goto block_46;
}
else
{
uint8_t x_49; 
x_49 = 1;
x_13 = x_49;
goto block_46;
}
block_46:
{
if (x_13 == 0)
{
uint32_t x_14; uint8_t x_15; 
x_14 = 114;
x_15 = x_7 == x_14;
if (x_15 == 0)
{
uint32_t x_16; uint8_t x_17; 
x_16 = 110;
x_17 = x_7 == x_16;
if (x_17 == 0)
{
uint32_t x_18; uint8_t x_19; 
x_18 = 116;
x_19 = x_7 == x_18;
if (x_19 == 0)
{
uint32_t x_20; uint8_t x_21; uint8_t x_39; 
x_20 = 120;
x_39 = x_7 == x_20;
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = 0;
x_21 = x_40;
goto block_38;
}
else
{
uint8_t x_41; 
x_41 = 1;
x_21 = x_41;
goto block_38;
}
block_38:
{
if (x_21 == 0)
{
uint32_t x_22; uint8_t x_23; 
x_22 = 117;
x_23 = x_7 == x_22;
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_5);
x_24 = l_Lean_Parser_quotedCharFn___closed__1;
x_25 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_5);
x_27 = l_Lean_Parser_hexDigitFn(x_1, x_26);
x_28 = lean_ctor_get(x_27, 3);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = l_Lean_Parser_hexDigitFn(x_1, x_27);
x_30 = lean_ctor_get(x_29, 3);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_Lean_Parser_hexDigitFn(x_1, x_29);
x_32 = lean_ctor_get(x_31, 3);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = l_Lean_Parser_hexDigitFn(x_1, x_31);
return x_33;
}
else
{
lean_dec(x_32);
return x_31;
}
}
else
{
lean_dec(x_30);
return x_29;
}
}
else
{
lean_dec(x_28);
return x_27;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_5);
x_35 = l_Lean_Parser_hexDigitFn(x_1, x_34);
x_36 = lean_ctor_get(x_35, 3);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
x_37 = l_Lean_Parser_hexDigitFn(x_1, x_35);
return x_37;
}
else
{
lean_dec(x_36);
return x_35;
}
}
}
}
else
{
lean_object* x_42; 
x_42 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_5);
return x_42;
}
}
else
{
lean_object* x_43; 
x_43 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_5);
return x_43;
}
}
else
{
lean_object* x_44; 
x_44 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_5);
return x_44;
}
}
else
{
lean_object* x_45; 
x_45 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_5);
return x_45;
}
}
}
else
{
lean_object* x_50; 
x_50 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_5);
return x_50;
}
}
else
{
lean_object* x_51; 
x_51 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_5);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_5);
x_52 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_53 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_52);
return x_53;
}
}
}
lean_object* l_Lean_Parser_quotedCharFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_quotedCharFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_mkNodeToken(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc_n(x_2, 2);
lean_inc(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_2);
x_9 = lean_string_utf8_extract(x_6, x_2, x_7);
x_10 = l_Lean_Parser_whitespace___main(x_3, x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_inc(x_6);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_6);
lean_ctor_set(x_12, 1, x_7);
lean_ctor_set(x_12, 2, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_8);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_2);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
x_17 = l_Lean_mkStxLit(x_1, x_9, x_16);
x_18 = l_Lean_Parser_ParserState_pushSyntax(x_10, x_17);
return x_18;
}
}
lean_object* l_Lean_Parser_mkNodeToken___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_mkNodeToken(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* _init_l_Lean_Parser_charLitFnAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("missing end of character literal");
return x_1;
}
}
lean_object* l_Lean_Parser_charLitFnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_string_utf8_at_end(x_5, x_6);
if (x_7 == 0)
{
uint32_t x_8; lean_object* x_9; lean_object* x_10; uint32_t x_11; uint8_t x_12; uint8_t x_36; 
x_8 = lean_string_utf8_get(x_5, x_6);
x_9 = lean_string_utf8_next(x_5, x_6);
lean_dec(x_6);
lean_inc(x_9);
lean_inc(x_3);
x_10 = l_Lean_Parser_ParserState_setPos(x_3, x_9);
x_11 = 92;
x_36 = x_8 == x_11;
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = 0;
x_12 = x_37;
goto block_35;
}
else
{
uint8_t x_38; 
x_38 = 1;
x_12 = x_38;
goto block_35;
}
block_35:
{
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_3, 3);
lean_inc(x_13);
lean_dec(x_3);
if (lean_obj_tag(x_13) == 0)
{
uint32_t x_14; lean_object* x_15; lean_object* x_16; uint32_t x_17; uint8_t x_18; 
x_14 = lean_string_utf8_get(x_5, x_9);
x_15 = lean_string_utf8_next(x_5, x_9);
lean_dec(x_9);
x_16 = l_Lean_Parser_ParserState_setPos(x_10, x_15);
x_17 = 39;
x_18 = x_14 == x_17;
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_19 = l_Lean_Parser_charLitFnAux___closed__1;
x_20 = l_Lean_Parser_ParserState_mkUnexpectedError(x_16, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_Lean_charLitKind;
x_22 = l_Lean_Parser_mkNodeToken(x_21, x_1, x_2, x_16);
return x_22;
}
}
else
{
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_1);
return x_10;
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_3);
x_23 = l_Lean_Parser_quotedCharFn(x_2, x_10);
x_24 = lean_ctor_get(x_23, 3);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint32_t x_26; lean_object* x_27; lean_object* x_28; uint32_t x_29; uint8_t x_30; 
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
x_26 = lean_string_utf8_get(x_5, x_25);
x_27 = lean_string_utf8_next(x_5, x_25);
lean_dec(x_25);
x_28 = l_Lean_Parser_ParserState_setPos(x_23, x_27);
x_29 = 39;
x_30 = x_26 == x_29;
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_31 = l_Lean_Parser_charLitFnAux___closed__1;
x_32 = l_Lean_Parser_ParserState_mkUnexpectedError(x_28, x_31);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Lean_charLitKind;
x_34 = l_Lean_Parser_mkNodeToken(x_33, x_1, x_2, x_28);
return x_34;
}
}
else
{
lean_dec(x_24);
lean_dec(x_1);
return x_23;
}
}
}
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_6);
lean_dec(x_1);
x_39 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_40 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_39);
return x_40;
}
}
}
lean_object* l_Lean_Parser_charLitFnAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_charLitFnAux(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_strLitFnAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_string_utf8_at_end(x_5, x_6);
if (x_7 == 0)
{
uint32_t x_8; lean_object* x_9; lean_object* x_10; uint32_t x_11; uint8_t x_12; 
x_8 = lean_string_utf8_get(x_5, x_6);
x_9 = lean_string_utf8_next(x_5, x_6);
lean_dec(x_6);
x_10 = l_Lean_Parser_ParserState_setPos(x_3, x_9);
x_11 = 34;
x_12 = x_8 == x_11;
if (x_12 == 0)
{
uint32_t x_13; uint8_t x_14; 
x_13 = 92;
x_14 = x_8 == x_13;
if (x_14 == 0)
{
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = l_Lean_Parser_quotedCharFn(x_2, x_10);
x_17 = lean_ctor_get(x_16, 3);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
x_3 = x_16;
goto _start;
}
else
{
lean_dec(x_17);
lean_dec(x_1);
return x_16;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_strLitKind;
x_20 = l_Lean_Parser_mkNodeToken(x_19, x_1, x_2, x_10);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_6);
lean_dec(x_1);
x_21 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_22 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_21);
return x_22;
}
}
}
lean_object* l_Lean_Parser_strLitFnAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_strLitFnAux___main(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_strLitFnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_strLitFnAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_strLitFnAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_strLitFnAux(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_decimalNumberFn___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_string_utf8_at_end(x_5, x_3);
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; 
x_7 = lean_string_utf8_get(x_5, x_3);
x_8 = l_Char_isDigit(x_7);
if (x_8 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_9; 
x_9 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_9;
goto _start;
}
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_decimalNumberFn___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_decimalNumberFn___spec__2(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_decimalNumberFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint32_t x_8; uint32_t x_9; uint8_t x_10; 
x_4 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_decimalNumberFn___spec__2(x_2, x_3);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_string_utf8_get(x_6, x_7);
x_9 = 46;
x_10 = x_8 == x_9;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
x_11 = l_Lean_numLitKind;
x_12 = l_Lean_Parser_mkNodeToken(x_11, x_1, x_2, x_4);
return x_12;
}
else
{
lean_object* x_13; uint32_t x_14; uint8_t x_15; 
x_13 = lean_string_utf8_next(x_6, x_7);
lean_dec(x_7);
x_14 = lean_string_utf8_get(x_6, x_13);
x_15 = l_Char_isDigit(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
x_16 = l_Lean_numLitKind;
x_17 = l_Lean_Parser_mkNodeToken(x_16, x_1, x_2, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = l_Lean_Parser_ParserState_setPos(x_4, x_13);
x_19 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_decimalNumberFn___spec__2(x_2, x_18);
x_20 = l_Lean_numLitKind;
x_21 = l_Lean_Parser_mkNodeToken(x_20, x_1, x_2, x_19);
return x_21;
}
}
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_decimalNumberFn___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_decimalNumberFn___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_decimalNumberFn___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeWhileFn___at_Lean_Parser_decimalNumberFn___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_decimalNumberFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_decimalNumberFn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_binNumberFn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_string_utf8_at_end(x_6, x_4);
if (x_7 == 0)
{
uint32_t x_8; uint32_t x_9; uint8_t x_10; 
x_8 = lean_string_utf8_get(x_6, x_4);
x_9 = 48;
x_10 = x_8 == x_9;
if (x_10 == 0)
{
uint32_t x_11; uint8_t x_12; 
x_11 = 49;
x_12 = x_8 == x_11;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_1);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_dec(x_1);
x_15 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
lean_dec(x_1);
x_16 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_17 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_16);
return x_17;
}
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_binNumberFn___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_string_utf8_at_end(x_5, x_3);
if (x_6 == 0)
{
uint32_t x_7; uint32_t x_8; uint8_t x_9; 
x_7 = lean_string_utf8_get(x_5, x_3);
x_8 = 48;
x_9 = x_7 == x_8;
if (x_9 == 0)
{
uint32_t x_10; uint8_t x_11; 
x_10 = 49;
x_11 = x_7 == x_10;
if (x_11 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_12; 
x_12 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_12;
goto _start;
}
}
else
{
lean_object* x_14; 
x_14 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_14;
goto _start;
}
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_binNumberFn___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_binNumberFn___spec__3(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_binNumberFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("binary number");
return x_1;
}
}
lean_object* l_Lean_Parser_binNumberFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_Parser_binNumberFn___closed__1;
x_5 = l_Lean_Parser_satisfyFn___at_Lean_Parser_binNumberFn___spec__1(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_binNumberFn___spec__3(x_2, x_5);
x_8 = l_Lean_numLitKind;
x_9 = l_Lean_Parser_mkNodeToken(x_8, x_1, x_2, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
x_10 = l_Lean_numLitKind;
x_11 = l_Lean_Parser_mkNodeToken(x_10, x_1, x_2, x_5);
return x_11;
}
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_binNumberFn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_satisfyFn___at_Lean_Parser_binNumberFn___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_binNumberFn___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_binNumberFn___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_binNumberFn___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeWhileFn___at_Lean_Parser_binNumberFn___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_binNumberFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_binNumberFn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_octalNumberFn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_string_utf8_at_end(x_6, x_4);
if (x_7 == 0)
{
uint32_t x_8; uint32_t x_9; uint8_t x_10; 
x_8 = lean_string_utf8_get(x_6, x_4);
x_9 = 48;
x_10 = x_9 <= x_8;
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_4);
x_11 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_1);
return x_11;
}
else
{
uint32_t x_12; uint8_t x_13; 
x_12 = 55;
x_13 = x_8 <= x_12;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_4);
x_14 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_1);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_1);
x_15 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
return x_15;
}
}
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
lean_dec(x_1);
x_16 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_17 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_16);
return x_17;
}
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_octalNumberFn___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_string_utf8_at_end(x_5, x_3);
if (x_6 == 0)
{
uint32_t x_7; uint32_t x_8; uint8_t x_9; 
x_7 = lean_string_utf8_get(x_5, x_3);
x_8 = 48;
x_9 = x_8 <= x_7;
if (x_9 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
uint32_t x_10; uint8_t x_11; 
x_10 = 55;
x_11 = x_7 <= x_10;
if (x_11 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_12; 
x_12 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_12;
goto _start;
}
}
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_octalNumberFn___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_octalNumberFn___spec__3(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_octalNumberFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("octal number");
return x_1;
}
}
lean_object* l_Lean_Parser_octalNumberFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_Parser_octalNumberFn___closed__1;
x_5 = l_Lean_Parser_satisfyFn___at_Lean_Parser_octalNumberFn___spec__1(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_octalNumberFn___spec__3(x_2, x_5);
x_8 = l_Lean_numLitKind;
x_9 = l_Lean_Parser_mkNodeToken(x_8, x_1, x_2, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
x_10 = l_Lean_numLitKind;
x_11 = l_Lean_Parser_mkNodeToken(x_10, x_1, x_2, x_5);
return x_11;
}
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_octalNumberFn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_satisfyFn___at_Lean_Parser_octalNumberFn___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_octalNumberFn___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_octalNumberFn___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_octalNumberFn___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeWhileFn___at_Lean_Parser_octalNumberFn___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_octalNumberFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_octalNumberFn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_hexNumberFn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_string_utf8_at_end(x_6, x_4);
if (x_7 == 0)
{
uint32_t x_8; uint8_t x_9; uint32_t x_31; uint8_t x_32; 
x_8 = lean_string_utf8_get(x_6, x_4);
x_31 = 48;
x_32 = x_31 <= x_8;
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = 0;
x_9 = x_33;
goto block_30;
}
else
{
uint32_t x_34; uint8_t x_35; 
x_34 = 57;
x_35 = x_8 <= x_34;
if (x_35 == 0)
{
x_9 = x_35;
goto block_30;
}
else
{
lean_object* x_36; 
lean_dec(x_1);
x_36 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
return x_36;
}
}
block_30:
{
uint32_t x_10; uint8_t x_11; 
x_10 = 97;
x_11 = x_10 <= x_8;
if (x_11 == 0)
{
if (x_9 == 0)
{
uint32_t x_12; uint8_t x_13; 
x_12 = 65;
x_13 = x_12 <= x_8;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_4);
x_14 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_1);
return x_14;
}
else
{
uint32_t x_15; uint8_t x_16; 
x_15 = 70;
x_16 = x_8 <= x_15;
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_4);
x_17 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_1);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_1);
x_18 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
return x_19;
}
}
else
{
uint32_t x_20; uint8_t x_21; 
x_20 = 102;
x_21 = x_8 <= x_20;
if (x_21 == 0)
{
uint32_t x_22; uint8_t x_23; 
x_22 = 65;
x_23 = x_22 <= x_8;
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_4);
x_24 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_1);
return x_24;
}
else
{
uint32_t x_25; uint8_t x_26; 
x_25 = 70;
x_26 = x_8 <= x_25;
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_4);
x_27 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_1);
return x_27;
}
else
{
lean_object* x_28; 
lean_dec(x_1);
x_28 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
return x_28;
}
}
}
else
{
lean_object* x_29; 
lean_dec(x_1);
x_29 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
return x_29;
}
}
}
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_4);
lean_dec(x_1);
x_37 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_38 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_37);
return x_38;
}
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_hexNumberFn___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_string_utf8_at_end(x_5, x_3);
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; uint32_t x_30; uint8_t x_31; 
x_7 = lean_string_utf8_get(x_5, x_3);
x_30 = 48;
x_31 = x_30 <= x_7;
if (x_31 == 0)
{
uint8_t x_32; 
x_32 = 0;
x_8 = x_32;
goto block_29;
}
else
{
uint32_t x_33; uint8_t x_34; 
x_33 = 57;
x_34 = x_7 <= x_33;
if (x_34 == 0)
{
x_8 = x_34;
goto block_29;
}
else
{
lean_object* x_35; 
x_35 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_35;
goto _start;
}
}
block_29:
{
uint32_t x_9; uint8_t x_10; 
x_9 = 97;
x_10 = x_9 <= x_7;
if (x_10 == 0)
{
if (x_8 == 0)
{
uint32_t x_11; uint8_t x_12; 
x_11 = 65;
x_12 = x_11 <= x_7;
if (x_12 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
uint32_t x_13; uint8_t x_14; 
x_13 = 70;
x_14 = x_7 <= x_13;
if (x_14 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_15; 
x_15 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_15;
goto _start;
}
}
}
else
{
lean_object* x_17; 
x_17 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_17;
goto _start;
}
}
else
{
uint32_t x_19; uint8_t x_20; 
x_19 = 102;
x_20 = x_7 <= x_19;
if (x_20 == 0)
{
uint32_t x_21; uint8_t x_22; 
x_21 = 65;
x_22 = x_21 <= x_7;
if (x_22 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
uint32_t x_23; uint8_t x_24; 
x_23 = 70;
x_24 = x_7 <= x_23;
if (x_24 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_25; 
x_25 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_25;
goto _start;
}
}
}
else
{
lean_object* x_27; 
x_27 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_27;
goto _start;
}
}
}
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_hexNumberFn___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_hexNumberFn___spec__3(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_hexNumberFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hexadecimal number");
return x_1;
}
}
lean_object* l_Lean_Parser_hexNumberFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_Parser_hexNumberFn___closed__1;
x_5 = l_Lean_Parser_satisfyFn___at_Lean_Parser_hexNumberFn___spec__1(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_hexNumberFn___spec__3(x_2, x_5);
x_8 = l_Lean_numLitKind;
x_9 = l_Lean_Parser_mkNodeToken(x_8, x_1, x_2, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
x_10 = l_Lean_numLitKind;
x_11 = l_Lean_Parser_mkNodeToken(x_10, x_1, x_2, x_5);
return x_11;
}
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_hexNumberFn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_satisfyFn___at_Lean_Parser_hexNumberFn___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_hexNumberFn___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_hexNumberFn___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_hexNumberFn___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeWhileFn___at_Lean_Parser_hexNumberFn___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_hexNumberFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_hexNumberFn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_numberFnAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("numeral");
return x_1;
}
}
lean_object* l_Lean_Parser_numberFnAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_string_utf8_at_end(x_4, x_5);
if (x_6 == 0)
{
uint32_t x_7; uint32_t x_8; uint8_t x_9; 
x_7 = lean_string_utf8_get(x_4, x_5);
x_8 = 48;
x_9 = x_7 == x_8;
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = l_Char_isDigit(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_11 = l_Lean_Parser_numberFnAux___closed__1;
x_12 = l_Lean_Parser_ParserState_mkError(x_2, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
x_14 = l_Lean_Parser_decimalNumberFn(x_5, x_1, x_13);
return x_14;
}
}
else
{
lean_object* x_15; uint32_t x_16; uint32_t x_17; uint8_t x_18; 
x_15 = lean_string_utf8_next(x_4, x_5);
x_16 = lean_string_utf8_get(x_4, x_15);
x_17 = 98;
x_18 = x_16 == x_17;
if (x_18 == 0)
{
uint32_t x_19; uint8_t x_20; 
x_19 = 66;
x_20 = x_16 == x_19;
if (x_20 == 0)
{
uint32_t x_21; uint8_t x_22; uint8_t x_40; 
x_21 = 111;
x_40 = x_16 == x_21;
if (x_40 == 0)
{
uint8_t x_41; 
x_41 = 0;
x_22 = x_41;
goto block_39;
}
else
{
uint8_t x_42; 
x_42 = 1;
x_22 = x_42;
goto block_39;
}
block_39:
{
if (x_22 == 0)
{
uint32_t x_23; uint8_t x_24; 
x_23 = 79;
x_24 = x_16 == x_23;
if (x_24 == 0)
{
uint32_t x_25; uint8_t x_26; 
x_25 = 120;
x_26 = x_16 == x_25;
if (x_26 == 0)
{
uint32_t x_27; uint8_t x_28; 
x_27 = 88;
x_28 = x_16 == x_27;
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = l_Lean_Parser_ParserState_setPos(x_2, x_15);
x_30 = l_Lean_Parser_decimalNumberFn(x_5, x_1, x_29);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_Lean_Parser_ParserState_next(x_2, x_4, x_15);
lean_dec(x_15);
x_32 = l_Lean_Parser_hexNumberFn(x_5, x_1, x_31);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Lean_Parser_ParserState_next(x_2, x_4, x_15);
lean_dec(x_15);
x_34 = l_Lean_Parser_hexNumberFn(x_5, x_1, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = l_Lean_Parser_ParserState_next(x_2, x_4, x_15);
lean_dec(x_15);
x_36 = l_Lean_Parser_octalNumberFn(x_5, x_1, x_35);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = l_Lean_Parser_ParserState_next(x_2, x_4, x_15);
lean_dec(x_15);
x_38 = l_Lean_Parser_octalNumberFn(x_5, x_1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = l_Lean_Parser_ParserState_next(x_2, x_4, x_15);
lean_dec(x_15);
x_44 = l_Lean_Parser_binNumberFn(x_5, x_1, x_43);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_Lean_Parser_ParserState_next(x_2, x_4, x_15);
lean_dec(x_15);
x_46 = l_Lean_Parser_binNumberFn(x_5, x_1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_5);
x_47 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_48 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_47);
return x_48;
}
}
}
lean_object* l_Lean_Parser_numberFnAux___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_numberFnAux(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l_Lean_Parser_isIdCont(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint32_t x_4; uint32_t x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_string_utf8_get(x_1, x_3);
x_5 = 46;
x_6 = x_4 == x_5;
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_string_utf8_next(x_1, x_3);
x_9 = lean_string_utf8_at_end(x_1, x_8);
if (x_9 == 0)
{
uint32_t x_10; uint8_t x_11; 
x_10 = lean_string_utf8_get(x_1, x_8);
lean_dec(x_8);
x_11 = l_Lean_isIdFirst(x_10);
if (x_11 == 0)
{
uint32_t x_12; uint8_t x_13; 
x_12 = l_Lean_idBeginEscape;
x_13 = x_10 == x_12;
return x_13;
}
else
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_8);
x_15 = 0;
return x_15;
}
}
}
}
lean_object* l_Lean_Parser_isIdCont___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Parser_isIdCont(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l___private_Lean_Parser_Basic_4__isToken(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_nat_sub(x_2, x_1);
x_7 = lean_string_utf8_byte_size(x_5);
x_8 = lean_nat_dec_le(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
}
}
lean_object* l___private_Lean_Parser_Basic_4__isToken___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l___private_Lean_Parser_Basic_4__isToken(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Parser_mkTokenAndFixPos___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("token");
return x_1;
}
}
lean_object* l_Lean_Parser_mkTokenAndFixPos(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Parser_mkTokenAndFixPos___closed__1;
x_6 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_5, x_1);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_8, 0);
lean_inc_n(x_1, 2);
lean_inc(x_10);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_1);
lean_ctor_set(x_11, 2, x_1);
x_12 = lean_string_utf8_byte_size(x_9);
x_13 = lean_nat_add(x_1, x_12);
lean_dec(x_12);
lean_inc(x_13);
x_14 = l_Lean_Parser_ParserState_setPos(x_4, x_13);
x_15 = l_Lean_Parser_whitespace___main(x_3, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_inc(x_10);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_13);
lean_ctor_set(x_17, 2, x_16);
lean_ctor_set(x_2, 0, x_11);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_1);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_2);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_9);
x_22 = l_Lean_Parser_ParserState_pushSyntax(x_15, x_21);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_23 = lean_ctor_get(x_3, 0);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_ctor_get(x_23, 0);
lean_inc_n(x_1, 2);
lean_inc(x_25);
x_26 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_1);
lean_ctor_set(x_26, 2, x_1);
x_27 = lean_string_utf8_byte_size(x_24);
x_28 = lean_nat_add(x_1, x_27);
lean_dec(x_27);
lean_inc(x_28);
x_29 = l_Lean_Parser_ParserState_setPos(x_4, x_28);
x_30 = l_Lean_Parser_whitespace___main(x_3, x_29);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_inc(x_25);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_28);
lean_ctor_set(x_32, 2, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_26);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_1);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_32);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_34);
lean_ctor_set(x_36, 2, x_35);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_24);
x_38 = l_Lean_Parser_ParserState_pushSyntax(x_30, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_Parser_mkTokenAndFixPos___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_mkTokenAndFixPos(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_mkIdResult(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = l___private_Lean_Parser_Basic_4__isToken(x_1, x_6, x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_2);
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_6);
lean_inc(x_1);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_1);
lean_ctor_set(x_10, 2, x_6);
x_11 = l_Lean_Parser_whitespace___main(x_4, x_5);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_inc_n(x_1, 2);
lean_inc(x_9);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_1);
lean_ctor_set(x_13, 2, x_1);
lean_inc(x_9);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_6);
lean_ctor_set(x_14, 2, x_12);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_13);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_1);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_10);
lean_ctor_set(x_20, 2, x_3);
lean_ctor_set(x_20, 3, x_19);
x_21 = l_Lean_Parser_ParserState_pushSyntax(x_11, x_20);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_6);
lean_dec(x_3);
x_22 = l_Lean_Parser_mkTokenAndFixPos(x_1, x_2, x_4, x_5);
return x_22;
}
}
}
lean_object* l_Lean_Parser_mkIdResult___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_mkIdResult(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_string_utf8_at_end(x_5, x_3);
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; 
x_7 = lean_string_utf8_get(x_5, x_3);
x_8 = l_Lean_isIdRest(x_7);
if (x_8 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_9; 
x_9 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_9;
goto _start;
}
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_identFnAux___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__2(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_string_utf8_at_end(x_5, x_3);
if (x_6 == 0)
{
uint32_t x_7; uint32_t x_8; uint8_t x_9; 
x_7 = lean_string_utf8_get(x_5, x_3);
x_8 = l_Lean_idEndEscape;
x_9 = x_7 == x_8;
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_Parser_ParserState_next(x_2, x_5, x_3);
lean_dec(x_3);
x_2 = x_10;
goto _start;
}
else
{
lean_dec(x_3);
return x_2;
}
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_identFnAux___main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_string_utf8_at_end(x_6, x_4);
if (x_7 == 0)
{
uint32_t x_8; uint32_t x_9; uint8_t x_10; 
x_8 = lean_string_utf8_get(x_6, x_4);
x_9 = l_Lean_idEndEscape;
x_10 = x_8 == x_9;
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_4);
x_11 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_1);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_1);
x_12 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_1);
x_13 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_14 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_13);
return x_14;
}
}
}
lean_object* _init_l_Lean_Parser_identFnAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("missing end of escaped identifier");
return x_1;
}
}
lean_object* l_Lean_Parser_identFnAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_6, 0);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_string_utf8_at_end(x_7, x_8);
if (x_9 == 0)
{
uint32_t x_10; uint32_t x_11; uint8_t x_12; 
x_10 = lean_string_utf8_get(x_7, x_8);
x_11 = l_Lean_idBeginEscape;
x_12 = x_10 == x_11;
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = l_Lean_isIdFirst(x_10);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_3);
x_14 = l_Lean_Parser_mkTokenAndFixPos(x_1, x_2, x_4, x_5);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = l_Lean_Parser_ParserState_next(x_5, x_7, x_8);
x_16 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__2(x_4, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
x_18 = lean_string_utf8_extract(x_7, x_8, x_17);
lean_dec(x_8);
x_19 = lean_name_mk_string(x_3, x_18);
x_20 = l_Lean_Parser_isIdCont(x_7, x_16);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_17);
x_21 = l_Lean_Parser_mkIdResult(x_1, x_2, x_19, x_4, x_16);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = l_Lean_Parser_ParserState_next(x_16, x_7, x_17);
lean_dec(x_17);
x_3 = x_19;
x_5 = x_22;
goto _start;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_string_utf8_next(x_7, x_8);
lean_dec(x_8);
lean_inc(x_24);
x_25 = l_Lean_Parser_ParserState_setPos(x_5, x_24);
x_26 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__3(x_4, x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
x_28 = l_Lean_Parser_identFnAux___main___closed__1;
x_29 = l_Lean_Parser_satisfyFn___at_Lean_Parser_identFnAux___main___spec__4(x_28, x_4, x_26);
x_30 = lean_ctor_get(x_29, 3);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_string_utf8_extract(x_7, x_24, x_27);
lean_dec(x_27);
lean_dec(x_24);
x_32 = lean_name_mk_string(x_3, x_31);
x_33 = l_Lean_Parser_isIdCont(x_7, x_29);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = l_Lean_Parser_mkIdResult(x_1, x_2, x_32, x_4, x_29);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
x_36 = l_Lean_Parser_ParserState_next(x_29, x_7, x_35);
lean_dec(x_35);
x_3 = x_32;
x_5 = x_36;
goto _start;
}
}
else
{
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_29;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_39 = l_Lean_Parser_ParserState_mkUnexpectedError(x_5, x_38);
return x_39;
}
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_takeWhileFn___at_Lean_Parser_identFnAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeWhileFn___at_Lean_Parser_identFnAux___main___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_identFnAux___main___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_identFnAux___main___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_satisfyFn___at_Lean_Parser_identFnAux___main___spec__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_identFnAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_identFnAux___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Parser_identFnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_identFnAux___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Parser_identFnAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_identFnAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
uint8_t l___private_Lean_Parser_Basic_5__isIdFirstOrBeginEscape(uint32_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_isIdFirst(x_1);
if (x_2 == 0)
{
uint32_t x_3; uint8_t x_4; 
x_3 = l_Lean_idBeginEscape;
x_4 = x_1 == x_3;
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
}
}
lean_object* l___private_Lean_Parser_Basic_5__isIdFirstOrBeginEscape___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l___private_Lean_Parser_Basic_5__isIdFirstOrBeginEscape(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Parser_Basic_6__nameLitAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid Name literal");
return x_1;
}
}
lean_object* l___private_Lean_Parser_Basic_6__nameLitAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_box(0);
x_7 = l_Lean_Parser_ParserState_next(x_3, x_5, x_1);
x_8 = lean_box(0);
lean_inc(x_1);
x_9 = l_Lean_Parser_identFnAux___main(x_1, x_6, x_8, x_2, x_7);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 3)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
x_14 = l_Lean_Parser_ParserState_popSyntax(x_9);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_13, 2);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_string_utf8_extract(x_15, x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
x_19 = l_Lean_mkAtomFrom(x_12, x_18);
lean_dec(x_12);
x_20 = l_Lean_mkOptionalNode___closed__2;
x_21 = lean_array_push(x_20, x_19);
x_22 = l_Lean_nameLitKind;
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_Lean_Parser_ParserState_pushSyntax(x_14, x_23);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_12);
x_25 = l___private_Lean_Parser_Basic_6__nameLitAux___closed__1;
x_26 = l_Lean_Parser_ParserState_mkError(x_9, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_10);
x_27 = l___private_Lean_Parser_Basic_6__nameLitAux___closed__1;
x_28 = l_Lean_Parser_ParserState_mkErrorAt(x_9, x_27, x_1);
return x_28;
}
}
}
lean_object* l___private_Lean_Parser_Basic_6__nameLitAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Parser_Basic_6__nameLitAux(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Lean_Parser_Basic_7__tokenFnAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint32_t x_6; uint32_t x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_string_utf8_get(x_4, x_5);
x_7 = 34;
x_8 = x_6 == x_7;
if (x_8 == 0)
{
uint32_t x_9; uint8_t x_10; uint8_t x_31; 
x_9 = 39;
x_31 = x_6 == x_9;
if (x_31 == 0)
{
uint8_t x_32; 
x_32 = 0;
x_10 = x_32;
goto block_30;
}
else
{
uint8_t x_33; 
x_33 = 1;
x_10 = x_33;
goto block_30;
}
block_30:
{
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_Char_isDigit(x_6);
if (x_11 == 0)
{
uint32_t x_12; uint8_t x_13; 
x_12 = 96;
x_13 = x_6 == x_12;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
lean_inc(x_5);
x_15 = l_Lean_Parser_Trie_matchPrefix___rarg(x_4, x_14, x_5);
lean_dec(x_4);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = l_Lean_Parser_identFnAux___main(x_5, x_16, x_17, x_1, x_2);
lean_dec(x_1);
return x_18;
}
else
{
uint32_t x_19; uint8_t x_20; 
x_19 = l_Lean_Parser_getNext(x_4, x_5);
x_20 = l___private_Lean_Parser_Basic_5__isIdFirstOrBeginEscape(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
lean_inc(x_5);
x_22 = l_Lean_Parser_Trie_matchPrefix___rarg(x_4, x_21, x_5);
lean_dec(x_4);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_box(0);
x_25 = l_Lean_Parser_identFnAux___main(x_5, x_23, x_24, x_1, x_2);
lean_dec(x_1);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_4);
x_26 = l___private_Lean_Parser_Basic_6__nameLitAux(x_5, x_1, x_2);
lean_dec(x_1);
return x_26;
}
}
}
else
{
lean_object* x_27; 
lean_dec(x_5);
lean_dec(x_4);
x_27 = l_Lean_Parser_numberFnAux(x_1, x_2);
lean_dec(x_1);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_4);
x_29 = l_Lean_Parser_charLitFnAux(x_5, x_1, x_28);
lean_dec(x_1);
return x_29;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = l_Lean_Parser_ParserState_next(x_2, x_4, x_5);
lean_dec(x_4);
x_35 = l_Lean_Parser_strLitFnAux___main(x_5, x_1, x_34);
lean_dec(x_1);
return x_35;
}
}
}
lean_object* l___private_Lean_Parser_Basic_8__updateCache(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 3);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_array_get_size(x_4);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 3);
lean_dec(x_10);
x_11 = lean_ctor_get(x_2, 2);
lean_dec(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_2, 0);
lean_dec(x_13);
x_14 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_4);
lean_inc(x_5);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 2, x_14);
lean_ctor_set(x_2, 2, x_15);
return x_2;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_16 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_4);
lean_inc(x_5);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_5);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_5);
lean_ctor_set(x_18, 2, x_17);
lean_ctor_set(x_18, 3, x_3);
return x_18;
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_2;
}
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
}
}
lean_object* l_Lean_Parser_tokenFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_string_utf8_at_end(x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_nat_dec_eq(x_8, x_5);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
x_10 = l___private_Lean_Parser_Basic_7__tokenFnAux(x_1, x_2);
x_11 = l___private_Lean_Parser_Basic_8__updateCache(x_5, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_1);
x_12 = lean_ctor_get(x_7, 2);
lean_inc(x_12);
x_13 = l_Lean_Parser_ParserState_pushSyntax(x_2, x_12);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
x_15 = l_Lean_Parser_ParserState_setPos(x_13, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_1);
x_16 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_17 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_16);
return x_17;
}
}
}
lean_object* l_Lean_Parser_peekTokenAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_array_get_size(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_1, x_2);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_8);
lean_dec(x_8);
x_10 = l_Lean_Parser_ParserState_restore(x_6, x_4, x_5);
lean_dec(x_4);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
x_13 = l_Lean_Parser_ParserState_restore(x_6, x_4, x_5);
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Parser_peekToken(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = l_Lean_Parser_peekTokenAux(x_1, x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_1);
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_Lean_Parser_rawIdentFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_string_utf8_at_end(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_box(0);
x_8 = lean_box(0);
x_9 = l_Lean_Parser_identFnAux___main(x_5, x_7, x_8, x_1, x_2);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_10 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_11 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_10);
return x_11;
}
}
}
lean_object* l_Lean_Parser_rawIdentFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_rawIdentFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_satisfySymbolFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_3, x_4);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 2)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_1(x_1, x_10);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_2, x_5);
return x_13;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
else
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_1);
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_2, x_5);
return x_14;
}
}
else
{
lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_1);
x_15 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_2, x_5);
return x_15;
}
}
}
lean_object* l_Lean_Parser_symbolFnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = l_Lean_Parser_tokenFn(x_3, x_4);
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 2)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_string_dec_eq(x_12, x_1);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_8, x_6, x_7);
return x_14;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
}
else
{
lean_object* x_15; 
lean_dec(x_11);
x_15 = l_Lean_Parser_ParserState_mkErrorsAt(x_8, x_6, x_7);
return x_15;
}
}
else
{
lean_object* x_16; 
lean_dec(x_9);
x_16 = l_Lean_Parser_ParserState_mkErrorsAt(x_8, x_6, x_7);
return x_16;
}
}
}
lean_object* l_Lean_Parser_symbolFnAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_symbolFnAux(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_symbolInfo___elambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_symbolInfo___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_symbolInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_symbolInfo___elambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_symbolInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbolInfo___elambda__2), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Lean_Parser_symbolInfo___closed__1;
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 2, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_symbolInfo___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_symbolInfo___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_symbolFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_Char_HasRepr___closed__1;
x_5 = lean_string_append(x_4, x_1);
x_6 = lean_string_append(x_5, x_4);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = l_Lean_Parser_tokenFn(x_2, x_3);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 2)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_string_dec_eq(x_14, x_1);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = l_Lean_Parser_ParserState_mkErrorsAt(x_10, x_8, x_9);
return x_16;
}
else
{
lean_dec(x_9);
lean_dec(x_8);
return x_10;
}
}
else
{
lean_object* x_17; 
lean_dec(x_13);
x_17 = l_Lean_Parser_ParserState_mkErrorsAt(x_10, x_8, x_9);
return x_17;
}
}
else
{
lean_object* x_18; 
lean_dec(x_11);
x_18 = l_Lean_Parser_ParserState_mkErrorsAt(x_10, x_8, x_9);
return x_18;
}
}
}
lean_object* l_Lean_Parser_symbolFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_symbolFn(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Parser_symbol(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_String_trim(x_1);
lean_inc(x_2);
x_3 = l_Lean_Parser_symbolInfo(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_symbol___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_symbol(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_nonReservedSymbolFnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_3, x_4);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_9)) {
case 2:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_string_dec_eq(x_1, x_10);
lean_dec(x_10);
lean_dec(x_1);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = l_Lean_Parser_ParserState_mkErrorAt(x_6, x_2, x_5);
return x_12;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
case 3:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_13, 2);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_string_utf8_extract(x_15, x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
x_19 = lean_string_dec_eq(x_1, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_14);
lean_dec(x_1);
x_20 = l_Lean_Parser_ParserState_mkErrorAt(x_6, x_2, x_5);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_5);
lean_dec(x_2);
x_21 = l_Lean_Parser_ParserState_popSyntax(x_6);
x_22 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_1);
x_23 = l_Lean_Parser_ParserState_pushSyntax(x_21, x_22);
return x_23;
}
}
default: 
{
lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_1);
x_24 = l_Lean_Parser_ParserState_mkErrorAt(x_6, x_2, x_5);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_7);
lean_dec(x_1);
x_25 = l_Lean_Parser_ParserState_mkErrorAt(x_6, x_2, x_5);
return x_25;
}
}
}
lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Char_HasRepr___closed__1;
x_5 = lean_string_append(x_4, x_1);
x_6 = lean_string_append(x_5, x_4);
x_7 = l_Lean_Parser_nonReservedSymbolFnAux(x_1, x_6, x_2, x_3);
return x_7;
}
}
lean_object* l_Lean_Parser_nonReservedSymbolInfo___elambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_nonReservedSymbolInfo___elambda__2(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_nonReservedSymbolInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolInfo___elambda__2___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_nonReservedSymbolInfo___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolInfo___elambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_nonReservedSymbolInfo___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_identKind___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object* x_1, uint8_t x_2) {
_start:
{
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Lean_Parser_nonReservedSymbolInfo___closed__1;
x_7 = l_Lean_Parser_nonReservedSymbolInfo___closed__2;
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = l_Lean_Parser_nonReservedSymbolInfo___closed__3;
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = l_Lean_Parser_nonReservedSymbolInfo___closed__1;
x_13 = l_Lean_Parser_nonReservedSymbolInfo___closed__2;
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_14, 2, x_11);
return x_14;
}
}
}
lean_object* l_Lean_Parser_nonReservedSymbolInfo___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_nonReservedSymbolInfo___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_nonReservedSymbolInfo___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_nonReservedSymbolInfo___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_nonReservedSymbolInfo___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Lean_Parser_nonReservedSymbolInfo(x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_nonReservedSymbol(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_String_trim(x_1);
lean_inc(x_3);
x_4 = l_Lean_Parser_nonReservedSymbolInfo(x_3, x_2);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_Lean_Parser_nonReservedSymbol___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Lean_Parser_nonReservedSymbol(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Parser_strAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_string_utf8_at_end(x_1, x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_8, 0);
x_10 = lean_string_utf8_at_end(x_9, x_7);
if (x_10 == 0)
{
uint32_t x_11; uint32_t x_12; uint8_t x_13; 
x_11 = lean_string_utf8_get(x_1, x_3);
x_12 = lean_string_utf8_get(x_9, x_7);
x_13 = x_11 == x_12;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_3);
x_14 = l_Lean_Parser_ParserState_mkError(x_5, x_2);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_16 = l_Lean_Parser_ParserState_next(x_5, x_9, x_7);
lean_dec(x_7);
x_3 = x_15;
x_5 = x_16;
goto _start;
}
}
else
{
lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_3);
x_18 = l_Lean_Parser_ParserState_mkError(x_5, x_2);
return x_18;
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
}
lean_object* l_Lean_Parser_strAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_strAux___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_strAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_strAux___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Parser_strAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_strAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
uint8_t l_Lean_Parser_checkTailWs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getTailInfo___main(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 2);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_nat_dec_lt(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
return x_10;
}
}
}
}
lean_object* l_Lean_Parser_checkTailWs___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_checkTailWs(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_checkWsBeforeFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_4);
lean_dec(x_4);
x_6 = l_Lean_Parser_checkTailWs(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = l_Lean_Parser_ParserState_mkError(x_3, x_1);
return x_7;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
lean_object* l_Lean_Parser_checkWsBeforeFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_checkWsBeforeFn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_checkWsBefore___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_checkWsBeforeFn(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_checkWsBefore(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_checkWsBefore___elambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Lean_Parser_epsilonInfo;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_checkWsBefore___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_checkWsBefore___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
uint8_t l_Lean_Parser_checkTailNoWs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getTailInfo___main(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
return x_10;
}
}
}
}
lean_object* l_Lean_Parser_checkTailNoWs___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_checkTailNoWs(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Array_findRevMAux___main___at___private_Lean_Parser_Basic_9__pickNonNone___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_2);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
lean_dec(x_2);
x_9 = lean_array_fget(x_1, x_8);
x_10 = l_Lean_Syntax_isNone(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_9);
return x_11;
}
else
{
lean_dec(x_9);
x_2 = x_8;
x_3 = lean_box(0);
goto _start;
}
}
}
}
lean_object* l___private_Lean_Parser_Basic_9__pickNonNone(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_array_get_size(x_1);
x_3 = l_Array_findRevMAux___main___at___private_Lean_Parser_Basic_9__pickNonNone___spec__1(x_1, x_2, lean_box(0));
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
return x_5;
}
}
}
lean_object* l_Array_findRevMAux___main___at___private_Lean_Parser_Basic_9__pickNonNone___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findRevMAux___main___at___private_Lean_Parser_Basic_9__pickNonNone___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Parser_Basic_9__pickNonNone___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Parser_Basic_9__pickNonNone(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_checkNoWsBeforeFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l___private_Lean_Parser_Basic_9__pickNonNone(x_4);
lean_dec(x_4);
x_6 = l_Lean_Parser_checkTailNoWs(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = l_Lean_Parser_ParserState_mkError(x_3, x_1);
return x_7;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
lean_object* l_Lean_Parser_checkNoWsBeforeFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_checkNoWsBeforeFn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_checkNoWsBefore___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_checkNoWsBeforeFn(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_checkNoWsBefore(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_checkNoWsBefore___elambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Lean_Parser_epsilonInfo;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_checkNoWsBefore___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_checkNoWsBefore___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_symbolNoWsInfo___elambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_symbolNoWsInfo___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_symbolNoWsInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_symbolNoWsInfo___elambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_symbolNoWsInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbolNoWsInfo___elambda__2), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Lean_Parser_symbolNoWsInfo___closed__1;
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 2, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_symbolNoWsInfo___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_symbolNoWsInfo___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_symbolNoWsFnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_5);
lean_dec(x_5);
x_8 = l_Lean_Parser_checkTailNoWs(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_1);
x_9 = l_Lean_Parser_ParserState_mkError(x_4, x_2);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_10, 0);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Parser_strAux___main(x_1, x_2, x_12, x_3, x_4);
x_14 = lean_ctor_get(x_13, 3);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_inc_n(x_6, 2);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_6);
lean_ctor_set(x_15, 2, x_6);
x_16 = lean_string_utf8_byte_size(x_1);
x_17 = lean_nat_add(x_6, x_16);
lean_dec(x_16);
lean_inc(x_17);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_15);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_6);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_18);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_20);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_1);
x_24 = l_Lean_Parser_ParserState_pushSyntax(x_13, x_23);
return x_24;
}
else
{
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_1);
return x_13;
}
}
}
}
lean_object* l_Lean_Parser_symbolNoWsFnAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_symbolNoWsFnAux(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* _init_l_Lean_Parser_symbolNoWsFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' without whitespace around it");
return x_1;
}
}
lean_object* l_Lean_Parser_symbolNoWsFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = l_Char_HasRepr___closed__1;
x_5 = lean_string_append(x_4, x_1);
x_6 = l_Lean_Parser_symbolNoWsFn___closed__1;
x_7 = lean_string_append(x_5, x_6);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_8);
lean_dec(x_8);
x_11 = l_Lean_Parser_checkTailNoWs(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_1);
x_12 = l_Lean_Parser_ParserState_mkError(x_3, x_7);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_13, 0);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Lean_Parser_strAux___main(x_1, x_7, x_15, x_2, x_3);
x_17 = lean_ctor_get(x_16, 3);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_inc_n(x_9, 2);
lean_inc(x_14);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_9);
lean_ctor_set(x_18, 2, x_9);
x_19 = lean_string_utf8_byte_size(x_1);
x_20 = lean_nat_add(x_9, x_19);
lean_dec(x_19);
lean_inc(x_20);
lean_inc(x_14);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_18);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_9);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_21);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_24);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_1);
x_27 = l_Lean_Parser_ParserState_pushSyntax(x_16, x_26);
return x_27;
}
else
{
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_1);
return x_16;
}
}
}
}
lean_object* l_Lean_Parser_symbolNoWsFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_symbolNoWsFn(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_symbolNoWs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_String_trim(x_1);
lean_inc(x_2);
x_3 = l_Lean_Parser_symbolNoWsInfo(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_symbolNoWsFn___boxed), 3, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_symbolNoWs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_symbolNoWs(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_unicodeSymbolFnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = l_Lean_Parser_tokenFn(x_4, x_5);
x_8 = lean_ctor_get(x_7, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_9);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 2)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_string_dec_eq(x_11, x_1);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = lean_string_dec_eq(x_11, x_2);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_7, x_3, x_6);
return x_14;
}
else
{
lean_dec(x_6);
lean_dec(x_3);
return x_7;
}
}
else
{
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_3);
return x_7;
}
}
else
{
lean_object* x_15; 
lean_dec(x_10);
x_15 = l_Lean_Parser_ParserState_mkErrorsAt(x_7, x_3, x_6);
return x_15;
}
}
else
{
lean_object* x_16; 
lean_dec(x_8);
x_16 = l_Lean_Parser_ParserState_mkErrorsAt(x_7, x_3, x_6);
return x_16;
}
}
}
lean_object* l_Lean_Parser_unicodeSymbolFnAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_unicodeSymbolFnAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_unicodeSymbolInfo___elambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_unicodeSymbolInfo___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Parser_unicodeSymbolInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolInfo___elambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_unicodeSymbolInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolInfo___elambda__2), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_Lean_Parser_unicodeSymbolInfo___closed__1;
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 2, x_7);
return x_9;
}
}
lean_object* l_Lean_Parser_unicodeSymbolInfo___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_unicodeSymbolInfo___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_unicodeSymbolFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', '");
return x_1;
}
}
lean_object* l_Lean_Parser_unicodeSymbolFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = l_Char_HasRepr___closed__1;
x_6 = lean_string_append(x_5, x_1);
x_7 = l_Lean_Parser_unicodeSymbolFn___closed__1;
x_8 = lean_string_append(x_6, x_7);
x_9 = lean_string_append(x_8, x_2);
x_10 = lean_string_append(x_9, x_5);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Parser_unicodeSymbolFnAux(x_1, x_2, x_12, x_3, x_4);
return x_13;
}
}
lean_object* l_Lean_Parser_unicodeSymbolFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_unicodeSymbolFn(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_unicodeSymbol(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_String_trim(x_1);
x_4 = l_String_trim(x_2);
lean_inc(x_4);
lean_inc(x_3);
x_5 = l_Lean_Parser_unicodeSymbolInfo(x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolFn___boxed), 4, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_unicodeSymbol___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_unicodeSymbol(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_mkAtomicInfo___elambda__1(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_mkAtomicInfo___elambda__2(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_mkAtomicInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_mkAtomicInfo___elambda__2___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_mkAtomicInfo___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_mkAtomicInfo___elambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_mkAtomicInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = l_Lean_Parser_mkAtomicInfo___closed__1;
x_6 = l_Lean_Parser_mkAtomicInfo___closed__2;
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 2, x_4);
return x_7;
}
}
lean_object* l_Lean_Parser_mkAtomicInfo___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_mkAtomicInfo___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_mkAtomicInfo___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_mkAtomicInfo___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_numLitFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Lean_Parser_tokenFn(x_1, x_2);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_6);
lean_dec(x_6);
x_8 = l_Lean_numLitKind;
x_9 = l_Lean_Syntax_isOfKind(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_numberFnAux___closed__1;
x_11 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_10, x_3);
return x_11;
}
else
{
lean_dec(x_3);
return x_4;
}
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_12 = l_Lean_Parser_numberFnAux___closed__1;
x_13 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_12, x_3);
return x_13;
}
}
}
lean_object* _init_l_Lean_Parser_numLitNoAntiquot___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_numLitKind___closed__1;
x_2 = l_Lean_Parser_mkAtomicInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_numLitNoAntiquot___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_numLitFn), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_numLitNoAntiquot___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_numLitNoAntiquot___closed__1;
x_2 = l_Lean_Parser_numLitNoAntiquot___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_numLitNoAntiquot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_numLitNoAntiquot___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_strLitFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("string literal");
return x_1;
}
}
lean_object* l_Lean_Parser_strLitFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Lean_Parser_tokenFn(x_1, x_2);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_6);
lean_dec(x_6);
x_8 = l_Lean_strLitKind;
x_9 = l_Lean_Syntax_isOfKind(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_strLitFn___closed__1;
x_11 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_10, x_3);
return x_11;
}
else
{
lean_dec(x_3);
return x_4;
}
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_12 = l_Lean_Parser_strLitFn___closed__1;
x_13 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_12, x_3);
return x_13;
}
}
}
lean_object* _init_l_Lean_Parser_strLitNoAntiquot___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_strLitKind___closed__1;
x_2 = l_Lean_Parser_mkAtomicInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_strLitNoAntiquot___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_strLitFn), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_strLitNoAntiquot___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_strLitNoAntiquot___closed__1;
x_2 = l_Lean_Parser_strLitNoAntiquot___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_strLitNoAntiquot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_strLitNoAntiquot___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_charLitFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("character literal");
return x_1;
}
}
lean_object* l_Lean_Parser_charLitFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Lean_Parser_tokenFn(x_1, x_2);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_6);
lean_dec(x_6);
x_8 = l_Lean_charLitKind;
x_9 = l_Lean_Syntax_isOfKind(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_charLitFn___closed__1;
x_11 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_10, x_3);
return x_11;
}
else
{
lean_dec(x_3);
return x_4;
}
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_12 = l_Lean_Parser_charLitFn___closed__1;
x_13 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_12, x_3);
return x_13;
}
}
}
lean_object* _init_l_Lean_Parser_charLitNoAntiquot___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_charLitKind___closed__1;
x_2 = l_Lean_Parser_mkAtomicInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_charLitNoAntiquot___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_charLitFn), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_charLitNoAntiquot___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_charLitNoAntiquot___closed__1;
x_2 = l_Lean_Parser_charLitNoAntiquot___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_charLitNoAntiquot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_charLitNoAntiquot___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_nameLitFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Name literal");
return x_1;
}
}
lean_object* l_Lean_Parser_nameLitFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Lean_Parser_tokenFn(x_1, x_2);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_6);
lean_dec(x_6);
x_8 = l_Lean_nameLitKind;
x_9 = l_Lean_Syntax_isOfKind(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_nameLitFn___closed__1;
x_11 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_10, x_3);
return x_11;
}
else
{
lean_dec(x_3);
return x_4;
}
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_12 = l_Lean_Parser_nameLitFn___closed__1;
x_13 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_12, x_3);
return x_13;
}
}
}
lean_object* _init_l_Lean_Parser_nameLitNoAntiquot___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_nameLitKind___closed__1;
x_2 = l_Lean_Parser_mkAtomicInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_nameLitNoAntiquot___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_nameLitFn), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_nameLitNoAntiquot___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_nameLitNoAntiquot___closed__1;
x_2 = l_Lean_Parser_nameLitNoAntiquot___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_nameLitNoAntiquot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_nameLitNoAntiquot___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_identFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("identifier");
return x_1;
}
}
lean_object* l_Lean_Parser_identFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Lean_Parser_tokenFn(x_1, x_2);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_6);
lean_dec(x_6);
x_8 = l_Lean_Syntax_isIdent(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Parser_identFn___closed__1;
x_10 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_9, x_3);
return x_10;
}
else
{
lean_dec(x_3);
return x_4;
}
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_11 = l_Lean_Parser_identFn___closed__1;
x_12 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_11, x_3);
return x_12;
}
}
}
lean_object* _init_l_Lean_Parser_identNoAntiquot___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_identKind___closed__1;
x_2 = l_Lean_Parser_mkAtomicInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_identNoAntiquot___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_identFn), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_identNoAntiquot___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_identNoAntiquot___closed__1;
x_2 = l_Lean_Parser_identNoAntiquot___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_identNoAntiquot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_identNoAntiquot___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_rawIdentNoAntiquot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_rawIdentFn___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_rawIdentNoAntiquot___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_rawIdentNoAntiquot___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_rawIdentNoAntiquot() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_rawIdentNoAntiquot___closed__2;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_identEqFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected identifier '");
return x_1;
}
}
lean_object* l_Lean_Parser_identEqFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = l_Lean_Parser_tokenFn(x_2, x_3);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_7);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 3)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = l_System_FilePath_dirName___closed__1;
x_12 = l_Lean_Name_toStringWithSep___main(x_11, x_1);
x_13 = l_Lean_Parser_identEqFn___closed__1;
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = l_Char_HasRepr___closed__1;
x_16 = lean_string_append(x_14, x_15);
x_17 = l_Lean_Parser_ParserState_mkErrorAt(x_5, x_16, x_4);
return x_17;
}
else
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_1);
x_18 = l_Lean_Parser_identFn___closed__1;
x_19 = l_Lean_Parser_ParserState_mkErrorAt(x_5, x_18, x_4);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_6);
lean_dec(x_1);
x_20 = l_Lean_Parser_identFn___closed__1;
x_21 = l_Lean_Parser_ParserState_mkErrorAt(x_5, x_20, x_4);
return x_21;
}
}
}
lean_object* l_Lean_Parser_identEq(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_identEqFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Lean_Parser_identNoAntiquot___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_quotedSymbolFn___spec__1(uint32_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_6, 0);
x_8 = lean_string_utf8_at_end(x_7, x_5);
if (x_8 == 0)
{
uint32_t x_9; uint8_t x_10; 
x_9 = lean_string_utf8_get(x_7, x_5);
x_10 = x_1 == x_9;
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = l_Lean_Parser_ParserState_mkUnexpectedError(x_4, x_2);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = l_Lean_Parser_ParserState_next(x_4, x_7, x_5);
lean_dec(x_5);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_2);
x_13 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_14 = l_Lean_Parser_ParserState_mkUnexpectedError(x_4, x_13);
return x_14;
}
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_quotedSymbolFn___spec__2(uint32_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_string_utf8_at_end(x_6, x_4);
if (x_7 == 0)
{
uint32_t x_8; uint8_t x_9; 
x_8 = lean_string_utf8_get(x_6, x_4);
x_9 = x_8 == x_1;
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_Parser_ParserState_next(x_3, x_6, x_4);
lean_dec(x_4);
x_3 = x_10;
goto _start;
}
else
{
lean_dec(x_4);
return x_3;
}
}
else
{
lean_dec(x_4);
return x_3;
}
}
}
lean_object* _init_l_Lean_Parser_quotedSymbolFn___closed__1() {
_start:
{
uint32_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 96;
x_2 = l_String_splitAux___main___closed__1;
x_3 = lean_string_push(x_2, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_quotedSymbolFn___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_quotedSymbolFn___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_quotedSymbolFn___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_quotedSymbolFn___closed__2;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_quotedSymbolFn(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_3 = 96;
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
lean_dec(x_4);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
x_22 = l_Lean_Parser_quotedSymbolFn___closed__3;
x_23 = l_Lean_Parser_satisfyFn___at_Lean_Parser_quotedSymbolFn___spec__1(x_3, x_22, x_1, x_2);
x_24 = lean_ctor_get(x_23, 3);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_25 = 0;
x_26 = l___private_Lean_Parser_Basic_3__rawAux(x_21, x_25, x_1, x_23);
x_27 = lean_ctor_get(x_26, 3);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
x_29 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_quotedSymbolFn___spec__2(x_3, x_1, x_26);
x_30 = lean_ctor_get(x_29, 3);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
x_31 = l___private_Lean_Parser_Basic_3__rawAux(x_28, x_25, x_1, x_29);
x_6 = x_31;
goto block_20;
}
else
{
lean_dec(x_30);
lean_dec(x_28);
x_6 = x_29;
goto block_20;
}
}
else
{
lean_dec(x_27);
x_6 = x_26;
goto block_20;
}
}
else
{
lean_dec(x_24);
lean_dec(x_21);
x_6 = x_23;
goto block_20;
}
block_20:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_9 = l_Lean_Parser_quotedSymbolFn___closed__3;
x_10 = l_Lean_Parser_satisfyFn___at_Lean_Parser_quotedSymbolFn___spec__1(x_3, x_9, x_1, x_6);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = 1;
x_13 = l___private_Lean_Parser_Basic_3__rawAux(x_8, x_12, x_1, x_10);
x_14 = l_Lean_quotedSymbolKind;
x_15 = l_Lean_Parser_ParserState_mkNode(x_13, x_14, x_5);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_8);
x_16 = l_Lean_quotedSymbolKind;
x_17 = l_Lean_Parser_ParserState_mkNode(x_10, x_16, x_5);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_Lean_quotedSymbolKind;
x_19 = l_Lean_Parser_ParserState_mkNode(x_6, x_18, x_5);
return x_19;
}
}
}
}
lean_object* l_Lean_Parser_satisfyFn___at_Lean_Parser_quotedSymbolFn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_6 = l_Lean_Parser_satisfyFn___at_Lean_Parser_quotedSymbolFn___spec__1(x_5, x_2, x_3, x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_quotedSymbolFn___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_5 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_quotedSymbolFn___spec__2(x_4, x_2, x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Parser_quotedSymbolFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_quotedSymbolFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_quotedSymbol___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_quotedSymbolFn___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_quotedSymbol___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_quotedSymbol___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_quotedSymbol() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_quotedSymbol___closed__2;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_unquotedSymbolFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("symbol");
return x_1;
}
}
lean_object* l_Lean_Parser_unquotedSymbolFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Lean_Parser_tokenFn(x_1, x_2);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_6);
lean_dec(x_6);
x_8 = l_Lean_Syntax_isIdent(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Syntax_getKind(x_7);
x_10 = l_Lean_Parser_isLitKind(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Parser_unquotedSymbolFn___closed__1;
x_12 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_11, x_3);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_7);
x_13 = l_Lean_Parser_unquotedSymbolFn___closed__1;
x_14 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_13, x_3);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_15 = l_Lean_Parser_unquotedSymbolFn___closed__1;
x_16 = l_Lean_Parser_ParserState_mkErrorAt(x_4, x_15, x_3);
return x_16;
}
}
}
lean_object* _init_l_Lean_Parser_unquotedSymbol___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_unquotedSymbolFn), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_unquotedSymbol___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_unquotedSymbol___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_unquotedSymbol() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_unquotedSymbol___closed__2;
return x_1;
}
}
lean_object* l_Lean_Parser_stringToParserCoe(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_String_trim(x_1);
lean_inc(x_2);
x_3 = l_Lean_Parser_symbolInfo(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_stringToParserCoe___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_stringToParserCoe(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_ParserState_keepNewError(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Array_shrink___main___rarg(x_4, x_2);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_10 = l_Array_shrink___main___rarg(x_6, x_2);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_8);
lean_ctor_set(x_11, 3, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Parser_ParserState_keepNewError___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_ParserState_keepNewError(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_ParserState_keepPrevError(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 3);
lean_dec(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_dec(x_8);
x_9 = l_Array_shrink___main___rarg(x_6, x_2);
lean_ctor_set(x_1, 3, x_4);
lean_ctor_set(x_1, 1, x_3);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l_Array_shrink___main___rarg(x_10, x_2);
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
lean_ctor_set(x_13, 2, x_11);
lean_ctor_set(x_13, 3, x_4);
return x_13;
}
}
}
lean_object* l_Lean_Parser_ParserState_keepPrevError___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ParserState_keepPrevError(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Parser_ParserState_mergeErrors(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = l_Lean_Parser_Error_beq(x_3, x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 3);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_dec(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_dec(x_14);
x_15 = lean_ctor_get(x_1, 0);
lean_dec(x_15);
x_16 = l_Array_shrink___main___rarg(x_5, x_2);
x_17 = l_Lean_Parser_Error_merge(x_3, x_9);
lean_ctor_set(x_4, 0, x_17);
lean_ctor_set(x_1, 0, x_16);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_18 = l_Array_shrink___main___rarg(x_5, x_2);
x_19 = l_Lean_Parser_Error_merge(x_3, x_9);
lean_ctor_set(x_4, 0, x_19);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_6);
lean_ctor_set(x_20, 2, x_7);
lean_ctor_set(x_20, 3, x_4);
return x_20;
}
}
else
{
lean_free_object(x_4);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_1;
}
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
lean_dec(x_4);
x_22 = l_Lean_Parser_Error_beq(x_3, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_23 = x_1;
} else {
 lean_dec_ref(x_1);
 x_23 = lean_box(0);
}
x_24 = l_Array_shrink___main___rarg(x_5, x_2);
x_25 = l_Lean_Parser_Error_merge(x_3, x_21);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
if (lean_is_scalar(x_23)) {
 x_27 = lean_alloc_ctor(0, 4, 0);
} else {
 x_27 = x_23;
}
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_6);
lean_ctor_set(x_27, 2, x_7);
lean_ctor_set(x_27, 3, x_26);
return x_27;
}
else
{
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_1;
}
}
}
}
}
lean_object* l_Lean_Parser_ParserState_mergeErrors___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_ParserState_mergeErrors(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_ParserState_keepLatest(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 3);
lean_dec(x_5);
x_6 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_4);
x_7 = l_Array_shrink___main___rarg(x_4, x_2);
x_8 = lean_array_push(x_7, x_6);
x_9 = lean_box(0);
lean_ctor_set(x_1, 3, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_13 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_10);
x_14 = l_Array_shrink___main___rarg(x_10, x_2);
x_15 = lean_array_push(x_14, x_13);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_11);
lean_ctor_set(x_17, 2, x_12);
lean_ctor_set(x_17, 3, x_16);
return x_17;
}
}
}
lean_object* l_Lean_Parser_ParserState_keepLatest___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_ParserState_keepLatest(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_ParserState_replaceLongest(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_ParserState_keepLatest(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_ParserState_replaceLongest___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_ParserState_replaceLongest(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_invalidLongestMatchParser___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("longestMatch parsers must generate exactly one Syntax node");
return x_1;
}
}
lean_object* l_Lean_Parser_invalidLongestMatchParser(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_invalidLongestMatchParser___closed__1;
x_3 = l_Lean_Parser_ParserState_mkError(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_runLongestMatchParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_apply_2(x_2, x_3, x_4);
x_8 = lean_ctor_get(x_7, 3);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_array_get_size(x_9);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_6, x_11);
lean_dec(x_6);
x_13 = lean_nat_dec_eq(x_10, x_12);
lean_dec(x_12);
lean_dec(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_Parser_invalidLongestMatchParser___closed__1;
x_15 = l_Lean_Parser_ParserState_mkError(x_7, x_14);
return x_15;
}
else
{
return x_7;
}
}
else
{
lean_dec(x_8);
lean_dec(x_6);
return x_7;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = l_Lean_Parser_ParserState_pushSyntax(x_4, x_16);
x_18 = lean_apply_2(x_2, x_3, x_17);
x_19 = lean_ctor_get(x_18, 3);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_array_get_size(x_20);
x_22 = lean_unsigned_to_nat(2u);
x_23 = lean_nat_add(x_6, x_22);
x_24 = lean_nat_dec_eq(x_21, x_23);
lean_dec(x_23);
lean_dec(x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_20);
lean_dec(x_6);
x_25 = l_Lean_Parser_invalidLongestMatchParser___closed__1;
x_26 = l_Lean_Parser_ParserState_mkError(x_18, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_20);
lean_dec(x_20);
x_28 = l_Lean_Parser_ParserState_shrinkStack(x_18, x_6);
lean_dec(x_6);
x_29 = l_Lean_Parser_ParserState_pushSyntax(x_28, x_27);
return x_29;
}
}
else
{
lean_dec(x_19);
lean_dec(x_6);
return x_18;
}
}
}
}
lean_object* l_Lean_Parser_longestMatchStep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_array_get_size(x_9);
lean_dec(x_9);
x_32 = l_Lean_Parser_ParserState_restore(x_6, x_10, x_3);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_array_get_size(x_33);
lean_dec(x_33);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_apply_2(x_4, x_5, x_32);
x_36 = lean_ctor_get(x_35, 3);
lean_inc(x_36);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
x_38 = lean_array_get_size(x_37);
lean_dec(x_37);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_add(x_34, x_39);
lean_dec(x_34);
x_41 = lean_nat_dec_eq(x_38, x_40);
lean_dec(x_40);
lean_dec(x_38);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = l_Lean_Parser_invalidLongestMatchParser___closed__1;
x_43 = l_Lean_Parser_ParserState_mkError(x_35, x_42);
x_11 = x_43;
goto block_31;
}
else
{
x_11 = x_35;
goto block_31;
}
}
else
{
lean_dec(x_36);
lean_dec(x_34);
x_11 = x_35;
goto block_31;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
lean_dec(x_1);
x_45 = l_Lean_Parser_ParserState_pushSyntax(x_32, x_44);
x_46 = lean_apply_2(x_4, x_5, x_45);
x_47 = lean_ctor_get(x_46, 3);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_48 = lean_ctor_get(x_46, 0);
lean_inc(x_48);
x_49 = lean_array_get_size(x_48);
x_50 = lean_unsigned_to_nat(2u);
x_51 = lean_nat_add(x_34, x_50);
x_52 = lean_nat_dec_eq(x_49, x_51);
lean_dec(x_51);
lean_dec(x_49);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_48);
lean_dec(x_34);
x_53 = l_Lean_Parser_invalidLongestMatchParser___closed__1;
x_54 = l_Lean_Parser_ParserState_mkError(x_46, x_53);
x_11 = x_54;
goto block_31;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_48);
lean_dec(x_48);
x_56 = l_Lean_Parser_ParserState_shrinkStack(x_46, x_34);
lean_dec(x_34);
x_57 = l_Lean_Parser_ParserState_pushSyntax(x_56, x_55);
x_11 = x_57;
goto block_31;
}
}
else
{
lean_dec(x_47);
lean_dec(x_34);
x_11 = x_46;
goto block_31;
}
}
block_31:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 3);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_lt(x_8, x_13);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = lean_nat_dec_lt(x_13, x_8);
lean_dec(x_13);
if (x_15 == 0)
{
lean_dec(x_10);
lean_dec(x_8);
return x_11;
}
else
{
lean_object* x_16; 
x_16 = l_Lean_Parser_ParserState_restore(x_11, x_10, x_8);
lean_dec(x_10);
return x_16;
}
}
else
{
lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_8);
x_17 = l_Lean_Parser_ParserState_keepLatest(x_11, x_2);
return x_17;
}
}
else
{
lean_object* x_18; 
lean_dec(x_12);
x_18 = l_Lean_Parser_ParserState_restore(x_11, x_10, x_8);
lean_dec(x_10);
return x_18;
}
}
else
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_11, 3);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
x_20 = lean_ctor_get(x_11, 0);
lean_inc(x_20);
x_21 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_20);
lean_dec(x_20);
x_22 = l_Lean_Parser_ParserState_shrinkStack(x_11, x_2);
x_23 = l_Lean_Parser_ParserState_pushSyntax(x_22, x_21);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_19);
x_24 = lean_ctor_get(x_7, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
x_26 = lean_nat_dec_lt(x_8, x_25);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = lean_nat_dec_lt(x_25, x_8);
lean_dec(x_25);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_8);
lean_dec(x_7);
x_28 = l_Lean_Parser_ParserState_mergeErrors(x_11, x_10, x_24);
lean_dec(x_10);
return x_28;
}
else
{
lean_object* x_29; 
lean_dec(x_24);
x_29 = l_Lean_Parser_ParserState_keepPrevError(x_11, x_10, x_8, x_7);
lean_dec(x_10);
return x_29;
}
}
else
{
lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_7);
x_30 = l_Lean_Parser_ParserState_keepNewError(x_11, x_10);
lean_dec(x_10);
return x_30;
}
}
}
}
}
}
lean_object* l_Lean_Parser_longestMatchStep___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_longestMatchStep(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Parser_longestMatchMkResult(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 3);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_1, x_4);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_array_get_size(x_6);
lean_dec(x_6);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
lean_dec(x_5);
if (x_8 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_choiceKind;
x_10 = l_Lean_Parser_ParserState_mkNode(x_2, x_9, x_1);
return x_10;
}
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
}
}
lean_object* l_Lean_Parser_longestMatchFnAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_7 = l_Lean_Parser_longestMatchMkResult(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_11 = l_Lean_Parser_longestMatchStep(x_1, x_2, x_3, x_10, x_5, x_6);
x_4 = x_9;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Lean_Parser_longestMatchFnAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_longestMatchFnAux___main(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* _init_l_Lean_Parser_longestMatchFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("longestMatch: empty list");
return x_1;
}
}
lean_object* l_Lean_Parser_longestMatchFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = l_Lean_Parser_longestMatchFn___closed__1;
x_6 = l_Lean_Parser_ParserState_mkError(x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
x_11 = lean_array_get_size(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_apply_2(x_9, x_3, x_4);
x_13 = lean_ctor_get(x_12, 3);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_array_get_size(x_14);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_11, x_16);
lean_dec(x_11);
x_18 = lean_nat_dec_eq(x_15, x_17);
lean_dec(x_17);
lean_dec(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_Parser_invalidLongestMatchParser___closed__1;
x_20 = l_Lean_Parser_ParserState_mkError(x_12, x_19);
return x_20;
}
else
{
return x_12;
}
}
else
{
lean_dec(x_13);
lean_dec(x_11);
return x_12;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = l_Lean_Parser_ParserState_pushSyntax(x_4, x_21);
x_23 = lean_apply_2(x_9, x_3, x_22);
x_24 = lean_ctor_get(x_23, 3);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
x_26 = lean_array_get_size(x_25);
x_27 = lean_unsigned_to_nat(2u);
x_28 = lean_nat_add(x_11, x_27);
x_29 = lean_nat_dec_eq(x_26, x_28);
lean_dec(x_28);
lean_dec(x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_25);
lean_dec(x_11);
x_30 = l_Lean_Parser_invalidLongestMatchParser___closed__1;
x_31 = l_Lean_Parser_ParserState_mkError(x_23, x_30);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_25);
lean_dec(x_25);
x_33 = l_Lean_Parser_ParserState_shrinkStack(x_23, x_11);
lean_dec(x_11);
x_34 = l_Lean_Parser_ParserState_pushSyntax(x_33, x_32);
return x_34;
}
}
else
{
lean_dec(x_24);
lean_dec(x_11);
return x_23;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_2, 0);
lean_inc(x_35);
lean_dec(x_2);
x_36 = lean_ctor_get(x_4, 0);
lean_inc(x_36);
x_37 = lean_array_get_size(x_36);
lean_dec(x_36);
x_38 = lean_ctor_get(x_4, 1);
lean_inc(x_38);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_35, 1);
lean_inc(x_45);
lean_dec(x_35);
lean_inc(x_3);
x_46 = lean_apply_2(x_45, x_3, x_4);
x_47 = lean_ctor_get(x_46, 3);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_48 = lean_ctor_get(x_46, 0);
lean_inc(x_48);
x_49 = lean_array_get_size(x_48);
lean_dec(x_48);
x_50 = lean_unsigned_to_nat(1u);
x_51 = lean_nat_add(x_37, x_50);
x_52 = lean_nat_dec_eq(x_49, x_51);
lean_dec(x_51);
lean_dec(x_49);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = l_Lean_Parser_invalidLongestMatchParser___closed__1;
x_54 = l_Lean_Parser_ParserState_mkError(x_46, x_53);
x_39 = x_54;
goto block_44;
}
else
{
x_39 = x_46;
goto block_44;
}
}
else
{
lean_dec(x_47);
x_39 = x_46;
goto block_44;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_35, 1);
lean_inc(x_55);
lean_dec(x_35);
x_56 = lean_ctor_get(x_1, 0);
lean_inc(x_56);
x_57 = l_Lean_Parser_ParserState_pushSyntax(x_4, x_56);
lean_inc(x_3);
x_58 = lean_apply_2(x_55, x_3, x_57);
x_59 = lean_ctor_get(x_58, 3);
lean_inc(x_59);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_58, 0);
lean_inc(x_60);
x_61 = lean_array_get_size(x_60);
x_62 = lean_unsigned_to_nat(2u);
x_63 = lean_nat_add(x_37, x_62);
x_64 = lean_nat_dec_eq(x_61, x_63);
lean_dec(x_63);
lean_dec(x_61);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_60);
x_65 = l_Lean_Parser_invalidLongestMatchParser___closed__1;
x_66 = l_Lean_Parser_ParserState_mkError(x_58, x_65);
x_39 = x_66;
goto block_44;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_60);
lean_dec(x_60);
x_68 = l_Lean_Parser_ParserState_shrinkStack(x_58, x_37);
x_69 = l_Lean_Parser_ParserState_pushSyntax(x_68, x_67);
x_39 = x_69;
goto block_44;
}
}
else
{
lean_dec(x_59);
x_39 = x_58;
goto block_44;
}
}
block_44:
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_39, 3);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; 
x_41 = l_Lean_Parser_longestMatchFnAux___main(x_1, x_37, x_38, x_7, x_3, x_39);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_40);
x_42 = l_Lean_Parser_ParserState_shrinkStack(x_39, x_37);
x_43 = l_Lean_Parser_longestMatchFnAux___main(x_1, x_37, x_38, x_7, x_3, x_42);
return x_43;
}
}
}
}
}
}
lean_object* _init_l_Lean_Parser_anyOfFn___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("anyOf: empty list");
return x_1;
}
}
lean_object* l_Lean_Parser_anyOfFn___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = l_Lean_Parser_anyOfFn___main___closed__1;
x_5 = l_Lean_Parser_ParserState_mkError(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_2(x_8, x_2, x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_array_get_size(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_inc(x_2);
x_15 = lean_apply_2(x_11, x_2, x_3);
x_16 = lean_ctor_get(x_15, 3);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_2);
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
x_19 = lean_nat_dec_eq(x_18, x_14);
lean_dec(x_18);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_2);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_inc(x_14);
x_20 = l_Lean_Parser_ParserState_restore(x_15, x_13, x_14);
lean_dec(x_13);
x_21 = l_Lean_Parser_anyOfFn___main(x_6, x_2, x_20);
x_22 = l_Lean_Parser_mergeOrElseErrors(x_21, x_17, x_14);
lean_dec(x_14);
return x_22;
}
}
}
}
}
}
lean_object* l_Lean_Parser_anyOfFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_anyOfFn___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_checkColGeFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 2);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = l_Lean_FileMap_toPosition(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_nat_dec_le(x_1, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Parser_ParserState_mkError(x_4, x_2);
return x_11;
}
else
{
lean_dec(x_2);
return x_4;
}
}
}
lean_object* l_Lean_Parser_checkColGeFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_checkColGeFn(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_checkColGe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_checkColGeFn___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_Lean_Parser_Parser_inhabited___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_withPosition___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = l_Lean_FileMap_toPosition(x_5, x_6);
lean_dec(x_5);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, x_2, x_3);
return x_10;
}
}
lean_object* l_Lean_Parser_withPosition(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Position_Inhabited___closed__1;
lean_inc(x_1);
x_3 = lean_apply_1(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 1);
lean_dec(x_5);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lambda__1), 3, 1);
lean_closure_set(x_6, 0, x_1);
lean_ctor_set(x_3, 1, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lambda__1), 3, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_7, 2);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = l_Lean_FileMap_toPosition(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
x_14 = lean_array_get_size(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
x_32 = lean_ctor_get(x_5, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 2);
lean_inc(x_33);
lean_dec(x_32);
lean_inc(x_15);
x_34 = l_Lean_FileMap_toPosition(x_33, x_15);
lean_dec(x_33);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_nat_dec_le(x_11, x_35);
lean_dec(x_35);
lean_dec(x_11);
if (x_36 == 0)
{
lean_object* x_37; 
lean_inc(x_2);
x_37 = l_Lean_Parser_ParserState_mkError(x_6, x_2);
x_16 = x_37;
goto block_31;
}
else
{
x_16 = x_6;
goto block_31;
}
block_31:
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 3);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_inc(x_5);
x_18 = lean_apply_2(x_12, x_5, x_16);
x_19 = lean_ctor_get(x_18, 3);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
lean_dec(x_14);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
x_21 = lean_nat_dec_eq(x_15, x_20);
lean_dec(x_20);
lean_dec(x_15);
if (x_21 == 0)
{
x_6 = x_18;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Lean_Parser_manyAux___main___closed__1;
x_24 = l_Lean_Parser_ParserState_mkUnexpectedError(x_18, x_23);
return x_24;
}
}
else
{
lean_object* x_25; uint8_t x_26; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
x_26 = lean_nat_dec_eq(x_15, x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_dec(x_15);
lean_dec(x_14);
return x_18;
}
else
{
lean_object* x_27; 
x_27 = l_Lean_Parser_ParserState_restore(x_18, x_14, x_15);
lean_dec(x_14);
return x_27;
}
}
}
else
{
lean_object* x_28; uint8_t x_29; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
x_29 = lean_nat_dec_eq(x_15, x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_dec(x_15);
lean_dec(x_14);
return x_16;
}
else
{
lean_object* x_30; 
x_30 = l_Lean_Parser_ParserState_restore(x_16, x_14, x_15);
lean_dec(x_14);
return x_30;
}
}
}
}
}
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_7, 2);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = l_Lean_FileMap_toPosition(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
x_14 = lean_array_get_size(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
x_32 = lean_ctor_get(x_5, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 2);
lean_inc(x_33);
lean_dec(x_32);
lean_inc(x_15);
x_34 = l_Lean_FileMap_toPosition(x_33, x_15);
lean_dec(x_33);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_nat_dec_le(x_11, x_35);
lean_dec(x_35);
lean_dec(x_11);
if (x_36 == 0)
{
lean_object* x_37; 
lean_inc(x_2);
x_37 = l_Lean_Parser_ParserState_mkError(x_6, x_2);
x_16 = x_37;
goto block_31;
}
else
{
x_16 = x_6;
goto block_31;
}
block_31:
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 3);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_inc(x_5);
x_18 = lean_apply_2(x_12, x_5, x_16);
x_19 = lean_ctor_get(x_18, 3);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
lean_dec(x_14);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
x_21 = lean_nat_dec_eq(x_15, x_20);
lean_dec(x_20);
lean_dec(x_15);
if (x_21 == 0)
{
x_6 = x_18;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Lean_Parser_manyAux___main___closed__1;
x_24 = l_Lean_Parser_ParserState_mkUnexpectedError(x_18, x_23);
return x_24;
}
}
else
{
lean_object* x_25; uint8_t x_26; 
lean_dec(x_19);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
x_26 = lean_nat_dec_eq(x_15, x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_dec(x_15);
lean_dec(x_14);
return x_18;
}
else
{
lean_object* x_27; 
x_27 = l_Lean_Parser_ParserState_restore(x_18, x_14, x_15);
lean_dec(x_14);
return x_27;
}
}
}
else
{
lean_object* x_28; uint8_t x_29; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
x_29 = lean_nat_dec_eq(x_15, x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_dec(x_15);
lean_dec(x_14);
return x_16;
}
else
{
lean_object* x_30; 
x_30 = l_Lean_Parser_ParserState_restore(x_16, x_14, x_15);
lean_dec(x_14);
return x_30;
}
}
}
}
}
lean_object* l_Lean_Parser_many1Indent___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = l_Lean_FileMap_toPosition(x_6, x_7);
lean_dec(x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
x_13 = lean_nat_dec_le(x_9, x_9);
lean_dec(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_14 = l_Lean_Parser_ParserState_mkError(x_4, x_2);
x_15 = l_Lean_nullKind;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_12);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_4, 3);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_inc(x_4);
lean_inc(x_3);
x_18 = lean_apply_2(x_10, x_3, x_4);
x_19 = lean_ctor_get(x_18, 3);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_inc(x_3);
x_20 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2(x_1, x_2, x_3, x_4, x_3, x_18);
lean_dec(x_3);
x_21 = l_Lean_nullKind;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_12);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_19);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Lean_nullKind;
x_24 = l_Lean_Parser_ParserState_mkNode(x_18, x_23, x_12);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = l_Lean_nullKind;
x_26 = l_Lean_Parser_ParserState_mkNode(x_4, x_25, x_12);
return x_26;
}
}
}
}
lean_object* l_Lean_Parser_many1Indent(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = l_Lean_Parser_Parser_inhabited___closed__1;
x_5 = l_Lean_Parser_andthenInfo(x_4, x_3);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_many1Indent___lambda__1), 4, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_many1Indent___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_TokenMap_insert___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickLt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Name_quickLt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_TokenMap_insert___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_find___main___at_Lean_Parser_TokenMap_insert___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*4, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = l_Lean_Name_quickLt(x_2, x_9);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = l_Lean_Name_quickLt(x_9, x_2);
if (x_13 == 0)
{
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_14; 
x_14 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_11, x_2, x_3);
lean_ctor_set(x_1, 3, x_14);
return x_1;
}
}
else
{
lean_object* x_15; 
x_15 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_8, x_2, x_3);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
x_18 = lean_ctor_get(x_1, 2);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_1);
x_20 = l_Lean_Name_quickLt(x_2, x_17);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = l_Lean_Name_quickLt(x_17, x_2);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_17);
x_22 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_3);
lean_ctor_set(x_22, 3, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*4, x_6);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_19, x_2, x_3);
x_24 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_17);
lean_ctor_set(x_24, 2, x_18);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*4, x_6);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_16, x_2, x_3);
x_26 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_17);
lean_ctor_set(x_26, 2, x_18);
lean_ctor_set(x_26, 3, x_19);
lean_ctor_set_uint8(x_26, sizeof(void*)*4, x_6);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_1);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_ctor_get(x_1, 2);
x_31 = lean_ctor_get(x_1, 3);
x_32 = l_Lean_Name_quickLt(x_2, x_29);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = l_Lean_Name_quickLt(x_29, x_2);
if (x_33 == 0)
{
lean_dec(x_30);
lean_dec(x_29);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
uint8_t x_34; 
x_34 = l_Std_RBNode_isRed___rarg(x_31);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_31, x_2, x_3);
lean_ctor_set(x_1, 3, x_35);
return x_1;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_31, x_2, x_3);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 3);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_36, 3);
lean_dec(x_40);
x_41 = lean_ctor_get(x_36, 0);
lean_dec(x_41);
x_42 = 0;
lean_ctor_set(x_36, 0, x_38);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_42);
x_43 = 1;
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_43);
return x_1;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; uint8_t x_48; 
x_44 = lean_ctor_get(x_36, 1);
x_45 = lean_ctor_get(x_36, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = 0;
x_47 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_47, 0, x_38);
lean_ctor_set(x_47, 1, x_44);
lean_ctor_set(x_47, 2, x_45);
lean_ctor_set(x_47, 3, x_38);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_46);
x_48 = 1;
lean_ctor_set(x_1, 3, x_47);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_48);
return x_1;
}
}
else
{
uint8_t x_49; 
x_49 = lean_ctor_get_uint8(x_38, sizeof(void*)*4);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_36);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_36, 1);
x_52 = lean_ctor_get(x_36, 2);
x_53 = lean_ctor_get(x_36, 3);
lean_dec(x_53);
x_54 = lean_ctor_get(x_36, 0);
lean_dec(x_54);
x_55 = !lean_is_exclusive(x_38);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_38, 0);
x_57 = lean_ctor_get(x_38, 1);
x_58 = lean_ctor_get(x_38, 2);
x_59 = lean_ctor_get(x_38, 3);
x_60 = 1;
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_38, 2, x_30);
lean_ctor_set(x_38, 1, x_29);
lean_ctor_set(x_38, 0, x_28);
lean_ctor_set_uint8(x_38, sizeof(void*)*4, x_60);
lean_ctor_set(x_36, 3, x_59);
lean_ctor_set(x_36, 2, x_58);
lean_ctor_set(x_36, 1, x_57);
lean_ctor_set(x_36, 0, x_56);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_60);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_52);
lean_ctor_set(x_1, 1, x_51);
lean_ctor_set(x_1, 0, x_38);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_38, 0);
x_62 = lean_ctor_get(x_38, 1);
x_63 = lean_ctor_get(x_38, 2);
x_64 = lean_ctor_get(x_38, 3);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_38);
x_65 = 1;
x_66 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_66, 0, x_28);
lean_ctor_set(x_66, 1, x_29);
lean_ctor_set(x_66, 2, x_30);
lean_ctor_set(x_66, 3, x_37);
lean_ctor_set_uint8(x_66, sizeof(void*)*4, x_65);
lean_ctor_set(x_36, 3, x_64);
lean_ctor_set(x_36, 2, x_63);
lean_ctor_set(x_36, 1, x_62);
lean_ctor_set(x_36, 0, x_61);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_65);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_52);
lean_ctor_set(x_1, 1, x_51);
lean_ctor_set(x_1, 0, x_66);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; 
x_67 = lean_ctor_get(x_36, 1);
x_68 = lean_ctor_get(x_36, 2);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_36);
x_69 = lean_ctor_get(x_38, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_38, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_38, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_38, 3);
lean_inc(x_72);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 x_73 = x_38;
} else {
 lean_dec_ref(x_38);
 x_73 = lean_box(0);
}
x_74 = 1;
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(1, 4, 1);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_28);
lean_ctor_set(x_75, 1, x_29);
lean_ctor_set(x_75, 2, x_30);
lean_ctor_set(x_75, 3, x_37);
lean_ctor_set_uint8(x_75, sizeof(void*)*4, x_74);
x_76 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_76, 0, x_69);
lean_ctor_set(x_76, 1, x_70);
lean_ctor_set(x_76, 2, x_71);
lean_ctor_set(x_76, 3, x_72);
lean_ctor_set_uint8(x_76, sizeof(void*)*4, x_74);
lean_ctor_set(x_1, 3, x_76);
lean_ctor_set(x_1, 2, x_68);
lean_ctor_set(x_1, 1, x_67);
lean_ctor_set(x_1, 0, x_75);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_36);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_36, 3);
lean_dec(x_78);
x_79 = lean_ctor_get(x_36, 0);
lean_dec(x_79);
x_80 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_80);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_36, 1);
x_82 = lean_ctor_get(x_36, 2);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_36);
x_83 = 0;
x_84 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_84, 0, x_37);
lean_ctor_set(x_84, 1, x_81);
lean_ctor_set(x_84, 2, x_82);
lean_ctor_set(x_84, 3, x_38);
lean_ctor_set_uint8(x_84, sizeof(void*)*4, x_83);
lean_ctor_set(x_1, 3, x_84);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
}
}
else
{
uint8_t x_85; 
x_85 = lean_ctor_get_uint8(x_37, sizeof(void*)*4);
if (x_85 == 0)
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_36);
if (x_86 == 0)
{
lean_object* x_87; uint8_t x_88; 
x_87 = lean_ctor_get(x_36, 0);
lean_dec(x_87);
x_88 = !lean_is_exclusive(x_37);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_37, 0);
x_90 = lean_ctor_get(x_37, 1);
x_91 = lean_ctor_get(x_37, 2);
x_92 = lean_ctor_get(x_37, 3);
x_93 = 1;
lean_ctor_set(x_37, 3, x_89);
lean_ctor_set(x_37, 2, x_30);
lean_ctor_set(x_37, 1, x_29);
lean_ctor_set(x_37, 0, x_28);
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_93);
lean_ctor_set(x_36, 0, x_92);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_93);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_91);
lean_ctor_set(x_1, 1, x_90);
lean_ctor_set(x_1, 0, x_37);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; 
x_94 = lean_ctor_get(x_37, 0);
x_95 = lean_ctor_get(x_37, 1);
x_96 = lean_ctor_get(x_37, 2);
x_97 = lean_ctor_get(x_37, 3);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_37);
x_98 = 1;
x_99 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_99, 0, x_28);
lean_ctor_set(x_99, 1, x_29);
lean_ctor_set(x_99, 2, x_30);
lean_ctor_set(x_99, 3, x_94);
lean_ctor_set_uint8(x_99, sizeof(void*)*4, x_98);
lean_ctor_set(x_36, 0, x_97);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_98);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_96);
lean_ctor_set(x_1, 1, x_95);
lean_ctor_set(x_1, 0, x_99);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; lean_object* x_110; 
x_100 = lean_ctor_get(x_36, 1);
x_101 = lean_ctor_get(x_36, 2);
x_102 = lean_ctor_get(x_36, 3);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_36);
x_103 = lean_ctor_get(x_37, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_37, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_37, 2);
lean_inc(x_105);
x_106 = lean_ctor_get(x_37, 3);
lean_inc(x_106);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_107 = x_37;
} else {
 lean_dec_ref(x_37);
 x_107 = lean_box(0);
}
x_108 = 1;
if (lean_is_scalar(x_107)) {
 x_109 = lean_alloc_ctor(1, 4, 1);
} else {
 x_109 = x_107;
}
lean_ctor_set(x_109, 0, x_28);
lean_ctor_set(x_109, 1, x_29);
lean_ctor_set(x_109, 2, x_30);
lean_ctor_set(x_109, 3, x_103);
lean_ctor_set_uint8(x_109, sizeof(void*)*4, x_108);
x_110 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_110, 0, x_106);
lean_ctor_set(x_110, 1, x_100);
lean_ctor_set(x_110, 2, x_101);
lean_ctor_set(x_110, 3, x_102);
lean_ctor_set_uint8(x_110, sizeof(void*)*4, x_108);
lean_ctor_set(x_1, 3, x_110);
lean_ctor_set(x_1, 2, x_105);
lean_ctor_set(x_1, 1, x_104);
lean_ctor_set(x_1, 0, x_109);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_36, 3);
lean_inc(x_111);
if (lean_obj_tag(x_111) == 0)
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_36);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_113 = lean_ctor_get(x_36, 3);
lean_dec(x_113);
x_114 = lean_ctor_get(x_36, 0);
lean_dec(x_114);
x_115 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_115);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; 
x_116 = lean_ctor_get(x_36, 1);
x_117 = lean_ctor_get(x_36, 2);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_36);
x_118 = 0;
x_119 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_119, 0, x_37);
lean_ctor_set(x_119, 1, x_116);
lean_ctor_set(x_119, 2, x_117);
lean_ctor_set(x_119, 3, x_111);
lean_ctor_set_uint8(x_119, sizeof(void*)*4, x_118);
lean_ctor_set(x_1, 3, x_119);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
uint8_t x_120; 
x_120 = lean_ctor_get_uint8(x_111, sizeof(void*)*4);
if (x_120 == 0)
{
uint8_t x_121; 
lean_free_object(x_1);
x_121 = !lean_is_exclusive(x_36);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_122 = lean_ctor_get(x_36, 3);
lean_dec(x_122);
x_123 = lean_ctor_get(x_36, 0);
lean_dec(x_123);
x_124 = !lean_is_exclusive(x_111);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_125 = lean_ctor_get(x_111, 0);
x_126 = lean_ctor_get(x_111, 1);
x_127 = lean_ctor_get(x_111, 2);
x_128 = lean_ctor_get(x_111, 3);
lean_inc(x_37);
lean_ctor_set(x_111, 3, x_37);
lean_ctor_set(x_111, 2, x_30);
lean_ctor_set(x_111, 1, x_29);
lean_ctor_set(x_111, 0, x_28);
x_129 = !lean_is_exclusive(x_37);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_37, 3);
lean_dec(x_130);
x_131 = lean_ctor_get(x_37, 2);
lean_dec(x_131);
x_132 = lean_ctor_get(x_37, 1);
lean_dec(x_132);
x_133 = lean_ctor_get(x_37, 0);
lean_dec(x_133);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_85);
lean_ctor_set(x_37, 3, x_128);
lean_ctor_set(x_37, 2, x_127);
lean_ctor_set(x_37, 1, x_126);
lean_ctor_set(x_37, 0, x_125);
lean_ctor_set(x_36, 3, x_37);
lean_ctor_set(x_36, 0, x_111);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
else
{
lean_object* x_134; 
lean_dec(x_37);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_85);
x_134 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_134, 0, x_125);
lean_ctor_set(x_134, 1, x_126);
lean_ctor_set(x_134, 2, x_127);
lean_ctor_set(x_134, 3, x_128);
lean_ctor_set_uint8(x_134, sizeof(void*)*4, x_85);
lean_ctor_set(x_36, 3, x_134);
lean_ctor_set(x_36, 0, x_111);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_135 = lean_ctor_get(x_111, 0);
x_136 = lean_ctor_get(x_111, 1);
x_137 = lean_ctor_get(x_111, 2);
x_138 = lean_ctor_get(x_111, 3);
lean_inc(x_138);
lean_inc(x_137);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_111);
lean_inc(x_37);
x_139 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_139, 0, x_28);
lean_ctor_set(x_139, 1, x_29);
lean_ctor_set(x_139, 2, x_30);
lean_ctor_set(x_139, 3, x_37);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_140 = x_37;
} else {
 lean_dec_ref(x_37);
 x_140 = lean_box(0);
}
lean_ctor_set_uint8(x_139, sizeof(void*)*4, x_85);
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 4, 1);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_135);
lean_ctor_set(x_141, 1, x_136);
lean_ctor_set(x_141, 2, x_137);
lean_ctor_set(x_141, 3, x_138);
lean_ctor_set_uint8(x_141, sizeof(void*)*4, x_85);
lean_ctor_set(x_36, 3, x_141);
lean_ctor_set(x_36, 0, x_139);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_142 = lean_ctor_get(x_36, 1);
x_143 = lean_ctor_get(x_36, 2);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_36);
x_144 = lean_ctor_get(x_111, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_111, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_111, 2);
lean_inc(x_146);
x_147 = lean_ctor_get(x_111, 3);
lean_inc(x_147);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 lean_ctor_release(x_111, 2);
 lean_ctor_release(x_111, 3);
 x_148 = x_111;
} else {
 lean_dec_ref(x_111);
 x_148 = lean_box(0);
}
lean_inc(x_37);
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 4, 1);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_28);
lean_ctor_set(x_149, 1, x_29);
lean_ctor_set(x_149, 2, x_30);
lean_ctor_set(x_149, 3, x_37);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_150 = x_37;
} else {
 lean_dec_ref(x_37);
 x_150 = lean_box(0);
}
lean_ctor_set_uint8(x_149, sizeof(void*)*4, x_85);
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(1, 4, 1);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_144);
lean_ctor_set(x_151, 1, x_145);
lean_ctor_set(x_151, 2, x_146);
lean_ctor_set(x_151, 3, x_147);
lean_ctor_set_uint8(x_151, sizeof(void*)*4, x_85);
x_152 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_142);
lean_ctor_set(x_152, 2, x_143);
lean_ctor_set(x_152, 3, x_151);
lean_ctor_set_uint8(x_152, sizeof(void*)*4, x_120);
return x_152;
}
}
else
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_36);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_154 = lean_ctor_get(x_36, 3);
lean_dec(x_154);
x_155 = lean_ctor_get(x_36, 0);
lean_dec(x_155);
x_156 = !lean_is_exclusive(x_37);
if (x_156 == 0)
{
uint8_t x_157; 
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_120);
x_157 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_157);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_158 = lean_ctor_get(x_37, 0);
x_159 = lean_ctor_get(x_37, 1);
x_160 = lean_ctor_get(x_37, 2);
x_161 = lean_ctor_get(x_37, 3);
lean_inc(x_161);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_37);
x_162 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_162, 0, x_158);
lean_ctor_set(x_162, 1, x_159);
lean_ctor_set(x_162, 2, x_160);
lean_ctor_set(x_162, 3, x_161);
lean_ctor_set_uint8(x_162, sizeof(void*)*4, x_120);
x_163 = 0;
lean_ctor_set(x_36, 0, x_162);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_163);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; 
x_164 = lean_ctor_get(x_36, 1);
x_165 = lean_ctor_get(x_36, 2);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_36);
x_166 = lean_ctor_get(x_37, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_37, 1);
lean_inc(x_167);
x_168 = lean_ctor_get(x_37, 2);
lean_inc(x_168);
x_169 = lean_ctor_get(x_37, 3);
lean_inc(x_169);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_170 = x_37;
} else {
 lean_dec_ref(x_37);
 x_170 = lean_box(0);
}
if (lean_is_scalar(x_170)) {
 x_171 = lean_alloc_ctor(1, 4, 1);
} else {
 x_171 = x_170;
}
lean_ctor_set(x_171, 0, x_166);
lean_ctor_set(x_171, 1, x_167);
lean_ctor_set(x_171, 2, x_168);
lean_ctor_set(x_171, 3, x_169);
lean_ctor_set_uint8(x_171, sizeof(void*)*4, x_120);
x_172 = 0;
x_173 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_164);
lean_ctor_set(x_173, 2, x_165);
lean_ctor_set(x_173, 3, x_111);
lean_ctor_set_uint8(x_173, sizeof(void*)*4, x_172);
lean_ctor_set(x_1, 3, x_173);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
}
}
}
}
}
}
else
{
uint8_t x_174; 
x_174 = l_Std_RBNode_isRed___rarg(x_28);
if (x_174 == 0)
{
lean_object* x_175; 
x_175 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_28, x_2, x_3);
lean_ctor_set(x_1, 0, x_175);
return x_1;
}
else
{
lean_object* x_176; lean_object* x_177; 
x_176 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_28, x_2, x_3);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; 
x_178 = lean_ctor_get(x_176, 3);
lean_inc(x_178);
if (lean_obj_tag(x_178) == 0)
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_176);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; uint8_t x_183; 
x_180 = lean_ctor_get(x_176, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_176, 0);
lean_dec(x_181);
x_182 = 0;
lean_ctor_set(x_176, 0, x_178);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_182);
x_183 = 1;
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_183);
return x_1;
}
else
{
lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; uint8_t x_188; 
x_184 = lean_ctor_get(x_176, 1);
x_185 = lean_ctor_get(x_176, 2);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_176);
x_186 = 0;
x_187 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_187, 0, x_178);
lean_ctor_set(x_187, 1, x_184);
lean_ctor_set(x_187, 2, x_185);
lean_ctor_set(x_187, 3, x_178);
lean_ctor_set_uint8(x_187, sizeof(void*)*4, x_186);
x_188 = 1;
lean_ctor_set(x_1, 0, x_187);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_188);
return x_1;
}
}
else
{
uint8_t x_189; 
x_189 = lean_ctor_get_uint8(x_178, sizeof(void*)*4);
if (x_189 == 0)
{
uint8_t x_190; 
x_190 = !lean_is_exclusive(x_176);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_191 = lean_ctor_get(x_176, 1);
x_192 = lean_ctor_get(x_176, 2);
x_193 = lean_ctor_get(x_176, 3);
lean_dec(x_193);
x_194 = lean_ctor_get(x_176, 0);
lean_dec(x_194);
x_195 = !lean_is_exclusive(x_178);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_196 = lean_ctor_get(x_178, 0);
x_197 = lean_ctor_get(x_178, 1);
x_198 = lean_ctor_get(x_178, 2);
x_199 = lean_ctor_get(x_178, 3);
x_200 = 1;
lean_ctor_set(x_178, 3, x_196);
lean_ctor_set(x_178, 2, x_192);
lean_ctor_set(x_178, 1, x_191);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set_uint8(x_178, sizeof(void*)*4, x_200);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_199);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_200);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_198);
lean_ctor_set(x_1, 1, x_197);
lean_ctor_set(x_1, 0, x_178);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; lean_object* x_206; 
x_201 = lean_ctor_get(x_178, 0);
x_202 = lean_ctor_get(x_178, 1);
x_203 = lean_ctor_get(x_178, 2);
x_204 = lean_ctor_get(x_178, 3);
lean_inc(x_204);
lean_inc(x_203);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_178);
x_205 = 1;
x_206 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_206, 0, x_177);
lean_ctor_set(x_206, 1, x_191);
lean_ctor_set(x_206, 2, x_192);
lean_ctor_set(x_206, 3, x_201);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_205);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_204);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_205);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_203);
lean_ctor_set(x_1, 1, x_202);
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; lean_object* x_215; lean_object* x_216; 
x_207 = lean_ctor_get(x_176, 1);
x_208 = lean_ctor_get(x_176, 2);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_176);
x_209 = lean_ctor_get(x_178, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_178, 1);
lean_inc(x_210);
x_211 = lean_ctor_get(x_178, 2);
lean_inc(x_211);
x_212 = lean_ctor_get(x_178, 3);
lean_inc(x_212);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 lean_ctor_release(x_178, 2);
 lean_ctor_release(x_178, 3);
 x_213 = x_178;
} else {
 lean_dec_ref(x_178);
 x_213 = lean_box(0);
}
x_214 = 1;
if (lean_is_scalar(x_213)) {
 x_215 = lean_alloc_ctor(1, 4, 1);
} else {
 x_215 = x_213;
}
lean_ctor_set(x_215, 0, x_177);
lean_ctor_set(x_215, 1, x_207);
lean_ctor_set(x_215, 2, x_208);
lean_ctor_set(x_215, 3, x_209);
lean_ctor_set_uint8(x_215, sizeof(void*)*4, x_214);
x_216 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_216, 0, x_212);
lean_ctor_set(x_216, 1, x_29);
lean_ctor_set(x_216, 2, x_30);
lean_ctor_set(x_216, 3, x_31);
lean_ctor_set_uint8(x_216, sizeof(void*)*4, x_214);
lean_ctor_set(x_1, 3, x_216);
lean_ctor_set(x_1, 2, x_211);
lean_ctor_set(x_1, 1, x_210);
lean_ctor_set(x_1, 0, x_215);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
uint8_t x_217; 
x_217 = !lean_is_exclusive(x_176);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_218 = lean_ctor_get(x_176, 3);
lean_dec(x_218);
x_219 = lean_ctor_get(x_176, 0);
lean_dec(x_219);
x_220 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_220);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; lean_object* x_224; 
x_221 = lean_ctor_get(x_176, 1);
x_222 = lean_ctor_get(x_176, 2);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_176);
x_223 = 0;
x_224 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_224, 0, x_177);
lean_ctor_set(x_224, 1, x_221);
lean_ctor_set(x_224, 2, x_222);
lean_ctor_set(x_224, 3, x_178);
lean_ctor_set_uint8(x_224, sizeof(void*)*4, x_223);
lean_ctor_set(x_1, 0, x_224);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
}
}
else
{
uint8_t x_225; 
x_225 = lean_ctor_get_uint8(x_177, sizeof(void*)*4);
if (x_225 == 0)
{
uint8_t x_226; 
x_226 = !lean_is_exclusive(x_176);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_227 = lean_ctor_get(x_176, 1);
x_228 = lean_ctor_get(x_176, 2);
x_229 = lean_ctor_get(x_176, 3);
x_230 = lean_ctor_get(x_176, 0);
lean_dec(x_230);
x_231 = !lean_is_exclusive(x_177);
if (x_231 == 0)
{
uint8_t x_232; 
x_232 = 1;
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_232);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_229);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_232);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_177);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; lean_object* x_238; 
x_233 = lean_ctor_get(x_177, 0);
x_234 = lean_ctor_get(x_177, 1);
x_235 = lean_ctor_get(x_177, 2);
x_236 = lean_ctor_get(x_177, 3);
lean_inc(x_236);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_177);
x_237 = 1;
x_238 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_238, 0, x_233);
lean_ctor_set(x_238, 1, x_234);
lean_ctor_set(x_238, 2, x_235);
lean_ctor_set(x_238, 3, x_236);
lean_ctor_set_uint8(x_238, sizeof(void*)*4, x_237);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_229);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_237);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_238);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; uint8_t x_247; lean_object* x_248; lean_object* x_249; 
x_239 = lean_ctor_get(x_176, 1);
x_240 = lean_ctor_get(x_176, 2);
x_241 = lean_ctor_get(x_176, 3);
lean_inc(x_241);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_176);
x_242 = lean_ctor_get(x_177, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_177, 1);
lean_inc(x_243);
x_244 = lean_ctor_get(x_177, 2);
lean_inc(x_244);
x_245 = lean_ctor_get(x_177, 3);
lean_inc(x_245);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_246 = x_177;
} else {
 lean_dec_ref(x_177);
 x_246 = lean_box(0);
}
x_247 = 1;
if (lean_is_scalar(x_246)) {
 x_248 = lean_alloc_ctor(1, 4, 1);
} else {
 x_248 = x_246;
}
lean_ctor_set(x_248, 0, x_242);
lean_ctor_set(x_248, 1, x_243);
lean_ctor_set(x_248, 2, x_244);
lean_ctor_set(x_248, 3, x_245);
lean_ctor_set_uint8(x_248, sizeof(void*)*4, x_247);
x_249 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_249, 0, x_241);
lean_ctor_set(x_249, 1, x_29);
lean_ctor_set(x_249, 2, x_30);
lean_ctor_set(x_249, 3, x_31);
lean_ctor_set_uint8(x_249, sizeof(void*)*4, x_247);
lean_ctor_set(x_1, 3, x_249);
lean_ctor_set(x_1, 2, x_240);
lean_ctor_set(x_1, 1, x_239);
lean_ctor_set(x_1, 0, x_248);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
lean_object* x_250; 
x_250 = lean_ctor_get(x_176, 3);
lean_inc(x_250);
if (lean_obj_tag(x_250) == 0)
{
uint8_t x_251; 
x_251 = !lean_is_exclusive(x_176);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; uint8_t x_254; 
x_252 = lean_ctor_get(x_176, 3);
lean_dec(x_252);
x_253 = lean_ctor_get(x_176, 0);
lean_dec(x_253);
x_254 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_254);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; 
x_255 = lean_ctor_get(x_176, 1);
x_256 = lean_ctor_get(x_176, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_176);
x_257 = 0;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_177);
lean_ctor_set(x_258, 1, x_255);
lean_ctor_set(x_258, 2, x_256);
lean_ctor_set(x_258, 3, x_250);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
uint8_t x_259; 
x_259 = lean_ctor_get_uint8(x_250, sizeof(void*)*4);
if (x_259 == 0)
{
uint8_t x_260; 
lean_free_object(x_1);
x_260 = !lean_is_exclusive(x_176);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; uint8_t x_265; 
x_261 = lean_ctor_get(x_176, 1);
x_262 = lean_ctor_get(x_176, 2);
x_263 = lean_ctor_get(x_176, 3);
lean_dec(x_263);
x_264 = lean_ctor_get(x_176, 0);
lean_dec(x_264);
x_265 = !lean_is_exclusive(x_250);
if (x_265 == 0)
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; uint8_t x_270; 
x_266 = lean_ctor_get(x_250, 0);
x_267 = lean_ctor_get(x_250, 1);
x_268 = lean_ctor_get(x_250, 2);
x_269 = lean_ctor_get(x_250, 3);
lean_inc(x_177);
lean_ctor_set(x_250, 3, x_266);
lean_ctor_set(x_250, 2, x_262);
lean_ctor_set(x_250, 1, x_261);
lean_ctor_set(x_250, 0, x_177);
x_270 = !lean_is_exclusive(x_177);
if (x_270 == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_177, 3);
lean_dec(x_271);
x_272 = lean_ctor_get(x_177, 2);
lean_dec(x_272);
x_273 = lean_ctor_get(x_177, 1);
lean_dec(x_273);
x_274 = lean_ctor_get(x_177, 0);
lean_dec(x_274);
lean_ctor_set_uint8(x_250, sizeof(void*)*4, x_225);
lean_ctor_set(x_177, 3, x_31);
lean_ctor_set(x_177, 2, x_30);
lean_ctor_set(x_177, 1, x_29);
lean_ctor_set(x_177, 0, x_269);
lean_ctor_set(x_176, 3, x_177);
lean_ctor_set(x_176, 2, x_268);
lean_ctor_set(x_176, 1, x_267);
lean_ctor_set(x_176, 0, x_250);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
else
{
lean_object* x_275; 
lean_dec(x_177);
lean_ctor_set_uint8(x_250, sizeof(void*)*4, x_225);
x_275 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_275, 0, x_269);
lean_ctor_set(x_275, 1, x_29);
lean_ctor_set(x_275, 2, x_30);
lean_ctor_set(x_275, 3, x_31);
lean_ctor_set_uint8(x_275, sizeof(void*)*4, x_225);
lean_ctor_set(x_176, 3, x_275);
lean_ctor_set(x_176, 2, x_268);
lean_ctor_set(x_176, 1, x_267);
lean_ctor_set(x_176, 0, x_250);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_276 = lean_ctor_get(x_250, 0);
x_277 = lean_ctor_get(x_250, 1);
x_278 = lean_ctor_get(x_250, 2);
x_279 = lean_ctor_get(x_250, 3);
lean_inc(x_279);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_250);
lean_inc(x_177);
x_280 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_280, 0, x_177);
lean_ctor_set(x_280, 1, x_261);
lean_ctor_set(x_280, 2, x_262);
lean_ctor_set(x_280, 3, x_276);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_281 = x_177;
} else {
 lean_dec_ref(x_177);
 x_281 = lean_box(0);
}
lean_ctor_set_uint8(x_280, sizeof(void*)*4, x_225);
if (lean_is_scalar(x_281)) {
 x_282 = lean_alloc_ctor(1, 4, 1);
} else {
 x_282 = x_281;
}
lean_ctor_set(x_282, 0, x_279);
lean_ctor_set(x_282, 1, x_29);
lean_ctor_set(x_282, 2, x_30);
lean_ctor_set(x_282, 3, x_31);
lean_ctor_set_uint8(x_282, sizeof(void*)*4, x_225);
lean_ctor_set(x_176, 3, x_282);
lean_ctor_set(x_176, 2, x_278);
lean_ctor_set(x_176, 1, x_277);
lean_ctor_set(x_176, 0, x_280);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_283 = lean_ctor_get(x_176, 1);
x_284 = lean_ctor_get(x_176, 2);
lean_inc(x_284);
lean_inc(x_283);
lean_dec(x_176);
x_285 = lean_ctor_get(x_250, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_250, 1);
lean_inc(x_286);
x_287 = lean_ctor_get(x_250, 2);
lean_inc(x_287);
x_288 = lean_ctor_get(x_250, 3);
lean_inc(x_288);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 lean_ctor_release(x_250, 2);
 lean_ctor_release(x_250, 3);
 x_289 = x_250;
} else {
 lean_dec_ref(x_250);
 x_289 = lean_box(0);
}
lean_inc(x_177);
if (lean_is_scalar(x_289)) {
 x_290 = lean_alloc_ctor(1, 4, 1);
} else {
 x_290 = x_289;
}
lean_ctor_set(x_290, 0, x_177);
lean_ctor_set(x_290, 1, x_283);
lean_ctor_set(x_290, 2, x_284);
lean_ctor_set(x_290, 3, x_285);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_291 = x_177;
} else {
 lean_dec_ref(x_177);
 x_291 = lean_box(0);
}
lean_ctor_set_uint8(x_290, sizeof(void*)*4, x_225);
if (lean_is_scalar(x_291)) {
 x_292 = lean_alloc_ctor(1, 4, 1);
} else {
 x_292 = x_291;
}
lean_ctor_set(x_292, 0, x_288);
lean_ctor_set(x_292, 1, x_29);
lean_ctor_set(x_292, 2, x_30);
lean_ctor_set(x_292, 3, x_31);
lean_ctor_set_uint8(x_292, sizeof(void*)*4, x_225);
x_293 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_293, 0, x_290);
lean_ctor_set(x_293, 1, x_286);
lean_ctor_set(x_293, 2, x_287);
lean_ctor_set(x_293, 3, x_292);
lean_ctor_set_uint8(x_293, sizeof(void*)*4, x_259);
return x_293;
}
}
else
{
uint8_t x_294; 
x_294 = !lean_is_exclusive(x_176);
if (x_294 == 0)
{
lean_object* x_295; lean_object* x_296; uint8_t x_297; 
x_295 = lean_ctor_get(x_176, 3);
lean_dec(x_295);
x_296 = lean_ctor_get(x_176, 0);
lean_dec(x_296);
x_297 = !lean_is_exclusive(x_177);
if (x_297 == 0)
{
uint8_t x_298; 
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_259);
x_298 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_298);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; uint8_t x_304; 
x_299 = lean_ctor_get(x_177, 0);
x_300 = lean_ctor_get(x_177, 1);
x_301 = lean_ctor_get(x_177, 2);
x_302 = lean_ctor_get(x_177, 3);
lean_inc(x_302);
lean_inc(x_301);
lean_inc(x_300);
lean_inc(x_299);
lean_dec(x_177);
x_303 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_303, 0, x_299);
lean_ctor_set(x_303, 1, x_300);
lean_ctor_set(x_303, 2, x_301);
lean_ctor_set(x_303, 3, x_302);
lean_ctor_set_uint8(x_303, sizeof(void*)*4, x_259);
x_304 = 0;
lean_ctor_set(x_176, 0, x_303);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_304);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; lean_object* x_314; 
x_305 = lean_ctor_get(x_176, 1);
x_306 = lean_ctor_get(x_176, 2);
lean_inc(x_306);
lean_inc(x_305);
lean_dec(x_176);
x_307 = lean_ctor_get(x_177, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_177, 1);
lean_inc(x_308);
x_309 = lean_ctor_get(x_177, 2);
lean_inc(x_309);
x_310 = lean_ctor_get(x_177, 3);
lean_inc(x_310);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_311 = x_177;
} else {
 lean_dec_ref(x_177);
 x_311 = lean_box(0);
}
if (lean_is_scalar(x_311)) {
 x_312 = lean_alloc_ctor(1, 4, 1);
} else {
 x_312 = x_311;
}
lean_ctor_set(x_312, 0, x_307);
lean_ctor_set(x_312, 1, x_308);
lean_ctor_set(x_312, 2, x_309);
lean_ctor_set(x_312, 3, x_310);
lean_ctor_set_uint8(x_312, sizeof(void*)*4, x_259);
x_313 = 0;
x_314 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_314, 0, x_312);
lean_ctor_set(x_314, 1, x_305);
lean_ctor_set(x_314, 2, x_306);
lean_ctor_set(x_314, 3, x_250);
lean_ctor_set_uint8(x_314, sizeof(void*)*4, x_313);
lean_ctor_set(x_1, 0, x_314);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
}
}
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; uint8_t x_319; 
x_315 = lean_ctor_get(x_1, 0);
x_316 = lean_ctor_get(x_1, 1);
x_317 = lean_ctor_get(x_1, 2);
x_318 = lean_ctor_get(x_1, 3);
lean_inc(x_318);
lean_inc(x_317);
lean_inc(x_316);
lean_inc(x_315);
lean_dec(x_1);
x_319 = l_Lean_Name_quickLt(x_2, x_316);
if (x_319 == 0)
{
uint8_t x_320; 
x_320 = l_Lean_Name_quickLt(x_316, x_2);
if (x_320 == 0)
{
lean_object* x_321; 
lean_dec(x_317);
lean_dec(x_316);
x_321 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_321, 0, x_315);
lean_ctor_set(x_321, 1, x_2);
lean_ctor_set(x_321, 2, x_3);
lean_ctor_set(x_321, 3, x_318);
lean_ctor_set_uint8(x_321, sizeof(void*)*4, x_6);
return x_321;
}
else
{
uint8_t x_322; 
x_322 = l_Std_RBNode_isRed___rarg(x_318);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; 
x_323 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_318, x_2, x_3);
x_324 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_324, 0, x_315);
lean_ctor_set(x_324, 1, x_316);
lean_ctor_set(x_324, 2, x_317);
lean_ctor_set(x_324, 3, x_323);
lean_ctor_set_uint8(x_324, sizeof(void*)*4, x_6);
return x_324;
}
else
{
lean_object* x_325; lean_object* x_326; 
x_325 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_318, x_2, x_3);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
if (lean_obj_tag(x_326) == 0)
{
lean_object* x_327; 
x_327 = lean_ctor_get(x_325, 3);
lean_inc(x_327);
if (lean_obj_tag(x_327) == 0)
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; uint8_t x_331; lean_object* x_332; uint8_t x_333; lean_object* x_334; 
x_328 = lean_ctor_get(x_325, 1);
lean_inc(x_328);
x_329 = lean_ctor_get(x_325, 2);
lean_inc(x_329);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_330 = x_325;
} else {
 lean_dec_ref(x_325);
 x_330 = lean_box(0);
}
x_331 = 0;
if (lean_is_scalar(x_330)) {
 x_332 = lean_alloc_ctor(1, 4, 1);
} else {
 x_332 = x_330;
}
lean_ctor_set(x_332, 0, x_327);
lean_ctor_set(x_332, 1, x_328);
lean_ctor_set(x_332, 2, x_329);
lean_ctor_set(x_332, 3, x_327);
lean_ctor_set_uint8(x_332, sizeof(void*)*4, x_331);
x_333 = 1;
x_334 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_334, 0, x_315);
lean_ctor_set(x_334, 1, x_316);
lean_ctor_set(x_334, 2, x_317);
lean_ctor_set(x_334, 3, x_332);
lean_ctor_set_uint8(x_334, sizeof(void*)*4, x_333);
return x_334;
}
else
{
uint8_t x_335; 
x_335 = lean_ctor_get_uint8(x_327, sizeof(void*)*4);
if (x_335 == 0)
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_336 = lean_ctor_get(x_325, 1);
lean_inc(x_336);
x_337 = lean_ctor_get(x_325, 2);
lean_inc(x_337);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_338 = x_325;
} else {
 lean_dec_ref(x_325);
 x_338 = lean_box(0);
}
x_339 = lean_ctor_get(x_327, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_327, 1);
lean_inc(x_340);
x_341 = lean_ctor_get(x_327, 2);
lean_inc(x_341);
x_342 = lean_ctor_get(x_327, 3);
lean_inc(x_342);
if (lean_is_exclusive(x_327)) {
 lean_ctor_release(x_327, 0);
 lean_ctor_release(x_327, 1);
 lean_ctor_release(x_327, 2);
 lean_ctor_release(x_327, 3);
 x_343 = x_327;
} else {
 lean_dec_ref(x_327);
 x_343 = lean_box(0);
}
x_344 = 1;
if (lean_is_scalar(x_343)) {
 x_345 = lean_alloc_ctor(1, 4, 1);
} else {
 x_345 = x_343;
}
lean_ctor_set(x_345, 0, x_315);
lean_ctor_set(x_345, 1, x_316);
lean_ctor_set(x_345, 2, x_317);
lean_ctor_set(x_345, 3, x_326);
lean_ctor_set_uint8(x_345, sizeof(void*)*4, x_344);
if (lean_is_scalar(x_338)) {
 x_346 = lean_alloc_ctor(1, 4, 1);
} else {
 x_346 = x_338;
}
lean_ctor_set(x_346, 0, x_339);
lean_ctor_set(x_346, 1, x_340);
lean_ctor_set(x_346, 2, x_341);
lean_ctor_set(x_346, 3, x_342);
lean_ctor_set_uint8(x_346, sizeof(void*)*4, x_344);
x_347 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_347, 0, x_345);
lean_ctor_set(x_347, 1, x_336);
lean_ctor_set(x_347, 2, x_337);
lean_ctor_set(x_347, 3, x_346);
lean_ctor_set_uint8(x_347, sizeof(void*)*4, x_335);
return x_347;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; uint8_t x_351; lean_object* x_352; lean_object* x_353; 
x_348 = lean_ctor_get(x_325, 1);
lean_inc(x_348);
x_349 = lean_ctor_get(x_325, 2);
lean_inc(x_349);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_350 = x_325;
} else {
 lean_dec_ref(x_325);
 x_350 = lean_box(0);
}
x_351 = 0;
if (lean_is_scalar(x_350)) {
 x_352 = lean_alloc_ctor(1, 4, 1);
} else {
 x_352 = x_350;
}
lean_ctor_set(x_352, 0, x_326);
lean_ctor_set(x_352, 1, x_348);
lean_ctor_set(x_352, 2, x_349);
lean_ctor_set(x_352, 3, x_327);
lean_ctor_set_uint8(x_352, sizeof(void*)*4, x_351);
x_353 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_353, 0, x_315);
lean_ctor_set(x_353, 1, x_316);
lean_ctor_set(x_353, 2, x_317);
lean_ctor_set(x_353, 3, x_352);
lean_ctor_set_uint8(x_353, sizeof(void*)*4, x_335);
return x_353;
}
}
}
else
{
uint8_t x_354; 
x_354 = lean_ctor_get_uint8(x_326, sizeof(void*)*4);
if (x_354 == 0)
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; uint8_t x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_355 = lean_ctor_get(x_325, 1);
lean_inc(x_355);
x_356 = lean_ctor_get(x_325, 2);
lean_inc(x_356);
x_357 = lean_ctor_get(x_325, 3);
lean_inc(x_357);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_358 = x_325;
} else {
 lean_dec_ref(x_325);
 x_358 = lean_box(0);
}
x_359 = lean_ctor_get(x_326, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_326, 1);
lean_inc(x_360);
x_361 = lean_ctor_get(x_326, 2);
lean_inc(x_361);
x_362 = lean_ctor_get(x_326, 3);
lean_inc(x_362);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_363 = x_326;
} else {
 lean_dec_ref(x_326);
 x_363 = lean_box(0);
}
x_364 = 1;
if (lean_is_scalar(x_363)) {
 x_365 = lean_alloc_ctor(1, 4, 1);
} else {
 x_365 = x_363;
}
lean_ctor_set(x_365, 0, x_315);
lean_ctor_set(x_365, 1, x_316);
lean_ctor_set(x_365, 2, x_317);
lean_ctor_set(x_365, 3, x_359);
lean_ctor_set_uint8(x_365, sizeof(void*)*4, x_364);
if (lean_is_scalar(x_358)) {
 x_366 = lean_alloc_ctor(1, 4, 1);
} else {
 x_366 = x_358;
}
lean_ctor_set(x_366, 0, x_362);
lean_ctor_set(x_366, 1, x_355);
lean_ctor_set(x_366, 2, x_356);
lean_ctor_set(x_366, 3, x_357);
lean_ctor_set_uint8(x_366, sizeof(void*)*4, x_364);
x_367 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_360);
lean_ctor_set(x_367, 2, x_361);
lean_ctor_set(x_367, 3, x_366);
lean_ctor_set_uint8(x_367, sizeof(void*)*4, x_354);
return x_367;
}
else
{
lean_object* x_368; 
x_368 = lean_ctor_get(x_325, 3);
lean_inc(x_368);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; lean_object* x_373; lean_object* x_374; 
x_369 = lean_ctor_get(x_325, 1);
lean_inc(x_369);
x_370 = lean_ctor_get(x_325, 2);
lean_inc(x_370);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_371 = x_325;
} else {
 lean_dec_ref(x_325);
 x_371 = lean_box(0);
}
x_372 = 0;
if (lean_is_scalar(x_371)) {
 x_373 = lean_alloc_ctor(1, 4, 1);
} else {
 x_373 = x_371;
}
lean_ctor_set(x_373, 0, x_326);
lean_ctor_set(x_373, 1, x_369);
lean_ctor_set(x_373, 2, x_370);
lean_ctor_set(x_373, 3, x_368);
lean_ctor_set_uint8(x_373, sizeof(void*)*4, x_372);
x_374 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_374, 0, x_315);
lean_ctor_set(x_374, 1, x_316);
lean_ctor_set(x_374, 2, x_317);
lean_ctor_set(x_374, 3, x_373);
lean_ctor_set_uint8(x_374, sizeof(void*)*4, x_354);
return x_374;
}
else
{
uint8_t x_375; 
x_375 = lean_ctor_get_uint8(x_368, sizeof(void*)*4);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_376 = lean_ctor_get(x_325, 1);
lean_inc(x_376);
x_377 = lean_ctor_get(x_325, 2);
lean_inc(x_377);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_378 = x_325;
} else {
 lean_dec_ref(x_325);
 x_378 = lean_box(0);
}
x_379 = lean_ctor_get(x_368, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_368, 1);
lean_inc(x_380);
x_381 = lean_ctor_get(x_368, 2);
lean_inc(x_381);
x_382 = lean_ctor_get(x_368, 3);
lean_inc(x_382);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 lean_ctor_release(x_368, 2);
 lean_ctor_release(x_368, 3);
 x_383 = x_368;
} else {
 lean_dec_ref(x_368);
 x_383 = lean_box(0);
}
lean_inc(x_326);
if (lean_is_scalar(x_383)) {
 x_384 = lean_alloc_ctor(1, 4, 1);
} else {
 x_384 = x_383;
}
lean_ctor_set(x_384, 0, x_315);
lean_ctor_set(x_384, 1, x_316);
lean_ctor_set(x_384, 2, x_317);
lean_ctor_set(x_384, 3, x_326);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_385 = x_326;
} else {
 lean_dec_ref(x_326);
 x_385 = lean_box(0);
}
lean_ctor_set_uint8(x_384, sizeof(void*)*4, x_354);
if (lean_is_scalar(x_385)) {
 x_386 = lean_alloc_ctor(1, 4, 1);
} else {
 x_386 = x_385;
}
lean_ctor_set(x_386, 0, x_379);
lean_ctor_set(x_386, 1, x_380);
lean_ctor_set(x_386, 2, x_381);
lean_ctor_set(x_386, 3, x_382);
lean_ctor_set_uint8(x_386, sizeof(void*)*4, x_354);
if (lean_is_scalar(x_378)) {
 x_387 = lean_alloc_ctor(1, 4, 1);
} else {
 x_387 = x_378;
}
lean_ctor_set(x_387, 0, x_384);
lean_ctor_set(x_387, 1, x_376);
lean_ctor_set(x_387, 2, x_377);
lean_ctor_set(x_387, 3, x_386);
lean_ctor_set_uint8(x_387, sizeof(void*)*4, x_375);
return x_387;
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; uint8_t x_397; lean_object* x_398; lean_object* x_399; 
x_388 = lean_ctor_get(x_325, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_325, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_390 = x_325;
} else {
 lean_dec_ref(x_325);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_326, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_326, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_326, 2);
lean_inc(x_393);
x_394 = lean_ctor_get(x_326, 3);
lean_inc(x_394);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_395 = x_326;
} else {
 lean_dec_ref(x_326);
 x_395 = lean_box(0);
}
if (lean_is_scalar(x_395)) {
 x_396 = lean_alloc_ctor(1, 4, 1);
} else {
 x_396 = x_395;
}
lean_ctor_set(x_396, 0, x_391);
lean_ctor_set(x_396, 1, x_392);
lean_ctor_set(x_396, 2, x_393);
lean_ctor_set(x_396, 3, x_394);
lean_ctor_set_uint8(x_396, sizeof(void*)*4, x_375);
x_397 = 0;
if (lean_is_scalar(x_390)) {
 x_398 = lean_alloc_ctor(1, 4, 1);
} else {
 x_398 = x_390;
}
lean_ctor_set(x_398, 0, x_396);
lean_ctor_set(x_398, 1, x_388);
lean_ctor_set(x_398, 2, x_389);
lean_ctor_set(x_398, 3, x_368);
lean_ctor_set_uint8(x_398, sizeof(void*)*4, x_397);
x_399 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_399, 0, x_315);
lean_ctor_set(x_399, 1, x_316);
lean_ctor_set(x_399, 2, x_317);
lean_ctor_set(x_399, 3, x_398);
lean_ctor_set_uint8(x_399, sizeof(void*)*4, x_375);
return x_399;
}
}
}
}
}
}
}
else
{
uint8_t x_400; 
x_400 = l_Std_RBNode_isRed___rarg(x_315);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; 
x_401 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_315, x_2, x_3);
x_402 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_316);
lean_ctor_set(x_402, 2, x_317);
lean_ctor_set(x_402, 3, x_318);
lean_ctor_set_uint8(x_402, sizeof(void*)*4, x_6);
return x_402;
}
else
{
lean_object* x_403; lean_object* x_404; 
x_403 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_315, x_2, x_3);
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_405; 
x_405 = lean_ctor_get(x_403, 3);
lean_inc(x_405);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; uint8_t x_409; lean_object* x_410; uint8_t x_411; lean_object* x_412; 
x_406 = lean_ctor_get(x_403, 1);
lean_inc(x_406);
x_407 = lean_ctor_get(x_403, 2);
lean_inc(x_407);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_408 = x_403;
} else {
 lean_dec_ref(x_403);
 x_408 = lean_box(0);
}
x_409 = 0;
if (lean_is_scalar(x_408)) {
 x_410 = lean_alloc_ctor(1, 4, 1);
} else {
 x_410 = x_408;
}
lean_ctor_set(x_410, 0, x_405);
lean_ctor_set(x_410, 1, x_406);
lean_ctor_set(x_410, 2, x_407);
lean_ctor_set(x_410, 3, x_405);
lean_ctor_set_uint8(x_410, sizeof(void*)*4, x_409);
x_411 = 1;
x_412 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_412, 0, x_410);
lean_ctor_set(x_412, 1, x_316);
lean_ctor_set(x_412, 2, x_317);
lean_ctor_set(x_412, 3, x_318);
lean_ctor_set_uint8(x_412, sizeof(void*)*4, x_411);
return x_412;
}
else
{
uint8_t x_413; 
x_413 = lean_ctor_get_uint8(x_405, sizeof(void*)*4);
if (x_413 == 0)
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; uint8_t x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_414 = lean_ctor_get(x_403, 1);
lean_inc(x_414);
x_415 = lean_ctor_get(x_403, 2);
lean_inc(x_415);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_416 = x_403;
} else {
 lean_dec_ref(x_403);
 x_416 = lean_box(0);
}
x_417 = lean_ctor_get(x_405, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_405, 1);
lean_inc(x_418);
x_419 = lean_ctor_get(x_405, 2);
lean_inc(x_419);
x_420 = lean_ctor_get(x_405, 3);
lean_inc(x_420);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 lean_ctor_release(x_405, 2);
 lean_ctor_release(x_405, 3);
 x_421 = x_405;
} else {
 lean_dec_ref(x_405);
 x_421 = lean_box(0);
}
x_422 = 1;
if (lean_is_scalar(x_421)) {
 x_423 = lean_alloc_ctor(1, 4, 1);
} else {
 x_423 = x_421;
}
lean_ctor_set(x_423, 0, x_404);
lean_ctor_set(x_423, 1, x_414);
lean_ctor_set(x_423, 2, x_415);
lean_ctor_set(x_423, 3, x_417);
lean_ctor_set_uint8(x_423, sizeof(void*)*4, x_422);
if (lean_is_scalar(x_416)) {
 x_424 = lean_alloc_ctor(1, 4, 1);
} else {
 x_424 = x_416;
}
lean_ctor_set(x_424, 0, x_420);
lean_ctor_set(x_424, 1, x_316);
lean_ctor_set(x_424, 2, x_317);
lean_ctor_set(x_424, 3, x_318);
lean_ctor_set_uint8(x_424, sizeof(void*)*4, x_422);
x_425 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_425, 0, x_423);
lean_ctor_set(x_425, 1, x_418);
lean_ctor_set(x_425, 2, x_419);
lean_ctor_set(x_425, 3, x_424);
lean_ctor_set_uint8(x_425, sizeof(void*)*4, x_413);
return x_425;
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; uint8_t x_429; lean_object* x_430; lean_object* x_431; 
x_426 = lean_ctor_get(x_403, 1);
lean_inc(x_426);
x_427 = lean_ctor_get(x_403, 2);
lean_inc(x_427);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_428 = x_403;
} else {
 lean_dec_ref(x_403);
 x_428 = lean_box(0);
}
x_429 = 0;
if (lean_is_scalar(x_428)) {
 x_430 = lean_alloc_ctor(1, 4, 1);
} else {
 x_430 = x_428;
}
lean_ctor_set(x_430, 0, x_404);
lean_ctor_set(x_430, 1, x_426);
lean_ctor_set(x_430, 2, x_427);
lean_ctor_set(x_430, 3, x_405);
lean_ctor_set_uint8(x_430, sizeof(void*)*4, x_429);
x_431 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_431, 0, x_430);
lean_ctor_set(x_431, 1, x_316);
lean_ctor_set(x_431, 2, x_317);
lean_ctor_set(x_431, 3, x_318);
lean_ctor_set_uint8(x_431, sizeof(void*)*4, x_413);
return x_431;
}
}
}
else
{
uint8_t x_432; 
x_432 = lean_ctor_get_uint8(x_404, sizeof(void*)*4);
if (x_432 == 0)
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; uint8_t x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_433 = lean_ctor_get(x_403, 1);
lean_inc(x_433);
x_434 = lean_ctor_get(x_403, 2);
lean_inc(x_434);
x_435 = lean_ctor_get(x_403, 3);
lean_inc(x_435);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_436 = x_403;
} else {
 lean_dec_ref(x_403);
 x_436 = lean_box(0);
}
x_437 = lean_ctor_get(x_404, 0);
lean_inc(x_437);
x_438 = lean_ctor_get(x_404, 1);
lean_inc(x_438);
x_439 = lean_ctor_get(x_404, 2);
lean_inc(x_439);
x_440 = lean_ctor_get(x_404, 3);
lean_inc(x_440);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_441 = x_404;
} else {
 lean_dec_ref(x_404);
 x_441 = lean_box(0);
}
x_442 = 1;
if (lean_is_scalar(x_441)) {
 x_443 = lean_alloc_ctor(1, 4, 1);
} else {
 x_443 = x_441;
}
lean_ctor_set(x_443, 0, x_437);
lean_ctor_set(x_443, 1, x_438);
lean_ctor_set(x_443, 2, x_439);
lean_ctor_set(x_443, 3, x_440);
lean_ctor_set_uint8(x_443, sizeof(void*)*4, x_442);
if (lean_is_scalar(x_436)) {
 x_444 = lean_alloc_ctor(1, 4, 1);
} else {
 x_444 = x_436;
}
lean_ctor_set(x_444, 0, x_435);
lean_ctor_set(x_444, 1, x_316);
lean_ctor_set(x_444, 2, x_317);
lean_ctor_set(x_444, 3, x_318);
lean_ctor_set_uint8(x_444, sizeof(void*)*4, x_442);
x_445 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_433);
lean_ctor_set(x_445, 2, x_434);
lean_ctor_set(x_445, 3, x_444);
lean_ctor_set_uint8(x_445, sizeof(void*)*4, x_432);
return x_445;
}
else
{
lean_object* x_446; 
x_446 = lean_ctor_get(x_403, 3);
lean_inc(x_446);
if (lean_obj_tag(x_446) == 0)
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; lean_object* x_451; lean_object* x_452; 
x_447 = lean_ctor_get(x_403, 1);
lean_inc(x_447);
x_448 = lean_ctor_get(x_403, 2);
lean_inc(x_448);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_449 = x_403;
} else {
 lean_dec_ref(x_403);
 x_449 = lean_box(0);
}
x_450 = 0;
if (lean_is_scalar(x_449)) {
 x_451 = lean_alloc_ctor(1, 4, 1);
} else {
 x_451 = x_449;
}
lean_ctor_set(x_451, 0, x_404);
lean_ctor_set(x_451, 1, x_447);
lean_ctor_set(x_451, 2, x_448);
lean_ctor_set(x_451, 3, x_446);
lean_ctor_set_uint8(x_451, sizeof(void*)*4, x_450);
x_452 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_452, 0, x_451);
lean_ctor_set(x_452, 1, x_316);
lean_ctor_set(x_452, 2, x_317);
lean_ctor_set(x_452, 3, x_318);
lean_ctor_set_uint8(x_452, sizeof(void*)*4, x_432);
return x_452;
}
else
{
uint8_t x_453; 
x_453 = lean_ctor_get_uint8(x_446, sizeof(void*)*4);
if (x_453 == 0)
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
x_454 = lean_ctor_get(x_403, 1);
lean_inc(x_454);
x_455 = lean_ctor_get(x_403, 2);
lean_inc(x_455);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_456 = x_403;
} else {
 lean_dec_ref(x_403);
 x_456 = lean_box(0);
}
x_457 = lean_ctor_get(x_446, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_446, 1);
lean_inc(x_458);
x_459 = lean_ctor_get(x_446, 2);
lean_inc(x_459);
x_460 = lean_ctor_get(x_446, 3);
lean_inc(x_460);
if (lean_is_exclusive(x_446)) {
 lean_ctor_release(x_446, 0);
 lean_ctor_release(x_446, 1);
 lean_ctor_release(x_446, 2);
 lean_ctor_release(x_446, 3);
 x_461 = x_446;
} else {
 lean_dec_ref(x_446);
 x_461 = lean_box(0);
}
lean_inc(x_404);
if (lean_is_scalar(x_461)) {
 x_462 = lean_alloc_ctor(1, 4, 1);
} else {
 x_462 = x_461;
}
lean_ctor_set(x_462, 0, x_404);
lean_ctor_set(x_462, 1, x_454);
lean_ctor_set(x_462, 2, x_455);
lean_ctor_set(x_462, 3, x_457);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_463 = x_404;
} else {
 lean_dec_ref(x_404);
 x_463 = lean_box(0);
}
lean_ctor_set_uint8(x_462, sizeof(void*)*4, x_432);
if (lean_is_scalar(x_463)) {
 x_464 = lean_alloc_ctor(1, 4, 1);
} else {
 x_464 = x_463;
}
lean_ctor_set(x_464, 0, x_460);
lean_ctor_set(x_464, 1, x_316);
lean_ctor_set(x_464, 2, x_317);
lean_ctor_set(x_464, 3, x_318);
lean_ctor_set_uint8(x_464, sizeof(void*)*4, x_432);
if (lean_is_scalar(x_456)) {
 x_465 = lean_alloc_ctor(1, 4, 1);
} else {
 x_465 = x_456;
}
lean_ctor_set(x_465, 0, x_462);
lean_ctor_set(x_465, 1, x_458);
lean_ctor_set(x_465, 2, x_459);
lean_ctor_set(x_465, 3, x_464);
lean_ctor_set_uint8(x_465, sizeof(void*)*4, x_453);
return x_465;
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; lean_object* x_476; lean_object* x_477; 
x_466 = lean_ctor_get(x_403, 1);
lean_inc(x_466);
x_467 = lean_ctor_get(x_403, 2);
lean_inc(x_467);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_468 = x_403;
} else {
 lean_dec_ref(x_403);
 x_468 = lean_box(0);
}
x_469 = lean_ctor_get(x_404, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_404, 1);
lean_inc(x_470);
x_471 = lean_ctor_get(x_404, 2);
lean_inc(x_471);
x_472 = lean_ctor_get(x_404, 3);
lean_inc(x_472);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_473 = x_404;
} else {
 lean_dec_ref(x_404);
 x_473 = lean_box(0);
}
if (lean_is_scalar(x_473)) {
 x_474 = lean_alloc_ctor(1, 4, 1);
} else {
 x_474 = x_473;
}
lean_ctor_set(x_474, 0, x_469);
lean_ctor_set(x_474, 1, x_470);
lean_ctor_set(x_474, 2, x_471);
lean_ctor_set(x_474, 3, x_472);
lean_ctor_set_uint8(x_474, sizeof(void*)*4, x_453);
x_475 = 0;
if (lean_is_scalar(x_468)) {
 x_476 = lean_alloc_ctor(1, 4, 1);
} else {
 x_476 = x_468;
}
lean_ctor_set(x_476, 0, x_474);
lean_ctor_set(x_476, 1, x_466);
lean_ctor_set(x_476, 2, x_467);
lean_ctor_set(x_476, 3, x_446);
lean_ctor_set_uint8(x_476, sizeof(void*)*4, x_475);
x_477 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_477, 0, x_476);
lean_ctor_set(x_477, 1, x_316);
lean_ctor_set(x_477, 2, x_317);
lean_ctor_set(x_477, 3, x_318);
lean_ctor_set_uint8(x_477, sizeof(void*)*4, x_453);
return x_477;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*4, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = l_Lean_Name_quickLt(x_2, x_9);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = l_Lean_Name_quickLt(x_9, x_2);
if (x_13 == 0)
{
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_14; 
x_14 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_11, x_2, x_3);
lean_ctor_set(x_1, 3, x_14);
return x_1;
}
}
else
{
lean_object* x_15; 
x_15 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_8, x_2, x_3);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
x_18 = lean_ctor_get(x_1, 2);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_1);
x_20 = l_Lean_Name_quickLt(x_2, x_17);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = l_Lean_Name_quickLt(x_17, x_2);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_17);
x_22 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_3);
lean_ctor_set(x_22, 3, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*4, x_6);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_19, x_2, x_3);
x_24 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_17);
lean_ctor_set(x_24, 2, x_18);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*4, x_6);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_16, x_2, x_3);
x_26 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_17);
lean_ctor_set(x_26, 2, x_18);
lean_ctor_set(x_26, 3, x_19);
lean_ctor_set_uint8(x_26, sizeof(void*)*4, x_6);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_1);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_ctor_get(x_1, 2);
x_31 = lean_ctor_get(x_1, 3);
x_32 = l_Lean_Name_quickLt(x_2, x_29);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = l_Lean_Name_quickLt(x_29, x_2);
if (x_33 == 0)
{
lean_dec(x_30);
lean_dec(x_29);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
uint8_t x_34; 
x_34 = l_Std_RBNode_isRed___rarg(x_31);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_31, x_2, x_3);
lean_ctor_set(x_1, 3, x_35);
return x_1;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_31, x_2, x_3);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 3);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_36, 3);
lean_dec(x_40);
x_41 = lean_ctor_get(x_36, 0);
lean_dec(x_41);
x_42 = 0;
lean_ctor_set(x_36, 0, x_38);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_42);
x_43 = 1;
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_43);
return x_1;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; uint8_t x_48; 
x_44 = lean_ctor_get(x_36, 1);
x_45 = lean_ctor_get(x_36, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = 0;
x_47 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_47, 0, x_38);
lean_ctor_set(x_47, 1, x_44);
lean_ctor_set(x_47, 2, x_45);
lean_ctor_set(x_47, 3, x_38);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_46);
x_48 = 1;
lean_ctor_set(x_1, 3, x_47);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_48);
return x_1;
}
}
else
{
uint8_t x_49; 
x_49 = lean_ctor_get_uint8(x_38, sizeof(void*)*4);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_36);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_36, 1);
x_52 = lean_ctor_get(x_36, 2);
x_53 = lean_ctor_get(x_36, 3);
lean_dec(x_53);
x_54 = lean_ctor_get(x_36, 0);
lean_dec(x_54);
x_55 = !lean_is_exclusive(x_38);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_38, 0);
x_57 = lean_ctor_get(x_38, 1);
x_58 = lean_ctor_get(x_38, 2);
x_59 = lean_ctor_get(x_38, 3);
x_60 = 1;
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_38, 2, x_30);
lean_ctor_set(x_38, 1, x_29);
lean_ctor_set(x_38, 0, x_28);
lean_ctor_set_uint8(x_38, sizeof(void*)*4, x_60);
lean_ctor_set(x_36, 3, x_59);
lean_ctor_set(x_36, 2, x_58);
lean_ctor_set(x_36, 1, x_57);
lean_ctor_set(x_36, 0, x_56);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_60);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_52);
lean_ctor_set(x_1, 1, x_51);
lean_ctor_set(x_1, 0, x_38);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_38, 0);
x_62 = lean_ctor_get(x_38, 1);
x_63 = lean_ctor_get(x_38, 2);
x_64 = lean_ctor_get(x_38, 3);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_38);
x_65 = 1;
x_66 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_66, 0, x_28);
lean_ctor_set(x_66, 1, x_29);
lean_ctor_set(x_66, 2, x_30);
lean_ctor_set(x_66, 3, x_37);
lean_ctor_set_uint8(x_66, sizeof(void*)*4, x_65);
lean_ctor_set(x_36, 3, x_64);
lean_ctor_set(x_36, 2, x_63);
lean_ctor_set(x_36, 1, x_62);
lean_ctor_set(x_36, 0, x_61);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_65);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_52);
lean_ctor_set(x_1, 1, x_51);
lean_ctor_set(x_1, 0, x_66);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; 
x_67 = lean_ctor_get(x_36, 1);
x_68 = lean_ctor_get(x_36, 2);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_36);
x_69 = lean_ctor_get(x_38, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_38, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_38, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_38, 3);
lean_inc(x_72);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 x_73 = x_38;
} else {
 lean_dec_ref(x_38);
 x_73 = lean_box(0);
}
x_74 = 1;
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(1, 4, 1);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_28);
lean_ctor_set(x_75, 1, x_29);
lean_ctor_set(x_75, 2, x_30);
lean_ctor_set(x_75, 3, x_37);
lean_ctor_set_uint8(x_75, sizeof(void*)*4, x_74);
x_76 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_76, 0, x_69);
lean_ctor_set(x_76, 1, x_70);
lean_ctor_set(x_76, 2, x_71);
lean_ctor_set(x_76, 3, x_72);
lean_ctor_set_uint8(x_76, sizeof(void*)*4, x_74);
lean_ctor_set(x_1, 3, x_76);
lean_ctor_set(x_1, 2, x_68);
lean_ctor_set(x_1, 1, x_67);
lean_ctor_set(x_1, 0, x_75);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_36);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_36, 3);
lean_dec(x_78);
x_79 = lean_ctor_get(x_36, 0);
lean_dec(x_79);
x_80 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_80);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_36, 1);
x_82 = lean_ctor_get(x_36, 2);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_36);
x_83 = 0;
x_84 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_84, 0, x_37);
lean_ctor_set(x_84, 1, x_81);
lean_ctor_set(x_84, 2, x_82);
lean_ctor_set(x_84, 3, x_38);
lean_ctor_set_uint8(x_84, sizeof(void*)*4, x_83);
lean_ctor_set(x_1, 3, x_84);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
}
}
else
{
uint8_t x_85; 
x_85 = lean_ctor_get_uint8(x_37, sizeof(void*)*4);
if (x_85 == 0)
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_36);
if (x_86 == 0)
{
lean_object* x_87; uint8_t x_88; 
x_87 = lean_ctor_get(x_36, 0);
lean_dec(x_87);
x_88 = !lean_is_exclusive(x_37);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_37, 0);
x_90 = lean_ctor_get(x_37, 1);
x_91 = lean_ctor_get(x_37, 2);
x_92 = lean_ctor_get(x_37, 3);
x_93 = 1;
lean_ctor_set(x_37, 3, x_89);
lean_ctor_set(x_37, 2, x_30);
lean_ctor_set(x_37, 1, x_29);
lean_ctor_set(x_37, 0, x_28);
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_93);
lean_ctor_set(x_36, 0, x_92);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_93);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_91);
lean_ctor_set(x_1, 1, x_90);
lean_ctor_set(x_1, 0, x_37);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; 
x_94 = lean_ctor_get(x_37, 0);
x_95 = lean_ctor_get(x_37, 1);
x_96 = lean_ctor_get(x_37, 2);
x_97 = lean_ctor_get(x_37, 3);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_37);
x_98 = 1;
x_99 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_99, 0, x_28);
lean_ctor_set(x_99, 1, x_29);
lean_ctor_set(x_99, 2, x_30);
lean_ctor_set(x_99, 3, x_94);
lean_ctor_set_uint8(x_99, sizeof(void*)*4, x_98);
lean_ctor_set(x_36, 0, x_97);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_98);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_96);
lean_ctor_set(x_1, 1, x_95);
lean_ctor_set(x_1, 0, x_99);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; lean_object* x_110; 
x_100 = lean_ctor_get(x_36, 1);
x_101 = lean_ctor_get(x_36, 2);
x_102 = lean_ctor_get(x_36, 3);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_36);
x_103 = lean_ctor_get(x_37, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_37, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_37, 2);
lean_inc(x_105);
x_106 = lean_ctor_get(x_37, 3);
lean_inc(x_106);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_107 = x_37;
} else {
 lean_dec_ref(x_37);
 x_107 = lean_box(0);
}
x_108 = 1;
if (lean_is_scalar(x_107)) {
 x_109 = lean_alloc_ctor(1, 4, 1);
} else {
 x_109 = x_107;
}
lean_ctor_set(x_109, 0, x_28);
lean_ctor_set(x_109, 1, x_29);
lean_ctor_set(x_109, 2, x_30);
lean_ctor_set(x_109, 3, x_103);
lean_ctor_set_uint8(x_109, sizeof(void*)*4, x_108);
x_110 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_110, 0, x_106);
lean_ctor_set(x_110, 1, x_100);
lean_ctor_set(x_110, 2, x_101);
lean_ctor_set(x_110, 3, x_102);
lean_ctor_set_uint8(x_110, sizeof(void*)*4, x_108);
lean_ctor_set(x_1, 3, x_110);
lean_ctor_set(x_1, 2, x_105);
lean_ctor_set(x_1, 1, x_104);
lean_ctor_set(x_1, 0, x_109);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_36, 3);
lean_inc(x_111);
if (lean_obj_tag(x_111) == 0)
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_36);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_113 = lean_ctor_get(x_36, 3);
lean_dec(x_113);
x_114 = lean_ctor_get(x_36, 0);
lean_dec(x_114);
x_115 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_115);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; 
x_116 = lean_ctor_get(x_36, 1);
x_117 = lean_ctor_get(x_36, 2);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_36);
x_118 = 0;
x_119 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_119, 0, x_37);
lean_ctor_set(x_119, 1, x_116);
lean_ctor_set(x_119, 2, x_117);
lean_ctor_set(x_119, 3, x_111);
lean_ctor_set_uint8(x_119, sizeof(void*)*4, x_118);
lean_ctor_set(x_1, 3, x_119);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
uint8_t x_120; 
x_120 = lean_ctor_get_uint8(x_111, sizeof(void*)*4);
if (x_120 == 0)
{
uint8_t x_121; 
lean_free_object(x_1);
x_121 = !lean_is_exclusive(x_36);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_122 = lean_ctor_get(x_36, 3);
lean_dec(x_122);
x_123 = lean_ctor_get(x_36, 0);
lean_dec(x_123);
x_124 = !lean_is_exclusive(x_111);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_125 = lean_ctor_get(x_111, 0);
x_126 = lean_ctor_get(x_111, 1);
x_127 = lean_ctor_get(x_111, 2);
x_128 = lean_ctor_get(x_111, 3);
lean_inc(x_37);
lean_ctor_set(x_111, 3, x_37);
lean_ctor_set(x_111, 2, x_30);
lean_ctor_set(x_111, 1, x_29);
lean_ctor_set(x_111, 0, x_28);
x_129 = !lean_is_exclusive(x_37);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_37, 3);
lean_dec(x_130);
x_131 = lean_ctor_get(x_37, 2);
lean_dec(x_131);
x_132 = lean_ctor_get(x_37, 1);
lean_dec(x_132);
x_133 = lean_ctor_get(x_37, 0);
lean_dec(x_133);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_85);
lean_ctor_set(x_37, 3, x_128);
lean_ctor_set(x_37, 2, x_127);
lean_ctor_set(x_37, 1, x_126);
lean_ctor_set(x_37, 0, x_125);
lean_ctor_set(x_36, 3, x_37);
lean_ctor_set(x_36, 0, x_111);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
else
{
lean_object* x_134; 
lean_dec(x_37);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_85);
x_134 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_134, 0, x_125);
lean_ctor_set(x_134, 1, x_126);
lean_ctor_set(x_134, 2, x_127);
lean_ctor_set(x_134, 3, x_128);
lean_ctor_set_uint8(x_134, sizeof(void*)*4, x_85);
lean_ctor_set(x_36, 3, x_134);
lean_ctor_set(x_36, 0, x_111);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_135 = lean_ctor_get(x_111, 0);
x_136 = lean_ctor_get(x_111, 1);
x_137 = lean_ctor_get(x_111, 2);
x_138 = lean_ctor_get(x_111, 3);
lean_inc(x_138);
lean_inc(x_137);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_111);
lean_inc(x_37);
x_139 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_139, 0, x_28);
lean_ctor_set(x_139, 1, x_29);
lean_ctor_set(x_139, 2, x_30);
lean_ctor_set(x_139, 3, x_37);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_140 = x_37;
} else {
 lean_dec_ref(x_37);
 x_140 = lean_box(0);
}
lean_ctor_set_uint8(x_139, sizeof(void*)*4, x_85);
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 4, 1);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_135);
lean_ctor_set(x_141, 1, x_136);
lean_ctor_set(x_141, 2, x_137);
lean_ctor_set(x_141, 3, x_138);
lean_ctor_set_uint8(x_141, sizeof(void*)*4, x_85);
lean_ctor_set(x_36, 3, x_141);
lean_ctor_set(x_36, 0, x_139);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_142 = lean_ctor_get(x_36, 1);
x_143 = lean_ctor_get(x_36, 2);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_36);
x_144 = lean_ctor_get(x_111, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_111, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_111, 2);
lean_inc(x_146);
x_147 = lean_ctor_get(x_111, 3);
lean_inc(x_147);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 lean_ctor_release(x_111, 2);
 lean_ctor_release(x_111, 3);
 x_148 = x_111;
} else {
 lean_dec_ref(x_111);
 x_148 = lean_box(0);
}
lean_inc(x_37);
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 4, 1);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_28);
lean_ctor_set(x_149, 1, x_29);
lean_ctor_set(x_149, 2, x_30);
lean_ctor_set(x_149, 3, x_37);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_150 = x_37;
} else {
 lean_dec_ref(x_37);
 x_150 = lean_box(0);
}
lean_ctor_set_uint8(x_149, sizeof(void*)*4, x_85);
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(1, 4, 1);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_144);
lean_ctor_set(x_151, 1, x_145);
lean_ctor_set(x_151, 2, x_146);
lean_ctor_set(x_151, 3, x_147);
lean_ctor_set_uint8(x_151, sizeof(void*)*4, x_85);
x_152 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_142);
lean_ctor_set(x_152, 2, x_143);
lean_ctor_set(x_152, 3, x_151);
lean_ctor_set_uint8(x_152, sizeof(void*)*4, x_120);
return x_152;
}
}
else
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_36);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_154 = lean_ctor_get(x_36, 3);
lean_dec(x_154);
x_155 = lean_ctor_get(x_36, 0);
lean_dec(x_155);
x_156 = !lean_is_exclusive(x_37);
if (x_156 == 0)
{
uint8_t x_157; 
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_120);
x_157 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_157);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_158 = lean_ctor_get(x_37, 0);
x_159 = lean_ctor_get(x_37, 1);
x_160 = lean_ctor_get(x_37, 2);
x_161 = lean_ctor_get(x_37, 3);
lean_inc(x_161);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_37);
x_162 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_162, 0, x_158);
lean_ctor_set(x_162, 1, x_159);
lean_ctor_set(x_162, 2, x_160);
lean_ctor_set(x_162, 3, x_161);
lean_ctor_set_uint8(x_162, sizeof(void*)*4, x_120);
x_163 = 0;
lean_ctor_set(x_36, 0, x_162);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_163);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; 
x_164 = lean_ctor_get(x_36, 1);
x_165 = lean_ctor_get(x_36, 2);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_36);
x_166 = lean_ctor_get(x_37, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_37, 1);
lean_inc(x_167);
x_168 = lean_ctor_get(x_37, 2);
lean_inc(x_168);
x_169 = lean_ctor_get(x_37, 3);
lean_inc(x_169);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_170 = x_37;
} else {
 lean_dec_ref(x_37);
 x_170 = lean_box(0);
}
if (lean_is_scalar(x_170)) {
 x_171 = lean_alloc_ctor(1, 4, 1);
} else {
 x_171 = x_170;
}
lean_ctor_set(x_171, 0, x_166);
lean_ctor_set(x_171, 1, x_167);
lean_ctor_set(x_171, 2, x_168);
lean_ctor_set(x_171, 3, x_169);
lean_ctor_set_uint8(x_171, sizeof(void*)*4, x_120);
x_172 = 0;
x_173 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_164);
lean_ctor_set(x_173, 2, x_165);
lean_ctor_set(x_173, 3, x_111);
lean_ctor_set_uint8(x_173, sizeof(void*)*4, x_172);
lean_ctor_set(x_1, 3, x_173);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
}
}
}
}
}
}
else
{
uint8_t x_174; 
x_174 = l_Std_RBNode_isRed___rarg(x_28);
if (x_174 == 0)
{
lean_object* x_175; 
x_175 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_28, x_2, x_3);
lean_ctor_set(x_1, 0, x_175);
return x_1;
}
else
{
lean_object* x_176; lean_object* x_177; 
x_176 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_28, x_2, x_3);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; 
x_178 = lean_ctor_get(x_176, 3);
lean_inc(x_178);
if (lean_obj_tag(x_178) == 0)
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_176);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; uint8_t x_183; 
x_180 = lean_ctor_get(x_176, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_176, 0);
lean_dec(x_181);
x_182 = 0;
lean_ctor_set(x_176, 0, x_178);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_182);
x_183 = 1;
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_183);
return x_1;
}
else
{
lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; uint8_t x_188; 
x_184 = lean_ctor_get(x_176, 1);
x_185 = lean_ctor_get(x_176, 2);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_176);
x_186 = 0;
x_187 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_187, 0, x_178);
lean_ctor_set(x_187, 1, x_184);
lean_ctor_set(x_187, 2, x_185);
lean_ctor_set(x_187, 3, x_178);
lean_ctor_set_uint8(x_187, sizeof(void*)*4, x_186);
x_188 = 1;
lean_ctor_set(x_1, 0, x_187);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_188);
return x_1;
}
}
else
{
uint8_t x_189; 
x_189 = lean_ctor_get_uint8(x_178, sizeof(void*)*4);
if (x_189 == 0)
{
uint8_t x_190; 
x_190 = !lean_is_exclusive(x_176);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_191 = lean_ctor_get(x_176, 1);
x_192 = lean_ctor_get(x_176, 2);
x_193 = lean_ctor_get(x_176, 3);
lean_dec(x_193);
x_194 = lean_ctor_get(x_176, 0);
lean_dec(x_194);
x_195 = !lean_is_exclusive(x_178);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_196 = lean_ctor_get(x_178, 0);
x_197 = lean_ctor_get(x_178, 1);
x_198 = lean_ctor_get(x_178, 2);
x_199 = lean_ctor_get(x_178, 3);
x_200 = 1;
lean_ctor_set(x_178, 3, x_196);
lean_ctor_set(x_178, 2, x_192);
lean_ctor_set(x_178, 1, x_191);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set_uint8(x_178, sizeof(void*)*4, x_200);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_199);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_200);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_198);
lean_ctor_set(x_1, 1, x_197);
lean_ctor_set(x_1, 0, x_178);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; lean_object* x_206; 
x_201 = lean_ctor_get(x_178, 0);
x_202 = lean_ctor_get(x_178, 1);
x_203 = lean_ctor_get(x_178, 2);
x_204 = lean_ctor_get(x_178, 3);
lean_inc(x_204);
lean_inc(x_203);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_178);
x_205 = 1;
x_206 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_206, 0, x_177);
lean_ctor_set(x_206, 1, x_191);
lean_ctor_set(x_206, 2, x_192);
lean_ctor_set(x_206, 3, x_201);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_205);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_204);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_205);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_203);
lean_ctor_set(x_1, 1, x_202);
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; lean_object* x_215; lean_object* x_216; 
x_207 = lean_ctor_get(x_176, 1);
x_208 = lean_ctor_get(x_176, 2);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_176);
x_209 = lean_ctor_get(x_178, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_178, 1);
lean_inc(x_210);
x_211 = lean_ctor_get(x_178, 2);
lean_inc(x_211);
x_212 = lean_ctor_get(x_178, 3);
lean_inc(x_212);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 lean_ctor_release(x_178, 2);
 lean_ctor_release(x_178, 3);
 x_213 = x_178;
} else {
 lean_dec_ref(x_178);
 x_213 = lean_box(0);
}
x_214 = 1;
if (lean_is_scalar(x_213)) {
 x_215 = lean_alloc_ctor(1, 4, 1);
} else {
 x_215 = x_213;
}
lean_ctor_set(x_215, 0, x_177);
lean_ctor_set(x_215, 1, x_207);
lean_ctor_set(x_215, 2, x_208);
lean_ctor_set(x_215, 3, x_209);
lean_ctor_set_uint8(x_215, sizeof(void*)*4, x_214);
x_216 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_216, 0, x_212);
lean_ctor_set(x_216, 1, x_29);
lean_ctor_set(x_216, 2, x_30);
lean_ctor_set(x_216, 3, x_31);
lean_ctor_set_uint8(x_216, sizeof(void*)*4, x_214);
lean_ctor_set(x_1, 3, x_216);
lean_ctor_set(x_1, 2, x_211);
lean_ctor_set(x_1, 1, x_210);
lean_ctor_set(x_1, 0, x_215);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
uint8_t x_217; 
x_217 = !lean_is_exclusive(x_176);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_218 = lean_ctor_get(x_176, 3);
lean_dec(x_218);
x_219 = lean_ctor_get(x_176, 0);
lean_dec(x_219);
x_220 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_220);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; lean_object* x_224; 
x_221 = lean_ctor_get(x_176, 1);
x_222 = lean_ctor_get(x_176, 2);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_176);
x_223 = 0;
x_224 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_224, 0, x_177);
lean_ctor_set(x_224, 1, x_221);
lean_ctor_set(x_224, 2, x_222);
lean_ctor_set(x_224, 3, x_178);
lean_ctor_set_uint8(x_224, sizeof(void*)*4, x_223);
lean_ctor_set(x_1, 0, x_224);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
}
}
else
{
uint8_t x_225; 
x_225 = lean_ctor_get_uint8(x_177, sizeof(void*)*4);
if (x_225 == 0)
{
uint8_t x_226; 
x_226 = !lean_is_exclusive(x_176);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_227 = lean_ctor_get(x_176, 1);
x_228 = lean_ctor_get(x_176, 2);
x_229 = lean_ctor_get(x_176, 3);
x_230 = lean_ctor_get(x_176, 0);
lean_dec(x_230);
x_231 = !lean_is_exclusive(x_177);
if (x_231 == 0)
{
uint8_t x_232; 
x_232 = 1;
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_232);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_229);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_232);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_177);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; lean_object* x_238; 
x_233 = lean_ctor_get(x_177, 0);
x_234 = lean_ctor_get(x_177, 1);
x_235 = lean_ctor_get(x_177, 2);
x_236 = lean_ctor_get(x_177, 3);
lean_inc(x_236);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_177);
x_237 = 1;
x_238 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_238, 0, x_233);
lean_ctor_set(x_238, 1, x_234);
lean_ctor_set(x_238, 2, x_235);
lean_ctor_set(x_238, 3, x_236);
lean_ctor_set_uint8(x_238, sizeof(void*)*4, x_237);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_229);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_237);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_238);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; uint8_t x_247; lean_object* x_248; lean_object* x_249; 
x_239 = lean_ctor_get(x_176, 1);
x_240 = lean_ctor_get(x_176, 2);
x_241 = lean_ctor_get(x_176, 3);
lean_inc(x_241);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_176);
x_242 = lean_ctor_get(x_177, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_177, 1);
lean_inc(x_243);
x_244 = lean_ctor_get(x_177, 2);
lean_inc(x_244);
x_245 = lean_ctor_get(x_177, 3);
lean_inc(x_245);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_246 = x_177;
} else {
 lean_dec_ref(x_177);
 x_246 = lean_box(0);
}
x_247 = 1;
if (lean_is_scalar(x_246)) {
 x_248 = lean_alloc_ctor(1, 4, 1);
} else {
 x_248 = x_246;
}
lean_ctor_set(x_248, 0, x_242);
lean_ctor_set(x_248, 1, x_243);
lean_ctor_set(x_248, 2, x_244);
lean_ctor_set(x_248, 3, x_245);
lean_ctor_set_uint8(x_248, sizeof(void*)*4, x_247);
x_249 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_249, 0, x_241);
lean_ctor_set(x_249, 1, x_29);
lean_ctor_set(x_249, 2, x_30);
lean_ctor_set(x_249, 3, x_31);
lean_ctor_set_uint8(x_249, sizeof(void*)*4, x_247);
lean_ctor_set(x_1, 3, x_249);
lean_ctor_set(x_1, 2, x_240);
lean_ctor_set(x_1, 1, x_239);
lean_ctor_set(x_1, 0, x_248);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
lean_object* x_250; 
x_250 = lean_ctor_get(x_176, 3);
lean_inc(x_250);
if (lean_obj_tag(x_250) == 0)
{
uint8_t x_251; 
x_251 = !lean_is_exclusive(x_176);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; uint8_t x_254; 
x_252 = lean_ctor_get(x_176, 3);
lean_dec(x_252);
x_253 = lean_ctor_get(x_176, 0);
lean_dec(x_253);
x_254 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_254);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; 
x_255 = lean_ctor_get(x_176, 1);
x_256 = lean_ctor_get(x_176, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_176);
x_257 = 0;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_177);
lean_ctor_set(x_258, 1, x_255);
lean_ctor_set(x_258, 2, x_256);
lean_ctor_set(x_258, 3, x_250);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
uint8_t x_259; 
x_259 = lean_ctor_get_uint8(x_250, sizeof(void*)*4);
if (x_259 == 0)
{
uint8_t x_260; 
lean_free_object(x_1);
x_260 = !lean_is_exclusive(x_176);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; uint8_t x_265; 
x_261 = lean_ctor_get(x_176, 1);
x_262 = lean_ctor_get(x_176, 2);
x_263 = lean_ctor_get(x_176, 3);
lean_dec(x_263);
x_264 = lean_ctor_get(x_176, 0);
lean_dec(x_264);
x_265 = !lean_is_exclusive(x_250);
if (x_265 == 0)
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; uint8_t x_270; 
x_266 = lean_ctor_get(x_250, 0);
x_267 = lean_ctor_get(x_250, 1);
x_268 = lean_ctor_get(x_250, 2);
x_269 = lean_ctor_get(x_250, 3);
lean_inc(x_177);
lean_ctor_set(x_250, 3, x_266);
lean_ctor_set(x_250, 2, x_262);
lean_ctor_set(x_250, 1, x_261);
lean_ctor_set(x_250, 0, x_177);
x_270 = !lean_is_exclusive(x_177);
if (x_270 == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_177, 3);
lean_dec(x_271);
x_272 = lean_ctor_get(x_177, 2);
lean_dec(x_272);
x_273 = lean_ctor_get(x_177, 1);
lean_dec(x_273);
x_274 = lean_ctor_get(x_177, 0);
lean_dec(x_274);
lean_ctor_set_uint8(x_250, sizeof(void*)*4, x_225);
lean_ctor_set(x_177, 3, x_31);
lean_ctor_set(x_177, 2, x_30);
lean_ctor_set(x_177, 1, x_29);
lean_ctor_set(x_177, 0, x_269);
lean_ctor_set(x_176, 3, x_177);
lean_ctor_set(x_176, 2, x_268);
lean_ctor_set(x_176, 1, x_267);
lean_ctor_set(x_176, 0, x_250);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
else
{
lean_object* x_275; 
lean_dec(x_177);
lean_ctor_set_uint8(x_250, sizeof(void*)*4, x_225);
x_275 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_275, 0, x_269);
lean_ctor_set(x_275, 1, x_29);
lean_ctor_set(x_275, 2, x_30);
lean_ctor_set(x_275, 3, x_31);
lean_ctor_set_uint8(x_275, sizeof(void*)*4, x_225);
lean_ctor_set(x_176, 3, x_275);
lean_ctor_set(x_176, 2, x_268);
lean_ctor_set(x_176, 1, x_267);
lean_ctor_set(x_176, 0, x_250);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_276 = lean_ctor_get(x_250, 0);
x_277 = lean_ctor_get(x_250, 1);
x_278 = lean_ctor_get(x_250, 2);
x_279 = lean_ctor_get(x_250, 3);
lean_inc(x_279);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_250);
lean_inc(x_177);
x_280 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_280, 0, x_177);
lean_ctor_set(x_280, 1, x_261);
lean_ctor_set(x_280, 2, x_262);
lean_ctor_set(x_280, 3, x_276);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_281 = x_177;
} else {
 lean_dec_ref(x_177);
 x_281 = lean_box(0);
}
lean_ctor_set_uint8(x_280, sizeof(void*)*4, x_225);
if (lean_is_scalar(x_281)) {
 x_282 = lean_alloc_ctor(1, 4, 1);
} else {
 x_282 = x_281;
}
lean_ctor_set(x_282, 0, x_279);
lean_ctor_set(x_282, 1, x_29);
lean_ctor_set(x_282, 2, x_30);
lean_ctor_set(x_282, 3, x_31);
lean_ctor_set_uint8(x_282, sizeof(void*)*4, x_225);
lean_ctor_set(x_176, 3, x_282);
lean_ctor_set(x_176, 2, x_278);
lean_ctor_set(x_176, 1, x_277);
lean_ctor_set(x_176, 0, x_280);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_283 = lean_ctor_get(x_176, 1);
x_284 = lean_ctor_get(x_176, 2);
lean_inc(x_284);
lean_inc(x_283);
lean_dec(x_176);
x_285 = lean_ctor_get(x_250, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_250, 1);
lean_inc(x_286);
x_287 = lean_ctor_get(x_250, 2);
lean_inc(x_287);
x_288 = lean_ctor_get(x_250, 3);
lean_inc(x_288);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 lean_ctor_release(x_250, 2);
 lean_ctor_release(x_250, 3);
 x_289 = x_250;
} else {
 lean_dec_ref(x_250);
 x_289 = lean_box(0);
}
lean_inc(x_177);
if (lean_is_scalar(x_289)) {
 x_290 = lean_alloc_ctor(1, 4, 1);
} else {
 x_290 = x_289;
}
lean_ctor_set(x_290, 0, x_177);
lean_ctor_set(x_290, 1, x_283);
lean_ctor_set(x_290, 2, x_284);
lean_ctor_set(x_290, 3, x_285);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_291 = x_177;
} else {
 lean_dec_ref(x_177);
 x_291 = lean_box(0);
}
lean_ctor_set_uint8(x_290, sizeof(void*)*4, x_225);
if (lean_is_scalar(x_291)) {
 x_292 = lean_alloc_ctor(1, 4, 1);
} else {
 x_292 = x_291;
}
lean_ctor_set(x_292, 0, x_288);
lean_ctor_set(x_292, 1, x_29);
lean_ctor_set(x_292, 2, x_30);
lean_ctor_set(x_292, 3, x_31);
lean_ctor_set_uint8(x_292, sizeof(void*)*4, x_225);
x_293 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_293, 0, x_290);
lean_ctor_set(x_293, 1, x_286);
lean_ctor_set(x_293, 2, x_287);
lean_ctor_set(x_293, 3, x_292);
lean_ctor_set_uint8(x_293, sizeof(void*)*4, x_259);
return x_293;
}
}
else
{
uint8_t x_294; 
x_294 = !lean_is_exclusive(x_176);
if (x_294 == 0)
{
lean_object* x_295; lean_object* x_296; uint8_t x_297; 
x_295 = lean_ctor_get(x_176, 3);
lean_dec(x_295);
x_296 = lean_ctor_get(x_176, 0);
lean_dec(x_296);
x_297 = !lean_is_exclusive(x_177);
if (x_297 == 0)
{
uint8_t x_298; 
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_259);
x_298 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_298);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; uint8_t x_304; 
x_299 = lean_ctor_get(x_177, 0);
x_300 = lean_ctor_get(x_177, 1);
x_301 = lean_ctor_get(x_177, 2);
x_302 = lean_ctor_get(x_177, 3);
lean_inc(x_302);
lean_inc(x_301);
lean_inc(x_300);
lean_inc(x_299);
lean_dec(x_177);
x_303 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_303, 0, x_299);
lean_ctor_set(x_303, 1, x_300);
lean_ctor_set(x_303, 2, x_301);
lean_ctor_set(x_303, 3, x_302);
lean_ctor_set_uint8(x_303, sizeof(void*)*4, x_259);
x_304 = 0;
lean_ctor_set(x_176, 0, x_303);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_304);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; lean_object* x_314; 
x_305 = lean_ctor_get(x_176, 1);
x_306 = lean_ctor_get(x_176, 2);
lean_inc(x_306);
lean_inc(x_305);
lean_dec(x_176);
x_307 = lean_ctor_get(x_177, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_177, 1);
lean_inc(x_308);
x_309 = lean_ctor_get(x_177, 2);
lean_inc(x_309);
x_310 = lean_ctor_get(x_177, 3);
lean_inc(x_310);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_311 = x_177;
} else {
 lean_dec_ref(x_177);
 x_311 = lean_box(0);
}
if (lean_is_scalar(x_311)) {
 x_312 = lean_alloc_ctor(1, 4, 1);
} else {
 x_312 = x_311;
}
lean_ctor_set(x_312, 0, x_307);
lean_ctor_set(x_312, 1, x_308);
lean_ctor_set(x_312, 2, x_309);
lean_ctor_set(x_312, 3, x_310);
lean_ctor_set_uint8(x_312, sizeof(void*)*4, x_259);
x_313 = 0;
x_314 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_314, 0, x_312);
lean_ctor_set(x_314, 1, x_305);
lean_ctor_set(x_314, 2, x_306);
lean_ctor_set(x_314, 3, x_250);
lean_ctor_set_uint8(x_314, sizeof(void*)*4, x_313);
lean_ctor_set(x_1, 0, x_314);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
}
}
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; uint8_t x_319; 
x_315 = lean_ctor_get(x_1, 0);
x_316 = lean_ctor_get(x_1, 1);
x_317 = lean_ctor_get(x_1, 2);
x_318 = lean_ctor_get(x_1, 3);
lean_inc(x_318);
lean_inc(x_317);
lean_inc(x_316);
lean_inc(x_315);
lean_dec(x_1);
x_319 = l_Lean_Name_quickLt(x_2, x_316);
if (x_319 == 0)
{
uint8_t x_320; 
x_320 = l_Lean_Name_quickLt(x_316, x_2);
if (x_320 == 0)
{
lean_object* x_321; 
lean_dec(x_317);
lean_dec(x_316);
x_321 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_321, 0, x_315);
lean_ctor_set(x_321, 1, x_2);
lean_ctor_set(x_321, 2, x_3);
lean_ctor_set(x_321, 3, x_318);
lean_ctor_set_uint8(x_321, sizeof(void*)*4, x_6);
return x_321;
}
else
{
uint8_t x_322; 
x_322 = l_Std_RBNode_isRed___rarg(x_318);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; 
x_323 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_318, x_2, x_3);
x_324 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_324, 0, x_315);
lean_ctor_set(x_324, 1, x_316);
lean_ctor_set(x_324, 2, x_317);
lean_ctor_set(x_324, 3, x_323);
lean_ctor_set_uint8(x_324, sizeof(void*)*4, x_6);
return x_324;
}
else
{
lean_object* x_325; lean_object* x_326; 
x_325 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_318, x_2, x_3);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
if (lean_obj_tag(x_326) == 0)
{
lean_object* x_327; 
x_327 = lean_ctor_get(x_325, 3);
lean_inc(x_327);
if (lean_obj_tag(x_327) == 0)
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; uint8_t x_331; lean_object* x_332; uint8_t x_333; lean_object* x_334; 
x_328 = lean_ctor_get(x_325, 1);
lean_inc(x_328);
x_329 = lean_ctor_get(x_325, 2);
lean_inc(x_329);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_330 = x_325;
} else {
 lean_dec_ref(x_325);
 x_330 = lean_box(0);
}
x_331 = 0;
if (lean_is_scalar(x_330)) {
 x_332 = lean_alloc_ctor(1, 4, 1);
} else {
 x_332 = x_330;
}
lean_ctor_set(x_332, 0, x_327);
lean_ctor_set(x_332, 1, x_328);
lean_ctor_set(x_332, 2, x_329);
lean_ctor_set(x_332, 3, x_327);
lean_ctor_set_uint8(x_332, sizeof(void*)*4, x_331);
x_333 = 1;
x_334 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_334, 0, x_315);
lean_ctor_set(x_334, 1, x_316);
lean_ctor_set(x_334, 2, x_317);
lean_ctor_set(x_334, 3, x_332);
lean_ctor_set_uint8(x_334, sizeof(void*)*4, x_333);
return x_334;
}
else
{
uint8_t x_335; 
x_335 = lean_ctor_get_uint8(x_327, sizeof(void*)*4);
if (x_335 == 0)
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_336 = lean_ctor_get(x_325, 1);
lean_inc(x_336);
x_337 = lean_ctor_get(x_325, 2);
lean_inc(x_337);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_338 = x_325;
} else {
 lean_dec_ref(x_325);
 x_338 = lean_box(0);
}
x_339 = lean_ctor_get(x_327, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_327, 1);
lean_inc(x_340);
x_341 = lean_ctor_get(x_327, 2);
lean_inc(x_341);
x_342 = lean_ctor_get(x_327, 3);
lean_inc(x_342);
if (lean_is_exclusive(x_327)) {
 lean_ctor_release(x_327, 0);
 lean_ctor_release(x_327, 1);
 lean_ctor_release(x_327, 2);
 lean_ctor_release(x_327, 3);
 x_343 = x_327;
} else {
 lean_dec_ref(x_327);
 x_343 = lean_box(0);
}
x_344 = 1;
if (lean_is_scalar(x_343)) {
 x_345 = lean_alloc_ctor(1, 4, 1);
} else {
 x_345 = x_343;
}
lean_ctor_set(x_345, 0, x_315);
lean_ctor_set(x_345, 1, x_316);
lean_ctor_set(x_345, 2, x_317);
lean_ctor_set(x_345, 3, x_326);
lean_ctor_set_uint8(x_345, sizeof(void*)*4, x_344);
if (lean_is_scalar(x_338)) {
 x_346 = lean_alloc_ctor(1, 4, 1);
} else {
 x_346 = x_338;
}
lean_ctor_set(x_346, 0, x_339);
lean_ctor_set(x_346, 1, x_340);
lean_ctor_set(x_346, 2, x_341);
lean_ctor_set(x_346, 3, x_342);
lean_ctor_set_uint8(x_346, sizeof(void*)*4, x_344);
x_347 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_347, 0, x_345);
lean_ctor_set(x_347, 1, x_336);
lean_ctor_set(x_347, 2, x_337);
lean_ctor_set(x_347, 3, x_346);
lean_ctor_set_uint8(x_347, sizeof(void*)*4, x_335);
return x_347;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; uint8_t x_351; lean_object* x_352; lean_object* x_353; 
x_348 = lean_ctor_get(x_325, 1);
lean_inc(x_348);
x_349 = lean_ctor_get(x_325, 2);
lean_inc(x_349);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_350 = x_325;
} else {
 lean_dec_ref(x_325);
 x_350 = lean_box(0);
}
x_351 = 0;
if (lean_is_scalar(x_350)) {
 x_352 = lean_alloc_ctor(1, 4, 1);
} else {
 x_352 = x_350;
}
lean_ctor_set(x_352, 0, x_326);
lean_ctor_set(x_352, 1, x_348);
lean_ctor_set(x_352, 2, x_349);
lean_ctor_set(x_352, 3, x_327);
lean_ctor_set_uint8(x_352, sizeof(void*)*4, x_351);
x_353 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_353, 0, x_315);
lean_ctor_set(x_353, 1, x_316);
lean_ctor_set(x_353, 2, x_317);
lean_ctor_set(x_353, 3, x_352);
lean_ctor_set_uint8(x_353, sizeof(void*)*4, x_335);
return x_353;
}
}
}
else
{
uint8_t x_354; 
x_354 = lean_ctor_get_uint8(x_326, sizeof(void*)*4);
if (x_354 == 0)
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; uint8_t x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_355 = lean_ctor_get(x_325, 1);
lean_inc(x_355);
x_356 = lean_ctor_get(x_325, 2);
lean_inc(x_356);
x_357 = lean_ctor_get(x_325, 3);
lean_inc(x_357);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_358 = x_325;
} else {
 lean_dec_ref(x_325);
 x_358 = lean_box(0);
}
x_359 = lean_ctor_get(x_326, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_326, 1);
lean_inc(x_360);
x_361 = lean_ctor_get(x_326, 2);
lean_inc(x_361);
x_362 = lean_ctor_get(x_326, 3);
lean_inc(x_362);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_363 = x_326;
} else {
 lean_dec_ref(x_326);
 x_363 = lean_box(0);
}
x_364 = 1;
if (lean_is_scalar(x_363)) {
 x_365 = lean_alloc_ctor(1, 4, 1);
} else {
 x_365 = x_363;
}
lean_ctor_set(x_365, 0, x_315);
lean_ctor_set(x_365, 1, x_316);
lean_ctor_set(x_365, 2, x_317);
lean_ctor_set(x_365, 3, x_359);
lean_ctor_set_uint8(x_365, sizeof(void*)*4, x_364);
if (lean_is_scalar(x_358)) {
 x_366 = lean_alloc_ctor(1, 4, 1);
} else {
 x_366 = x_358;
}
lean_ctor_set(x_366, 0, x_362);
lean_ctor_set(x_366, 1, x_355);
lean_ctor_set(x_366, 2, x_356);
lean_ctor_set(x_366, 3, x_357);
lean_ctor_set_uint8(x_366, sizeof(void*)*4, x_364);
x_367 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_360);
lean_ctor_set(x_367, 2, x_361);
lean_ctor_set(x_367, 3, x_366);
lean_ctor_set_uint8(x_367, sizeof(void*)*4, x_354);
return x_367;
}
else
{
lean_object* x_368; 
x_368 = lean_ctor_get(x_325, 3);
lean_inc(x_368);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; lean_object* x_373; lean_object* x_374; 
x_369 = lean_ctor_get(x_325, 1);
lean_inc(x_369);
x_370 = lean_ctor_get(x_325, 2);
lean_inc(x_370);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_371 = x_325;
} else {
 lean_dec_ref(x_325);
 x_371 = lean_box(0);
}
x_372 = 0;
if (lean_is_scalar(x_371)) {
 x_373 = lean_alloc_ctor(1, 4, 1);
} else {
 x_373 = x_371;
}
lean_ctor_set(x_373, 0, x_326);
lean_ctor_set(x_373, 1, x_369);
lean_ctor_set(x_373, 2, x_370);
lean_ctor_set(x_373, 3, x_368);
lean_ctor_set_uint8(x_373, sizeof(void*)*4, x_372);
x_374 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_374, 0, x_315);
lean_ctor_set(x_374, 1, x_316);
lean_ctor_set(x_374, 2, x_317);
lean_ctor_set(x_374, 3, x_373);
lean_ctor_set_uint8(x_374, sizeof(void*)*4, x_354);
return x_374;
}
else
{
uint8_t x_375; 
x_375 = lean_ctor_get_uint8(x_368, sizeof(void*)*4);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_376 = lean_ctor_get(x_325, 1);
lean_inc(x_376);
x_377 = lean_ctor_get(x_325, 2);
lean_inc(x_377);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_378 = x_325;
} else {
 lean_dec_ref(x_325);
 x_378 = lean_box(0);
}
x_379 = lean_ctor_get(x_368, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_368, 1);
lean_inc(x_380);
x_381 = lean_ctor_get(x_368, 2);
lean_inc(x_381);
x_382 = lean_ctor_get(x_368, 3);
lean_inc(x_382);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 lean_ctor_release(x_368, 2);
 lean_ctor_release(x_368, 3);
 x_383 = x_368;
} else {
 lean_dec_ref(x_368);
 x_383 = lean_box(0);
}
lean_inc(x_326);
if (lean_is_scalar(x_383)) {
 x_384 = lean_alloc_ctor(1, 4, 1);
} else {
 x_384 = x_383;
}
lean_ctor_set(x_384, 0, x_315);
lean_ctor_set(x_384, 1, x_316);
lean_ctor_set(x_384, 2, x_317);
lean_ctor_set(x_384, 3, x_326);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_385 = x_326;
} else {
 lean_dec_ref(x_326);
 x_385 = lean_box(0);
}
lean_ctor_set_uint8(x_384, sizeof(void*)*4, x_354);
if (lean_is_scalar(x_385)) {
 x_386 = lean_alloc_ctor(1, 4, 1);
} else {
 x_386 = x_385;
}
lean_ctor_set(x_386, 0, x_379);
lean_ctor_set(x_386, 1, x_380);
lean_ctor_set(x_386, 2, x_381);
lean_ctor_set(x_386, 3, x_382);
lean_ctor_set_uint8(x_386, sizeof(void*)*4, x_354);
if (lean_is_scalar(x_378)) {
 x_387 = lean_alloc_ctor(1, 4, 1);
} else {
 x_387 = x_378;
}
lean_ctor_set(x_387, 0, x_384);
lean_ctor_set(x_387, 1, x_376);
lean_ctor_set(x_387, 2, x_377);
lean_ctor_set(x_387, 3, x_386);
lean_ctor_set_uint8(x_387, sizeof(void*)*4, x_375);
return x_387;
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; uint8_t x_397; lean_object* x_398; lean_object* x_399; 
x_388 = lean_ctor_get(x_325, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_325, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_390 = x_325;
} else {
 lean_dec_ref(x_325);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_326, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_326, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_326, 2);
lean_inc(x_393);
x_394 = lean_ctor_get(x_326, 3);
lean_inc(x_394);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_395 = x_326;
} else {
 lean_dec_ref(x_326);
 x_395 = lean_box(0);
}
if (lean_is_scalar(x_395)) {
 x_396 = lean_alloc_ctor(1, 4, 1);
} else {
 x_396 = x_395;
}
lean_ctor_set(x_396, 0, x_391);
lean_ctor_set(x_396, 1, x_392);
lean_ctor_set(x_396, 2, x_393);
lean_ctor_set(x_396, 3, x_394);
lean_ctor_set_uint8(x_396, sizeof(void*)*4, x_375);
x_397 = 0;
if (lean_is_scalar(x_390)) {
 x_398 = lean_alloc_ctor(1, 4, 1);
} else {
 x_398 = x_390;
}
lean_ctor_set(x_398, 0, x_396);
lean_ctor_set(x_398, 1, x_388);
lean_ctor_set(x_398, 2, x_389);
lean_ctor_set(x_398, 3, x_368);
lean_ctor_set_uint8(x_398, sizeof(void*)*4, x_397);
x_399 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_399, 0, x_315);
lean_ctor_set(x_399, 1, x_316);
lean_ctor_set(x_399, 2, x_317);
lean_ctor_set(x_399, 3, x_398);
lean_ctor_set_uint8(x_399, sizeof(void*)*4, x_375);
return x_399;
}
}
}
}
}
}
}
else
{
uint8_t x_400; 
x_400 = l_Std_RBNode_isRed___rarg(x_315);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; 
x_401 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_315, x_2, x_3);
x_402 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_316);
lean_ctor_set(x_402, 2, x_317);
lean_ctor_set(x_402, 3, x_318);
lean_ctor_set_uint8(x_402, sizeof(void*)*4, x_6);
return x_402;
}
else
{
lean_object* x_403; lean_object* x_404; 
x_403 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_315, x_2, x_3);
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_405; 
x_405 = lean_ctor_get(x_403, 3);
lean_inc(x_405);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; uint8_t x_409; lean_object* x_410; uint8_t x_411; lean_object* x_412; 
x_406 = lean_ctor_get(x_403, 1);
lean_inc(x_406);
x_407 = lean_ctor_get(x_403, 2);
lean_inc(x_407);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_408 = x_403;
} else {
 lean_dec_ref(x_403);
 x_408 = lean_box(0);
}
x_409 = 0;
if (lean_is_scalar(x_408)) {
 x_410 = lean_alloc_ctor(1, 4, 1);
} else {
 x_410 = x_408;
}
lean_ctor_set(x_410, 0, x_405);
lean_ctor_set(x_410, 1, x_406);
lean_ctor_set(x_410, 2, x_407);
lean_ctor_set(x_410, 3, x_405);
lean_ctor_set_uint8(x_410, sizeof(void*)*4, x_409);
x_411 = 1;
x_412 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_412, 0, x_410);
lean_ctor_set(x_412, 1, x_316);
lean_ctor_set(x_412, 2, x_317);
lean_ctor_set(x_412, 3, x_318);
lean_ctor_set_uint8(x_412, sizeof(void*)*4, x_411);
return x_412;
}
else
{
uint8_t x_413; 
x_413 = lean_ctor_get_uint8(x_405, sizeof(void*)*4);
if (x_413 == 0)
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; uint8_t x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_414 = lean_ctor_get(x_403, 1);
lean_inc(x_414);
x_415 = lean_ctor_get(x_403, 2);
lean_inc(x_415);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_416 = x_403;
} else {
 lean_dec_ref(x_403);
 x_416 = lean_box(0);
}
x_417 = lean_ctor_get(x_405, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_405, 1);
lean_inc(x_418);
x_419 = lean_ctor_get(x_405, 2);
lean_inc(x_419);
x_420 = lean_ctor_get(x_405, 3);
lean_inc(x_420);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 lean_ctor_release(x_405, 2);
 lean_ctor_release(x_405, 3);
 x_421 = x_405;
} else {
 lean_dec_ref(x_405);
 x_421 = lean_box(0);
}
x_422 = 1;
if (lean_is_scalar(x_421)) {
 x_423 = lean_alloc_ctor(1, 4, 1);
} else {
 x_423 = x_421;
}
lean_ctor_set(x_423, 0, x_404);
lean_ctor_set(x_423, 1, x_414);
lean_ctor_set(x_423, 2, x_415);
lean_ctor_set(x_423, 3, x_417);
lean_ctor_set_uint8(x_423, sizeof(void*)*4, x_422);
if (lean_is_scalar(x_416)) {
 x_424 = lean_alloc_ctor(1, 4, 1);
} else {
 x_424 = x_416;
}
lean_ctor_set(x_424, 0, x_420);
lean_ctor_set(x_424, 1, x_316);
lean_ctor_set(x_424, 2, x_317);
lean_ctor_set(x_424, 3, x_318);
lean_ctor_set_uint8(x_424, sizeof(void*)*4, x_422);
x_425 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_425, 0, x_423);
lean_ctor_set(x_425, 1, x_418);
lean_ctor_set(x_425, 2, x_419);
lean_ctor_set(x_425, 3, x_424);
lean_ctor_set_uint8(x_425, sizeof(void*)*4, x_413);
return x_425;
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; uint8_t x_429; lean_object* x_430; lean_object* x_431; 
x_426 = lean_ctor_get(x_403, 1);
lean_inc(x_426);
x_427 = lean_ctor_get(x_403, 2);
lean_inc(x_427);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_428 = x_403;
} else {
 lean_dec_ref(x_403);
 x_428 = lean_box(0);
}
x_429 = 0;
if (lean_is_scalar(x_428)) {
 x_430 = lean_alloc_ctor(1, 4, 1);
} else {
 x_430 = x_428;
}
lean_ctor_set(x_430, 0, x_404);
lean_ctor_set(x_430, 1, x_426);
lean_ctor_set(x_430, 2, x_427);
lean_ctor_set(x_430, 3, x_405);
lean_ctor_set_uint8(x_430, sizeof(void*)*4, x_429);
x_431 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_431, 0, x_430);
lean_ctor_set(x_431, 1, x_316);
lean_ctor_set(x_431, 2, x_317);
lean_ctor_set(x_431, 3, x_318);
lean_ctor_set_uint8(x_431, sizeof(void*)*4, x_413);
return x_431;
}
}
}
else
{
uint8_t x_432; 
x_432 = lean_ctor_get_uint8(x_404, sizeof(void*)*4);
if (x_432 == 0)
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; uint8_t x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_433 = lean_ctor_get(x_403, 1);
lean_inc(x_433);
x_434 = lean_ctor_get(x_403, 2);
lean_inc(x_434);
x_435 = lean_ctor_get(x_403, 3);
lean_inc(x_435);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_436 = x_403;
} else {
 lean_dec_ref(x_403);
 x_436 = lean_box(0);
}
x_437 = lean_ctor_get(x_404, 0);
lean_inc(x_437);
x_438 = lean_ctor_get(x_404, 1);
lean_inc(x_438);
x_439 = lean_ctor_get(x_404, 2);
lean_inc(x_439);
x_440 = lean_ctor_get(x_404, 3);
lean_inc(x_440);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_441 = x_404;
} else {
 lean_dec_ref(x_404);
 x_441 = lean_box(0);
}
x_442 = 1;
if (lean_is_scalar(x_441)) {
 x_443 = lean_alloc_ctor(1, 4, 1);
} else {
 x_443 = x_441;
}
lean_ctor_set(x_443, 0, x_437);
lean_ctor_set(x_443, 1, x_438);
lean_ctor_set(x_443, 2, x_439);
lean_ctor_set(x_443, 3, x_440);
lean_ctor_set_uint8(x_443, sizeof(void*)*4, x_442);
if (lean_is_scalar(x_436)) {
 x_444 = lean_alloc_ctor(1, 4, 1);
} else {
 x_444 = x_436;
}
lean_ctor_set(x_444, 0, x_435);
lean_ctor_set(x_444, 1, x_316);
lean_ctor_set(x_444, 2, x_317);
lean_ctor_set(x_444, 3, x_318);
lean_ctor_set_uint8(x_444, sizeof(void*)*4, x_442);
x_445 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_433);
lean_ctor_set(x_445, 2, x_434);
lean_ctor_set(x_445, 3, x_444);
lean_ctor_set_uint8(x_445, sizeof(void*)*4, x_432);
return x_445;
}
else
{
lean_object* x_446; 
x_446 = lean_ctor_get(x_403, 3);
lean_inc(x_446);
if (lean_obj_tag(x_446) == 0)
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; lean_object* x_451; lean_object* x_452; 
x_447 = lean_ctor_get(x_403, 1);
lean_inc(x_447);
x_448 = lean_ctor_get(x_403, 2);
lean_inc(x_448);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_449 = x_403;
} else {
 lean_dec_ref(x_403);
 x_449 = lean_box(0);
}
x_450 = 0;
if (lean_is_scalar(x_449)) {
 x_451 = lean_alloc_ctor(1, 4, 1);
} else {
 x_451 = x_449;
}
lean_ctor_set(x_451, 0, x_404);
lean_ctor_set(x_451, 1, x_447);
lean_ctor_set(x_451, 2, x_448);
lean_ctor_set(x_451, 3, x_446);
lean_ctor_set_uint8(x_451, sizeof(void*)*4, x_450);
x_452 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_452, 0, x_451);
lean_ctor_set(x_452, 1, x_316);
lean_ctor_set(x_452, 2, x_317);
lean_ctor_set(x_452, 3, x_318);
lean_ctor_set_uint8(x_452, sizeof(void*)*4, x_432);
return x_452;
}
else
{
uint8_t x_453; 
x_453 = lean_ctor_get_uint8(x_446, sizeof(void*)*4);
if (x_453 == 0)
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
x_454 = lean_ctor_get(x_403, 1);
lean_inc(x_454);
x_455 = lean_ctor_get(x_403, 2);
lean_inc(x_455);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_456 = x_403;
} else {
 lean_dec_ref(x_403);
 x_456 = lean_box(0);
}
x_457 = lean_ctor_get(x_446, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_446, 1);
lean_inc(x_458);
x_459 = lean_ctor_get(x_446, 2);
lean_inc(x_459);
x_460 = lean_ctor_get(x_446, 3);
lean_inc(x_460);
if (lean_is_exclusive(x_446)) {
 lean_ctor_release(x_446, 0);
 lean_ctor_release(x_446, 1);
 lean_ctor_release(x_446, 2);
 lean_ctor_release(x_446, 3);
 x_461 = x_446;
} else {
 lean_dec_ref(x_446);
 x_461 = lean_box(0);
}
lean_inc(x_404);
if (lean_is_scalar(x_461)) {
 x_462 = lean_alloc_ctor(1, 4, 1);
} else {
 x_462 = x_461;
}
lean_ctor_set(x_462, 0, x_404);
lean_ctor_set(x_462, 1, x_454);
lean_ctor_set(x_462, 2, x_455);
lean_ctor_set(x_462, 3, x_457);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_463 = x_404;
} else {
 lean_dec_ref(x_404);
 x_463 = lean_box(0);
}
lean_ctor_set_uint8(x_462, sizeof(void*)*4, x_432);
if (lean_is_scalar(x_463)) {
 x_464 = lean_alloc_ctor(1, 4, 1);
} else {
 x_464 = x_463;
}
lean_ctor_set(x_464, 0, x_460);
lean_ctor_set(x_464, 1, x_316);
lean_ctor_set(x_464, 2, x_317);
lean_ctor_set(x_464, 3, x_318);
lean_ctor_set_uint8(x_464, sizeof(void*)*4, x_432);
if (lean_is_scalar(x_456)) {
 x_465 = lean_alloc_ctor(1, 4, 1);
} else {
 x_465 = x_456;
}
lean_ctor_set(x_465, 0, x_462);
lean_ctor_set(x_465, 1, x_458);
lean_ctor_set(x_465, 2, x_459);
lean_ctor_set(x_465, 3, x_464);
lean_ctor_set_uint8(x_465, sizeof(void*)*4, x_453);
return x_465;
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; lean_object* x_476; lean_object* x_477; 
x_466 = lean_ctor_get(x_403, 1);
lean_inc(x_466);
x_467 = lean_ctor_get(x_403, 2);
lean_inc(x_467);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_468 = x_403;
} else {
 lean_dec_ref(x_403);
 x_468 = lean_box(0);
}
x_469 = lean_ctor_get(x_404, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_404, 1);
lean_inc(x_470);
x_471 = lean_ctor_get(x_404, 2);
lean_inc(x_471);
x_472 = lean_ctor_get(x_404, 3);
lean_inc(x_472);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_473 = x_404;
} else {
 lean_dec_ref(x_404);
 x_473 = lean_box(0);
}
if (lean_is_scalar(x_473)) {
 x_474 = lean_alloc_ctor(1, 4, 1);
} else {
 x_474 = x_473;
}
lean_ctor_set(x_474, 0, x_469);
lean_ctor_set(x_474, 1, x_470);
lean_ctor_set(x_474, 2, x_471);
lean_ctor_set(x_474, 3, x_472);
lean_ctor_set_uint8(x_474, sizeof(void*)*4, x_453);
x_475 = 0;
if (lean_is_scalar(x_468)) {
 x_476 = lean_alloc_ctor(1, 4, 1);
} else {
 x_476 = x_468;
}
lean_ctor_set(x_476, 0, x_474);
lean_ctor_set(x_476, 1, x_466);
lean_ctor_set(x_476, 2, x_467);
lean_ctor_set(x_476, 3, x_446);
lean_ctor_set_uint8(x_476, sizeof(void*)*4, x_475);
x_477 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_477, 0, x_476);
lean_ctor_set(x_477, 1, x_316);
lean_ctor_set(x_477, 2, x_317);
lean_ctor_set(x_477, 3, x_318);
lean_ctor_set_uint8(x_477, sizeof(void*)*4, x_453);
return x_477;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Std_RBNode_isRed___rarg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__3___rarg(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__4___rarg(x_1, x_2, x_3);
x_7 = l_Std_RBNode_setBlack___rarg(x_6);
return x_7;
}
}
}
lean_object* l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*4, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = l_Lean_Name_quickLt(x_2, x_9);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = l_Lean_Name_quickLt(x_9, x_2);
if (x_13 == 0)
{
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_14; 
x_14 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_11, x_2, x_3);
lean_ctor_set(x_1, 3, x_14);
return x_1;
}
}
else
{
lean_object* x_15; 
x_15 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_8, x_2, x_3);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
x_18 = lean_ctor_get(x_1, 2);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_1);
x_20 = l_Lean_Name_quickLt(x_2, x_17);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = l_Lean_Name_quickLt(x_17, x_2);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_17);
x_22 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_3);
lean_ctor_set(x_22, 3, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*4, x_6);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_19, x_2, x_3);
x_24 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_17);
lean_ctor_set(x_24, 2, x_18);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*4, x_6);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_16, x_2, x_3);
x_26 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_17);
lean_ctor_set(x_26, 2, x_18);
lean_ctor_set(x_26, 3, x_19);
lean_ctor_set_uint8(x_26, sizeof(void*)*4, x_6);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_1);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_ctor_get(x_1, 2);
x_31 = lean_ctor_get(x_1, 3);
x_32 = l_Lean_Name_quickLt(x_2, x_29);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = l_Lean_Name_quickLt(x_29, x_2);
if (x_33 == 0)
{
lean_dec(x_30);
lean_dec(x_29);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
uint8_t x_34; 
x_34 = l_Std_RBNode_isRed___rarg(x_31);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_31, x_2, x_3);
lean_ctor_set(x_1, 3, x_35);
return x_1;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_31, x_2, x_3);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 3);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_36, 3);
lean_dec(x_40);
x_41 = lean_ctor_get(x_36, 0);
lean_dec(x_41);
x_42 = 0;
lean_ctor_set(x_36, 0, x_38);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_42);
x_43 = 1;
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_43);
return x_1;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; uint8_t x_48; 
x_44 = lean_ctor_get(x_36, 1);
x_45 = lean_ctor_get(x_36, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = 0;
x_47 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_47, 0, x_38);
lean_ctor_set(x_47, 1, x_44);
lean_ctor_set(x_47, 2, x_45);
lean_ctor_set(x_47, 3, x_38);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_46);
x_48 = 1;
lean_ctor_set(x_1, 3, x_47);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_48);
return x_1;
}
}
else
{
uint8_t x_49; 
x_49 = lean_ctor_get_uint8(x_38, sizeof(void*)*4);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_36);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_36, 1);
x_52 = lean_ctor_get(x_36, 2);
x_53 = lean_ctor_get(x_36, 3);
lean_dec(x_53);
x_54 = lean_ctor_get(x_36, 0);
lean_dec(x_54);
x_55 = !lean_is_exclusive(x_38);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_38, 0);
x_57 = lean_ctor_get(x_38, 1);
x_58 = lean_ctor_get(x_38, 2);
x_59 = lean_ctor_get(x_38, 3);
x_60 = 1;
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_38, 2, x_30);
lean_ctor_set(x_38, 1, x_29);
lean_ctor_set(x_38, 0, x_28);
lean_ctor_set_uint8(x_38, sizeof(void*)*4, x_60);
lean_ctor_set(x_36, 3, x_59);
lean_ctor_set(x_36, 2, x_58);
lean_ctor_set(x_36, 1, x_57);
lean_ctor_set(x_36, 0, x_56);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_60);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_52);
lean_ctor_set(x_1, 1, x_51);
lean_ctor_set(x_1, 0, x_38);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_38, 0);
x_62 = lean_ctor_get(x_38, 1);
x_63 = lean_ctor_get(x_38, 2);
x_64 = lean_ctor_get(x_38, 3);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_38);
x_65 = 1;
x_66 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_66, 0, x_28);
lean_ctor_set(x_66, 1, x_29);
lean_ctor_set(x_66, 2, x_30);
lean_ctor_set(x_66, 3, x_37);
lean_ctor_set_uint8(x_66, sizeof(void*)*4, x_65);
lean_ctor_set(x_36, 3, x_64);
lean_ctor_set(x_36, 2, x_63);
lean_ctor_set(x_36, 1, x_62);
lean_ctor_set(x_36, 0, x_61);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_65);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_52);
lean_ctor_set(x_1, 1, x_51);
lean_ctor_set(x_1, 0, x_66);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; 
x_67 = lean_ctor_get(x_36, 1);
x_68 = lean_ctor_get(x_36, 2);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_36);
x_69 = lean_ctor_get(x_38, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_38, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_38, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_38, 3);
lean_inc(x_72);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 x_73 = x_38;
} else {
 lean_dec_ref(x_38);
 x_73 = lean_box(0);
}
x_74 = 1;
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(1, 4, 1);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_28);
lean_ctor_set(x_75, 1, x_29);
lean_ctor_set(x_75, 2, x_30);
lean_ctor_set(x_75, 3, x_37);
lean_ctor_set_uint8(x_75, sizeof(void*)*4, x_74);
x_76 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_76, 0, x_69);
lean_ctor_set(x_76, 1, x_70);
lean_ctor_set(x_76, 2, x_71);
lean_ctor_set(x_76, 3, x_72);
lean_ctor_set_uint8(x_76, sizeof(void*)*4, x_74);
lean_ctor_set(x_1, 3, x_76);
lean_ctor_set(x_1, 2, x_68);
lean_ctor_set(x_1, 1, x_67);
lean_ctor_set(x_1, 0, x_75);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_36);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_36, 3);
lean_dec(x_78);
x_79 = lean_ctor_get(x_36, 0);
lean_dec(x_79);
x_80 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_80);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_36, 1);
x_82 = lean_ctor_get(x_36, 2);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_36);
x_83 = 0;
x_84 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_84, 0, x_37);
lean_ctor_set(x_84, 1, x_81);
lean_ctor_set(x_84, 2, x_82);
lean_ctor_set(x_84, 3, x_38);
lean_ctor_set_uint8(x_84, sizeof(void*)*4, x_83);
lean_ctor_set(x_1, 3, x_84);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
}
}
else
{
uint8_t x_85; 
x_85 = lean_ctor_get_uint8(x_37, sizeof(void*)*4);
if (x_85 == 0)
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_36);
if (x_86 == 0)
{
lean_object* x_87; uint8_t x_88; 
x_87 = lean_ctor_get(x_36, 0);
lean_dec(x_87);
x_88 = !lean_is_exclusive(x_37);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_37, 0);
x_90 = lean_ctor_get(x_37, 1);
x_91 = lean_ctor_get(x_37, 2);
x_92 = lean_ctor_get(x_37, 3);
x_93 = 1;
lean_ctor_set(x_37, 3, x_89);
lean_ctor_set(x_37, 2, x_30);
lean_ctor_set(x_37, 1, x_29);
lean_ctor_set(x_37, 0, x_28);
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_93);
lean_ctor_set(x_36, 0, x_92);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_93);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_91);
lean_ctor_set(x_1, 1, x_90);
lean_ctor_set(x_1, 0, x_37);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; 
x_94 = lean_ctor_get(x_37, 0);
x_95 = lean_ctor_get(x_37, 1);
x_96 = lean_ctor_get(x_37, 2);
x_97 = lean_ctor_get(x_37, 3);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_37);
x_98 = 1;
x_99 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_99, 0, x_28);
lean_ctor_set(x_99, 1, x_29);
lean_ctor_set(x_99, 2, x_30);
lean_ctor_set(x_99, 3, x_94);
lean_ctor_set_uint8(x_99, sizeof(void*)*4, x_98);
lean_ctor_set(x_36, 0, x_97);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_98);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_96);
lean_ctor_set(x_1, 1, x_95);
lean_ctor_set(x_1, 0, x_99);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; lean_object* x_110; 
x_100 = lean_ctor_get(x_36, 1);
x_101 = lean_ctor_get(x_36, 2);
x_102 = lean_ctor_get(x_36, 3);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_36);
x_103 = lean_ctor_get(x_37, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_37, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_37, 2);
lean_inc(x_105);
x_106 = lean_ctor_get(x_37, 3);
lean_inc(x_106);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_107 = x_37;
} else {
 lean_dec_ref(x_37);
 x_107 = lean_box(0);
}
x_108 = 1;
if (lean_is_scalar(x_107)) {
 x_109 = lean_alloc_ctor(1, 4, 1);
} else {
 x_109 = x_107;
}
lean_ctor_set(x_109, 0, x_28);
lean_ctor_set(x_109, 1, x_29);
lean_ctor_set(x_109, 2, x_30);
lean_ctor_set(x_109, 3, x_103);
lean_ctor_set_uint8(x_109, sizeof(void*)*4, x_108);
x_110 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_110, 0, x_106);
lean_ctor_set(x_110, 1, x_100);
lean_ctor_set(x_110, 2, x_101);
lean_ctor_set(x_110, 3, x_102);
lean_ctor_set_uint8(x_110, sizeof(void*)*4, x_108);
lean_ctor_set(x_1, 3, x_110);
lean_ctor_set(x_1, 2, x_105);
lean_ctor_set(x_1, 1, x_104);
lean_ctor_set(x_1, 0, x_109);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_36, 3);
lean_inc(x_111);
if (lean_obj_tag(x_111) == 0)
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_36);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_113 = lean_ctor_get(x_36, 3);
lean_dec(x_113);
x_114 = lean_ctor_get(x_36, 0);
lean_dec(x_114);
x_115 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_115);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; 
x_116 = lean_ctor_get(x_36, 1);
x_117 = lean_ctor_get(x_36, 2);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_36);
x_118 = 0;
x_119 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_119, 0, x_37);
lean_ctor_set(x_119, 1, x_116);
lean_ctor_set(x_119, 2, x_117);
lean_ctor_set(x_119, 3, x_111);
lean_ctor_set_uint8(x_119, sizeof(void*)*4, x_118);
lean_ctor_set(x_1, 3, x_119);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
uint8_t x_120; 
x_120 = lean_ctor_get_uint8(x_111, sizeof(void*)*4);
if (x_120 == 0)
{
uint8_t x_121; 
lean_free_object(x_1);
x_121 = !lean_is_exclusive(x_36);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_122 = lean_ctor_get(x_36, 3);
lean_dec(x_122);
x_123 = lean_ctor_get(x_36, 0);
lean_dec(x_123);
x_124 = !lean_is_exclusive(x_111);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_125 = lean_ctor_get(x_111, 0);
x_126 = lean_ctor_get(x_111, 1);
x_127 = lean_ctor_get(x_111, 2);
x_128 = lean_ctor_get(x_111, 3);
lean_inc(x_37);
lean_ctor_set(x_111, 3, x_37);
lean_ctor_set(x_111, 2, x_30);
lean_ctor_set(x_111, 1, x_29);
lean_ctor_set(x_111, 0, x_28);
x_129 = !lean_is_exclusive(x_37);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_37, 3);
lean_dec(x_130);
x_131 = lean_ctor_get(x_37, 2);
lean_dec(x_131);
x_132 = lean_ctor_get(x_37, 1);
lean_dec(x_132);
x_133 = lean_ctor_get(x_37, 0);
lean_dec(x_133);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_85);
lean_ctor_set(x_37, 3, x_128);
lean_ctor_set(x_37, 2, x_127);
lean_ctor_set(x_37, 1, x_126);
lean_ctor_set(x_37, 0, x_125);
lean_ctor_set(x_36, 3, x_37);
lean_ctor_set(x_36, 0, x_111);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
else
{
lean_object* x_134; 
lean_dec(x_37);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_85);
x_134 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_134, 0, x_125);
lean_ctor_set(x_134, 1, x_126);
lean_ctor_set(x_134, 2, x_127);
lean_ctor_set(x_134, 3, x_128);
lean_ctor_set_uint8(x_134, sizeof(void*)*4, x_85);
lean_ctor_set(x_36, 3, x_134);
lean_ctor_set(x_36, 0, x_111);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_135 = lean_ctor_get(x_111, 0);
x_136 = lean_ctor_get(x_111, 1);
x_137 = lean_ctor_get(x_111, 2);
x_138 = lean_ctor_get(x_111, 3);
lean_inc(x_138);
lean_inc(x_137);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_111);
lean_inc(x_37);
x_139 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_139, 0, x_28);
lean_ctor_set(x_139, 1, x_29);
lean_ctor_set(x_139, 2, x_30);
lean_ctor_set(x_139, 3, x_37);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_140 = x_37;
} else {
 lean_dec_ref(x_37);
 x_140 = lean_box(0);
}
lean_ctor_set_uint8(x_139, sizeof(void*)*4, x_85);
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 4, 1);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_135);
lean_ctor_set(x_141, 1, x_136);
lean_ctor_set(x_141, 2, x_137);
lean_ctor_set(x_141, 3, x_138);
lean_ctor_set_uint8(x_141, sizeof(void*)*4, x_85);
lean_ctor_set(x_36, 3, x_141);
lean_ctor_set(x_36, 0, x_139);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_142 = lean_ctor_get(x_36, 1);
x_143 = lean_ctor_get(x_36, 2);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_36);
x_144 = lean_ctor_get(x_111, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_111, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_111, 2);
lean_inc(x_146);
x_147 = lean_ctor_get(x_111, 3);
lean_inc(x_147);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 lean_ctor_release(x_111, 2);
 lean_ctor_release(x_111, 3);
 x_148 = x_111;
} else {
 lean_dec_ref(x_111);
 x_148 = lean_box(0);
}
lean_inc(x_37);
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 4, 1);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_28);
lean_ctor_set(x_149, 1, x_29);
lean_ctor_set(x_149, 2, x_30);
lean_ctor_set(x_149, 3, x_37);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_150 = x_37;
} else {
 lean_dec_ref(x_37);
 x_150 = lean_box(0);
}
lean_ctor_set_uint8(x_149, sizeof(void*)*4, x_85);
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(1, 4, 1);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_144);
lean_ctor_set(x_151, 1, x_145);
lean_ctor_set(x_151, 2, x_146);
lean_ctor_set(x_151, 3, x_147);
lean_ctor_set_uint8(x_151, sizeof(void*)*4, x_85);
x_152 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_142);
lean_ctor_set(x_152, 2, x_143);
lean_ctor_set(x_152, 3, x_151);
lean_ctor_set_uint8(x_152, sizeof(void*)*4, x_120);
return x_152;
}
}
else
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_36);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_154 = lean_ctor_get(x_36, 3);
lean_dec(x_154);
x_155 = lean_ctor_get(x_36, 0);
lean_dec(x_155);
x_156 = !lean_is_exclusive(x_37);
if (x_156 == 0)
{
uint8_t x_157; 
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_120);
x_157 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_157);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_158 = lean_ctor_get(x_37, 0);
x_159 = lean_ctor_get(x_37, 1);
x_160 = lean_ctor_get(x_37, 2);
x_161 = lean_ctor_get(x_37, 3);
lean_inc(x_161);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_37);
x_162 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_162, 0, x_158);
lean_ctor_set(x_162, 1, x_159);
lean_ctor_set(x_162, 2, x_160);
lean_ctor_set(x_162, 3, x_161);
lean_ctor_set_uint8(x_162, sizeof(void*)*4, x_120);
x_163 = 0;
lean_ctor_set(x_36, 0, x_162);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_163);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; 
x_164 = lean_ctor_get(x_36, 1);
x_165 = lean_ctor_get(x_36, 2);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_36);
x_166 = lean_ctor_get(x_37, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_37, 1);
lean_inc(x_167);
x_168 = lean_ctor_get(x_37, 2);
lean_inc(x_168);
x_169 = lean_ctor_get(x_37, 3);
lean_inc(x_169);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_170 = x_37;
} else {
 lean_dec_ref(x_37);
 x_170 = lean_box(0);
}
if (lean_is_scalar(x_170)) {
 x_171 = lean_alloc_ctor(1, 4, 1);
} else {
 x_171 = x_170;
}
lean_ctor_set(x_171, 0, x_166);
lean_ctor_set(x_171, 1, x_167);
lean_ctor_set(x_171, 2, x_168);
lean_ctor_set(x_171, 3, x_169);
lean_ctor_set_uint8(x_171, sizeof(void*)*4, x_120);
x_172 = 0;
x_173 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_164);
lean_ctor_set(x_173, 2, x_165);
lean_ctor_set(x_173, 3, x_111);
lean_ctor_set_uint8(x_173, sizeof(void*)*4, x_172);
lean_ctor_set(x_1, 3, x_173);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
}
}
}
}
}
}
else
{
uint8_t x_174; 
x_174 = l_Std_RBNode_isRed___rarg(x_28);
if (x_174 == 0)
{
lean_object* x_175; 
x_175 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_28, x_2, x_3);
lean_ctor_set(x_1, 0, x_175);
return x_1;
}
else
{
lean_object* x_176; lean_object* x_177; 
x_176 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_28, x_2, x_3);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; 
x_178 = lean_ctor_get(x_176, 3);
lean_inc(x_178);
if (lean_obj_tag(x_178) == 0)
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_176);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; uint8_t x_183; 
x_180 = lean_ctor_get(x_176, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_176, 0);
lean_dec(x_181);
x_182 = 0;
lean_ctor_set(x_176, 0, x_178);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_182);
x_183 = 1;
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_183);
return x_1;
}
else
{
lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; uint8_t x_188; 
x_184 = lean_ctor_get(x_176, 1);
x_185 = lean_ctor_get(x_176, 2);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_176);
x_186 = 0;
x_187 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_187, 0, x_178);
lean_ctor_set(x_187, 1, x_184);
lean_ctor_set(x_187, 2, x_185);
lean_ctor_set(x_187, 3, x_178);
lean_ctor_set_uint8(x_187, sizeof(void*)*4, x_186);
x_188 = 1;
lean_ctor_set(x_1, 0, x_187);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_188);
return x_1;
}
}
else
{
uint8_t x_189; 
x_189 = lean_ctor_get_uint8(x_178, sizeof(void*)*4);
if (x_189 == 0)
{
uint8_t x_190; 
x_190 = !lean_is_exclusive(x_176);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_191 = lean_ctor_get(x_176, 1);
x_192 = lean_ctor_get(x_176, 2);
x_193 = lean_ctor_get(x_176, 3);
lean_dec(x_193);
x_194 = lean_ctor_get(x_176, 0);
lean_dec(x_194);
x_195 = !lean_is_exclusive(x_178);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_196 = lean_ctor_get(x_178, 0);
x_197 = lean_ctor_get(x_178, 1);
x_198 = lean_ctor_get(x_178, 2);
x_199 = lean_ctor_get(x_178, 3);
x_200 = 1;
lean_ctor_set(x_178, 3, x_196);
lean_ctor_set(x_178, 2, x_192);
lean_ctor_set(x_178, 1, x_191);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set_uint8(x_178, sizeof(void*)*4, x_200);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_199);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_200);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_198);
lean_ctor_set(x_1, 1, x_197);
lean_ctor_set(x_1, 0, x_178);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; lean_object* x_206; 
x_201 = lean_ctor_get(x_178, 0);
x_202 = lean_ctor_get(x_178, 1);
x_203 = lean_ctor_get(x_178, 2);
x_204 = lean_ctor_get(x_178, 3);
lean_inc(x_204);
lean_inc(x_203);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_178);
x_205 = 1;
x_206 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_206, 0, x_177);
lean_ctor_set(x_206, 1, x_191);
lean_ctor_set(x_206, 2, x_192);
lean_ctor_set(x_206, 3, x_201);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_205);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_204);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_205);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_203);
lean_ctor_set(x_1, 1, x_202);
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; lean_object* x_215; lean_object* x_216; 
x_207 = lean_ctor_get(x_176, 1);
x_208 = lean_ctor_get(x_176, 2);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_176);
x_209 = lean_ctor_get(x_178, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_178, 1);
lean_inc(x_210);
x_211 = lean_ctor_get(x_178, 2);
lean_inc(x_211);
x_212 = lean_ctor_get(x_178, 3);
lean_inc(x_212);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 lean_ctor_release(x_178, 2);
 lean_ctor_release(x_178, 3);
 x_213 = x_178;
} else {
 lean_dec_ref(x_178);
 x_213 = lean_box(0);
}
x_214 = 1;
if (lean_is_scalar(x_213)) {
 x_215 = lean_alloc_ctor(1, 4, 1);
} else {
 x_215 = x_213;
}
lean_ctor_set(x_215, 0, x_177);
lean_ctor_set(x_215, 1, x_207);
lean_ctor_set(x_215, 2, x_208);
lean_ctor_set(x_215, 3, x_209);
lean_ctor_set_uint8(x_215, sizeof(void*)*4, x_214);
x_216 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_216, 0, x_212);
lean_ctor_set(x_216, 1, x_29);
lean_ctor_set(x_216, 2, x_30);
lean_ctor_set(x_216, 3, x_31);
lean_ctor_set_uint8(x_216, sizeof(void*)*4, x_214);
lean_ctor_set(x_1, 3, x_216);
lean_ctor_set(x_1, 2, x_211);
lean_ctor_set(x_1, 1, x_210);
lean_ctor_set(x_1, 0, x_215);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
uint8_t x_217; 
x_217 = !lean_is_exclusive(x_176);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_218 = lean_ctor_get(x_176, 3);
lean_dec(x_218);
x_219 = lean_ctor_get(x_176, 0);
lean_dec(x_219);
x_220 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_220);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; lean_object* x_224; 
x_221 = lean_ctor_get(x_176, 1);
x_222 = lean_ctor_get(x_176, 2);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_176);
x_223 = 0;
x_224 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_224, 0, x_177);
lean_ctor_set(x_224, 1, x_221);
lean_ctor_set(x_224, 2, x_222);
lean_ctor_set(x_224, 3, x_178);
lean_ctor_set_uint8(x_224, sizeof(void*)*4, x_223);
lean_ctor_set(x_1, 0, x_224);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
}
}
else
{
uint8_t x_225; 
x_225 = lean_ctor_get_uint8(x_177, sizeof(void*)*4);
if (x_225 == 0)
{
uint8_t x_226; 
x_226 = !lean_is_exclusive(x_176);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_227 = lean_ctor_get(x_176, 1);
x_228 = lean_ctor_get(x_176, 2);
x_229 = lean_ctor_get(x_176, 3);
x_230 = lean_ctor_get(x_176, 0);
lean_dec(x_230);
x_231 = !lean_is_exclusive(x_177);
if (x_231 == 0)
{
uint8_t x_232; 
x_232 = 1;
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_232);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_229);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_232);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_177);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; lean_object* x_238; 
x_233 = lean_ctor_get(x_177, 0);
x_234 = lean_ctor_get(x_177, 1);
x_235 = lean_ctor_get(x_177, 2);
x_236 = lean_ctor_get(x_177, 3);
lean_inc(x_236);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_177);
x_237 = 1;
x_238 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_238, 0, x_233);
lean_ctor_set(x_238, 1, x_234);
lean_ctor_set(x_238, 2, x_235);
lean_ctor_set(x_238, 3, x_236);
lean_ctor_set_uint8(x_238, sizeof(void*)*4, x_237);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_229);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_237);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_238);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; uint8_t x_247; lean_object* x_248; lean_object* x_249; 
x_239 = lean_ctor_get(x_176, 1);
x_240 = lean_ctor_get(x_176, 2);
x_241 = lean_ctor_get(x_176, 3);
lean_inc(x_241);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_176);
x_242 = lean_ctor_get(x_177, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_177, 1);
lean_inc(x_243);
x_244 = lean_ctor_get(x_177, 2);
lean_inc(x_244);
x_245 = lean_ctor_get(x_177, 3);
lean_inc(x_245);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_246 = x_177;
} else {
 lean_dec_ref(x_177);
 x_246 = lean_box(0);
}
x_247 = 1;
if (lean_is_scalar(x_246)) {
 x_248 = lean_alloc_ctor(1, 4, 1);
} else {
 x_248 = x_246;
}
lean_ctor_set(x_248, 0, x_242);
lean_ctor_set(x_248, 1, x_243);
lean_ctor_set(x_248, 2, x_244);
lean_ctor_set(x_248, 3, x_245);
lean_ctor_set_uint8(x_248, sizeof(void*)*4, x_247);
x_249 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_249, 0, x_241);
lean_ctor_set(x_249, 1, x_29);
lean_ctor_set(x_249, 2, x_30);
lean_ctor_set(x_249, 3, x_31);
lean_ctor_set_uint8(x_249, sizeof(void*)*4, x_247);
lean_ctor_set(x_1, 3, x_249);
lean_ctor_set(x_1, 2, x_240);
lean_ctor_set(x_1, 1, x_239);
lean_ctor_set(x_1, 0, x_248);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
lean_object* x_250; 
x_250 = lean_ctor_get(x_176, 3);
lean_inc(x_250);
if (lean_obj_tag(x_250) == 0)
{
uint8_t x_251; 
x_251 = !lean_is_exclusive(x_176);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; uint8_t x_254; 
x_252 = lean_ctor_get(x_176, 3);
lean_dec(x_252);
x_253 = lean_ctor_get(x_176, 0);
lean_dec(x_253);
x_254 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_254);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; 
x_255 = lean_ctor_get(x_176, 1);
x_256 = lean_ctor_get(x_176, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_176);
x_257 = 0;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_177);
lean_ctor_set(x_258, 1, x_255);
lean_ctor_set(x_258, 2, x_256);
lean_ctor_set(x_258, 3, x_250);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
uint8_t x_259; 
x_259 = lean_ctor_get_uint8(x_250, sizeof(void*)*4);
if (x_259 == 0)
{
uint8_t x_260; 
lean_free_object(x_1);
x_260 = !lean_is_exclusive(x_176);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; uint8_t x_265; 
x_261 = lean_ctor_get(x_176, 1);
x_262 = lean_ctor_get(x_176, 2);
x_263 = lean_ctor_get(x_176, 3);
lean_dec(x_263);
x_264 = lean_ctor_get(x_176, 0);
lean_dec(x_264);
x_265 = !lean_is_exclusive(x_250);
if (x_265 == 0)
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; uint8_t x_270; 
x_266 = lean_ctor_get(x_250, 0);
x_267 = lean_ctor_get(x_250, 1);
x_268 = lean_ctor_get(x_250, 2);
x_269 = lean_ctor_get(x_250, 3);
lean_inc(x_177);
lean_ctor_set(x_250, 3, x_266);
lean_ctor_set(x_250, 2, x_262);
lean_ctor_set(x_250, 1, x_261);
lean_ctor_set(x_250, 0, x_177);
x_270 = !lean_is_exclusive(x_177);
if (x_270 == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_177, 3);
lean_dec(x_271);
x_272 = lean_ctor_get(x_177, 2);
lean_dec(x_272);
x_273 = lean_ctor_get(x_177, 1);
lean_dec(x_273);
x_274 = lean_ctor_get(x_177, 0);
lean_dec(x_274);
lean_ctor_set_uint8(x_250, sizeof(void*)*4, x_225);
lean_ctor_set(x_177, 3, x_31);
lean_ctor_set(x_177, 2, x_30);
lean_ctor_set(x_177, 1, x_29);
lean_ctor_set(x_177, 0, x_269);
lean_ctor_set(x_176, 3, x_177);
lean_ctor_set(x_176, 2, x_268);
lean_ctor_set(x_176, 1, x_267);
lean_ctor_set(x_176, 0, x_250);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
else
{
lean_object* x_275; 
lean_dec(x_177);
lean_ctor_set_uint8(x_250, sizeof(void*)*4, x_225);
x_275 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_275, 0, x_269);
lean_ctor_set(x_275, 1, x_29);
lean_ctor_set(x_275, 2, x_30);
lean_ctor_set(x_275, 3, x_31);
lean_ctor_set_uint8(x_275, sizeof(void*)*4, x_225);
lean_ctor_set(x_176, 3, x_275);
lean_ctor_set(x_176, 2, x_268);
lean_ctor_set(x_176, 1, x_267);
lean_ctor_set(x_176, 0, x_250);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_276 = lean_ctor_get(x_250, 0);
x_277 = lean_ctor_get(x_250, 1);
x_278 = lean_ctor_get(x_250, 2);
x_279 = lean_ctor_get(x_250, 3);
lean_inc(x_279);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_250);
lean_inc(x_177);
x_280 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_280, 0, x_177);
lean_ctor_set(x_280, 1, x_261);
lean_ctor_set(x_280, 2, x_262);
lean_ctor_set(x_280, 3, x_276);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_281 = x_177;
} else {
 lean_dec_ref(x_177);
 x_281 = lean_box(0);
}
lean_ctor_set_uint8(x_280, sizeof(void*)*4, x_225);
if (lean_is_scalar(x_281)) {
 x_282 = lean_alloc_ctor(1, 4, 1);
} else {
 x_282 = x_281;
}
lean_ctor_set(x_282, 0, x_279);
lean_ctor_set(x_282, 1, x_29);
lean_ctor_set(x_282, 2, x_30);
lean_ctor_set(x_282, 3, x_31);
lean_ctor_set_uint8(x_282, sizeof(void*)*4, x_225);
lean_ctor_set(x_176, 3, x_282);
lean_ctor_set(x_176, 2, x_278);
lean_ctor_set(x_176, 1, x_277);
lean_ctor_set(x_176, 0, x_280);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_283 = lean_ctor_get(x_176, 1);
x_284 = lean_ctor_get(x_176, 2);
lean_inc(x_284);
lean_inc(x_283);
lean_dec(x_176);
x_285 = lean_ctor_get(x_250, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_250, 1);
lean_inc(x_286);
x_287 = lean_ctor_get(x_250, 2);
lean_inc(x_287);
x_288 = lean_ctor_get(x_250, 3);
lean_inc(x_288);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 lean_ctor_release(x_250, 2);
 lean_ctor_release(x_250, 3);
 x_289 = x_250;
} else {
 lean_dec_ref(x_250);
 x_289 = lean_box(0);
}
lean_inc(x_177);
if (lean_is_scalar(x_289)) {
 x_290 = lean_alloc_ctor(1, 4, 1);
} else {
 x_290 = x_289;
}
lean_ctor_set(x_290, 0, x_177);
lean_ctor_set(x_290, 1, x_283);
lean_ctor_set(x_290, 2, x_284);
lean_ctor_set(x_290, 3, x_285);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_291 = x_177;
} else {
 lean_dec_ref(x_177);
 x_291 = lean_box(0);
}
lean_ctor_set_uint8(x_290, sizeof(void*)*4, x_225);
if (lean_is_scalar(x_291)) {
 x_292 = lean_alloc_ctor(1, 4, 1);
} else {
 x_292 = x_291;
}
lean_ctor_set(x_292, 0, x_288);
lean_ctor_set(x_292, 1, x_29);
lean_ctor_set(x_292, 2, x_30);
lean_ctor_set(x_292, 3, x_31);
lean_ctor_set_uint8(x_292, sizeof(void*)*4, x_225);
x_293 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_293, 0, x_290);
lean_ctor_set(x_293, 1, x_286);
lean_ctor_set(x_293, 2, x_287);
lean_ctor_set(x_293, 3, x_292);
lean_ctor_set_uint8(x_293, sizeof(void*)*4, x_259);
return x_293;
}
}
else
{
uint8_t x_294; 
x_294 = !lean_is_exclusive(x_176);
if (x_294 == 0)
{
lean_object* x_295; lean_object* x_296; uint8_t x_297; 
x_295 = lean_ctor_get(x_176, 3);
lean_dec(x_295);
x_296 = lean_ctor_get(x_176, 0);
lean_dec(x_296);
x_297 = !lean_is_exclusive(x_177);
if (x_297 == 0)
{
uint8_t x_298; 
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_259);
x_298 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_298);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; uint8_t x_304; 
x_299 = lean_ctor_get(x_177, 0);
x_300 = lean_ctor_get(x_177, 1);
x_301 = lean_ctor_get(x_177, 2);
x_302 = lean_ctor_get(x_177, 3);
lean_inc(x_302);
lean_inc(x_301);
lean_inc(x_300);
lean_inc(x_299);
lean_dec(x_177);
x_303 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_303, 0, x_299);
lean_ctor_set(x_303, 1, x_300);
lean_ctor_set(x_303, 2, x_301);
lean_ctor_set(x_303, 3, x_302);
lean_ctor_set_uint8(x_303, sizeof(void*)*4, x_259);
x_304 = 0;
lean_ctor_set(x_176, 0, x_303);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_304);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; lean_object* x_314; 
x_305 = lean_ctor_get(x_176, 1);
x_306 = lean_ctor_get(x_176, 2);
lean_inc(x_306);
lean_inc(x_305);
lean_dec(x_176);
x_307 = lean_ctor_get(x_177, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_177, 1);
lean_inc(x_308);
x_309 = lean_ctor_get(x_177, 2);
lean_inc(x_309);
x_310 = lean_ctor_get(x_177, 3);
lean_inc(x_310);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_311 = x_177;
} else {
 lean_dec_ref(x_177);
 x_311 = lean_box(0);
}
if (lean_is_scalar(x_311)) {
 x_312 = lean_alloc_ctor(1, 4, 1);
} else {
 x_312 = x_311;
}
lean_ctor_set(x_312, 0, x_307);
lean_ctor_set(x_312, 1, x_308);
lean_ctor_set(x_312, 2, x_309);
lean_ctor_set(x_312, 3, x_310);
lean_ctor_set_uint8(x_312, sizeof(void*)*4, x_259);
x_313 = 0;
x_314 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_314, 0, x_312);
lean_ctor_set(x_314, 1, x_305);
lean_ctor_set(x_314, 2, x_306);
lean_ctor_set(x_314, 3, x_250);
lean_ctor_set_uint8(x_314, sizeof(void*)*4, x_313);
lean_ctor_set(x_1, 0, x_314);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
}
}
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; uint8_t x_319; 
x_315 = lean_ctor_get(x_1, 0);
x_316 = lean_ctor_get(x_1, 1);
x_317 = lean_ctor_get(x_1, 2);
x_318 = lean_ctor_get(x_1, 3);
lean_inc(x_318);
lean_inc(x_317);
lean_inc(x_316);
lean_inc(x_315);
lean_dec(x_1);
x_319 = l_Lean_Name_quickLt(x_2, x_316);
if (x_319 == 0)
{
uint8_t x_320; 
x_320 = l_Lean_Name_quickLt(x_316, x_2);
if (x_320 == 0)
{
lean_object* x_321; 
lean_dec(x_317);
lean_dec(x_316);
x_321 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_321, 0, x_315);
lean_ctor_set(x_321, 1, x_2);
lean_ctor_set(x_321, 2, x_3);
lean_ctor_set(x_321, 3, x_318);
lean_ctor_set_uint8(x_321, sizeof(void*)*4, x_6);
return x_321;
}
else
{
uint8_t x_322; 
x_322 = l_Std_RBNode_isRed___rarg(x_318);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; 
x_323 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_318, x_2, x_3);
x_324 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_324, 0, x_315);
lean_ctor_set(x_324, 1, x_316);
lean_ctor_set(x_324, 2, x_317);
lean_ctor_set(x_324, 3, x_323);
lean_ctor_set_uint8(x_324, sizeof(void*)*4, x_6);
return x_324;
}
else
{
lean_object* x_325; lean_object* x_326; 
x_325 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_318, x_2, x_3);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
if (lean_obj_tag(x_326) == 0)
{
lean_object* x_327; 
x_327 = lean_ctor_get(x_325, 3);
lean_inc(x_327);
if (lean_obj_tag(x_327) == 0)
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; uint8_t x_331; lean_object* x_332; uint8_t x_333; lean_object* x_334; 
x_328 = lean_ctor_get(x_325, 1);
lean_inc(x_328);
x_329 = lean_ctor_get(x_325, 2);
lean_inc(x_329);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_330 = x_325;
} else {
 lean_dec_ref(x_325);
 x_330 = lean_box(0);
}
x_331 = 0;
if (lean_is_scalar(x_330)) {
 x_332 = lean_alloc_ctor(1, 4, 1);
} else {
 x_332 = x_330;
}
lean_ctor_set(x_332, 0, x_327);
lean_ctor_set(x_332, 1, x_328);
lean_ctor_set(x_332, 2, x_329);
lean_ctor_set(x_332, 3, x_327);
lean_ctor_set_uint8(x_332, sizeof(void*)*4, x_331);
x_333 = 1;
x_334 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_334, 0, x_315);
lean_ctor_set(x_334, 1, x_316);
lean_ctor_set(x_334, 2, x_317);
lean_ctor_set(x_334, 3, x_332);
lean_ctor_set_uint8(x_334, sizeof(void*)*4, x_333);
return x_334;
}
else
{
uint8_t x_335; 
x_335 = lean_ctor_get_uint8(x_327, sizeof(void*)*4);
if (x_335 == 0)
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_336 = lean_ctor_get(x_325, 1);
lean_inc(x_336);
x_337 = lean_ctor_get(x_325, 2);
lean_inc(x_337);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_338 = x_325;
} else {
 lean_dec_ref(x_325);
 x_338 = lean_box(0);
}
x_339 = lean_ctor_get(x_327, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_327, 1);
lean_inc(x_340);
x_341 = lean_ctor_get(x_327, 2);
lean_inc(x_341);
x_342 = lean_ctor_get(x_327, 3);
lean_inc(x_342);
if (lean_is_exclusive(x_327)) {
 lean_ctor_release(x_327, 0);
 lean_ctor_release(x_327, 1);
 lean_ctor_release(x_327, 2);
 lean_ctor_release(x_327, 3);
 x_343 = x_327;
} else {
 lean_dec_ref(x_327);
 x_343 = lean_box(0);
}
x_344 = 1;
if (lean_is_scalar(x_343)) {
 x_345 = lean_alloc_ctor(1, 4, 1);
} else {
 x_345 = x_343;
}
lean_ctor_set(x_345, 0, x_315);
lean_ctor_set(x_345, 1, x_316);
lean_ctor_set(x_345, 2, x_317);
lean_ctor_set(x_345, 3, x_326);
lean_ctor_set_uint8(x_345, sizeof(void*)*4, x_344);
if (lean_is_scalar(x_338)) {
 x_346 = lean_alloc_ctor(1, 4, 1);
} else {
 x_346 = x_338;
}
lean_ctor_set(x_346, 0, x_339);
lean_ctor_set(x_346, 1, x_340);
lean_ctor_set(x_346, 2, x_341);
lean_ctor_set(x_346, 3, x_342);
lean_ctor_set_uint8(x_346, sizeof(void*)*4, x_344);
x_347 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_347, 0, x_345);
lean_ctor_set(x_347, 1, x_336);
lean_ctor_set(x_347, 2, x_337);
lean_ctor_set(x_347, 3, x_346);
lean_ctor_set_uint8(x_347, sizeof(void*)*4, x_335);
return x_347;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; uint8_t x_351; lean_object* x_352; lean_object* x_353; 
x_348 = lean_ctor_get(x_325, 1);
lean_inc(x_348);
x_349 = lean_ctor_get(x_325, 2);
lean_inc(x_349);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_350 = x_325;
} else {
 lean_dec_ref(x_325);
 x_350 = lean_box(0);
}
x_351 = 0;
if (lean_is_scalar(x_350)) {
 x_352 = lean_alloc_ctor(1, 4, 1);
} else {
 x_352 = x_350;
}
lean_ctor_set(x_352, 0, x_326);
lean_ctor_set(x_352, 1, x_348);
lean_ctor_set(x_352, 2, x_349);
lean_ctor_set(x_352, 3, x_327);
lean_ctor_set_uint8(x_352, sizeof(void*)*4, x_351);
x_353 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_353, 0, x_315);
lean_ctor_set(x_353, 1, x_316);
lean_ctor_set(x_353, 2, x_317);
lean_ctor_set(x_353, 3, x_352);
lean_ctor_set_uint8(x_353, sizeof(void*)*4, x_335);
return x_353;
}
}
}
else
{
uint8_t x_354; 
x_354 = lean_ctor_get_uint8(x_326, sizeof(void*)*4);
if (x_354 == 0)
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; uint8_t x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_355 = lean_ctor_get(x_325, 1);
lean_inc(x_355);
x_356 = lean_ctor_get(x_325, 2);
lean_inc(x_356);
x_357 = lean_ctor_get(x_325, 3);
lean_inc(x_357);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_358 = x_325;
} else {
 lean_dec_ref(x_325);
 x_358 = lean_box(0);
}
x_359 = lean_ctor_get(x_326, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_326, 1);
lean_inc(x_360);
x_361 = lean_ctor_get(x_326, 2);
lean_inc(x_361);
x_362 = lean_ctor_get(x_326, 3);
lean_inc(x_362);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_363 = x_326;
} else {
 lean_dec_ref(x_326);
 x_363 = lean_box(0);
}
x_364 = 1;
if (lean_is_scalar(x_363)) {
 x_365 = lean_alloc_ctor(1, 4, 1);
} else {
 x_365 = x_363;
}
lean_ctor_set(x_365, 0, x_315);
lean_ctor_set(x_365, 1, x_316);
lean_ctor_set(x_365, 2, x_317);
lean_ctor_set(x_365, 3, x_359);
lean_ctor_set_uint8(x_365, sizeof(void*)*4, x_364);
if (lean_is_scalar(x_358)) {
 x_366 = lean_alloc_ctor(1, 4, 1);
} else {
 x_366 = x_358;
}
lean_ctor_set(x_366, 0, x_362);
lean_ctor_set(x_366, 1, x_355);
lean_ctor_set(x_366, 2, x_356);
lean_ctor_set(x_366, 3, x_357);
lean_ctor_set_uint8(x_366, sizeof(void*)*4, x_364);
x_367 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_360);
lean_ctor_set(x_367, 2, x_361);
lean_ctor_set(x_367, 3, x_366);
lean_ctor_set_uint8(x_367, sizeof(void*)*4, x_354);
return x_367;
}
else
{
lean_object* x_368; 
x_368 = lean_ctor_get(x_325, 3);
lean_inc(x_368);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; lean_object* x_373; lean_object* x_374; 
x_369 = lean_ctor_get(x_325, 1);
lean_inc(x_369);
x_370 = lean_ctor_get(x_325, 2);
lean_inc(x_370);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_371 = x_325;
} else {
 lean_dec_ref(x_325);
 x_371 = lean_box(0);
}
x_372 = 0;
if (lean_is_scalar(x_371)) {
 x_373 = lean_alloc_ctor(1, 4, 1);
} else {
 x_373 = x_371;
}
lean_ctor_set(x_373, 0, x_326);
lean_ctor_set(x_373, 1, x_369);
lean_ctor_set(x_373, 2, x_370);
lean_ctor_set(x_373, 3, x_368);
lean_ctor_set_uint8(x_373, sizeof(void*)*4, x_372);
x_374 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_374, 0, x_315);
lean_ctor_set(x_374, 1, x_316);
lean_ctor_set(x_374, 2, x_317);
lean_ctor_set(x_374, 3, x_373);
lean_ctor_set_uint8(x_374, sizeof(void*)*4, x_354);
return x_374;
}
else
{
uint8_t x_375; 
x_375 = lean_ctor_get_uint8(x_368, sizeof(void*)*4);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_376 = lean_ctor_get(x_325, 1);
lean_inc(x_376);
x_377 = lean_ctor_get(x_325, 2);
lean_inc(x_377);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_378 = x_325;
} else {
 lean_dec_ref(x_325);
 x_378 = lean_box(0);
}
x_379 = lean_ctor_get(x_368, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_368, 1);
lean_inc(x_380);
x_381 = lean_ctor_get(x_368, 2);
lean_inc(x_381);
x_382 = lean_ctor_get(x_368, 3);
lean_inc(x_382);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 lean_ctor_release(x_368, 2);
 lean_ctor_release(x_368, 3);
 x_383 = x_368;
} else {
 lean_dec_ref(x_368);
 x_383 = lean_box(0);
}
lean_inc(x_326);
if (lean_is_scalar(x_383)) {
 x_384 = lean_alloc_ctor(1, 4, 1);
} else {
 x_384 = x_383;
}
lean_ctor_set(x_384, 0, x_315);
lean_ctor_set(x_384, 1, x_316);
lean_ctor_set(x_384, 2, x_317);
lean_ctor_set(x_384, 3, x_326);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_385 = x_326;
} else {
 lean_dec_ref(x_326);
 x_385 = lean_box(0);
}
lean_ctor_set_uint8(x_384, sizeof(void*)*4, x_354);
if (lean_is_scalar(x_385)) {
 x_386 = lean_alloc_ctor(1, 4, 1);
} else {
 x_386 = x_385;
}
lean_ctor_set(x_386, 0, x_379);
lean_ctor_set(x_386, 1, x_380);
lean_ctor_set(x_386, 2, x_381);
lean_ctor_set(x_386, 3, x_382);
lean_ctor_set_uint8(x_386, sizeof(void*)*4, x_354);
if (lean_is_scalar(x_378)) {
 x_387 = lean_alloc_ctor(1, 4, 1);
} else {
 x_387 = x_378;
}
lean_ctor_set(x_387, 0, x_384);
lean_ctor_set(x_387, 1, x_376);
lean_ctor_set(x_387, 2, x_377);
lean_ctor_set(x_387, 3, x_386);
lean_ctor_set_uint8(x_387, sizeof(void*)*4, x_375);
return x_387;
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; uint8_t x_397; lean_object* x_398; lean_object* x_399; 
x_388 = lean_ctor_get(x_325, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_325, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_390 = x_325;
} else {
 lean_dec_ref(x_325);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_326, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_326, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_326, 2);
lean_inc(x_393);
x_394 = lean_ctor_get(x_326, 3);
lean_inc(x_394);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_395 = x_326;
} else {
 lean_dec_ref(x_326);
 x_395 = lean_box(0);
}
if (lean_is_scalar(x_395)) {
 x_396 = lean_alloc_ctor(1, 4, 1);
} else {
 x_396 = x_395;
}
lean_ctor_set(x_396, 0, x_391);
lean_ctor_set(x_396, 1, x_392);
lean_ctor_set(x_396, 2, x_393);
lean_ctor_set(x_396, 3, x_394);
lean_ctor_set_uint8(x_396, sizeof(void*)*4, x_375);
x_397 = 0;
if (lean_is_scalar(x_390)) {
 x_398 = lean_alloc_ctor(1, 4, 1);
} else {
 x_398 = x_390;
}
lean_ctor_set(x_398, 0, x_396);
lean_ctor_set(x_398, 1, x_388);
lean_ctor_set(x_398, 2, x_389);
lean_ctor_set(x_398, 3, x_368);
lean_ctor_set_uint8(x_398, sizeof(void*)*4, x_397);
x_399 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_399, 0, x_315);
lean_ctor_set(x_399, 1, x_316);
lean_ctor_set(x_399, 2, x_317);
lean_ctor_set(x_399, 3, x_398);
lean_ctor_set_uint8(x_399, sizeof(void*)*4, x_375);
return x_399;
}
}
}
}
}
}
}
else
{
uint8_t x_400; 
x_400 = l_Std_RBNode_isRed___rarg(x_315);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; 
x_401 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_315, x_2, x_3);
x_402 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_316);
lean_ctor_set(x_402, 2, x_317);
lean_ctor_set(x_402, 3, x_318);
lean_ctor_set_uint8(x_402, sizeof(void*)*4, x_6);
return x_402;
}
else
{
lean_object* x_403; lean_object* x_404; 
x_403 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_315, x_2, x_3);
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_405; 
x_405 = lean_ctor_get(x_403, 3);
lean_inc(x_405);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; uint8_t x_409; lean_object* x_410; uint8_t x_411; lean_object* x_412; 
x_406 = lean_ctor_get(x_403, 1);
lean_inc(x_406);
x_407 = lean_ctor_get(x_403, 2);
lean_inc(x_407);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_408 = x_403;
} else {
 lean_dec_ref(x_403);
 x_408 = lean_box(0);
}
x_409 = 0;
if (lean_is_scalar(x_408)) {
 x_410 = lean_alloc_ctor(1, 4, 1);
} else {
 x_410 = x_408;
}
lean_ctor_set(x_410, 0, x_405);
lean_ctor_set(x_410, 1, x_406);
lean_ctor_set(x_410, 2, x_407);
lean_ctor_set(x_410, 3, x_405);
lean_ctor_set_uint8(x_410, sizeof(void*)*4, x_409);
x_411 = 1;
x_412 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_412, 0, x_410);
lean_ctor_set(x_412, 1, x_316);
lean_ctor_set(x_412, 2, x_317);
lean_ctor_set(x_412, 3, x_318);
lean_ctor_set_uint8(x_412, sizeof(void*)*4, x_411);
return x_412;
}
else
{
uint8_t x_413; 
x_413 = lean_ctor_get_uint8(x_405, sizeof(void*)*4);
if (x_413 == 0)
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; uint8_t x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_414 = lean_ctor_get(x_403, 1);
lean_inc(x_414);
x_415 = lean_ctor_get(x_403, 2);
lean_inc(x_415);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_416 = x_403;
} else {
 lean_dec_ref(x_403);
 x_416 = lean_box(0);
}
x_417 = lean_ctor_get(x_405, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_405, 1);
lean_inc(x_418);
x_419 = lean_ctor_get(x_405, 2);
lean_inc(x_419);
x_420 = lean_ctor_get(x_405, 3);
lean_inc(x_420);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 lean_ctor_release(x_405, 2);
 lean_ctor_release(x_405, 3);
 x_421 = x_405;
} else {
 lean_dec_ref(x_405);
 x_421 = lean_box(0);
}
x_422 = 1;
if (lean_is_scalar(x_421)) {
 x_423 = lean_alloc_ctor(1, 4, 1);
} else {
 x_423 = x_421;
}
lean_ctor_set(x_423, 0, x_404);
lean_ctor_set(x_423, 1, x_414);
lean_ctor_set(x_423, 2, x_415);
lean_ctor_set(x_423, 3, x_417);
lean_ctor_set_uint8(x_423, sizeof(void*)*4, x_422);
if (lean_is_scalar(x_416)) {
 x_424 = lean_alloc_ctor(1, 4, 1);
} else {
 x_424 = x_416;
}
lean_ctor_set(x_424, 0, x_420);
lean_ctor_set(x_424, 1, x_316);
lean_ctor_set(x_424, 2, x_317);
lean_ctor_set(x_424, 3, x_318);
lean_ctor_set_uint8(x_424, sizeof(void*)*4, x_422);
x_425 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_425, 0, x_423);
lean_ctor_set(x_425, 1, x_418);
lean_ctor_set(x_425, 2, x_419);
lean_ctor_set(x_425, 3, x_424);
lean_ctor_set_uint8(x_425, sizeof(void*)*4, x_413);
return x_425;
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; uint8_t x_429; lean_object* x_430; lean_object* x_431; 
x_426 = lean_ctor_get(x_403, 1);
lean_inc(x_426);
x_427 = lean_ctor_get(x_403, 2);
lean_inc(x_427);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_428 = x_403;
} else {
 lean_dec_ref(x_403);
 x_428 = lean_box(0);
}
x_429 = 0;
if (lean_is_scalar(x_428)) {
 x_430 = lean_alloc_ctor(1, 4, 1);
} else {
 x_430 = x_428;
}
lean_ctor_set(x_430, 0, x_404);
lean_ctor_set(x_430, 1, x_426);
lean_ctor_set(x_430, 2, x_427);
lean_ctor_set(x_430, 3, x_405);
lean_ctor_set_uint8(x_430, sizeof(void*)*4, x_429);
x_431 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_431, 0, x_430);
lean_ctor_set(x_431, 1, x_316);
lean_ctor_set(x_431, 2, x_317);
lean_ctor_set(x_431, 3, x_318);
lean_ctor_set_uint8(x_431, sizeof(void*)*4, x_413);
return x_431;
}
}
}
else
{
uint8_t x_432; 
x_432 = lean_ctor_get_uint8(x_404, sizeof(void*)*4);
if (x_432 == 0)
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; uint8_t x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_433 = lean_ctor_get(x_403, 1);
lean_inc(x_433);
x_434 = lean_ctor_get(x_403, 2);
lean_inc(x_434);
x_435 = lean_ctor_get(x_403, 3);
lean_inc(x_435);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_436 = x_403;
} else {
 lean_dec_ref(x_403);
 x_436 = lean_box(0);
}
x_437 = lean_ctor_get(x_404, 0);
lean_inc(x_437);
x_438 = lean_ctor_get(x_404, 1);
lean_inc(x_438);
x_439 = lean_ctor_get(x_404, 2);
lean_inc(x_439);
x_440 = lean_ctor_get(x_404, 3);
lean_inc(x_440);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_441 = x_404;
} else {
 lean_dec_ref(x_404);
 x_441 = lean_box(0);
}
x_442 = 1;
if (lean_is_scalar(x_441)) {
 x_443 = lean_alloc_ctor(1, 4, 1);
} else {
 x_443 = x_441;
}
lean_ctor_set(x_443, 0, x_437);
lean_ctor_set(x_443, 1, x_438);
lean_ctor_set(x_443, 2, x_439);
lean_ctor_set(x_443, 3, x_440);
lean_ctor_set_uint8(x_443, sizeof(void*)*4, x_442);
if (lean_is_scalar(x_436)) {
 x_444 = lean_alloc_ctor(1, 4, 1);
} else {
 x_444 = x_436;
}
lean_ctor_set(x_444, 0, x_435);
lean_ctor_set(x_444, 1, x_316);
lean_ctor_set(x_444, 2, x_317);
lean_ctor_set(x_444, 3, x_318);
lean_ctor_set_uint8(x_444, sizeof(void*)*4, x_442);
x_445 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_433);
lean_ctor_set(x_445, 2, x_434);
lean_ctor_set(x_445, 3, x_444);
lean_ctor_set_uint8(x_445, sizeof(void*)*4, x_432);
return x_445;
}
else
{
lean_object* x_446; 
x_446 = lean_ctor_get(x_403, 3);
lean_inc(x_446);
if (lean_obj_tag(x_446) == 0)
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; lean_object* x_451; lean_object* x_452; 
x_447 = lean_ctor_get(x_403, 1);
lean_inc(x_447);
x_448 = lean_ctor_get(x_403, 2);
lean_inc(x_448);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_449 = x_403;
} else {
 lean_dec_ref(x_403);
 x_449 = lean_box(0);
}
x_450 = 0;
if (lean_is_scalar(x_449)) {
 x_451 = lean_alloc_ctor(1, 4, 1);
} else {
 x_451 = x_449;
}
lean_ctor_set(x_451, 0, x_404);
lean_ctor_set(x_451, 1, x_447);
lean_ctor_set(x_451, 2, x_448);
lean_ctor_set(x_451, 3, x_446);
lean_ctor_set_uint8(x_451, sizeof(void*)*4, x_450);
x_452 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_452, 0, x_451);
lean_ctor_set(x_452, 1, x_316);
lean_ctor_set(x_452, 2, x_317);
lean_ctor_set(x_452, 3, x_318);
lean_ctor_set_uint8(x_452, sizeof(void*)*4, x_432);
return x_452;
}
else
{
uint8_t x_453; 
x_453 = lean_ctor_get_uint8(x_446, sizeof(void*)*4);
if (x_453 == 0)
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
x_454 = lean_ctor_get(x_403, 1);
lean_inc(x_454);
x_455 = lean_ctor_get(x_403, 2);
lean_inc(x_455);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_456 = x_403;
} else {
 lean_dec_ref(x_403);
 x_456 = lean_box(0);
}
x_457 = lean_ctor_get(x_446, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_446, 1);
lean_inc(x_458);
x_459 = lean_ctor_get(x_446, 2);
lean_inc(x_459);
x_460 = lean_ctor_get(x_446, 3);
lean_inc(x_460);
if (lean_is_exclusive(x_446)) {
 lean_ctor_release(x_446, 0);
 lean_ctor_release(x_446, 1);
 lean_ctor_release(x_446, 2);
 lean_ctor_release(x_446, 3);
 x_461 = x_446;
} else {
 lean_dec_ref(x_446);
 x_461 = lean_box(0);
}
lean_inc(x_404);
if (lean_is_scalar(x_461)) {
 x_462 = lean_alloc_ctor(1, 4, 1);
} else {
 x_462 = x_461;
}
lean_ctor_set(x_462, 0, x_404);
lean_ctor_set(x_462, 1, x_454);
lean_ctor_set(x_462, 2, x_455);
lean_ctor_set(x_462, 3, x_457);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_463 = x_404;
} else {
 lean_dec_ref(x_404);
 x_463 = lean_box(0);
}
lean_ctor_set_uint8(x_462, sizeof(void*)*4, x_432);
if (lean_is_scalar(x_463)) {
 x_464 = lean_alloc_ctor(1, 4, 1);
} else {
 x_464 = x_463;
}
lean_ctor_set(x_464, 0, x_460);
lean_ctor_set(x_464, 1, x_316);
lean_ctor_set(x_464, 2, x_317);
lean_ctor_set(x_464, 3, x_318);
lean_ctor_set_uint8(x_464, sizeof(void*)*4, x_432);
if (lean_is_scalar(x_456)) {
 x_465 = lean_alloc_ctor(1, 4, 1);
} else {
 x_465 = x_456;
}
lean_ctor_set(x_465, 0, x_462);
lean_ctor_set(x_465, 1, x_458);
lean_ctor_set(x_465, 2, x_459);
lean_ctor_set(x_465, 3, x_464);
lean_ctor_set_uint8(x_465, sizeof(void*)*4, x_453);
return x_465;
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; lean_object* x_476; lean_object* x_477; 
x_466 = lean_ctor_get(x_403, 1);
lean_inc(x_466);
x_467 = lean_ctor_get(x_403, 2);
lean_inc(x_467);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_468 = x_403;
} else {
 lean_dec_ref(x_403);
 x_468 = lean_box(0);
}
x_469 = lean_ctor_get(x_404, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_404, 1);
lean_inc(x_470);
x_471 = lean_ctor_get(x_404, 2);
lean_inc(x_471);
x_472 = lean_ctor_get(x_404, 3);
lean_inc(x_472);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_473 = x_404;
} else {
 lean_dec_ref(x_404);
 x_473 = lean_box(0);
}
if (lean_is_scalar(x_473)) {
 x_474 = lean_alloc_ctor(1, 4, 1);
} else {
 x_474 = x_473;
}
lean_ctor_set(x_474, 0, x_469);
lean_ctor_set(x_474, 1, x_470);
lean_ctor_set(x_474, 2, x_471);
lean_ctor_set(x_474, 3, x_472);
lean_ctor_set_uint8(x_474, sizeof(void*)*4, x_453);
x_475 = 0;
if (lean_is_scalar(x_468)) {
 x_476 = lean_alloc_ctor(1, 4, 1);
} else {
 x_476 = x_468;
}
lean_ctor_set(x_476, 0, x_474);
lean_ctor_set(x_476, 1, x_466);
lean_ctor_set(x_476, 2, x_467);
lean_ctor_set(x_476, 3, x_446);
lean_ctor_set_uint8(x_476, sizeof(void*)*4, x_475);
x_477 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_477, 0, x_476);
lean_ctor_set(x_477, 1, x_316);
lean_ctor_set(x_477, 2, x_317);
lean_ctor_set(x_477, 3, x_318);
lean_ctor_set_uint8(x_477, sizeof(void*)*4, x_453);
return x_477;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_1);
lean_ctor_set_uint8(x_5, sizeof(void*)*4, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = l_Lean_Name_quickLt(x_2, x_9);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = l_Lean_Name_quickLt(x_9, x_2);
if (x_13 == 0)
{
lean_dec(x_10);
lean_dec(x_9);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
lean_object* x_14; 
x_14 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_11, x_2, x_3);
lean_ctor_set(x_1, 3, x_14);
return x_1;
}
}
else
{
lean_object* x_15; 
x_15 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_8, x_2, x_3);
lean_ctor_set(x_1, 0, x_15);
return x_1;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
x_18 = lean_ctor_get(x_1, 2);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_1);
x_20 = l_Lean_Name_quickLt(x_2, x_17);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = l_Lean_Name_quickLt(x_17, x_2);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_17);
x_22 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_3);
lean_ctor_set(x_22, 3, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*4, x_6);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_19, x_2, x_3);
x_24 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_17);
lean_ctor_set(x_24, 2, x_18);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*4, x_6);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_16, x_2, x_3);
x_26 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_17);
lean_ctor_set(x_26, 2, x_18);
lean_ctor_set(x_26, 3, x_19);
lean_ctor_set_uint8(x_26, sizeof(void*)*4, x_6);
return x_26;
}
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_1);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_ctor_get(x_1, 2);
x_31 = lean_ctor_get(x_1, 3);
x_32 = l_Lean_Name_quickLt(x_2, x_29);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = l_Lean_Name_quickLt(x_29, x_2);
if (x_33 == 0)
{
lean_dec(x_30);
lean_dec(x_29);
lean_ctor_set(x_1, 2, x_3);
lean_ctor_set(x_1, 1, x_2);
return x_1;
}
else
{
uint8_t x_34; 
x_34 = l_Std_RBNode_isRed___rarg(x_31);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_31, x_2, x_3);
lean_ctor_set(x_1, 3, x_35);
return x_1;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_31, x_2, x_3);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 3);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_36, 3);
lean_dec(x_40);
x_41 = lean_ctor_get(x_36, 0);
lean_dec(x_41);
x_42 = 0;
lean_ctor_set(x_36, 0, x_38);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_42);
x_43 = 1;
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_43);
return x_1;
}
else
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; uint8_t x_48; 
x_44 = lean_ctor_get(x_36, 1);
x_45 = lean_ctor_get(x_36, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_36);
x_46 = 0;
x_47 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_47, 0, x_38);
lean_ctor_set(x_47, 1, x_44);
lean_ctor_set(x_47, 2, x_45);
lean_ctor_set(x_47, 3, x_38);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_46);
x_48 = 1;
lean_ctor_set(x_1, 3, x_47);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_48);
return x_1;
}
}
else
{
uint8_t x_49; 
x_49 = lean_ctor_get_uint8(x_38, sizeof(void*)*4);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_36);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_36, 1);
x_52 = lean_ctor_get(x_36, 2);
x_53 = lean_ctor_get(x_36, 3);
lean_dec(x_53);
x_54 = lean_ctor_get(x_36, 0);
lean_dec(x_54);
x_55 = !lean_is_exclusive(x_38);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_38, 0);
x_57 = lean_ctor_get(x_38, 1);
x_58 = lean_ctor_get(x_38, 2);
x_59 = lean_ctor_get(x_38, 3);
x_60 = 1;
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_38, 2, x_30);
lean_ctor_set(x_38, 1, x_29);
lean_ctor_set(x_38, 0, x_28);
lean_ctor_set_uint8(x_38, sizeof(void*)*4, x_60);
lean_ctor_set(x_36, 3, x_59);
lean_ctor_set(x_36, 2, x_58);
lean_ctor_set(x_36, 1, x_57);
lean_ctor_set(x_36, 0, x_56);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_60);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_52);
lean_ctor_set(x_1, 1, x_51);
lean_ctor_set(x_1, 0, x_38);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_38, 0);
x_62 = lean_ctor_get(x_38, 1);
x_63 = lean_ctor_get(x_38, 2);
x_64 = lean_ctor_get(x_38, 3);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_38);
x_65 = 1;
x_66 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_66, 0, x_28);
lean_ctor_set(x_66, 1, x_29);
lean_ctor_set(x_66, 2, x_30);
lean_ctor_set(x_66, 3, x_37);
lean_ctor_set_uint8(x_66, sizeof(void*)*4, x_65);
lean_ctor_set(x_36, 3, x_64);
lean_ctor_set(x_36, 2, x_63);
lean_ctor_set(x_36, 1, x_62);
lean_ctor_set(x_36, 0, x_61);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_65);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_52);
lean_ctor_set(x_1, 1, x_51);
lean_ctor_set(x_1, 0, x_66);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; 
x_67 = lean_ctor_get(x_36, 1);
x_68 = lean_ctor_get(x_36, 2);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_36);
x_69 = lean_ctor_get(x_38, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_38, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_38, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_38, 3);
lean_inc(x_72);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 x_73 = x_38;
} else {
 lean_dec_ref(x_38);
 x_73 = lean_box(0);
}
x_74 = 1;
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(1, 4, 1);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_28);
lean_ctor_set(x_75, 1, x_29);
lean_ctor_set(x_75, 2, x_30);
lean_ctor_set(x_75, 3, x_37);
lean_ctor_set_uint8(x_75, sizeof(void*)*4, x_74);
x_76 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_76, 0, x_69);
lean_ctor_set(x_76, 1, x_70);
lean_ctor_set(x_76, 2, x_71);
lean_ctor_set(x_76, 3, x_72);
lean_ctor_set_uint8(x_76, sizeof(void*)*4, x_74);
lean_ctor_set(x_1, 3, x_76);
lean_ctor_set(x_1, 2, x_68);
lean_ctor_set(x_1, 1, x_67);
lean_ctor_set(x_1, 0, x_75);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_36);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_36, 3);
lean_dec(x_78);
x_79 = lean_ctor_get(x_36, 0);
lean_dec(x_79);
x_80 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_80);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
else
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_36, 1);
x_82 = lean_ctor_get(x_36, 2);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_36);
x_83 = 0;
x_84 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_84, 0, x_37);
lean_ctor_set(x_84, 1, x_81);
lean_ctor_set(x_84, 2, x_82);
lean_ctor_set(x_84, 3, x_38);
lean_ctor_set_uint8(x_84, sizeof(void*)*4, x_83);
lean_ctor_set(x_1, 3, x_84);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_49);
return x_1;
}
}
}
}
else
{
uint8_t x_85; 
x_85 = lean_ctor_get_uint8(x_37, sizeof(void*)*4);
if (x_85 == 0)
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_36);
if (x_86 == 0)
{
lean_object* x_87; uint8_t x_88; 
x_87 = lean_ctor_get(x_36, 0);
lean_dec(x_87);
x_88 = !lean_is_exclusive(x_37);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_37, 0);
x_90 = lean_ctor_get(x_37, 1);
x_91 = lean_ctor_get(x_37, 2);
x_92 = lean_ctor_get(x_37, 3);
x_93 = 1;
lean_ctor_set(x_37, 3, x_89);
lean_ctor_set(x_37, 2, x_30);
lean_ctor_set(x_37, 1, x_29);
lean_ctor_set(x_37, 0, x_28);
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_93);
lean_ctor_set(x_36, 0, x_92);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_93);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_91);
lean_ctor_set(x_1, 1, x_90);
lean_ctor_set(x_1, 0, x_37);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; 
x_94 = lean_ctor_get(x_37, 0);
x_95 = lean_ctor_get(x_37, 1);
x_96 = lean_ctor_get(x_37, 2);
x_97 = lean_ctor_get(x_37, 3);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_37);
x_98 = 1;
x_99 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_99, 0, x_28);
lean_ctor_set(x_99, 1, x_29);
lean_ctor_set(x_99, 2, x_30);
lean_ctor_set(x_99, 3, x_94);
lean_ctor_set_uint8(x_99, sizeof(void*)*4, x_98);
lean_ctor_set(x_36, 0, x_97);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_98);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 2, x_96);
lean_ctor_set(x_1, 1, x_95);
lean_ctor_set(x_1, 0, x_99);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; lean_object* x_110; 
x_100 = lean_ctor_get(x_36, 1);
x_101 = lean_ctor_get(x_36, 2);
x_102 = lean_ctor_get(x_36, 3);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_36);
x_103 = lean_ctor_get(x_37, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_37, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_37, 2);
lean_inc(x_105);
x_106 = lean_ctor_get(x_37, 3);
lean_inc(x_106);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_107 = x_37;
} else {
 lean_dec_ref(x_37);
 x_107 = lean_box(0);
}
x_108 = 1;
if (lean_is_scalar(x_107)) {
 x_109 = lean_alloc_ctor(1, 4, 1);
} else {
 x_109 = x_107;
}
lean_ctor_set(x_109, 0, x_28);
lean_ctor_set(x_109, 1, x_29);
lean_ctor_set(x_109, 2, x_30);
lean_ctor_set(x_109, 3, x_103);
lean_ctor_set_uint8(x_109, sizeof(void*)*4, x_108);
x_110 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_110, 0, x_106);
lean_ctor_set(x_110, 1, x_100);
lean_ctor_set(x_110, 2, x_101);
lean_ctor_set(x_110, 3, x_102);
lean_ctor_set_uint8(x_110, sizeof(void*)*4, x_108);
lean_ctor_set(x_1, 3, x_110);
lean_ctor_set(x_1, 2, x_105);
lean_ctor_set(x_1, 1, x_104);
lean_ctor_set(x_1, 0, x_109);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_36, 3);
lean_inc(x_111);
if (lean_obj_tag(x_111) == 0)
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_36);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_113 = lean_ctor_get(x_36, 3);
lean_dec(x_113);
x_114 = lean_ctor_get(x_36, 0);
lean_dec(x_114);
x_115 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_115);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
else
{
lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; 
x_116 = lean_ctor_get(x_36, 1);
x_117 = lean_ctor_get(x_36, 2);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_36);
x_118 = 0;
x_119 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_119, 0, x_37);
lean_ctor_set(x_119, 1, x_116);
lean_ctor_set(x_119, 2, x_117);
lean_ctor_set(x_119, 3, x_111);
lean_ctor_set_uint8(x_119, sizeof(void*)*4, x_118);
lean_ctor_set(x_1, 3, x_119);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_85);
return x_1;
}
}
else
{
uint8_t x_120; 
x_120 = lean_ctor_get_uint8(x_111, sizeof(void*)*4);
if (x_120 == 0)
{
uint8_t x_121; 
lean_free_object(x_1);
x_121 = !lean_is_exclusive(x_36);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_122 = lean_ctor_get(x_36, 3);
lean_dec(x_122);
x_123 = lean_ctor_get(x_36, 0);
lean_dec(x_123);
x_124 = !lean_is_exclusive(x_111);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_125 = lean_ctor_get(x_111, 0);
x_126 = lean_ctor_get(x_111, 1);
x_127 = lean_ctor_get(x_111, 2);
x_128 = lean_ctor_get(x_111, 3);
lean_inc(x_37);
lean_ctor_set(x_111, 3, x_37);
lean_ctor_set(x_111, 2, x_30);
lean_ctor_set(x_111, 1, x_29);
lean_ctor_set(x_111, 0, x_28);
x_129 = !lean_is_exclusive(x_37);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_37, 3);
lean_dec(x_130);
x_131 = lean_ctor_get(x_37, 2);
lean_dec(x_131);
x_132 = lean_ctor_get(x_37, 1);
lean_dec(x_132);
x_133 = lean_ctor_get(x_37, 0);
lean_dec(x_133);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_85);
lean_ctor_set(x_37, 3, x_128);
lean_ctor_set(x_37, 2, x_127);
lean_ctor_set(x_37, 1, x_126);
lean_ctor_set(x_37, 0, x_125);
lean_ctor_set(x_36, 3, x_37);
lean_ctor_set(x_36, 0, x_111);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
else
{
lean_object* x_134; 
lean_dec(x_37);
lean_ctor_set_uint8(x_111, sizeof(void*)*4, x_85);
x_134 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_134, 0, x_125);
lean_ctor_set(x_134, 1, x_126);
lean_ctor_set(x_134, 2, x_127);
lean_ctor_set(x_134, 3, x_128);
lean_ctor_set_uint8(x_134, sizeof(void*)*4, x_85);
lean_ctor_set(x_36, 3, x_134);
lean_ctor_set(x_36, 0, x_111);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_135 = lean_ctor_get(x_111, 0);
x_136 = lean_ctor_get(x_111, 1);
x_137 = lean_ctor_get(x_111, 2);
x_138 = lean_ctor_get(x_111, 3);
lean_inc(x_138);
lean_inc(x_137);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_111);
lean_inc(x_37);
x_139 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_139, 0, x_28);
lean_ctor_set(x_139, 1, x_29);
lean_ctor_set(x_139, 2, x_30);
lean_ctor_set(x_139, 3, x_37);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_140 = x_37;
} else {
 lean_dec_ref(x_37);
 x_140 = lean_box(0);
}
lean_ctor_set_uint8(x_139, sizeof(void*)*4, x_85);
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 4, 1);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_135);
lean_ctor_set(x_141, 1, x_136);
lean_ctor_set(x_141, 2, x_137);
lean_ctor_set(x_141, 3, x_138);
lean_ctor_set_uint8(x_141, sizeof(void*)*4, x_85);
lean_ctor_set(x_36, 3, x_141);
lean_ctor_set(x_36, 0, x_139);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_120);
return x_36;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_142 = lean_ctor_get(x_36, 1);
x_143 = lean_ctor_get(x_36, 2);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_36);
x_144 = lean_ctor_get(x_111, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_111, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_111, 2);
lean_inc(x_146);
x_147 = lean_ctor_get(x_111, 3);
lean_inc(x_147);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 lean_ctor_release(x_111, 2);
 lean_ctor_release(x_111, 3);
 x_148 = x_111;
} else {
 lean_dec_ref(x_111);
 x_148 = lean_box(0);
}
lean_inc(x_37);
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 4, 1);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_28);
lean_ctor_set(x_149, 1, x_29);
lean_ctor_set(x_149, 2, x_30);
lean_ctor_set(x_149, 3, x_37);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_150 = x_37;
} else {
 lean_dec_ref(x_37);
 x_150 = lean_box(0);
}
lean_ctor_set_uint8(x_149, sizeof(void*)*4, x_85);
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(1, 4, 1);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_144);
lean_ctor_set(x_151, 1, x_145);
lean_ctor_set(x_151, 2, x_146);
lean_ctor_set(x_151, 3, x_147);
lean_ctor_set_uint8(x_151, sizeof(void*)*4, x_85);
x_152 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_152, 0, x_149);
lean_ctor_set(x_152, 1, x_142);
lean_ctor_set(x_152, 2, x_143);
lean_ctor_set(x_152, 3, x_151);
lean_ctor_set_uint8(x_152, sizeof(void*)*4, x_120);
return x_152;
}
}
else
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_36);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_154 = lean_ctor_get(x_36, 3);
lean_dec(x_154);
x_155 = lean_ctor_get(x_36, 0);
lean_dec(x_155);
x_156 = !lean_is_exclusive(x_37);
if (x_156 == 0)
{
uint8_t x_157; 
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_120);
x_157 = 0;
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_157);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_158 = lean_ctor_get(x_37, 0);
x_159 = lean_ctor_get(x_37, 1);
x_160 = lean_ctor_get(x_37, 2);
x_161 = lean_ctor_get(x_37, 3);
lean_inc(x_161);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_37);
x_162 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_162, 0, x_158);
lean_ctor_set(x_162, 1, x_159);
lean_ctor_set(x_162, 2, x_160);
lean_ctor_set(x_162, 3, x_161);
lean_ctor_set_uint8(x_162, sizeof(void*)*4, x_120);
x_163 = 0;
lean_ctor_set(x_36, 0, x_162);
lean_ctor_set_uint8(x_36, sizeof(void*)*4, x_163);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; 
x_164 = lean_ctor_get(x_36, 1);
x_165 = lean_ctor_get(x_36, 2);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_36);
x_166 = lean_ctor_get(x_37, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_37, 1);
lean_inc(x_167);
x_168 = lean_ctor_get(x_37, 2);
lean_inc(x_168);
x_169 = lean_ctor_get(x_37, 3);
lean_inc(x_169);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 lean_ctor_release(x_37, 3);
 x_170 = x_37;
} else {
 lean_dec_ref(x_37);
 x_170 = lean_box(0);
}
if (lean_is_scalar(x_170)) {
 x_171 = lean_alloc_ctor(1, 4, 1);
} else {
 x_171 = x_170;
}
lean_ctor_set(x_171, 0, x_166);
lean_ctor_set(x_171, 1, x_167);
lean_ctor_set(x_171, 2, x_168);
lean_ctor_set(x_171, 3, x_169);
lean_ctor_set_uint8(x_171, sizeof(void*)*4, x_120);
x_172 = 0;
x_173 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_164);
lean_ctor_set(x_173, 2, x_165);
lean_ctor_set(x_173, 3, x_111);
lean_ctor_set_uint8(x_173, sizeof(void*)*4, x_172);
lean_ctor_set(x_1, 3, x_173);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_120);
return x_1;
}
}
}
}
}
}
}
}
else
{
uint8_t x_174; 
x_174 = l_Std_RBNode_isRed___rarg(x_28);
if (x_174 == 0)
{
lean_object* x_175; 
x_175 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_28, x_2, x_3);
lean_ctor_set(x_1, 0, x_175);
return x_1;
}
else
{
lean_object* x_176; lean_object* x_177; 
x_176 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_28, x_2, x_3);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; 
x_178 = lean_ctor_get(x_176, 3);
lean_inc(x_178);
if (lean_obj_tag(x_178) == 0)
{
uint8_t x_179; 
x_179 = !lean_is_exclusive(x_176);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; uint8_t x_183; 
x_180 = lean_ctor_get(x_176, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_176, 0);
lean_dec(x_181);
x_182 = 0;
lean_ctor_set(x_176, 0, x_178);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_182);
x_183 = 1;
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_183);
return x_1;
}
else
{
lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; uint8_t x_188; 
x_184 = lean_ctor_get(x_176, 1);
x_185 = lean_ctor_get(x_176, 2);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_176);
x_186 = 0;
x_187 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_187, 0, x_178);
lean_ctor_set(x_187, 1, x_184);
lean_ctor_set(x_187, 2, x_185);
lean_ctor_set(x_187, 3, x_178);
lean_ctor_set_uint8(x_187, sizeof(void*)*4, x_186);
x_188 = 1;
lean_ctor_set(x_1, 0, x_187);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_188);
return x_1;
}
}
else
{
uint8_t x_189; 
x_189 = lean_ctor_get_uint8(x_178, sizeof(void*)*4);
if (x_189 == 0)
{
uint8_t x_190; 
x_190 = !lean_is_exclusive(x_176);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_191 = lean_ctor_get(x_176, 1);
x_192 = lean_ctor_get(x_176, 2);
x_193 = lean_ctor_get(x_176, 3);
lean_dec(x_193);
x_194 = lean_ctor_get(x_176, 0);
lean_dec(x_194);
x_195 = !lean_is_exclusive(x_178);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; 
x_196 = lean_ctor_get(x_178, 0);
x_197 = lean_ctor_get(x_178, 1);
x_198 = lean_ctor_get(x_178, 2);
x_199 = lean_ctor_get(x_178, 3);
x_200 = 1;
lean_ctor_set(x_178, 3, x_196);
lean_ctor_set(x_178, 2, x_192);
lean_ctor_set(x_178, 1, x_191);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set_uint8(x_178, sizeof(void*)*4, x_200);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_199);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_200);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_198);
lean_ctor_set(x_1, 1, x_197);
lean_ctor_set(x_1, 0, x_178);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; lean_object* x_206; 
x_201 = lean_ctor_get(x_178, 0);
x_202 = lean_ctor_get(x_178, 1);
x_203 = lean_ctor_get(x_178, 2);
x_204 = lean_ctor_get(x_178, 3);
lean_inc(x_204);
lean_inc(x_203);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_178);
x_205 = 1;
x_206 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_206, 0, x_177);
lean_ctor_set(x_206, 1, x_191);
lean_ctor_set(x_206, 2, x_192);
lean_ctor_set(x_206, 3, x_201);
lean_ctor_set_uint8(x_206, sizeof(void*)*4, x_205);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_204);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_205);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_203);
lean_ctor_set(x_1, 1, x_202);
lean_ctor_set(x_1, 0, x_206);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; lean_object* x_215; lean_object* x_216; 
x_207 = lean_ctor_get(x_176, 1);
x_208 = lean_ctor_get(x_176, 2);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_176);
x_209 = lean_ctor_get(x_178, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_178, 1);
lean_inc(x_210);
x_211 = lean_ctor_get(x_178, 2);
lean_inc(x_211);
x_212 = lean_ctor_get(x_178, 3);
lean_inc(x_212);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 lean_ctor_release(x_178, 2);
 lean_ctor_release(x_178, 3);
 x_213 = x_178;
} else {
 lean_dec_ref(x_178);
 x_213 = lean_box(0);
}
x_214 = 1;
if (lean_is_scalar(x_213)) {
 x_215 = lean_alloc_ctor(1, 4, 1);
} else {
 x_215 = x_213;
}
lean_ctor_set(x_215, 0, x_177);
lean_ctor_set(x_215, 1, x_207);
lean_ctor_set(x_215, 2, x_208);
lean_ctor_set(x_215, 3, x_209);
lean_ctor_set_uint8(x_215, sizeof(void*)*4, x_214);
x_216 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_216, 0, x_212);
lean_ctor_set(x_216, 1, x_29);
lean_ctor_set(x_216, 2, x_30);
lean_ctor_set(x_216, 3, x_31);
lean_ctor_set_uint8(x_216, sizeof(void*)*4, x_214);
lean_ctor_set(x_1, 3, x_216);
lean_ctor_set(x_1, 2, x_211);
lean_ctor_set(x_1, 1, x_210);
lean_ctor_set(x_1, 0, x_215);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
else
{
uint8_t x_217; 
x_217 = !lean_is_exclusive(x_176);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_218 = lean_ctor_get(x_176, 3);
lean_dec(x_218);
x_219 = lean_ctor_get(x_176, 0);
lean_dec(x_219);
x_220 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_220);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
else
{
lean_object* x_221; lean_object* x_222; uint8_t x_223; lean_object* x_224; 
x_221 = lean_ctor_get(x_176, 1);
x_222 = lean_ctor_get(x_176, 2);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_176);
x_223 = 0;
x_224 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_224, 0, x_177);
lean_ctor_set(x_224, 1, x_221);
lean_ctor_set(x_224, 2, x_222);
lean_ctor_set(x_224, 3, x_178);
lean_ctor_set_uint8(x_224, sizeof(void*)*4, x_223);
lean_ctor_set(x_1, 0, x_224);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_189);
return x_1;
}
}
}
}
else
{
uint8_t x_225; 
x_225 = lean_ctor_get_uint8(x_177, sizeof(void*)*4);
if (x_225 == 0)
{
uint8_t x_226; 
x_226 = !lean_is_exclusive(x_176);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_227 = lean_ctor_get(x_176, 1);
x_228 = lean_ctor_get(x_176, 2);
x_229 = lean_ctor_get(x_176, 3);
x_230 = lean_ctor_get(x_176, 0);
lean_dec(x_230);
x_231 = !lean_is_exclusive(x_177);
if (x_231 == 0)
{
uint8_t x_232; 
x_232 = 1;
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_232);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_229);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_232);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_177);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; lean_object* x_238; 
x_233 = lean_ctor_get(x_177, 0);
x_234 = lean_ctor_get(x_177, 1);
x_235 = lean_ctor_get(x_177, 2);
x_236 = lean_ctor_get(x_177, 3);
lean_inc(x_236);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_177);
x_237 = 1;
x_238 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_238, 0, x_233);
lean_ctor_set(x_238, 1, x_234);
lean_ctor_set(x_238, 2, x_235);
lean_ctor_set(x_238, 3, x_236);
lean_ctor_set_uint8(x_238, sizeof(void*)*4, x_237);
lean_ctor_set(x_176, 3, x_31);
lean_ctor_set(x_176, 2, x_30);
lean_ctor_set(x_176, 1, x_29);
lean_ctor_set(x_176, 0, x_229);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_237);
lean_ctor_set(x_1, 3, x_176);
lean_ctor_set(x_1, 2, x_228);
lean_ctor_set(x_1, 1, x_227);
lean_ctor_set(x_1, 0, x_238);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; uint8_t x_247; lean_object* x_248; lean_object* x_249; 
x_239 = lean_ctor_get(x_176, 1);
x_240 = lean_ctor_get(x_176, 2);
x_241 = lean_ctor_get(x_176, 3);
lean_inc(x_241);
lean_inc(x_240);
lean_inc(x_239);
lean_dec(x_176);
x_242 = lean_ctor_get(x_177, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_177, 1);
lean_inc(x_243);
x_244 = lean_ctor_get(x_177, 2);
lean_inc(x_244);
x_245 = lean_ctor_get(x_177, 3);
lean_inc(x_245);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_246 = x_177;
} else {
 lean_dec_ref(x_177);
 x_246 = lean_box(0);
}
x_247 = 1;
if (lean_is_scalar(x_246)) {
 x_248 = lean_alloc_ctor(1, 4, 1);
} else {
 x_248 = x_246;
}
lean_ctor_set(x_248, 0, x_242);
lean_ctor_set(x_248, 1, x_243);
lean_ctor_set(x_248, 2, x_244);
lean_ctor_set(x_248, 3, x_245);
lean_ctor_set_uint8(x_248, sizeof(void*)*4, x_247);
x_249 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_249, 0, x_241);
lean_ctor_set(x_249, 1, x_29);
lean_ctor_set(x_249, 2, x_30);
lean_ctor_set(x_249, 3, x_31);
lean_ctor_set_uint8(x_249, sizeof(void*)*4, x_247);
lean_ctor_set(x_1, 3, x_249);
lean_ctor_set(x_1, 2, x_240);
lean_ctor_set(x_1, 1, x_239);
lean_ctor_set(x_1, 0, x_248);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
lean_object* x_250; 
x_250 = lean_ctor_get(x_176, 3);
lean_inc(x_250);
if (lean_obj_tag(x_250) == 0)
{
uint8_t x_251; 
x_251 = !lean_is_exclusive(x_176);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; uint8_t x_254; 
x_252 = lean_ctor_get(x_176, 3);
lean_dec(x_252);
x_253 = lean_ctor_get(x_176, 0);
lean_dec(x_253);
x_254 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_254);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
else
{
lean_object* x_255; lean_object* x_256; uint8_t x_257; lean_object* x_258; 
x_255 = lean_ctor_get(x_176, 1);
x_256 = lean_ctor_get(x_176, 2);
lean_inc(x_256);
lean_inc(x_255);
lean_dec(x_176);
x_257 = 0;
x_258 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_258, 0, x_177);
lean_ctor_set(x_258, 1, x_255);
lean_ctor_set(x_258, 2, x_256);
lean_ctor_set(x_258, 3, x_250);
lean_ctor_set_uint8(x_258, sizeof(void*)*4, x_257);
lean_ctor_set(x_1, 0, x_258);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_225);
return x_1;
}
}
else
{
uint8_t x_259; 
x_259 = lean_ctor_get_uint8(x_250, sizeof(void*)*4);
if (x_259 == 0)
{
uint8_t x_260; 
lean_free_object(x_1);
x_260 = !lean_is_exclusive(x_176);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; uint8_t x_265; 
x_261 = lean_ctor_get(x_176, 1);
x_262 = lean_ctor_get(x_176, 2);
x_263 = lean_ctor_get(x_176, 3);
lean_dec(x_263);
x_264 = lean_ctor_get(x_176, 0);
lean_dec(x_264);
x_265 = !lean_is_exclusive(x_250);
if (x_265 == 0)
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; uint8_t x_270; 
x_266 = lean_ctor_get(x_250, 0);
x_267 = lean_ctor_get(x_250, 1);
x_268 = lean_ctor_get(x_250, 2);
x_269 = lean_ctor_get(x_250, 3);
lean_inc(x_177);
lean_ctor_set(x_250, 3, x_266);
lean_ctor_set(x_250, 2, x_262);
lean_ctor_set(x_250, 1, x_261);
lean_ctor_set(x_250, 0, x_177);
x_270 = !lean_is_exclusive(x_177);
if (x_270 == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_177, 3);
lean_dec(x_271);
x_272 = lean_ctor_get(x_177, 2);
lean_dec(x_272);
x_273 = lean_ctor_get(x_177, 1);
lean_dec(x_273);
x_274 = lean_ctor_get(x_177, 0);
lean_dec(x_274);
lean_ctor_set_uint8(x_250, sizeof(void*)*4, x_225);
lean_ctor_set(x_177, 3, x_31);
lean_ctor_set(x_177, 2, x_30);
lean_ctor_set(x_177, 1, x_29);
lean_ctor_set(x_177, 0, x_269);
lean_ctor_set(x_176, 3, x_177);
lean_ctor_set(x_176, 2, x_268);
lean_ctor_set(x_176, 1, x_267);
lean_ctor_set(x_176, 0, x_250);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
else
{
lean_object* x_275; 
lean_dec(x_177);
lean_ctor_set_uint8(x_250, sizeof(void*)*4, x_225);
x_275 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_275, 0, x_269);
lean_ctor_set(x_275, 1, x_29);
lean_ctor_set(x_275, 2, x_30);
lean_ctor_set(x_275, 3, x_31);
lean_ctor_set_uint8(x_275, sizeof(void*)*4, x_225);
lean_ctor_set(x_176, 3, x_275);
lean_ctor_set(x_176, 2, x_268);
lean_ctor_set(x_176, 1, x_267);
lean_ctor_set(x_176, 0, x_250);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_276 = lean_ctor_get(x_250, 0);
x_277 = lean_ctor_get(x_250, 1);
x_278 = lean_ctor_get(x_250, 2);
x_279 = lean_ctor_get(x_250, 3);
lean_inc(x_279);
lean_inc(x_278);
lean_inc(x_277);
lean_inc(x_276);
lean_dec(x_250);
lean_inc(x_177);
x_280 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_280, 0, x_177);
lean_ctor_set(x_280, 1, x_261);
lean_ctor_set(x_280, 2, x_262);
lean_ctor_set(x_280, 3, x_276);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_281 = x_177;
} else {
 lean_dec_ref(x_177);
 x_281 = lean_box(0);
}
lean_ctor_set_uint8(x_280, sizeof(void*)*4, x_225);
if (lean_is_scalar(x_281)) {
 x_282 = lean_alloc_ctor(1, 4, 1);
} else {
 x_282 = x_281;
}
lean_ctor_set(x_282, 0, x_279);
lean_ctor_set(x_282, 1, x_29);
lean_ctor_set(x_282, 2, x_30);
lean_ctor_set(x_282, 3, x_31);
lean_ctor_set_uint8(x_282, sizeof(void*)*4, x_225);
lean_ctor_set(x_176, 3, x_282);
lean_ctor_set(x_176, 2, x_278);
lean_ctor_set(x_176, 1, x_277);
lean_ctor_set(x_176, 0, x_280);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_259);
return x_176;
}
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_283 = lean_ctor_get(x_176, 1);
x_284 = lean_ctor_get(x_176, 2);
lean_inc(x_284);
lean_inc(x_283);
lean_dec(x_176);
x_285 = lean_ctor_get(x_250, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_250, 1);
lean_inc(x_286);
x_287 = lean_ctor_get(x_250, 2);
lean_inc(x_287);
x_288 = lean_ctor_get(x_250, 3);
lean_inc(x_288);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 lean_ctor_release(x_250, 2);
 lean_ctor_release(x_250, 3);
 x_289 = x_250;
} else {
 lean_dec_ref(x_250);
 x_289 = lean_box(0);
}
lean_inc(x_177);
if (lean_is_scalar(x_289)) {
 x_290 = lean_alloc_ctor(1, 4, 1);
} else {
 x_290 = x_289;
}
lean_ctor_set(x_290, 0, x_177);
lean_ctor_set(x_290, 1, x_283);
lean_ctor_set(x_290, 2, x_284);
lean_ctor_set(x_290, 3, x_285);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_291 = x_177;
} else {
 lean_dec_ref(x_177);
 x_291 = lean_box(0);
}
lean_ctor_set_uint8(x_290, sizeof(void*)*4, x_225);
if (lean_is_scalar(x_291)) {
 x_292 = lean_alloc_ctor(1, 4, 1);
} else {
 x_292 = x_291;
}
lean_ctor_set(x_292, 0, x_288);
lean_ctor_set(x_292, 1, x_29);
lean_ctor_set(x_292, 2, x_30);
lean_ctor_set(x_292, 3, x_31);
lean_ctor_set_uint8(x_292, sizeof(void*)*4, x_225);
x_293 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_293, 0, x_290);
lean_ctor_set(x_293, 1, x_286);
lean_ctor_set(x_293, 2, x_287);
lean_ctor_set(x_293, 3, x_292);
lean_ctor_set_uint8(x_293, sizeof(void*)*4, x_259);
return x_293;
}
}
else
{
uint8_t x_294; 
x_294 = !lean_is_exclusive(x_176);
if (x_294 == 0)
{
lean_object* x_295; lean_object* x_296; uint8_t x_297; 
x_295 = lean_ctor_get(x_176, 3);
lean_dec(x_295);
x_296 = lean_ctor_get(x_176, 0);
lean_dec(x_296);
x_297 = !lean_is_exclusive(x_177);
if (x_297 == 0)
{
uint8_t x_298; 
lean_ctor_set_uint8(x_177, sizeof(void*)*4, x_259);
x_298 = 0;
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_298);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; uint8_t x_304; 
x_299 = lean_ctor_get(x_177, 0);
x_300 = lean_ctor_get(x_177, 1);
x_301 = lean_ctor_get(x_177, 2);
x_302 = lean_ctor_get(x_177, 3);
lean_inc(x_302);
lean_inc(x_301);
lean_inc(x_300);
lean_inc(x_299);
lean_dec(x_177);
x_303 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_303, 0, x_299);
lean_ctor_set(x_303, 1, x_300);
lean_ctor_set(x_303, 2, x_301);
lean_ctor_set(x_303, 3, x_302);
lean_ctor_set_uint8(x_303, sizeof(void*)*4, x_259);
x_304 = 0;
lean_ctor_set(x_176, 0, x_303);
lean_ctor_set_uint8(x_176, sizeof(void*)*4, x_304);
lean_ctor_set(x_1, 0, x_176);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; lean_object* x_314; 
x_305 = lean_ctor_get(x_176, 1);
x_306 = lean_ctor_get(x_176, 2);
lean_inc(x_306);
lean_inc(x_305);
lean_dec(x_176);
x_307 = lean_ctor_get(x_177, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_177, 1);
lean_inc(x_308);
x_309 = lean_ctor_get(x_177, 2);
lean_inc(x_309);
x_310 = lean_ctor_get(x_177, 3);
lean_inc(x_310);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 lean_ctor_release(x_177, 2);
 lean_ctor_release(x_177, 3);
 x_311 = x_177;
} else {
 lean_dec_ref(x_177);
 x_311 = lean_box(0);
}
if (lean_is_scalar(x_311)) {
 x_312 = lean_alloc_ctor(1, 4, 1);
} else {
 x_312 = x_311;
}
lean_ctor_set(x_312, 0, x_307);
lean_ctor_set(x_312, 1, x_308);
lean_ctor_set(x_312, 2, x_309);
lean_ctor_set(x_312, 3, x_310);
lean_ctor_set_uint8(x_312, sizeof(void*)*4, x_259);
x_313 = 0;
x_314 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_314, 0, x_312);
lean_ctor_set(x_314, 1, x_305);
lean_ctor_set(x_314, 2, x_306);
lean_ctor_set(x_314, 3, x_250);
lean_ctor_set_uint8(x_314, sizeof(void*)*4, x_313);
lean_ctor_set(x_1, 0, x_314);
lean_ctor_set_uint8(x_1, sizeof(void*)*4, x_259);
return x_1;
}
}
}
}
}
}
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; uint8_t x_319; 
x_315 = lean_ctor_get(x_1, 0);
x_316 = lean_ctor_get(x_1, 1);
x_317 = lean_ctor_get(x_1, 2);
x_318 = lean_ctor_get(x_1, 3);
lean_inc(x_318);
lean_inc(x_317);
lean_inc(x_316);
lean_inc(x_315);
lean_dec(x_1);
x_319 = l_Lean_Name_quickLt(x_2, x_316);
if (x_319 == 0)
{
uint8_t x_320; 
x_320 = l_Lean_Name_quickLt(x_316, x_2);
if (x_320 == 0)
{
lean_object* x_321; 
lean_dec(x_317);
lean_dec(x_316);
x_321 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_321, 0, x_315);
lean_ctor_set(x_321, 1, x_2);
lean_ctor_set(x_321, 2, x_3);
lean_ctor_set(x_321, 3, x_318);
lean_ctor_set_uint8(x_321, sizeof(void*)*4, x_6);
return x_321;
}
else
{
uint8_t x_322; 
x_322 = l_Std_RBNode_isRed___rarg(x_318);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; 
x_323 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_318, x_2, x_3);
x_324 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_324, 0, x_315);
lean_ctor_set(x_324, 1, x_316);
lean_ctor_set(x_324, 2, x_317);
lean_ctor_set(x_324, 3, x_323);
lean_ctor_set_uint8(x_324, sizeof(void*)*4, x_6);
return x_324;
}
else
{
lean_object* x_325; lean_object* x_326; 
x_325 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_318, x_2, x_3);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
if (lean_obj_tag(x_326) == 0)
{
lean_object* x_327; 
x_327 = lean_ctor_get(x_325, 3);
lean_inc(x_327);
if (lean_obj_tag(x_327) == 0)
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; uint8_t x_331; lean_object* x_332; uint8_t x_333; lean_object* x_334; 
x_328 = lean_ctor_get(x_325, 1);
lean_inc(x_328);
x_329 = lean_ctor_get(x_325, 2);
lean_inc(x_329);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_330 = x_325;
} else {
 lean_dec_ref(x_325);
 x_330 = lean_box(0);
}
x_331 = 0;
if (lean_is_scalar(x_330)) {
 x_332 = lean_alloc_ctor(1, 4, 1);
} else {
 x_332 = x_330;
}
lean_ctor_set(x_332, 0, x_327);
lean_ctor_set(x_332, 1, x_328);
lean_ctor_set(x_332, 2, x_329);
lean_ctor_set(x_332, 3, x_327);
lean_ctor_set_uint8(x_332, sizeof(void*)*4, x_331);
x_333 = 1;
x_334 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_334, 0, x_315);
lean_ctor_set(x_334, 1, x_316);
lean_ctor_set(x_334, 2, x_317);
lean_ctor_set(x_334, 3, x_332);
lean_ctor_set_uint8(x_334, sizeof(void*)*4, x_333);
return x_334;
}
else
{
uint8_t x_335; 
x_335 = lean_ctor_get_uint8(x_327, sizeof(void*)*4);
if (x_335 == 0)
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_336 = lean_ctor_get(x_325, 1);
lean_inc(x_336);
x_337 = lean_ctor_get(x_325, 2);
lean_inc(x_337);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_338 = x_325;
} else {
 lean_dec_ref(x_325);
 x_338 = lean_box(0);
}
x_339 = lean_ctor_get(x_327, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_327, 1);
lean_inc(x_340);
x_341 = lean_ctor_get(x_327, 2);
lean_inc(x_341);
x_342 = lean_ctor_get(x_327, 3);
lean_inc(x_342);
if (lean_is_exclusive(x_327)) {
 lean_ctor_release(x_327, 0);
 lean_ctor_release(x_327, 1);
 lean_ctor_release(x_327, 2);
 lean_ctor_release(x_327, 3);
 x_343 = x_327;
} else {
 lean_dec_ref(x_327);
 x_343 = lean_box(0);
}
x_344 = 1;
if (lean_is_scalar(x_343)) {
 x_345 = lean_alloc_ctor(1, 4, 1);
} else {
 x_345 = x_343;
}
lean_ctor_set(x_345, 0, x_315);
lean_ctor_set(x_345, 1, x_316);
lean_ctor_set(x_345, 2, x_317);
lean_ctor_set(x_345, 3, x_326);
lean_ctor_set_uint8(x_345, sizeof(void*)*4, x_344);
if (lean_is_scalar(x_338)) {
 x_346 = lean_alloc_ctor(1, 4, 1);
} else {
 x_346 = x_338;
}
lean_ctor_set(x_346, 0, x_339);
lean_ctor_set(x_346, 1, x_340);
lean_ctor_set(x_346, 2, x_341);
lean_ctor_set(x_346, 3, x_342);
lean_ctor_set_uint8(x_346, sizeof(void*)*4, x_344);
x_347 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_347, 0, x_345);
lean_ctor_set(x_347, 1, x_336);
lean_ctor_set(x_347, 2, x_337);
lean_ctor_set(x_347, 3, x_346);
lean_ctor_set_uint8(x_347, sizeof(void*)*4, x_335);
return x_347;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; uint8_t x_351; lean_object* x_352; lean_object* x_353; 
x_348 = lean_ctor_get(x_325, 1);
lean_inc(x_348);
x_349 = lean_ctor_get(x_325, 2);
lean_inc(x_349);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_350 = x_325;
} else {
 lean_dec_ref(x_325);
 x_350 = lean_box(0);
}
x_351 = 0;
if (lean_is_scalar(x_350)) {
 x_352 = lean_alloc_ctor(1, 4, 1);
} else {
 x_352 = x_350;
}
lean_ctor_set(x_352, 0, x_326);
lean_ctor_set(x_352, 1, x_348);
lean_ctor_set(x_352, 2, x_349);
lean_ctor_set(x_352, 3, x_327);
lean_ctor_set_uint8(x_352, sizeof(void*)*4, x_351);
x_353 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_353, 0, x_315);
lean_ctor_set(x_353, 1, x_316);
lean_ctor_set(x_353, 2, x_317);
lean_ctor_set(x_353, 3, x_352);
lean_ctor_set_uint8(x_353, sizeof(void*)*4, x_335);
return x_353;
}
}
}
else
{
uint8_t x_354; 
x_354 = lean_ctor_get_uint8(x_326, sizeof(void*)*4);
if (x_354 == 0)
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; uint8_t x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_355 = lean_ctor_get(x_325, 1);
lean_inc(x_355);
x_356 = lean_ctor_get(x_325, 2);
lean_inc(x_356);
x_357 = lean_ctor_get(x_325, 3);
lean_inc(x_357);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_358 = x_325;
} else {
 lean_dec_ref(x_325);
 x_358 = lean_box(0);
}
x_359 = lean_ctor_get(x_326, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_326, 1);
lean_inc(x_360);
x_361 = lean_ctor_get(x_326, 2);
lean_inc(x_361);
x_362 = lean_ctor_get(x_326, 3);
lean_inc(x_362);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_363 = x_326;
} else {
 lean_dec_ref(x_326);
 x_363 = lean_box(0);
}
x_364 = 1;
if (lean_is_scalar(x_363)) {
 x_365 = lean_alloc_ctor(1, 4, 1);
} else {
 x_365 = x_363;
}
lean_ctor_set(x_365, 0, x_315);
lean_ctor_set(x_365, 1, x_316);
lean_ctor_set(x_365, 2, x_317);
lean_ctor_set(x_365, 3, x_359);
lean_ctor_set_uint8(x_365, sizeof(void*)*4, x_364);
if (lean_is_scalar(x_358)) {
 x_366 = lean_alloc_ctor(1, 4, 1);
} else {
 x_366 = x_358;
}
lean_ctor_set(x_366, 0, x_362);
lean_ctor_set(x_366, 1, x_355);
lean_ctor_set(x_366, 2, x_356);
lean_ctor_set(x_366, 3, x_357);
lean_ctor_set_uint8(x_366, sizeof(void*)*4, x_364);
x_367 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_360);
lean_ctor_set(x_367, 2, x_361);
lean_ctor_set(x_367, 3, x_366);
lean_ctor_set_uint8(x_367, sizeof(void*)*4, x_354);
return x_367;
}
else
{
lean_object* x_368; 
x_368 = lean_ctor_get(x_325, 3);
lean_inc(x_368);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; lean_object* x_373; lean_object* x_374; 
x_369 = lean_ctor_get(x_325, 1);
lean_inc(x_369);
x_370 = lean_ctor_get(x_325, 2);
lean_inc(x_370);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_371 = x_325;
} else {
 lean_dec_ref(x_325);
 x_371 = lean_box(0);
}
x_372 = 0;
if (lean_is_scalar(x_371)) {
 x_373 = lean_alloc_ctor(1, 4, 1);
} else {
 x_373 = x_371;
}
lean_ctor_set(x_373, 0, x_326);
lean_ctor_set(x_373, 1, x_369);
lean_ctor_set(x_373, 2, x_370);
lean_ctor_set(x_373, 3, x_368);
lean_ctor_set_uint8(x_373, sizeof(void*)*4, x_372);
x_374 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_374, 0, x_315);
lean_ctor_set(x_374, 1, x_316);
lean_ctor_set(x_374, 2, x_317);
lean_ctor_set(x_374, 3, x_373);
lean_ctor_set_uint8(x_374, sizeof(void*)*4, x_354);
return x_374;
}
else
{
uint8_t x_375; 
x_375 = lean_ctor_get_uint8(x_368, sizeof(void*)*4);
if (x_375 == 0)
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_376 = lean_ctor_get(x_325, 1);
lean_inc(x_376);
x_377 = lean_ctor_get(x_325, 2);
lean_inc(x_377);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_378 = x_325;
} else {
 lean_dec_ref(x_325);
 x_378 = lean_box(0);
}
x_379 = lean_ctor_get(x_368, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_368, 1);
lean_inc(x_380);
x_381 = lean_ctor_get(x_368, 2);
lean_inc(x_381);
x_382 = lean_ctor_get(x_368, 3);
lean_inc(x_382);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 lean_ctor_release(x_368, 2);
 lean_ctor_release(x_368, 3);
 x_383 = x_368;
} else {
 lean_dec_ref(x_368);
 x_383 = lean_box(0);
}
lean_inc(x_326);
if (lean_is_scalar(x_383)) {
 x_384 = lean_alloc_ctor(1, 4, 1);
} else {
 x_384 = x_383;
}
lean_ctor_set(x_384, 0, x_315);
lean_ctor_set(x_384, 1, x_316);
lean_ctor_set(x_384, 2, x_317);
lean_ctor_set(x_384, 3, x_326);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_385 = x_326;
} else {
 lean_dec_ref(x_326);
 x_385 = lean_box(0);
}
lean_ctor_set_uint8(x_384, sizeof(void*)*4, x_354);
if (lean_is_scalar(x_385)) {
 x_386 = lean_alloc_ctor(1, 4, 1);
} else {
 x_386 = x_385;
}
lean_ctor_set(x_386, 0, x_379);
lean_ctor_set(x_386, 1, x_380);
lean_ctor_set(x_386, 2, x_381);
lean_ctor_set(x_386, 3, x_382);
lean_ctor_set_uint8(x_386, sizeof(void*)*4, x_354);
if (lean_is_scalar(x_378)) {
 x_387 = lean_alloc_ctor(1, 4, 1);
} else {
 x_387 = x_378;
}
lean_ctor_set(x_387, 0, x_384);
lean_ctor_set(x_387, 1, x_376);
lean_ctor_set(x_387, 2, x_377);
lean_ctor_set(x_387, 3, x_386);
lean_ctor_set_uint8(x_387, sizeof(void*)*4, x_375);
return x_387;
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; uint8_t x_397; lean_object* x_398; lean_object* x_399; 
x_388 = lean_ctor_get(x_325, 1);
lean_inc(x_388);
x_389 = lean_ctor_get(x_325, 2);
lean_inc(x_389);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 lean_ctor_release(x_325, 2);
 lean_ctor_release(x_325, 3);
 x_390 = x_325;
} else {
 lean_dec_ref(x_325);
 x_390 = lean_box(0);
}
x_391 = lean_ctor_get(x_326, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_326, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_326, 2);
lean_inc(x_393);
x_394 = lean_ctor_get(x_326, 3);
lean_inc(x_394);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 lean_ctor_release(x_326, 2);
 lean_ctor_release(x_326, 3);
 x_395 = x_326;
} else {
 lean_dec_ref(x_326);
 x_395 = lean_box(0);
}
if (lean_is_scalar(x_395)) {
 x_396 = lean_alloc_ctor(1, 4, 1);
} else {
 x_396 = x_395;
}
lean_ctor_set(x_396, 0, x_391);
lean_ctor_set(x_396, 1, x_392);
lean_ctor_set(x_396, 2, x_393);
lean_ctor_set(x_396, 3, x_394);
lean_ctor_set_uint8(x_396, sizeof(void*)*4, x_375);
x_397 = 0;
if (lean_is_scalar(x_390)) {
 x_398 = lean_alloc_ctor(1, 4, 1);
} else {
 x_398 = x_390;
}
lean_ctor_set(x_398, 0, x_396);
lean_ctor_set(x_398, 1, x_388);
lean_ctor_set(x_398, 2, x_389);
lean_ctor_set(x_398, 3, x_368);
lean_ctor_set_uint8(x_398, sizeof(void*)*4, x_397);
x_399 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_399, 0, x_315);
lean_ctor_set(x_399, 1, x_316);
lean_ctor_set(x_399, 2, x_317);
lean_ctor_set(x_399, 3, x_398);
lean_ctor_set_uint8(x_399, sizeof(void*)*4, x_375);
return x_399;
}
}
}
}
}
}
}
else
{
uint8_t x_400; 
x_400 = l_Std_RBNode_isRed___rarg(x_315);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; 
x_401 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_315, x_2, x_3);
x_402 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_316);
lean_ctor_set(x_402, 2, x_317);
lean_ctor_set(x_402, 3, x_318);
lean_ctor_set_uint8(x_402, sizeof(void*)*4, x_6);
return x_402;
}
else
{
lean_object* x_403; lean_object* x_404; 
x_403 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_315, x_2, x_3);
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_405; 
x_405 = lean_ctor_get(x_403, 3);
lean_inc(x_405);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; uint8_t x_409; lean_object* x_410; uint8_t x_411; lean_object* x_412; 
x_406 = lean_ctor_get(x_403, 1);
lean_inc(x_406);
x_407 = lean_ctor_get(x_403, 2);
lean_inc(x_407);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_408 = x_403;
} else {
 lean_dec_ref(x_403);
 x_408 = lean_box(0);
}
x_409 = 0;
if (lean_is_scalar(x_408)) {
 x_410 = lean_alloc_ctor(1, 4, 1);
} else {
 x_410 = x_408;
}
lean_ctor_set(x_410, 0, x_405);
lean_ctor_set(x_410, 1, x_406);
lean_ctor_set(x_410, 2, x_407);
lean_ctor_set(x_410, 3, x_405);
lean_ctor_set_uint8(x_410, sizeof(void*)*4, x_409);
x_411 = 1;
x_412 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_412, 0, x_410);
lean_ctor_set(x_412, 1, x_316);
lean_ctor_set(x_412, 2, x_317);
lean_ctor_set(x_412, 3, x_318);
lean_ctor_set_uint8(x_412, sizeof(void*)*4, x_411);
return x_412;
}
else
{
uint8_t x_413; 
x_413 = lean_ctor_get_uint8(x_405, sizeof(void*)*4);
if (x_413 == 0)
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; uint8_t x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_414 = lean_ctor_get(x_403, 1);
lean_inc(x_414);
x_415 = lean_ctor_get(x_403, 2);
lean_inc(x_415);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_416 = x_403;
} else {
 lean_dec_ref(x_403);
 x_416 = lean_box(0);
}
x_417 = lean_ctor_get(x_405, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_405, 1);
lean_inc(x_418);
x_419 = lean_ctor_get(x_405, 2);
lean_inc(x_419);
x_420 = lean_ctor_get(x_405, 3);
lean_inc(x_420);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 lean_ctor_release(x_405, 2);
 lean_ctor_release(x_405, 3);
 x_421 = x_405;
} else {
 lean_dec_ref(x_405);
 x_421 = lean_box(0);
}
x_422 = 1;
if (lean_is_scalar(x_421)) {
 x_423 = lean_alloc_ctor(1, 4, 1);
} else {
 x_423 = x_421;
}
lean_ctor_set(x_423, 0, x_404);
lean_ctor_set(x_423, 1, x_414);
lean_ctor_set(x_423, 2, x_415);
lean_ctor_set(x_423, 3, x_417);
lean_ctor_set_uint8(x_423, sizeof(void*)*4, x_422);
if (lean_is_scalar(x_416)) {
 x_424 = lean_alloc_ctor(1, 4, 1);
} else {
 x_424 = x_416;
}
lean_ctor_set(x_424, 0, x_420);
lean_ctor_set(x_424, 1, x_316);
lean_ctor_set(x_424, 2, x_317);
lean_ctor_set(x_424, 3, x_318);
lean_ctor_set_uint8(x_424, sizeof(void*)*4, x_422);
x_425 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_425, 0, x_423);
lean_ctor_set(x_425, 1, x_418);
lean_ctor_set(x_425, 2, x_419);
lean_ctor_set(x_425, 3, x_424);
lean_ctor_set_uint8(x_425, sizeof(void*)*4, x_413);
return x_425;
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; uint8_t x_429; lean_object* x_430; lean_object* x_431; 
x_426 = lean_ctor_get(x_403, 1);
lean_inc(x_426);
x_427 = lean_ctor_get(x_403, 2);
lean_inc(x_427);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_428 = x_403;
} else {
 lean_dec_ref(x_403);
 x_428 = lean_box(0);
}
x_429 = 0;
if (lean_is_scalar(x_428)) {
 x_430 = lean_alloc_ctor(1, 4, 1);
} else {
 x_430 = x_428;
}
lean_ctor_set(x_430, 0, x_404);
lean_ctor_set(x_430, 1, x_426);
lean_ctor_set(x_430, 2, x_427);
lean_ctor_set(x_430, 3, x_405);
lean_ctor_set_uint8(x_430, sizeof(void*)*4, x_429);
x_431 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_431, 0, x_430);
lean_ctor_set(x_431, 1, x_316);
lean_ctor_set(x_431, 2, x_317);
lean_ctor_set(x_431, 3, x_318);
lean_ctor_set_uint8(x_431, sizeof(void*)*4, x_413);
return x_431;
}
}
}
else
{
uint8_t x_432; 
x_432 = lean_ctor_get_uint8(x_404, sizeof(void*)*4);
if (x_432 == 0)
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; uint8_t x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_433 = lean_ctor_get(x_403, 1);
lean_inc(x_433);
x_434 = lean_ctor_get(x_403, 2);
lean_inc(x_434);
x_435 = lean_ctor_get(x_403, 3);
lean_inc(x_435);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_436 = x_403;
} else {
 lean_dec_ref(x_403);
 x_436 = lean_box(0);
}
x_437 = lean_ctor_get(x_404, 0);
lean_inc(x_437);
x_438 = lean_ctor_get(x_404, 1);
lean_inc(x_438);
x_439 = lean_ctor_get(x_404, 2);
lean_inc(x_439);
x_440 = lean_ctor_get(x_404, 3);
lean_inc(x_440);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_441 = x_404;
} else {
 lean_dec_ref(x_404);
 x_441 = lean_box(0);
}
x_442 = 1;
if (lean_is_scalar(x_441)) {
 x_443 = lean_alloc_ctor(1, 4, 1);
} else {
 x_443 = x_441;
}
lean_ctor_set(x_443, 0, x_437);
lean_ctor_set(x_443, 1, x_438);
lean_ctor_set(x_443, 2, x_439);
lean_ctor_set(x_443, 3, x_440);
lean_ctor_set_uint8(x_443, sizeof(void*)*4, x_442);
if (lean_is_scalar(x_436)) {
 x_444 = lean_alloc_ctor(1, 4, 1);
} else {
 x_444 = x_436;
}
lean_ctor_set(x_444, 0, x_435);
lean_ctor_set(x_444, 1, x_316);
lean_ctor_set(x_444, 2, x_317);
lean_ctor_set(x_444, 3, x_318);
lean_ctor_set_uint8(x_444, sizeof(void*)*4, x_442);
x_445 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_433);
lean_ctor_set(x_445, 2, x_434);
lean_ctor_set(x_445, 3, x_444);
lean_ctor_set_uint8(x_445, sizeof(void*)*4, x_432);
return x_445;
}
else
{
lean_object* x_446; 
x_446 = lean_ctor_get(x_403, 3);
lean_inc(x_446);
if (lean_obj_tag(x_446) == 0)
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; lean_object* x_451; lean_object* x_452; 
x_447 = lean_ctor_get(x_403, 1);
lean_inc(x_447);
x_448 = lean_ctor_get(x_403, 2);
lean_inc(x_448);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_449 = x_403;
} else {
 lean_dec_ref(x_403);
 x_449 = lean_box(0);
}
x_450 = 0;
if (lean_is_scalar(x_449)) {
 x_451 = lean_alloc_ctor(1, 4, 1);
} else {
 x_451 = x_449;
}
lean_ctor_set(x_451, 0, x_404);
lean_ctor_set(x_451, 1, x_447);
lean_ctor_set(x_451, 2, x_448);
lean_ctor_set(x_451, 3, x_446);
lean_ctor_set_uint8(x_451, sizeof(void*)*4, x_450);
x_452 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_452, 0, x_451);
lean_ctor_set(x_452, 1, x_316);
lean_ctor_set(x_452, 2, x_317);
lean_ctor_set(x_452, 3, x_318);
lean_ctor_set_uint8(x_452, sizeof(void*)*4, x_432);
return x_452;
}
else
{
uint8_t x_453; 
x_453 = lean_ctor_get_uint8(x_446, sizeof(void*)*4);
if (x_453 == 0)
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
x_454 = lean_ctor_get(x_403, 1);
lean_inc(x_454);
x_455 = lean_ctor_get(x_403, 2);
lean_inc(x_455);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_456 = x_403;
} else {
 lean_dec_ref(x_403);
 x_456 = lean_box(0);
}
x_457 = lean_ctor_get(x_446, 0);
lean_inc(x_457);
x_458 = lean_ctor_get(x_446, 1);
lean_inc(x_458);
x_459 = lean_ctor_get(x_446, 2);
lean_inc(x_459);
x_460 = lean_ctor_get(x_446, 3);
lean_inc(x_460);
if (lean_is_exclusive(x_446)) {
 lean_ctor_release(x_446, 0);
 lean_ctor_release(x_446, 1);
 lean_ctor_release(x_446, 2);
 lean_ctor_release(x_446, 3);
 x_461 = x_446;
} else {
 lean_dec_ref(x_446);
 x_461 = lean_box(0);
}
lean_inc(x_404);
if (lean_is_scalar(x_461)) {
 x_462 = lean_alloc_ctor(1, 4, 1);
} else {
 x_462 = x_461;
}
lean_ctor_set(x_462, 0, x_404);
lean_ctor_set(x_462, 1, x_454);
lean_ctor_set(x_462, 2, x_455);
lean_ctor_set(x_462, 3, x_457);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_463 = x_404;
} else {
 lean_dec_ref(x_404);
 x_463 = lean_box(0);
}
lean_ctor_set_uint8(x_462, sizeof(void*)*4, x_432);
if (lean_is_scalar(x_463)) {
 x_464 = lean_alloc_ctor(1, 4, 1);
} else {
 x_464 = x_463;
}
lean_ctor_set(x_464, 0, x_460);
lean_ctor_set(x_464, 1, x_316);
lean_ctor_set(x_464, 2, x_317);
lean_ctor_set(x_464, 3, x_318);
lean_ctor_set_uint8(x_464, sizeof(void*)*4, x_432);
if (lean_is_scalar(x_456)) {
 x_465 = lean_alloc_ctor(1, 4, 1);
} else {
 x_465 = x_456;
}
lean_ctor_set(x_465, 0, x_462);
lean_ctor_set(x_465, 1, x_458);
lean_ctor_set(x_465, 2, x_459);
lean_ctor_set(x_465, 3, x_464);
lean_ctor_set_uint8(x_465, sizeof(void*)*4, x_453);
return x_465;
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; lean_object* x_476; lean_object* x_477; 
x_466 = lean_ctor_get(x_403, 1);
lean_inc(x_466);
x_467 = lean_ctor_get(x_403, 2);
lean_inc(x_467);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 lean_ctor_release(x_403, 2);
 lean_ctor_release(x_403, 3);
 x_468 = x_403;
} else {
 lean_dec_ref(x_403);
 x_468 = lean_box(0);
}
x_469 = lean_ctor_get(x_404, 0);
lean_inc(x_469);
x_470 = lean_ctor_get(x_404, 1);
lean_inc(x_470);
x_471 = lean_ctor_get(x_404, 2);
lean_inc(x_471);
x_472 = lean_ctor_get(x_404, 3);
lean_inc(x_472);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 lean_ctor_release(x_404, 2);
 lean_ctor_release(x_404, 3);
 x_473 = x_404;
} else {
 lean_dec_ref(x_404);
 x_473 = lean_box(0);
}
if (lean_is_scalar(x_473)) {
 x_474 = lean_alloc_ctor(1, 4, 1);
} else {
 x_474 = x_473;
}
lean_ctor_set(x_474, 0, x_469);
lean_ctor_set(x_474, 1, x_470);
lean_ctor_set(x_474, 2, x_471);
lean_ctor_set(x_474, 3, x_472);
lean_ctor_set_uint8(x_474, sizeof(void*)*4, x_453);
x_475 = 0;
if (lean_is_scalar(x_468)) {
 x_476 = lean_alloc_ctor(1, 4, 1);
} else {
 x_476 = x_468;
}
lean_ctor_set(x_476, 0, x_474);
lean_ctor_set(x_476, 1, x_466);
lean_ctor_set(x_476, 2, x_467);
lean_ctor_set(x_476, 3, x_446);
lean_ctor_set_uint8(x_476, sizeof(void*)*4, x_475);
x_477 = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(x_477, 0, x_476);
lean_ctor_set(x_477, 1, x_316);
lean_ctor_set(x_477, 2, x_317);
lean_ctor_set(x_477, 3, x_318);
lean_ctor_set_uint8(x_477, sizeof(void*)*4, x_453);
return x_477;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Std_RBNode_isRed___rarg(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__6___rarg(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Std_RBNode_ins___main___at_Lean_Parser_TokenMap_insert___spec__7___rarg(x_1, x_2, x_3);
x_7 = l_Std_RBNode_setBlack___rarg(x_6);
return x_7;
}
}
}
lean_object* l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_TokenMap_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_RBNode_find___main___at_Lean_Parser_TokenMap_insert___spec__1___rarg(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__2___rarg(x_1, x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Std_RBNode_insert___at_Lean_Parser_TokenMap_insert___spec__5___rarg(x_1, x_2, x_9);
return x_10;
}
}
}
lean_object* l_Lean_Parser_TokenMap_insert(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_insert___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_TokenMap_insert___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___main___at_Lean_Parser_TokenMap_insert___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_TokenMap_Inhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_Lean_Parser_TokenMap_HasEmptyc(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_PrattParsingTables_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_1);
lean_ctor_set(x_3, 3, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_PrattParsingTables_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_PrattParsingTables_inhabited___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_ParserCategory_inhabited___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_PrattParsingTables_inhabited___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_ParserCategory_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_ParserCategory_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickLt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Name_quickLt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickLt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Name_quickLt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__2___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickLt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Name_quickLt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__3___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_indexed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_ctor_get(x_3, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_3, 1);
lean_inc(x_39);
x_40 = lean_nat_dec_eq(x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
if (x_40 == 0)
{
lean_object* x_41; 
lean_dec(x_37);
x_41 = l_Lean_Parser_peekTokenAux(x_2, x_3);
x_5 = x_41;
goto block_36;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_2);
x_42 = lean_ctor_get(x_37, 2);
lean_inc(x_42);
lean_dec(x_37);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_3);
lean_ctor_set(x_44, 1, x_43);
x_5 = x_44;
goto block_36;
}
block_36:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_8 = x_5;
} else {
 lean_dec_ref(x_5);
 x_8 = lean_box(0);
}
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
lean_dec(x_7);
switch (lean_obj_tag(x_18)) {
case 0:
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_8);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_6);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
case 1:
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_9 = x_21;
goto block_15;
}
case 2:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_name_mk_string(x_23, x_22);
x_9 = x_24;
goto block_15;
}
default: 
{
if (x_4 == 0)
{
lean_object* x_25; 
lean_dec(x_18);
x_25 = l_Lean_identKind;
x_9 = x_25;
goto block_15;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_18, 2);
lean_inc(x_26);
lean_dec(x_18);
x_27 = l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__2___rarg(x_1, x_26);
lean_dec(x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = l_Lean_identKind;
x_9 = x_28;
goto block_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_8);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_identKind;
x_31 = l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__3___rarg(x_1, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_6);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_List_append___rarg(x_29, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_6);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
}
block_15:
{
lean_object* x_10; 
x_10 = l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__1___rarg(x_1, x_9);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
if (lean_is_scalar(x_8)) {
 x_12 = lean_alloc_ctor(0, 2, 0);
} else {
 x_12 = x_8;
}
lean_ctor_set(x_12, 0, x_6);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
if (lean_is_scalar(x_8)) {
 x_14 = lean_alloc_ctor(0, 2, 0);
} else {
 x_14 = x_8;
}
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
}
lean_object* l_Lean_Parser_indexed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_indexed___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__2___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___main___at_Lean_Parser_indexed___spec__3___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_indexed___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_Parser_indexed___rarg(x_1, x_2, x_3, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_IO_mkRef___at_Lean_Parser_mkCategoryParserFnRef___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Parser_mkCategoryParserFnRef___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_whitespace___main(x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_mkCategoryParserFnRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_mkCategoryParserFnRef___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_mkCategoryParserFnRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_mkCategoryParserFnRef___closed__1;
x_3 = l_IO_mkRef___at_Lean_Parser_mkCategoryParserFnRef___spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_mkCategoryParserFnRef___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_mkCategoryParserFnRef___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
lean_object* _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_initializing(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l___private_Lean_Environment_5__envExtensionsRef;
x_14 = lean_st_ref_get(x_13, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_get_size(x_15);
lean_dec(x_15);
x_18 = l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___closed__1;
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_1);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_st_ref_take(x_13, x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_19);
x_23 = x_19;
x_24 = lean_array_push(x_21, x_23);
x_25 = lean_st_ref_set(x_13, x_24, x_22);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_19);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_3);
if (x_30 == 0)
{
return x_3;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_3, 0);
x_32 = lean_ctor_get(x_3, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_3);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_Parser_mkCategoryParserFnExtension___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Parser_categoryParserFnRef;
x_3 = lean_st_ref_get(x_2, x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* _init_l_Lean_Parser_mkCategoryParserFnExtension___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_mkCategoryParserFnExtension___lambda__1), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_mkCategoryParserFnExtension(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_mkCategoryParserFnExtension___closed__1;
x_3 = l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFnExtension___elambda__1___rarg___boxed), 1, 0);
return x_3;
}
}
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_IO_Error_Inhabited___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_categoryParserFnExtension___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFnExtension___elambda__2), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_categoryParserFnExtension___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFnExtension___elambda__1___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_categoryParserFnExtension___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Parser_categoryParserFnExtension___closed__1;
x_3 = l_Lean_Parser_categoryParserFnExtension___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_categoryParserFnExtension___elambda__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_categoryParserFnExtension___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_categoryParserFnExtension___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_categoryParserFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
x_5 = l_Lean_Parser_categoryParserFnExtension;
x_6 = l_Lean_EnvExtension_getStateUnsafe___rarg(x_5, x_4);
lean_dec(x_4);
x_7 = lean_apply_3(x_6, x_1, x_2, x_3);
return x_7;
}
}
lean_object* l_Lean_Parser_categoryParser___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 1);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
x_7 = l_Lean_Parser_categoryParserFn(x_1, x_3, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 2);
x_10 = lean_ctor_get(x_3, 3);
x_11 = lean_ctor_get_uint8(x_3, sizeof(void*)*4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_12 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_2);
lean_ctor_set(x_12, 2, x_9);
lean_ctor_set(x_12, 3, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*4, x_11);
x_13 = l_Lean_Parser_categoryParserFn(x_1, x_12, x_4);
return x_13;
}
}
}
lean_object* l_Lean_Parser_categoryParser(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___elambda__1), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_Lean_Parser_Parser_inhabited___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* _init_l_Lean_Parser_termParser___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("term");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_termParser___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_termParser___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_termParser(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_termParser___closed__2;
x_3 = l_Lean_Parser_categoryParser(x_2, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("$");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_dollarSymbol___elambda__1___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_dollarSymbol___elambda__1___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_dollarSymbol___elambda__1___closed__3;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_dollarSymbol___elambda__1___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_dollarSymbol___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = l_Lean_Parser_tokenFn(x_1, x_2);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_6);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 2)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_Parser_dollarSymbol___elambda__1___closed__2;
x_10 = lean_string_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Parser_dollarSymbol___elambda__1___closed__5;
x_12 = l_Lean_Parser_ParserState_mkErrorsAt(x_4, x_11, x_3);
return x_12;
}
else
{
lean_dec(x_3);
return x_4;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_7);
x_13 = l_Lean_Parser_dollarSymbol___elambda__1___closed__5;
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_4, x_13, x_3);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_15 = l_Lean_Parser_dollarSymbol___elambda__1___closed__5;
x_16 = l_Lean_Parser_ParserState_mkErrorsAt(x_4, x_15, x_3);
return x_16;
}
}
}
lean_object* _init_l_Lean_Parser_dollarSymbol___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_dollarSymbol___elambda__1___closed__2;
x_2 = l_Lean_Parser_symbolInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_dollarSymbol___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_dollarSymbol___elambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_dollarSymbol___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_dollarSymbol___closed__1;
x_2 = l_Lean_Parser_dollarSymbol___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_dollarSymbol() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_dollarSymbol___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_checkNoImmediateColon___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected ':'");
return x_1;
}
}
lean_object* l_Lean_Parser_checkNoImmediateColon___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_3);
lean_dec(x_3);
x_5 = l_Lean_Parser_checkTailNoWs(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_6, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
x_9 = lean_string_utf8_at_end(x_7, x_8);
if (x_9 == 0)
{
uint32_t x_10; uint32_t x_11; uint8_t x_12; 
x_10 = lean_string_utf8_get(x_7, x_8);
lean_dec(x_8);
x_11 = 58;
x_12 = x_10 == x_11;
if (x_12 == 0)
{
return x_2;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Parser_checkNoImmediateColon___elambda__1___closed__1;
x_14 = l_Lean_Parser_ParserState_mkUnexpectedError(x_2, x_13);
return x_14;
}
}
else
{
lean_dec(x_8);
return x_2;
}
}
}
}
lean_object* _init_l_Lean_Parser_checkNoImmediateColon___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_checkNoImmediateColon___elambda__1___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_checkNoImmediateColon___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_checkNoImmediateColon___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_checkNoImmediateColon() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_checkNoImmediateColon___closed__2;
return x_1;
}
}
lean_object* l_Lean_Parser_checkNoImmediateColon___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_checkNoImmediateColon___elambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_setExpectedFn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
return x_4;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_4, 3);
lean_dec(x_9);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 1);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_8, 1, x_12);
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_5, 0, x_15);
return x_4;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_ctor_get(x_4, 0);
x_18 = lean_ctor_get(x_4, 1);
x_19 = lean_ctor_get(x_4, 2);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_4);
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_21 = x_16;
} else {
 lean_dec_ref(x_16);
 x_21 = lean_box(0);
}
x_22 = lean_box(0);
if (lean_is_scalar(x_21)) {
 x_23 = lean_alloc_ctor(0, 2, 0);
} else {
 x_23 = x_21;
}
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
lean_ctor_set(x_5, 0, x_23);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_18);
lean_ctor_set(x_24, 2, x_19);
lean_ctor_set(x_24, 3, x_5);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_25 = lean_ctor_get(x_5, 0);
lean_inc(x_25);
lean_dec(x_5);
x_26 = lean_ctor_get(x_4, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_4, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_4, 2);
lean_inc(x_28);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 x_29 = x_4;
} else {
 lean_dec_ref(x_4);
 x_29 = lean_box(0);
}
x_30 = lean_ctor_get(x_25, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_31 = x_25;
} else {
 lean_dec_ref(x_25);
 x_31 = lean_box(0);
}
x_32 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
if (lean_is_scalar(x_29)) {
 x_35 = lean_alloc_ctor(0, 4, 0);
} else {
 x_35 = x_29;
}
lean_ctor_set(x_35, 0, x_26);
lean_ctor_set(x_35, 1, x_27);
lean_ctor_set(x_35, 2, x_28);
lean_ctor_set(x_35, 3, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Parser_setExpectedFn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_setExpectedFn___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_setExpectedFn___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_setExpectedFn(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_setExpected___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_setExpectedFn___rarg(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_setExpected___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_setExpected___elambda__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_setExpected(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_setExpected___elambda__1___rarg), 3, 1);
lean_closure_set(x_5, 0, x_4);
lean_ctor_set(x_2, 1, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_setExpected___elambda__1___rarg), 3, 1);
lean_closure_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Parser_setExpected___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_setExpected___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_setExpected___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_setExpected(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_pushNone___elambda__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_mkOptionalNode___closed__1;
x_3 = l_Lean_Parser_ParserState_pushSyntax(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_pushNone___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_pushNone___elambda__1___rarg), 1, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_pushNone___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_pushNone___elambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_pushNone___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_pushNone___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_pushNone() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_pushNone___closed__2;
return x_1;
}
}
lean_object* l_Lean_Parser_pushNone___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_pushNone___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("antiquotNestedExpr");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Prod_HasRepr___rarg___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_termParser___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___elambda__1), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Option_HasRepr___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__5;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__6;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__3;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__9;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_array_get_size(x_3);
lean_dec(x_3);
x_37 = lean_ctor_get(x_2, 1);
lean_inc(x_37);
lean_inc(x_1);
x_38 = l_Lean_Parser_tokenFn(x_1, x_2);
x_39 = lean_ctor_get(x_38, 3);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_40);
lean_dec(x_40);
if (lean_obj_tag(x_41) == 2)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__3;
x_44 = lean_string_dec_eq(x_42, x_43);
lean_dec(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__11;
x_46 = l_Lean_Parser_ParserState_mkErrorsAt(x_38, x_45, x_37);
x_5 = x_46;
goto block_36;
}
else
{
lean_dec(x_37);
x_5 = x_38;
goto block_36;
}
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_41);
x_47 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__11;
x_48 = l_Lean_Parser_ParserState_mkErrorsAt(x_38, x_47, x_37);
x_5 = x_48;
goto block_36;
}
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_39);
x_49 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__11;
x_50 = l_Lean_Parser_ParserState_mkErrorsAt(x_38, x_49, x_37);
x_5 = x_50;
goto block_36;
}
block_36:
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__4;
lean_inc(x_1);
x_8 = l_Lean_Parser_toggleInsideQuotFn(x_7, x_1, x_5);
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
x_11 = l_Lean_Parser_tokenFn(x_1, x_8);
x_12 = lean_ctor_get(x_11, 3);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_13);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 2)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__5;
x_17 = lean_string_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__8;
x_19 = l_Lean_Parser_ParserState_mkErrorsAt(x_11, x_18, x_10);
x_20 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_21 = l_Lean_Parser_ParserState_mkNode(x_19, x_20, x_4);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_10);
x_22 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_11, x_22, x_4);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_14);
x_24 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__8;
x_25 = l_Lean_Parser_ParserState_mkErrorsAt(x_11, x_24, x_10);
x_26 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_27 = l_Lean_Parser_ParserState_mkNode(x_25, x_26, x_4);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_12);
x_28 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__8;
x_29 = l_Lean_Parser_ParserState_mkErrorsAt(x_11, x_28, x_10);
x_30 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_31 = l_Lean_Parser_ParserState_mkNode(x_29, x_30, x_4);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_9);
lean_dec(x_1);
x_32 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_33 = l_Lean_Parser_ParserState_mkNode(x_8, x_32, x_4);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_6);
lean_dec(x_1);
x_34 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_35 = l_Lean_Parser_ParserState_mkNode(x_5, x_34, x_4);
return x_35;
}
}
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__3;
x_2 = l_Lean_Parser_symbolInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__5;
x_2 = l_Lean_Parser_symbolInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_antiquotNestedExpr___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr___closed__1;
x_2 = l_Lean_Parser_antiquotNestedExpr___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2;
x_2 = l_Lean_Parser_antiquotNestedExpr___closed__4;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr___elambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr___closed__5;
x_2 = l_Lean_Parser_antiquotNestedExpr___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotNestedExpr() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_antiquotNestedExpr___closed__7;
return x_1;
}
}
lean_object* l_Lean_Parser_antiquotExpr___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_array_get_size(x_3);
lean_dec(x_3);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Lean_Parser_identFn(x_1, x_2);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = lean_nat_dec_eq(x_9, x_5);
lean_dec(x_9);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_5);
x_11 = l_Lean_Parser_ParserState_restore(x_6, x_4, x_5);
lean_dec(x_4);
x_12 = l_Lean_Parser_antiquotNestedExpr___elambda__1(x_1, x_11);
x_13 = l_Lean_Parser_mergeOrElseErrors(x_12, x_8, x_5);
lean_dec(x_5);
return x_13;
}
}
}
}
lean_object* _init_l_Lean_Parser_antiquotExpr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_antiquotNestedExpr;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_identNoAntiquot___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_3, x_2);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_antiquotExpr___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr___elambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_antiquotExpr___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotExpr___closed__1;
x_2 = l_Lean_Parser_antiquotExpr___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_antiquotExpr() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_antiquotExpr___closed__3;
return x_1;
}
}
lean_object* l_Lean_Parser_mkAntiquot___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_apply_2(x_2, x_3, x_4);
x_8 = l_Lean_Parser_ParserState_mkNode(x_7, x_1, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_mkAntiquot___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_apply_2(x_2, x_3, x_4);
x_8 = l_Lean_Parser_ParserState_mkNode(x_7, x_1, x_6);
return x_8;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Syntax_isAntiquot___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("antiquotName");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_mkAntiquot___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("no space before ':");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Util_1__mkPanicMessage___closed__2;
x_2 = l_String_trim(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__5;
x_2 = l_Lean_Parser_symbolInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_dollarSymbol;
x_3 = l_Lean_Parser_setExpected(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_dollarSymbol;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_epsilonInfo;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_String_splitAux___main___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_checkNoWsBefore___elambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot___closed__10;
x_2 = l_Lean_Parser_dollarSymbol___closed__2;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__9;
x_2 = l_Lean_Parser_noFirstTokenInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__11;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_manyFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("*");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__14;
x_2 = l_String_trim(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__15;
x_2 = l_Lean_Parser_symbolInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__15;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_mkAntiquot___closed__16;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot___closed__10;
x_2 = l_Lean_Parser_mkAntiquot___closed__17;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__18;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__19;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optionalFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("no space before spliced term");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot___closed__22;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_checkNoWsBefore___elambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_checkNoImmediateColon;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_pushNone;
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Lean_Parser_andthenInfo(x_2, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Parser_mkAntiquot___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_checkNoImmediateColon___closed__1;
x_2 = l_Lean_Parser_pushNone___closed__1;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_mkAntiquot(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_4 = l_Lean_Parser_mkAntiquot___closed__4;
x_5 = lean_string_append(x_4, x_1);
x_6 = l_Char_HasRepr___closed__1;
x_7 = lean_string_append(x_5, x_6);
x_8 = l_String_trim(x_1);
x_9 = 0;
lean_inc(x_8);
x_10 = l_Lean_Parser_nonReservedSymbolInfo(x_8, x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_11, 0, x_8);
x_12 = l_Lean_Parser_mkAntiquot___closed__6;
x_13 = l_Lean_Parser_andthenInfo(x_12, x_10);
x_14 = l_Lean_Parser_mkAntiquot___closed__7;
x_15 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_15, 0, x_14);
lean_closure_set(x_15, 1, x_11);
x_16 = l_Lean_Parser_epsilonInfo;
x_17 = l_Lean_Parser_andthenInfo(x_16, x_13);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_checkNoWsBefore___elambda__1___boxed), 3, 1);
lean_closure_set(x_18, 0, x_7);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_15);
x_20 = l_Lean_Parser_mkAntiquot___closed__3;
x_21 = l_Lean_Parser_nodeInfo(x_20, x_17);
x_22 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_19);
x_23 = l_Lean_Parser_dollarSymbol;
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = l_Lean_Parser_antiquotExpr;
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = l_Lean_Parser_mkAntiquot___closed__8;
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_77; 
x_77 = lean_box(0);
x_29 = x_77;
goto block_76;
}
else
{
lean_object* x_78; 
x_78 = lean_ctor_get(x_2, 0);
lean_inc(x_78);
lean_dec(x_2);
x_29 = x_78;
goto block_76;
}
block_76:
{
lean_object* x_30; lean_object* x_31; 
x_30 = l_Lean_Parser_mkAntiquot___closed__1;
x_31 = l_Lean_Name_append___main(x_29, x_30);
lean_dec(x_29);
if (x_3 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_32 = l_Lean_Parser_mkAntiquot___closed__20;
x_33 = l_Lean_Parser_andthenInfo(x_21, x_32);
x_34 = l_Lean_Parser_mkAntiquot___closed__21;
x_35 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_35, 0, x_22);
lean_closure_set(x_35, 1, x_34);
x_36 = l_Lean_Parser_andthenInfo(x_26, x_33);
x_37 = l_Lean_Parser_antiquotExpr___closed__2;
x_38 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_38, 0, x_37);
lean_closure_set(x_38, 1, x_35);
x_39 = l_Lean_Parser_andthenInfo(x_16, x_36);
x_40 = l_Lean_Parser_mkAntiquot___closed__23;
x_41 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_41, 0, x_40);
lean_closure_set(x_41, 1, x_38);
x_42 = l_Lean_Parser_mkAntiquot___closed__12;
x_43 = l_Lean_Parser_andthenInfo(x_42, x_39);
x_44 = l_Lean_Parser_mkAntiquot___closed__13;
x_45 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_45, 0, x_44);
lean_closure_set(x_45, 1, x_41);
x_46 = l_Lean_Parser_andthenInfo(x_24, x_43);
x_47 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_47, 0, x_28);
lean_closure_set(x_47, 1, x_45);
x_48 = lean_alloc_closure((void*)(l_Lean_Parser_tryFn), 3, 1);
lean_closure_set(x_48, 0, x_47);
lean_inc(x_31);
x_49 = l_Lean_Parser_nodeInfo(x_31, x_46);
x_50 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot___elambda__1), 4, 2);
lean_closure_set(x_50, 0, x_31);
lean_closure_set(x_50, 1, x_48);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_52 = l_Lean_Parser_mkAntiquot___closed__24;
x_53 = l_Lean_Parser_orelseInfo(x_21, x_52);
x_54 = l_Lean_Parser_mkAntiquot___closed__25;
x_55 = lean_alloc_closure((void*)(l_Lean_Parser_orelseFn), 4, 2);
lean_closure_set(x_55, 0, x_22);
lean_closure_set(x_55, 1, x_54);
x_56 = l_Lean_Parser_mkAntiquot___closed__20;
x_57 = l_Lean_Parser_andthenInfo(x_53, x_56);
x_58 = l_Lean_Parser_mkAntiquot___closed__21;
x_59 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_59, 0, x_55);
lean_closure_set(x_59, 1, x_58);
x_60 = l_Lean_Parser_andthenInfo(x_26, x_57);
x_61 = l_Lean_Parser_antiquotExpr___closed__2;
x_62 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_62, 0, x_61);
lean_closure_set(x_62, 1, x_59);
x_63 = l_Lean_Parser_andthenInfo(x_16, x_60);
x_64 = l_Lean_Parser_mkAntiquot___closed__23;
x_65 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_65, 0, x_64);
lean_closure_set(x_65, 1, x_62);
x_66 = l_Lean_Parser_mkAntiquot___closed__12;
x_67 = l_Lean_Parser_andthenInfo(x_66, x_63);
x_68 = l_Lean_Parser_mkAntiquot___closed__13;
x_69 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_69, 0, x_68);
lean_closure_set(x_69, 1, x_65);
x_70 = l_Lean_Parser_andthenInfo(x_24, x_67);
x_71 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_71, 0, x_28);
lean_closure_set(x_71, 1, x_69);
x_72 = lean_alloc_closure((void*)(l_Lean_Parser_tryFn), 3, 1);
lean_closure_set(x_72, 0, x_71);
lean_inc(x_31);
x_73 = l_Lean_Parser_nodeInfo(x_31, x_70);
x_74 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot___elambda__2), 4, 2);
lean_closure_set(x_74, 0, x_31);
lean_closure_set(x_74, 1, x_72);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
lean_object* l_Lean_Parser_mkAntiquot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_4);
lean_dec(x_1);
return x_5;
}
}
uint8_t l_Lean_Parser_tryAnti(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
x_15 = lean_nat_dec_eq(x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_12);
x_16 = l_Lean_Parser_peekTokenAux(x_1, x_2);
x_3 = x_16;
goto block_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_17 = lean_ctor_get(x_12, 2);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_2);
lean_ctor_set(x_19, 1, x_18);
x_3 = x_19;
goto block_11;
}
block_11:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 2)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_Parser_dollarSymbol___elambda__1___closed__1;
x_9 = lean_string_dec_eq(x_7, x_8);
lean_dec(x_7);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_6);
x_10 = 0;
return x_10;
}
}
}
}
}
lean_object* l_Lean_Parser_tryAnti___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Parser_tryAnti(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_withAntiquotFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
lean_inc(x_4);
lean_inc(x_3);
x_5 = l_Lean_Parser_tryAnti(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_3, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_3);
x_10 = lean_apply_2(x_1, x_3, x_4);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_13, x_9);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_9);
x_15 = l_Lean_Parser_ParserState_restore(x_10, x_8, x_9);
lean_dec(x_8);
x_16 = lean_apply_2(x_2, x_3, x_15);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_16, x_12, x_9);
lean_dec(x_9);
return x_17;
}
}
}
}
}
lean_object* l_Lean_Parser_withAntiquot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotFn), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
lean_inc(x_4);
lean_inc(x_3);
x_5 = l_Lean_Parser_tryAnti(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_2(x_1, x_3, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_3);
x_10 = lean_apply_2(x_2, x_3, x_4);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_13, x_9);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_9);
x_15 = l_Lean_Parser_ParserState_restore(x_10, x_8, x_9);
lean_dec(x_8);
x_16 = lean_apply_2(x_1, x_3, x_15);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_16, x_12, x_9);
lean_dec(x_9);
return x_17;
}
}
}
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_2);
x_5 = 0;
x_6 = l_Lean_Parser_mkAntiquot(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_inc(x_2);
x_8 = l_Lean_Parser_nodeInfo(x_2, x_7);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = l_Lean_Parser_orelseInfo(x_11, x_8);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = lean_alloc_closure((void*)(l_Lean_Parser_nodeWithAntiquot___elambda__1), 4, 2);
lean_closure_set(x_14, 0, x_10);
lean_closure_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_nodeWithAntiquot(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_ident___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_identKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_ident___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_identKind___closed__1;
x_2 = l_Lean_Parser_ident___elambda__1___closed__1;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_ident___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_ident___elambda__1___closed__2;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = l_Lean_Parser_identFn(x_1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_apply_2(x_4, x_1, x_2);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_13, x_9);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_9);
x_15 = l_Lean_Parser_ParserState_restore(x_10, x_8, x_9);
lean_dec(x_8);
x_16 = l_Lean_Parser_identFn(x_1, x_15);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_16, x_12, x_9);
lean_dec(x_9);
return x_17;
}
}
}
}
}
lean_object* _init_l_Lean_Parser_ident___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_ident___elambda__1___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_identNoAntiquot___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_ident___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_ident___elambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_ident___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_ident___closed__1;
x_2 = l_Lean_Parser_ident___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_ident() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_ident___closed__3;
return x_1;
}
}
lean_object* l_Lean_Parser_rawIdent___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_ident___elambda__1___closed__2;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = l_Lean_Parser_rawIdentFn(x_1, x_2);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_apply_2(x_4, x_1, x_2);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_13, x_9);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_9);
x_15 = l_Lean_Parser_ParserState_restore(x_10, x_8, x_9);
lean_dec(x_8);
x_16 = l_Lean_Parser_rawIdentFn(x_1, x_15);
lean_dec(x_1);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_16, x_12, x_9);
lean_dec(x_9);
return x_17;
}
}
}
}
}
lean_object* _init_l_Lean_Parser_rawIdent___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_ident___elambda__1___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Parser_inhabited___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_rawIdent___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_rawIdent___elambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_rawIdent___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_rawIdent___closed__1;
x_2 = l_Lean_Parser_rawIdent___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_rawIdent() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_rawIdent___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_numLit___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_numLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_numLit___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_numLitKind___closed__1;
x_2 = l_Lean_Parser_numLit___elambda__1___closed__1;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_numLit___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_numLit___elambda__1___closed__2;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = l_Lean_Parser_numLitFn(x_1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_apply_2(x_4, x_1, x_2);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_13, x_9);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_9);
x_15 = l_Lean_Parser_ParserState_restore(x_10, x_8, x_9);
lean_dec(x_8);
x_16 = l_Lean_Parser_numLitFn(x_1, x_15);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_16, x_12, x_9);
lean_dec(x_9);
return x_17;
}
}
}
}
}
lean_object* _init_l_Lean_Parser_numLit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_numLit___elambda__1___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_numLitNoAntiquot___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_numLit___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_numLit___elambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_numLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_numLit___closed__1;
x_2 = l_Lean_Parser_numLit___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_numLit() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_numLit___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_strLit___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_strLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_strLit___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_strLitKind___closed__1;
x_2 = l_Lean_Parser_strLit___elambda__1___closed__1;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_strLit___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_strLit___elambda__1___closed__2;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = l_Lean_Parser_strLitFn(x_1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_apply_2(x_4, x_1, x_2);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_13, x_9);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_9);
x_15 = l_Lean_Parser_ParserState_restore(x_10, x_8, x_9);
lean_dec(x_8);
x_16 = l_Lean_Parser_strLitFn(x_1, x_15);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_16, x_12, x_9);
lean_dec(x_9);
return x_17;
}
}
}
}
}
lean_object* _init_l_Lean_Parser_strLit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_strLit___elambda__1___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_strLitNoAntiquot___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_strLit___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_strLit___elambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_strLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_strLit___closed__1;
x_2 = l_Lean_Parser_strLit___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_strLit() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_strLit___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_charLit___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_charLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_charLit___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_charLitKind___closed__1;
x_2 = l_Lean_Parser_charLit___elambda__1___closed__1;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_charLit___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_charLit___elambda__1___closed__2;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = l_Lean_Parser_charLitFn(x_1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_apply_2(x_4, x_1, x_2);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_13, x_9);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_9);
x_15 = l_Lean_Parser_ParserState_restore(x_10, x_8, x_9);
lean_dec(x_8);
x_16 = l_Lean_Parser_charLitFn(x_1, x_15);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_16, x_12, x_9);
lean_dec(x_9);
return x_17;
}
}
}
}
}
lean_object* _init_l_Lean_Parser_charLit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_charLit___elambda__1___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_charLitNoAntiquot___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_charLit___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_charLit___elambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_charLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_charLit___closed__1;
x_2 = l_Lean_Parser_charLit___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_charLit() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_charLit___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_nameLit___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_nameLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_nameLit___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_nameLitKind___closed__1;
x_2 = l_Lean_Parser_nameLit___elambda__1___closed__1;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_nameLit___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_nameLit___elambda__1___closed__2;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = l_Lean_Parser_nameLitFn(x_1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_apply_2(x_4, x_1, x_2);
x_11 = lean_ctor_get(x_10, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_13, x_9);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_9);
x_15 = l_Lean_Parser_ParserState_restore(x_10, x_8, x_9);
lean_dec(x_8);
x_16 = l_Lean_Parser_nameLitFn(x_1, x_15);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_16, x_12, x_9);
lean_dec(x_9);
return x_17;
}
}
}
}
}
lean_object* _init_l_Lean_Parser_nameLit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_nameLit___elambda__1___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_nameLitNoAntiquot___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_nameLit___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_nameLit___elambda__1), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_nameLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_nameLit___closed__1;
x_2 = l_Lean_Parser_nameLit___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_nameLit() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_nameLit___closed__3;
return x_1;
}
}
lean_object* _init_l_Lean_Parser_categoryParserOfStackFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to determine parser category using syntax stack, the specified element on the stack is not an identifier");
return x_1;
}
}
lean_object* _init_l_Lean_Parser_categoryParserOfStackFn___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to determine parser category using syntax stack, stack is too small");
return x_1;
}
}
lean_object* l_Lean_Parser_categoryParserOfStackFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_nat_sub(x_5, x_1);
lean_dec(x_5);
x_10 = lean_nat_sub(x_9, x_6);
lean_dec(x_9);
x_11 = l_Lean_Syntax_inhabited;
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
if (lean_obj_tag(x_12) == 3)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_Parser_categoryParserFn(x_13, x_2, x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_2);
x_15 = l_Lean_Parser_categoryParserOfStackFn___closed__1;
x_16 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = l_Lean_Parser_categoryParserOfStackFn___closed__2;
x_18 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_17);
return x_18;
}
}
}
lean_object* l_Lean_Parser_categoryParserOfStackFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_categoryParserOfStackFn(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Parser_categoryParserOfStack___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 1);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
x_7 = l_Lean_Parser_categoryParserOfStackFn(x_1, x_3, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 2);
x_10 = lean_ctor_get(x_3, 3);
x_11 = lean_ctor_get_uint8(x_3, sizeof(void*)*4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_12 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_2);
lean_ctor_set(x_12, 2, x_9);
lean_ctor_set(x_12, 3, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*4, x_11);
x_13 = l_Lean_Parser_categoryParserOfStackFn(x_1, x_12, x_4);
return x_13;
}
}
}
lean_object* l_Lean_Parser_categoryParserOfStack(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserOfStack___elambda__1___boxed), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = l_Lean_Parser_Parser_inhabited___closed__1;
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_categoryParserOfStack___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_categoryParserOfStack___elambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Parser_Basic_10__mkResult(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_array_get_size(x_3);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_2, x_5);
x_7 = lean_nat_dec_eq(x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_nullKind;
x_9 = l_Lean_Parser_ParserState_mkNode(x_1, x_8, x_2);
return x_9;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Lean_Parser_leadingParserAux(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_array_get_size(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_inc(x_4);
x_9 = l_Lean_Parser_indexed___rarg(x_8, x_4, x_5, x_3);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_List_append___rarg(x_12, x_11);
x_14 = l_List_isEmpty___rarg(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_15 = lean_box(0);
x_16 = l_Lean_Parser_longestMatchFn(x_15, x_13, x_4, x_10);
x_17 = l___private_Lean_Parser_Basic_10__mkResult(x_16, x_7);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_4);
x_18 = l_System_FilePath_dirName___closed__1;
x_19 = l_Lean_Name_toStringWithSep___main(x_18, x_1);
x_20 = l_Lean_Parser_ParserState_mkError(x_10, x_19);
return x_20;
}
}
}
lean_object* l_Lean_Parser_leadingParserAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_Parser_leadingParserAux(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_leadingParser(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
lean_inc(x_6);
lean_inc(x_5);
x_7 = l_Lean_Parser_tryAnti(x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = l_Lean_Parser_leadingParserAux(x_1, x_2, x_3, x_5, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_array_get_size(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_5);
x_12 = lean_apply_2(x_4, x_5, x_6);
x_13 = lean_ctor_get(x_12, 3);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
x_16 = lean_nat_dec_eq(x_15, x_11);
lean_dec(x_15);
if (x_16 == 0)
{
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_11);
x_17 = l_Lean_Parser_ParserState_restore(x_12, x_10, x_11);
lean_dec(x_10);
x_18 = l_Lean_Parser_leadingParserAux(x_1, x_2, x_3, x_5, x_17);
x_19 = l_Lean_Parser_mergeOrElseErrors(x_18, x_14, x_11);
lean_dec(x_11);
return x_19;
}
}
}
}
}
lean_object* l_Lean_Parser_leadingParser___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Lean_Parser_leadingParser(x_1, x_2, x_7, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_trailingLoopStep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_2);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_List_append___rarg(x_3, x_7);
x_9 = l_Lean_Parser_longestMatchFn(x_6, x_8, x_4, x_5);
return x_9;
}
}
lean_object* l___private_Lean_Parser_Basic_11__mkTrailingResult(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = l___private_Lean_Parser_Basic_10__mkResult(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_4);
lean_dec(x_4);
x_6 = l_Lean_Parser_ParserState_popSyntax(x_3);
x_7 = l_Lean_Parser_ParserState_popSyntax(x_6);
x_8 = l_Lean_Parser_ParserState_pushSyntax(x_7, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_trailingLoop___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = 0;
lean_inc(x_2);
x_6 = l_Lean_Parser_indexed___rarg(x_4, x_2, x_3, x_5);
lean_dec(x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_List_isEmpty___rarg(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_10);
x_12 = lean_array_get_size(x_10);
lean_dec(x_10);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_Parser_trailingLoopStep(x_1, x_11, x_8, x_2, x_7);
x_15 = lean_ctor_get(x_14, 3);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_dec(x_13);
x_16 = l___private_Lean_Parser_Basic_11__mkTrailingResult(x_14, x_12);
x_3 = x_16;
goto _start;
}
else
{
lean_object* x_18; uint8_t x_19; 
lean_dec(x_15);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
x_19 = lean_nat_dec_eq(x_18, x_13);
lean_dec(x_18);
if (x_19 == 0)
{
lean_dec(x_13);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_20; 
x_20 = l_Lean_Parser_ParserState_restore(x_14, x_12, x_13);
lean_dec(x_12);
return x_20;
}
}
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
x_22 = l_List_isEmpty___rarg(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
x_24 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_23);
x_25 = lean_array_get_size(x_23);
lean_dec(x_23);
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l_Lean_Parser_trailingLoopStep(x_1, x_24, x_8, x_2, x_7);
x_28 = lean_ctor_get(x_27, 3);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
lean_dec(x_26);
x_29 = l___private_Lean_Parser_Basic_11__mkTrailingResult(x_27, x_25);
x_3 = x_29;
goto _start;
}
else
{
lean_object* x_31; uint8_t x_32; 
lean_dec(x_28);
lean_dec(x_2);
lean_dec(x_1);
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
x_32 = lean_nat_dec_eq(x_31, x_26);
lean_dec(x_31);
if (x_32 == 0)
{
lean_dec(x_26);
lean_dec(x_25);
return x_27;
}
else
{
lean_object* x_33; 
x_33 = l_Lean_Parser_ParserState_restore(x_27, x_25, x_26);
lean_dec(x_25);
return x_33;
}
}
}
else
{
lean_dec(x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
}
}
lean_object* l_Lean_Parser_trailingLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_trailingLoop___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_prattParser(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
lean_inc(x_6);
lean_inc(x_5);
x_7 = l_Lean_Parser_tryAnti(x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_inc(x_5);
lean_inc(x_2);
x_8 = l_Lean_Parser_leadingParserAux(x_1, x_2, x_3, x_5, x_6);
x_9 = lean_ctor_get(x_8, 3);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = l_Lean_Parser_trailingLoop___main(x_2, x_5, x_8);
return x_10;
}
else
{
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
return x_8;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_inc(x_5);
x_14 = lean_apply_2(x_4, x_5, x_6);
x_15 = lean_ctor_get(x_14, 3);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_1);
x_16 = l_Lean_Parser_trailingLoop___main(x_2, x_5, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
x_19 = lean_nat_dec_eq(x_18, x_13);
lean_dec(x_18);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_13);
x_20 = l_Lean_Parser_ParserState_restore(x_14, x_12, x_13);
lean_dec(x_12);
lean_inc(x_5);
lean_inc(x_2);
x_21 = l_Lean_Parser_leadingParserAux(x_1, x_2, x_3, x_5, x_20);
x_22 = l_Lean_Parser_mergeOrElseErrors(x_21, x_17, x_13);
lean_dec(x_13);
x_23 = lean_ctor_get(x_22, 3);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = l_Lean_Parser_trailingLoop___main(x_2, x_5, x_22);
return x_24;
}
else
{
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_2);
return x_22;
}
}
}
}
}
}
lean_object* l_Lean_Parser_prattParser___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Lean_Parser_prattParser(x_1, x_2, x_7, x_4, x_5, x_6);
return x_8;
}
}
lean_object* _init_l_Lean_Parser_fieldIdxFn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("field index");
return x_1;
}
}
lean_object* l_Lean_Parser_fieldIdxFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint32_t x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_string_utf8_get(x_5, x_3);
x_7 = l_Char_isDigit(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Parser_fieldIdxFn___closed__1;
x_9 = l_Lean_Parser_ParserState_mkErrorAt(x_2, x_8, x_3);
return x_9;
}
else
{
uint32_t x_10; uint8_t x_11; 
x_10 = 48;
x_11 = x_6 == x_10;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_Parser_takeUntilFn___main___at_Lean_Parser_decimalNumberFn___spec__2(x_1, x_2);
x_13 = l_Lean_fieldIdxKind;
x_14 = l_Lean_Parser_mkNodeToken(x_13, x_3, x_1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_Parser_fieldIdxFn___closed__1;
x_16 = l_Lean_Parser_ParserState_mkErrorAt(x_2, x_15, x_3);
return x_16;
}
}
}
}
lean_object* l_Lean_Parser_fieldIdxFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_fieldIdxFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_fieldIdx___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_fieldIdxKind___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_fieldIdx___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_fieldIdxKind___closed__1;
x_2 = l_Lean_Parser_fieldIdx___closed__1;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_fieldIdx___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_fieldIdxKind___closed__1;
x_2 = l_Lean_Parser_mkAtomicInfo(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Parser_fieldIdx___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_fieldIdx___closed__2;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_fieldIdx___closed__3;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_fieldIdx___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_fieldIdxFn___boxed), 2, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Parser_fieldIdx___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_fieldIdx___closed__2;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Lean_Parser_fieldIdx___closed__5;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotFn), 4, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Parser_fieldIdx___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_fieldIdx___closed__4;
x_2 = l_Lean_Parser_fieldIdx___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Parser_fieldIdx() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_fieldIdx___closed__7;
return x_1;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_fget(x_4, x_5);
lean_inc(x_3);
x_14 = lean_apply_2(x_3, x_13, x_6);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
x_17 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1___rarg___boxed), 6, 5);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_2);
lean_closure_set(x_17, 2, x_3);
lean_closure_set(x_17, 3, x_4);
lean_closure_set(x_17, 4, x_16);
x_18 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_14, x_17);
return x_18;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Lean_Syntax_foldArgsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Syntax_getArgs(x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1___rarg(x_1, x_2, x_3, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Syntax_foldArgsM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Syntax_foldArgsM___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_iterateMAux___main___at_Lean_Syntax_foldArgsM___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgs___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_2);
x_9 = lean_apply_2(x_2, x_8, x_5);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_4 = x_11;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgs___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_Syntax_foldArgs___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_foldArgs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_Syntax_getArgs(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_iterateMAux___main___at_Lean_Syntax_foldArgs___spec__1___rarg(x_1, x_2, x_4, x_5, x_3);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Syntax_foldArgs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_foldArgs___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_foldArgs___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_iterateMAux___main___at_Lean_Syntax_foldArgs___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Syntax_foldArgs___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_foldArgs___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_fget(x_4, x_5);
lean_inc(x_3);
x_14 = lean_apply_1(x_3, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
x_17 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1___rarg___boxed), 6, 5);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_2);
lean_closure_set(x_17, 2, x_3);
lean_closure_set(x_17, 3, x_4);
lean_closure_set(x_17, 4, x_16);
x_18 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_14, x_17);
return x_18;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_forArgsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Lean_Syntax_getArgs(x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_box(0);
x_7 = l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Syntax_forArgsM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_forArgsM___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_iterateMAux___main___at_Lean_Syntax_forArgsM___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_nat_add(x_1, x_2);
x_8 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg(x_3, x_4, x_2, x_5, x_7, x_6);
return x_8;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_array_fget(x_4, x_5);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_2);
x_14 = lean_apply_2(x_2, x_12, x_6);
x_15 = lean_alloc_closure((void*)(l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_5);
lean_closure_set(x_15, 1, x_3);
lean_closure_set(x_15, 2, x_1);
lean_closure_set(x_15, 3, x_2);
lean_closure_set(x_15, 4, x_4);
x_16 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg), 6, 0);
return x_3;
}
}
lean_object* l_Lean_Syntax_foldSepArgsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_Syntax_getArgs(x_2);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg(x_1, x_3, x_6, x_5, x_7, x_4);
return x_8;
}
}
lean_object* l_Lean_Syntax_foldSepArgsM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Syntax_foldSepArgsM___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgsM___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Syntax_foldSepArgsM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Syntax_foldSepArgsM___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgs___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_8, x_5);
x_10 = lean_nat_add(x_4, x_2);
lean_dec(x_4);
x_4 = x_10;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgs___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgs___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_foldSepArgs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Lean_Syntax_getArgs(x_1);
x_5 = lean_unsigned_to_nat(2u);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgs___spec__1___rarg(x_2, x_5, x_4, x_6, x_3);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Lean_Syntax_foldSepArgs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_foldSepArgs___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgs___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepArgs___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Syntax_foldSepArgs___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_foldSepArgs___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_nat_add(x_1, x_2);
x_8 = l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg(x_3, x_4, x_2, x_5, x_7, x_6);
return x_8;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
x_12 = lean_array_fget(x_4, x_5);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_12);
x_15 = lean_alloc_closure((void*)(l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_5);
lean_closure_set(x_15, 1, x_3);
lean_closure_set(x_15, 2, x_1);
lean_closure_set(x_15, 3, x_2);
lean_closure_set(x_15, 4, x_4);
x_16 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_forSepArgsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Lean_Syntax_getArgs(x_2);
x_5 = lean_unsigned_to_nat(2u);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_box(0);
x_8 = l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg(x_1, x_3, x_5, x_4, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Syntax_forSepArgsM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_forSepArgsM___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_foldlStepMAux___main___at_Lean_Syntax_forSepArgsM___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Syntax_forSepArgsM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_forSepArgsM___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_array_push(x_4, x_7);
x_9 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_9;
x_4 = x_8;
goto _start;
}
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_5, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_5, x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_fget(x_4, x_11);
lean_inc(x_3);
x_14 = lean_apply_2(x_3, x_13, x_7);
x_15 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2___rarg___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_4);
lean_closure_set(x_15, 4, x_11);
lean_closure_set(x_15, 5, lean_box(0));
x_16 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_apply_2(x_18, lean_box(0), x_7);
return x_19;
}
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2___rarg___boxed), 7, 0);
return x_3;
}
}
lean_object* l_Lean_Syntax_foldSepRevArgsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = l_Lean_Syntax_getArgs(x_2);
x_6 = lean_unsigned_to_nat(2u);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_empty___closed__1;
x_9 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(x_6, x_5, x_7, x_8);
lean_dec(x_5);
x_10 = lean_array_get_size(x_9);
x_11 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2___rarg(x_1, x_2, x_3, x_9, x_10, lean_box(0), x_4);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_Syntax_foldSepRevArgsM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Syntax_foldSepRevArgsM___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgs___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_array_fget(x_3, x_10);
lean_inc(x_2);
x_12 = lean_apply_2(x_2, x_11, x_6);
x_4 = x_10;
x_5 = lean_box(0);
x_6 = x_12;
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgs___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgs___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_foldSepRevArgs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l_Lean_Syntax_getArgs(x_1);
x_5 = lean_unsigned_to_nat(2u);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_empty___closed__1;
x_8 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(x_5, x_4, x_6, x_7);
lean_dec(x_4);
x_9 = lean_array_get_size(x_8);
x_10 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgs___spec__1___rarg(x_1, x_2, x_8, x_9, lean_box(0), x_3);
lean_dec(x_8);
return x_10;
}
}
lean_object* l_Lean_Syntax_foldSepRevArgs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_foldSepRevArgs___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgs___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Syntax_foldSepRevArgs___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Syntax_foldSepRevArgs___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_foldSepRevArgs___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_nat_add(x_1, x_2);
x_8 = l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg(x_3, x_4, x_2, x_5, x_7, x_6);
return x_8;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_array_fget(x_4, x_5);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_2);
x_14 = lean_apply_2(x_2, x_12, x_6);
x_15 = lean_alloc_closure((void*)(l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_5);
lean_closure_set(x_15, 1, x_3);
lean_closure_set(x_15, 2, x_1);
lean_closure_set(x_15, 3, x_2);
lean_closure_set(x_15, 4, x_4);
x_16 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
}
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg), 6, 0);
return x_3;
}
}
lean_object* l_Array_foldSepByM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(2u);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg(x_1, x_3, x_5, x_2, x_6, x_4);
return x_7;
}
}
lean_object* l_Array_foldSepByM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldSepByM___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_foldlStepMAux___main___at_Array_foldSepByM___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepBy___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_array_fget(x_3, x_4);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_8, x_5);
x_10 = lean_nat_add(x_4, x_2);
lean_dec(x_4);
x_4 = x_10;
x_5 = x_9;
goto _start;
}
}
}
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepBy___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlStepMAux___main___at_Array_foldSepBy___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_foldSepBy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_foldlStepMAux___main___at_Array_foldSepBy___spec__1___rarg(x_2, x_4, x_1, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_foldSepBy(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldSepBy___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Array_foldSepBy___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_foldlStepMAux___main___at_Array_foldSepBy___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_foldSepBy___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_foldSepBy___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_Trie(lean_object*);
lean_object* initialize_Lean_Data_Position(lean_object*);
lean_object* initialize_Lean_Syntax(lean_object*);
lean_object* initialize_Lean_ToExpr(lean_object*);
lean_object* initialize_Lean_Environment(lean_object*);
lean_object* initialize_Lean_Attributes(lean_object*);
lean_object* initialize_Lean_Message(lean_object*);
lean_object* initialize_Lean_Compiler_InitAttr(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Trie(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Position(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Syntax(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ToExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Attributes(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_quotedSymbolKind___closed__1 = _init_l_Lean_quotedSymbolKind___closed__1();
lean_mark_persistent(l_Lean_quotedSymbolKind___closed__1);
l_Lean_quotedSymbolKind___closed__2 = _init_l_Lean_quotedSymbolKind___closed__2();
lean_mark_persistent(l_Lean_quotedSymbolKind___closed__2);
l_Lean_quotedSymbolKind = _init_l_Lean_quotedSymbolKind();
lean_mark_persistent(l_Lean_quotedSymbolKind);
l_Lean_Parser_maxPrec = _init_l_Lean_Parser_maxPrec();
lean_mark_persistent(l_Lean_Parser_maxPrec);
l_Lean_Parser_InputContext_inhabited___closed__1 = _init_l_Lean_Parser_InputContext_inhabited___closed__1();
lean_mark_persistent(l_Lean_Parser_InputContext_inhabited___closed__1);
l_Lean_Parser_InputContext_inhabited = _init_l_Lean_Parser_InputContext_inhabited();
lean_mark_persistent(l_Lean_Parser_InputContext_inhabited);
l_Lean_Parser_Error_Inhabited___closed__1 = _init_l_Lean_Parser_Error_Inhabited___closed__1();
lean_mark_persistent(l_Lean_Parser_Error_Inhabited___closed__1);
l_Lean_Parser_Error_Inhabited = _init_l_Lean_Parser_Error_Inhabited();
lean_mark_persistent(l_Lean_Parser_Error_Inhabited);
l___private_Lean_Parser_Basic_1__expectedToString___main___closed__1 = _init_l___private_Lean_Parser_Basic_1__expectedToString___main___closed__1();
lean_mark_persistent(l___private_Lean_Parser_Basic_1__expectedToString___main___closed__1);
l_Lean_Parser_Error_toString___closed__1 = _init_l_Lean_Parser_Error_toString___closed__1();
lean_mark_persistent(l_Lean_Parser_Error_toString___closed__1);
l_Lean_Parser_Error_toString___closed__2 = _init_l_Lean_Parser_Error_toString___closed__2();
lean_mark_persistent(l_Lean_Parser_Error_toString___closed__2);
l_Lean_Parser_Error_toString___closed__3 = _init_l_Lean_Parser_Error_toString___closed__3();
lean_mark_persistent(l_Lean_Parser_Error_toString___closed__3);
l_Lean_Parser_Error_toString___closed__4 = _init_l_Lean_Parser_Error_toString___closed__4();
lean_mark_persistent(l_Lean_Parser_Error_toString___closed__4);
l_Lean_Parser_Error_HasToString___closed__1 = _init_l_Lean_Parser_Error_HasToString___closed__1();
lean_mark_persistent(l_Lean_Parser_Error_HasToString___closed__1);
l_Lean_Parser_Error_HasToString = _init_l_Lean_Parser_Error_HasToString();
lean_mark_persistent(l_Lean_Parser_Error_HasToString);
l_Lean_Parser_Error_HasBeq___closed__1 = _init_l_Lean_Parser_Error_HasBeq___closed__1();
lean_mark_persistent(l_Lean_Parser_Error_HasBeq___closed__1);
l_Lean_Parser_Error_HasBeq = _init_l_Lean_Parser_Error_HasBeq();
lean_mark_persistent(l_Lean_Parser_Error_HasBeq);
l_Lean_Parser_ParserState_mkEOIError___closed__1 = _init_l_Lean_Parser_ParserState_mkEOIError___closed__1();
lean_mark_persistent(l_Lean_Parser_ParserState_mkEOIError___closed__1);
l_Lean_Parser_FirstTokens_toStr___closed__1 = _init_l_Lean_Parser_FirstTokens_toStr___closed__1();
lean_mark_persistent(l_Lean_Parser_FirstTokens_toStr___closed__1);
l_Lean_Parser_FirstTokens_toStr___closed__2 = _init_l_Lean_Parser_FirstTokens_toStr___closed__2();
lean_mark_persistent(l_Lean_Parser_FirstTokens_toStr___closed__2);
l_Lean_Parser_FirstTokens_toStr___closed__3 = _init_l_Lean_Parser_FirstTokens_toStr___closed__3();
lean_mark_persistent(l_Lean_Parser_FirstTokens_toStr___closed__3);
l_Lean_Parser_FirstTokens_HasToString___closed__1 = _init_l_Lean_Parser_FirstTokens_HasToString___closed__1();
lean_mark_persistent(l_Lean_Parser_FirstTokens_HasToString___closed__1);
l_Lean_Parser_FirstTokens_HasToString = _init_l_Lean_Parser_FirstTokens_HasToString();
lean_mark_persistent(l_Lean_Parser_FirstTokens_HasToString);
l_Lean_Parser_Parser_inhabited___closed__1 = _init_l_Lean_Parser_Parser_inhabited___closed__1();
lean_mark_persistent(l_Lean_Parser_Parser_inhabited___closed__1);
l_Lean_Parser_Parser_inhabited___closed__2 = _init_l_Lean_Parser_Parser_inhabited___closed__2();
lean_mark_persistent(l_Lean_Parser_Parser_inhabited___closed__2);
l_Lean_Parser_Parser_inhabited___closed__3 = _init_l_Lean_Parser_Parser_inhabited___closed__3();
lean_mark_persistent(l_Lean_Parser_Parser_inhabited___closed__3);
l_Lean_Parser_Parser_inhabited = _init_l_Lean_Parser_Parser_inhabited();
lean_mark_persistent(l_Lean_Parser_Parser_inhabited);
l_Lean_Parser_epsilonInfo___closed__1 = _init_l_Lean_Parser_epsilonInfo___closed__1();
lean_mark_persistent(l_Lean_Parser_epsilonInfo___closed__1);
l_Lean_Parser_epsilonInfo___closed__2 = _init_l_Lean_Parser_epsilonInfo___closed__2();
lean_mark_persistent(l_Lean_Parser_epsilonInfo___closed__2);
l_Lean_Parser_epsilonInfo___closed__3 = _init_l_Lean_Parser_epsilonInfo___closed__3();
lean_mark_persistent(l_Lean_Parser_epsilonInfo___closed__3);
l_Lean_Parser_epsilonInfo = _init_l_Lean_Parser_epsilonInfo();
lean_mark_persistent(l_Lean_Parser_epsilonInfo);
l_Lean_Parser_hasAndthen___closed__1 = _init_l_Lean_Parser_hasAndthen___closed__1();
lean_mark_persistent(l_Lean_Parser_hasAndthen___closed__1);
l_Lean_Parser_hasAndthen = _init_l_Lean_Parser_hasAndthen();
lean_mark_persistent(l_Lean_Parser_hasAndthen);
l_Lean_Parser_checkPrecFn___closed__1 = _init_l_Lean_Parser_checkPrecFn___closed__1();
lean_mark_persistent(l_Lean_Parser_checkPrecFn___closed__1);
l_Lean_Parser_checkInsideQuotFn___closed__1 = _init_l_Lean_Parser_checkInsideQuotFn___closed__1();
lean_mark_persistent(l_Lean_Parser_checkInsideQuotFn___closed__1);
l_Lean_Parser_checkInsideQuot___closed__1 = _init_l_Lean_Parser_checkInsideQuot___closed__1();
lean_mark_persistent(l_Lean_Parser_checkInsideQuot___closed__1);
l_Lean_Parser_checkInsideQuot___closed__2 = _init_l_Lean_Parser_checkInsideQuot___closed__2();
lean_mark_persistent(l_Lean_Parser_checkInsideQuot___closed__2);
l_Lean_Parser_checkInsideQuot = _init_l_Lean_Parser_checkInsideQuot();
lean_mark_persistent(l_Lean_Parser_checkInsideQuot);
l_Lean_Parser_checkOutsideQuotFn___closed__1 = _init_l_Lean_Parser_checkOutsideQuotFn___closed__1();
lean_mark_persistent(l_Lean_Parser_checkOutsideQuotFn___closed__1);
l_Lean_Parser_checkOutsideQuot___closed__1 = _init_l_Lean_Parser_checkOutsideQuot___closed__1();
lean_mark_persistent(l_Lean_Parser_checkOutsideQuot___closed__1);
l_Lean_Parser_checkOutsideQuot___closed__2 = _init_l_Lean_Parser_checkOutsideQuot___closed__2();
lean_mark_persistent(l_Lean_Parser_checkOutsideQuot___closed__2);
l_Lean_Parser_checkOutsideQuot = _init_l_Lean_Parser_checkOutsideQuot();
lean_mark_persistent(l_Lean_Parser_checkOutsideQuot);
l_Lean_Parser_hashOrelse___closed__1 = _init_l_Lean_Parser_hashOrelse___closed__1();
lean_mark_persistent(l_Lean_Parser_hashOrelse___closed__1);
l_Lean_Parser_hashOrelse = _init_l_Lean_Parser_hashOrelse();
lean_mark_persistent(l_Lean_Parser_hashOrelse);
l_Lean_Parser_notFollowedByFn___closed__1 = _init_l_Lean_Parser_notFollowedByFn___closed__1();
lean_mark_persistent(l_Lean_Parser_notFollowedByFn___closed__1);
l_Lean_Parser_manyAux___main___closed__1 = _init_l_Lean_Parser_manyAux___main___closed__1();
lean_mark_persistent(l_Lean_Parser_manyAux___main___closed__1);
l_Lean_Parser_hexDigitFn___closed__1 = _init_l_Lean_Parser_hexDigitFn___closed__1();
lean_mark_persistent(l_Lean_Parser_hexDigitFn___closed__1);
l_Lean_Parser_quotedCharFn___closed__1 = _init_l_Lean_Parser_quotedCharFn___closed__1();
lean_mark_persistent(l_Lean_Parser_quotedCharFn___closed__1);
l_Lean_Parser_charLitFnAux___closed__1 = _init_l_Lean_Parser_charLitFnAux___closed__1();
lean_mark_persistent(l_Lean_Parser_charLitFnAux___closed__1);
l_Lean_Parser_binNumberFn___closed__1 = _init_l_Lean_Parser_binNumberFn___closed__1();
lean_mark_persistent(l_Lean_Parser_binNumberFn___closed__1);
l_Lean_Parser_octalNumberFn___closed__1 = _init_l_Lean_Parser_octalNumberFn___closed__1();
lean_mark_persistent(l_Lean_Parser_octalNumberFn___closed__1);
l_Lean_Parser_hexNumberFn___closed__1 = _init_l_Lean_Parser_hexNumberFn___closed__1();
lean_mark_persistent(l_Lean_Parser_hexNumberFn___closed__1);
l_Lean_Parser_numberFnAux___closed__1 = _init_l_Lean_Parser_numberFnAux___closed__1();
lean_mark_persistent(l_Lean_Parser_numberFnAux___closed__1);
l_Lean_Parser_mkTokenAndFixPos___closed__1 = _init_l_Lean_Parser_mkTokenAndFixPos___closed__1();
lean_mark_persistent(l_Lean_Parser_mkTokenAndFixPos___closed__1);
l_Lean_Parser_identFnAux___main___closed__1 = _init_l_Lean_Parser_identFnAux___main___closed__1();
lean_mark_persistent(l_Lean_Parser_identFnAux___main___closed__1);
l___private_Lean_Parser_Basic_6__nameLitAux___closed__1 = _init_l___private_Lean_Parser_Basic_6__nameLitAux___closed__1();
lean_mark_persistent(l___private_Lean_Parser_Basic_6__nameLitAux___closed__1);
l_Lean_Parser_symbolInfo___closed__1 = _init_l_Lean_Parser_symbolInfo___closed__1();
lean_mark_persistent(l_Lean_Parser_symbolInfo___closed__1);
l_Lean_Parser_nonReservedSymbolInfo___closed__1 = _init_l_Lean_Parser_nonReservedSymbolInfo___closed__1();
lean_mark_persistent(l_Lean_Parser_nonReservedSymbolInfo___closed__1);
l_Lean_Parser_nonReservedSymbolInfo___closed__2 = _init_l_Lean_Parser_nonReservedSymbolInfo___closed__2();
lean_mark_persistent(l_Lean_Parser_nonReservedSymbolInfo___closed__2);
l_Lean_Parser_nonReservedSymbolInfo___closed__3 = _init_l_Lean_Parser_nonReservedSymbolInfo___closed__3();
lean_mark_persistent(l_Lean_Parser_nonReservedSymbolInfo___closed__3);
l_Lean_Parser_symbolNoWsInfo___closed__1 = _init_l_Lean_Parser_symbolNoWsInfo___closed__1();
lean_mark_persistent(l_Lean_Parser_symbolNoWsInfo___closed__1);
l_Lean_Parser_symbolNoWsFn___closed__1 = _init_l_Lean_Parser_symbolNoWsFn___closed__1();
lean_mark_persistent(l_Lean_Parser_symbolNoWsFn___closed__1);
l_Lean_Parser_unicodeSymbolInfo___closed__1 = _init_l_Lean_Parser_unicodeSymbolInfo___closed__1();
lean_mark_persistent(l_Lean_Parser_unicodeSymbolInfo___closed__1);
l_Lean_Parser_unicodeSymbolFn___closed__1 = _init_l_Lean_Parser_unicodeSymbolFn___closed__1();
lean_mark_persistent(l_Lean_Parser_unicodeSymbolFn___closed__1);
l_Lean_Parser_mkAtomicInfo___closed__1 = _init_l_Lean_Parser_mkAtomicInfo___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAtomicInfo___closed__1);
l_Lean_Parser_mkAtomicInfo___closed__2 = _init_l_Lean_Parser_mkAtomicInfo___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAtomicInfo___closed__2);
l_Lean_Parser_numLitNoAntiquot___closed__1 = _init_l_Lean_Parser_numLitNoAntiquot___closed__1();
lean_mark_persistent(l_Lean_Parser_numLitNoAntiquot___closed__1);
l_Lean_Parser_numLitNoAntiquot___closed__2 = _init_l_Lean_Parser_numLitNoAntiquot___closed__2();
lean_mark_persistent(l_Lean_Parser_numLitNoAntiquot___closed__2);
l_Lean_Parser_numLitNoAntiquot___closed__3 = _init_l_Lean_Parser_numLitNoAntiquot___closed__3();
lean_mark_persistent(l_Lean_Parser_numLitNoAntiquot___closed__3);
l_Lean_Parser_numLitNoAntiquot = _init_l_Lean_Parser_numLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_numLitNoAntiquot);
l_Lean_Parser_strLitFn___closed__1 = _init_l_Lean_Parser_strLitFn___closed__1();
lean_mark_persistent(l_Lean_Parser_strLitFn___closed__1);
l_Lean_Parser_strLitNoAntiquot___closed__1 = _init_l_Lean_Parser_strLitNoAntiquot___closed__1();
lean_mark_persistent(l_Lean_Parser_strLitNoAntiquot___closed__1);
l_Lean_Parser_strLitNoAntiquot___closed__2 = _init_l_Lean_Parser_strLitNoAntiquot___closed__2();
lean_mark_persistent(l_Lean_Parser_strLitNoAntiquot___closed__2);
l_Lean_Parser_strLitNoAntiquot___closed__3 = _init_l_Lean_Parser_strLitNoAntiquot___closed__3();
lean_mark_persistent(l_Lean_Parser_strLitNoAntiquot___closed__3);
l_Lean_Parser_strLitNoAntiquot = _init_l_Lean_Parser_strLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_strLitNoAntiquot);
l_Lean_Parser_charLitFn___closed__1 = _init_l_Lean_Parser_charLitFn___closed__1();
lean_mark_persistent(l_Lean_Parser_charLitFn___closed__1);
l_Lean_Parser_charLitNoAntiquot___closed__1 = _init_l_Lean_Parser_charLitNoAntiquot___closed__1();
lean_mark_persistent(l_Lean_Parser_charLitNoAntiquot___closed__1);
l_Lean_Parser_charLitNoAntiquot___closed__2 = _init_l_Lean_Parser_charLitNoAntiquot___closed__2();
lean_mark_persistent(l_Lean_Parser_charLitNoAntiquot___closed__2);
l_Lean_Parser_charLitNoAntiquot___closed__3 = _init_l_Lean_Parser_charLitNoAntiquot___closed__3();
lean_mark_persistent(l_Lean_Parser_charLitNoAntiquot___closed__3);
l_Lean_Parser_charLitNoAntiquot = _init_l_Lean_Parser_charLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_charLitNoAntiquot);
l_Lean_Parser_nameLitFn___closed__1 = _init_l_Lean_Parser_nameLitFn___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLitFn___closed__1);
l_Lean_Parser_nameLitNoAntiquot___closed__1 = _init_l_Lean_Parser_nameLitNoAntiquot___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLitNoAntiquot___closed__1);
l_Lean_Parser_nameLitNoAntiquot___closed__2 = _init_l_Lean_Parser_nameLitNoAntiquot___closed__2();
lean_mark_persistent(l_Lean_Parser_nameLitNoAntiquot___closed__2);
l_Lean_Parser_nameLitNoAntiquot___closed__3 = _init_l_Lean_Parser_nameLitNoAntiquot___closed__3();
lean_mark_persistent(l_Lean_Parser_nameLitNoAntiquot___closed__3);
l_Lean_Parser_nameLitNoAntiquot = _init_l_Lean_Parser_nameLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_nameLitNoAntiquot);
l_Lean_Parser_identFn___closed__1 = _init_l_Lean_Parser_identFn___closed__1();
lean_mark_persistent(l_Lean_Parser_identFn___closed__1);
l_Lean_Parser_identNoAntiquot___closed__1 = _init_l_Lean_Parser_identNoAntiquot___closed__1();
lean_mark_persistent(l_Lean_Parser_identNoAntiquot___closed__1);
l_Lean_Parser_identNoAntiquot___closed__2 = _init_l_Lean_Parser_identNoAntiquot___closed__2();
lean_mark_persistent(l_Lean_Parser_identNoAntiquot___closed__2);
l_Lean_Parser_identNoAntiquot___closed__3 = _init_l_Lean_Parser_identNoAntiquot___closed__3();
lean_mark_persistent(l_Lean_Parser_identNoAntiquot___closed__3);
l_Lean_Parser_identNoAntiquot = _init_l_Lean_Parser_identNoAntiquot();
lean_mark_persistent(l_Lean_Parser_identNoAntiquot);
l_Lean_Parser_rawIdentNoAntiquot___closed__1 = _init_l_Lean_Parser_rawIdentNoAntiquot___closed__1();
lean_mark_persistent(l_Lean_Parser_rawIdentNoAntiquot___closed__1);
l_Lean_Parser_rawIdentNoAntiquot___closed__2 = _init_l_Lean_Parser_rawIdentNoAntiquot___closed__2();
lean_mark_persistent(l_Lean_Parser_rawIdentNoAntiquot___closed__2);
l_Lean_Parser_rawIdentNoAntiquot = _init_l_Lean_Parser_rawIdentNoAntiquot();
lean_mark_persistent(l_Lean_Parser_rawIdentNoAntiquot);
l_Lean_Parser_identEqFn___closed__1 = _init_l_Lean_Parser_identEqFn___closed__1();
lean_mark_persistent(l_Lean_Parser_identEqFn___closed__1);
l_Lean_Parser_quotedSymbolFn___closed__1 = _init_l_Lean_Parser_quotedSymbolFn___closed__1();
lean_mark_persistent(l_Lean_Parser_quotedSymbolFn___closed__1);
l_Lean_Parser_quotedSymbolFn___closed__2 = _init_l_Lean_Parser_quotedSymbolFn___closed__2();
lean_mark_persistent(l_Lean_Parser_quotedSymbolFn___closed__2);
l_Lean_Parser_quotedSymbolFn___closed__3 = _init_l_Lean_Parser_quotedSymbolFn___closed__3();
lean_mark_persistent(l_Lean_Parser_quotedSymbolFn___closed__3);
l_Lean_Parser_quotedSymbol___closed__1 = _init_l_Lean_Parser_quotedSymbol___closed__1();
lean_mark_persistent(l_Lean_Parser_quotedSymbol___closed__1);
l_Lean_Parser_quotedSymbol___closed__2 = _init_l_Lean_Parser_quotedSymbol___closed__2();
lean_mark_persistent(l_Lean_Parser_quotedSymbol___closed__2);
l_Lean_Parser_quotedSymbol = _init_l_Lean_Parser_quotedSymbol();
lean_mark_persistent(l_Lean_Parser_quotedSymbol);
l_Lean_Parser_unquotedSymbolFn___closed__1 = _init_l_Lean_Parser_unquotedSymbolFn___closed__1();
lean_mark_persistent(l_Lean_Parser_unquotedSymbolFn___closed__1);
l_Lean_Parser_unquotedSymbol___closed__1 = _init_l_Lean_Parser_unquotedSymbol___closed__1();
lean_mark_persistent(l_Lean_Parser_unquotedSymbol___closed__1);
l_Lean_Parser_unquotedSymbol___closed__2 = _init_l_Lean_Parser_unquotedSymbol___closed__2();
lean_mark_persistent(l_Lean_Parser_unquotedSymbol___closed__2);
l_Lean_Parser_unquotedSymbol = _init_l_Lean_Parser_unquotedSymbol();
lean_mark_persistent(l_Lean_Parser_unquotedSymbol);
l_Lean_Parser_invalidLongestMatchParser___closed__1 = _init_l_Lean_Parser_invalidLongestMatchParser___closed__1();
lean_mark_persistent(l_Lean_Parser_invalidLongestMatchParser___closed__1);
l_Lean_Parser_longestMatchFn___closed__1 = _init_l_Lean_Parser_longestMatchFn___closed__1();
lean_mark_persistent(l_Lean_Parser_longestMatchFn___closed__1);
l_Lean_Parser_anyOfFn___main___closed__1 = _init_l_Lean_Parser_anyOfFn___main___closed__1();
lean_mark_persistent(l_Lean_Parser_anyOfFn___main___closed__1);
l_Lean_Parser_PrattParsingTables_inhabited___closed__1 = _init_l_Lean_Parser_PrattParsingTables_inhabited___closed__1();
lean_mark_persistent(l_Lean_Parser_PrattParsingTables_inhabited___closed__1);
l_Lean_Parser_PrattParsingTables_inhabited = _init_l_Lean_Parser_PrattParsingTables_inhabited();
lean_mark_persistent(l_Lean_Parser_PrattParsingTables_inhabited);
l_Lean_Parser_ParserCategory_inhabited___closed__1 = _init_l_Lean_Parser_ParserCategory_inhabited___closed__1();
lean_mark_persistent(l_Lean_Parser_ParserCategory_inhabited___closed__1);
l_Lean_Parser_ParserCategory_inhabited = _init_l_Lean_Parser_ParserCategory_inhabited();
lean_mark_persistent(l_Lean_Parser_ParserCategory_inhabited);
l_Lean_Parser_mkCategoryParserFnRef___closed__1 = _init_l_Lean_Parser_mkCategoryParserFnRef___closed__1();
lean_mark_persistent(l_Lean_Parser_mkCategoryParserFnRef___closed__1);
res = l_Lean_Parser_mkCategoryParserFnRef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_categoryParserFnRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_categoryParserFnRef);
lean_dec_ref(res);
l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___closed__1 = _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___closed__1();
lean_mark_persistent(l_Lean_registerEnvExtensionUnsafe___at_Lean_Parser_mkCategoryParserFnExtension___spec__1___closed__1);
l_Lean_Parser_mkCategoryParserFnExtension___closed__1 = _init_l_Lean_Parser_mkCategoryParserFnExtension___closed__1();
lean_mark_persistent(l_Lean_Parser_mkCategoryParserFnExtension___closed__1);
l_Lean_Parser_categoryParserFnExtension___closed__1 = _init_l_Lean_Parser_categoryParserFnExtension___closed__1();
lean_mark_persistent(l_Lean_Parser_categoryParserFnExtension___closed__1);
l_Lean_Parser_categoryParserFnExtension___closed__2 = _init_l_Lean_Parser_categoryParserFnExtension___closed__2();
lean_mark_persistent(l_Lean_Parser_categoryParserFnExtension___closed__2);
l_Lean_Parser_categoryParserFnExtension___closed__3 = _init_l_Lean_Parser_categoryParserFnExtension___closed__3();
lean_mark_persistent(l_Lean_Parser_categoryParserFnExtension___closed__3);
res = l_Lean_Parser_mkCategoryParserFnExtension(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_categoryParserFnExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_categoryParserFnExtension);
lean_dec_ref(res);
l_Lean_Parser_termParser___closed__1 = _init_l_Lean_Parser_termParser___closed__1();
lean_mark_persistent(l_Lean_Parser_termParser___closed__1);
l_Lean_Parser_termParser___closed__2 = _init_l_Lean_Parser_termParser___closed__2();
lean_mark_persistent(l_Lean_Parser_termParser___closed__2);
l_Lean_Parser_dollarSymbol___elambda__1___closed__1 = _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_dollarSymbol___elambda__1___closed__1);
l_Lean_Parser_dollarSymbol___elambda__1___closed__2 = _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_dollarSymbol___elambda__1___closed__2);
l_Lean_Parser_dollarSymbol___elambda__1___closed__3 = _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__3();
lean_mark_persistent(l_Lean_Parser_dollarSymbol___elambda__1___closed__3);
l_Lean_Parser_dollarSymbol___elambda__1___closed__4 = _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__4();
lean_mark_persistent(l_Lean_Parser_dollarSymbol___elambda__1___closed__4);
l_Lean_Parser_dollarSymbol___elambda__1___closed__5 = _init_l_Lean_Parser_dollarSymbol___elambda__1___closed__5();
lean_mark_persistent(l_Lean_Parser_dollarSymbol___elambda__1___closed__5);
l_Lean_Parser_dollarSymbol___closed__1 = _init_l_Lean_Parser_dollarSymbol___closed__1();
lean_mark_persistent(l_Lean_Parser_dollarSymbol___closed__1);
l_Lean_Parser_dollarSymbol___closed__2 = _init_l_Lean_Parser_dollarSymbol___closed__2();
lean_mark_persistent(l_Lean_Parser_dollarSymbol___closed__2);
l_Lean_Parser_dollarSymbol___closed__3 = _init_l_Lean_Parser_dollarSymbol___closed__3();
lean_mark_persistent(l_Lean_Parser_dollarSymbol___closed__3);
l_Lean_Parser_dollarSymbol = _init_l_Lean_Parser_dollarSymbol();
lean_mark_persistent(l_Lean_Parser_dollarSymbol);
l_Lean_Parser_checkNoImmediateColon___elambda__1___closed__1 = _init_l_Lean_Parser_checkNoImmediateColon___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_checkNoImmediateColon___elambda__1___closed__1);
l_Lean_Parser_checkNoImmediateColon___closed__1 = _init_l_Lean_Parser_checkNoImmediateColon___closed__1();
lean_mark_persistent(l_Lean_Parser_checkNoImmediateColon___closed__1);
l_Lean_Parser_checkNoImmediateColon___closed__2 = _init_l_Lean_Parser_checkNoImmediateColon___closed__2();
lean_mark_persistent(l_Lean_Parser_checkNoImmediateColon___closed__2);
l_Lean_Parser_checkNoImmediateColon = _init_l_Lean_Parser_checkNoImmediateColon();
lean_mark_persistent(l_Lean_Parser_checkNoImmediateColon);
l_Lean_Parser_pushNone___closed__1 = _init_l_Lean_Parser_pushNone___closed__1();
lean_mark_persistent(l_Lean_Parser_pushNone___closed__1);
l_Lean_Parser_pushNone___closed__2 = _init_l_Lean_Parser_pushNone___closed__2();
lean_mark_persistent(l_Lean_Parser_pushNone___closed__2);
l_Lean_Parser_pushNone = _init_l_Lean_Parser_pushNone();
lean_mark_persistent(l_Lean_Parser_pushNone);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__1 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__1);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__2);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__3 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__3();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__3);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__4 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__4();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__4);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__5 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__5();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__5);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__6 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__6();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__6);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__7 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__7();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__7);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__8 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__8();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__8);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__9 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__9();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__9);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__10 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__10();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__10);
l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__11 = _init_l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__11();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___elambda__1___closed__11);
l_Lean_Parser_antiquotNestedExpr___closed__1 = _init_l_Lean_Parser_antiquotNestedExpr___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___closed__1);
l_Lean_Parser_antiquotNestedExpr___closed__2 = _init_l_Lean_Parser_antiquotNestedExpr___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___closed__2);
l_Lean_Parser_antiquotNestedExpr___closed__3 = _init_l_Lean_Parser_antiquotNestedExpr___closed__3();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___closed__3);
l_Lean_Parser_antiquotNestedExpr___closed__4 = _init_l_Lean_Parser_antiquotNestedExpr___closed__4();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___closed__4);
l_Lean_Parser_antiquotNestedExpr___closed__5 = _init_l_Lean_Parser_antiquotNestedExpr___closed__5();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___closed__5);
l_Lean_Parser_antiquotNestedExpr___closed__6 = _init_l_Lean_Parser_antiquotNestedExpr___closed__6();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___closed__6);
l_Lean_Parser_antiquotNestedExpr___closed__7 = _init_l_Lean_Parser_antiquotNestedExpr___closed__7();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr___closed__7);
l_Lean_Parser_antiquotNestedExpr = _init_l_Lean_Parser_antiquotNestedExpr();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr);
l_Lean_Parser_antiquotExpr___closed__1 = _init_l_Lean_Parser_antiquotExpr___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotExpr___closed__1);
l_Lean_Parser_antiquotExpr___closed__2 = _init_l_Lean_Parser_antiquotExpr___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotExpr___closed__2);
l_Lean_Parser_antiquotExpr___closed__3 = _init_l_Lean_Parser_antiquotExpr___closed__3();
lean_mark_persistent(l_Lean_Parser_antiquotExpr___closed__3);
l_Lean_Parser_antiquotExpr = _init_l_Lean_Parser_antiquotExpr();
lean_mark_persistent(l_Lean_Parser_antiquotExpr);
l_Lean_Parser_mkAntiquot___closed__1 = _init_l_Lean_Parser_mkAntiquot___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__1);
l_Lean_Parser_mkAntiquot___closed__2 = _init_l_Lean_Parser_mkAntiquot___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__2);
l_Lean_Parser_mkAntiquot___closed__3 = _init_l_Lean_Parser_mkAntiquot___closed__3();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__3);
l_Lean_Parser_mkAntiquot___closed__4 = _init_l_Lean_Parser_mkAntiquot___closed__4();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__4);
l_Lean_Parser_mkAntiquot___closed__5 = _init_l_Lean_Parser_mkAntiquot___closed__5();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__5);
l_Lean_Parser_mkAntiquot___closed__6 = _init_l_Lean_Parser_mkAntiquot___closed__6();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__6);
l_Lean_Parser_mkAntiquot___closed__7 = _init_l_Lean_Parser_mkAntiquot___closed__7();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__7);
l_Lean_Parser_mkAntiquot___closed__8 = _init_l_Lean_Parser_mkAntiquot___closed__8();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__8);
l_Lean_Parser_mkAntiquot___closed__9 = _init_l_Lean_Parser_mkAntiquot___closed__9();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__9);
l_Lean_Parser_mkAntiquot___closed__10 = _init_l_Lean_Parser_mkAntiquot___closed__10();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__10);
l_Lean_Parser_mkAntiquot___closed__11 = _init_l_Lean_Parser_mkAntiquot___closed__11();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__11);
l_Lean_Parser_mkAntiquot___closed__12 = _init_l_Lean_Parser_mkAntiquot___closed__12();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__12);
l_Lean_Parser_mkAntiquot___closed__13 = _init_l_Lean_Parser_mkAntiquot___closed__13();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__13);
l_Lean_Parser_mkAntiquot___closed__14 = _init_l_Lean_Parser_mkAntiquot___closed__14();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__14);
l_Lean_Parser_mkAntiquot___closed__15 = _init_l_Lean_Parser_mkAntiquot___closed__15();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__15);
l_Lean_Parser_mkAntiquot___closed__16 = _init_l_Lean_Parser_mkAntiquot___closed__16();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__16);
l_Lean_Parser_mkAntiquot___closed__17 = _init_l_Lean_Parser_mkAntiquot___closed__17();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__17);
l_Lean_Parser_mkAntiquot___closed__18 = _init_l_Lean_Parser_mkAntiquot___closed__18();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__18);
l_Lean_Parser_mkAntiquot___closed__19 = _init_l_Lean_Parser_mkAntiquot___closed__19();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__19);
l_Lean_Parser_mkAntiquot___closed__20 = _init_l_Lean_Parser_mkAntiquot___closed__20();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__20);
l_Lean_Parser_mkAntiquot___closed__21 = _init_l_Lean_Parser_mkAntiquot___closed__21();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__21);
l_Lean_Parser_mkAntiquot___closed__22 = _init_l_Lean_Parser_mkAntiquot___closed__22();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__22);
l_Lean_Parser_mkAntiquot___closed__23 = _init_l_Lean_Parser_mkAntiquot___closed__23();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__23);
l_Lean_Parser_mkAntiquot___closed__24 = _init_l_Lean_Parser_mkAntiquot___closed__24();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__24);
l_Lean_Parser_mkAntiquot___closed__25 = _init_l_Lean_Parser_mkAntiquot___closed__25();
lean_mark_persistent(l_Lean_Parser_mkAntiquot___closed__25);
l_Lean_Parser_ident___elambda__1___closed__1 = _init_l_Lean_Parser_ident___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_ident___elambda__1___closed__1);
l_Lean_Parser_ident___elambda__1___closed__2 = _init_l_Lean_Parser_ident___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_ident___elambda__1___closed__2);
l_Lean_Parser_ident___closed__1 = _init_l_Lean_Parser_ident___closed__1();
lean_mark_persistent(l_Lean_Parser_ident___closed__1);
l_Lean_Parser_ident___closed__2 = _init_l_Lean_Parser_ident___closed__2();
lean_mark_persistent(l_Lean_Parser_ident___closed__2);
l_Lean_Parser_ident___closed__3 = _init_l_Lean_Parser_ident___closed__3();
lean_mark_persistent(l_Lean_Parser_ident___closed__3);
l_Lean_Parser_ident = _init_l_Lean_Parser_ident();
lean_mark_persistent(l_Lean_Parser_ident);
l_Lean_Parser_rawIdent___closed__1 = _init_l_Lean_Parser_rawIdent___closed__1();
lean_mark_persistent(l_Lean_Parser_rawIdent___closed__1);
l_Lean_Parser_rawIdent___closed__2 = _init_l_Lean_Parser_rawIdent___closed__2();
lean_mark_persistent(l_Lean_Parser_rawIdent___closed__2);
l_Lean_Parser_rawIdent___closed__3 = _init_l_Lean_Parser_rawIdent___closed__3();
lean_mark_persistent(l_Lean_Parser_rawIdent___closed__3);
l_Lean_Parser_rawIdent = _init_l_Lean_Parser_rawIdent();
lean_mark_persistent(l_Lean_Parser_rawIdent);
l_Lean_Parser_numLit___elambda__1___closed__1 = _init_l_Lean_Parser_numLit___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_numLit___elambda__1___closed__1);
l_Lean_Parser_numLit___elambda__1___closed__2 = _init_l_Lean_Parser_numLit___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_numLit___elambda__1___closed__2);
l_Lean_Parser_numLit___closed__1 = _init_l_Lean_Parser_numLit___closed__1();
lean_mark_persistent(l_Lean_Parser_numLit___closed__1);
l_Lean_Parser_numLit___closed__2 = _init_l_Lean_Parser_numLit___closed__2();
lean_mark_persistent(l_Lean_Parser_numLit___closed__2);
l_Lean_Parser_numLit___closed__3 = _init_l_Lean_Parser_numLit___closed__3();
lean_mark_persistent(l_Lean_Parser_numLit___closed__3);
l_Lean_Parser_numLit = _init_l_Lean_Parser_numLit();
lean_mark_persistent(l_Lean_Parser_numLit);
l_Lean_Parser_strLit___elambda__1___closed__1 = _init_l_Lean_Parser_strLit___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_strLit___elambda__1___closed__1);
l_Lean_Parser_strLit___elambda__1___closed__2 = _init_l_Lean_Parser_strLit___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_strLit___elambda__1___closed__2);
l_Lean_Parser_strLit___closed__1 = _init_l_Lean_Parser_strLit___closed__1();
lean_mark_persistent(l_Lean_Parser_strLit___closed__1);
l_Lean_Parser_strLit___closed__2 = _init_l_Lean_Parser_strLit___closed__2();
lean_mark_persistent(l_Lean_Parser_strLit___closed__2);
l_Lean_Parser_strLit___closed__3 = _init_l_Lean_Parser_strLit___closed__3();
lean_mark_persistent(l_Lean_Parser_strLit___closed__3);
l_Lean_Parser_strLit = _init_l_Lean_Parser_strLit();
lean_mark_persistent(l_Lean_Parser_strLit);
l_Lean_Parser_charLit___elambda__1___closed__1 = _init_l_Lean_Parser_charLit___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_charLit___elambda__1___closed__1);
l_Lean_Parser_charLit___elambda__1___closed__2 = _init_l_Lean_Parser_charLit___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_charLit___elambda__1___closed__2);
l_Lean_Parser_charLit___closed__1 = _init_l_Lean_Parser_charLit___closed__1();
lean_mark_persistent(l_Lean_Parser_charLit___closed__1);
l_Lean_Parser_charLit___closed__2 = _init_l_Lean_Parser_charLit___closed__2();
lean_mark_persistent(l_Lean_Parser_charLit___closed__2);
l_Lean_Parser_charLit___closed__3 = _init_l_Lean_Parser_charLit___closed__3();
lean_mark_persistent(l_Lean_Parser_charLit___closed__3);
l_Lean_Parser_charLit = _init_l_Lean_Parser_charLit();
lean_mark_persistent(l_Lean_Parser_charLit);
l_Lean_Parser_nameLit___elambda__1___closed__1 = _init_l_Lean_Parser_nameLit___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLit___elambda__1___closed__1);
l_Lean_Parser_nameLit___elambda__1___closed__2 = _init_l_Lean_Parser_nameLit___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_nameLit___elambda__1___closed__2);
l_Lean_Parser_nameLit___closed__1 = _init_l_Lean_Parser_nameLit___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLit___closed__1);
l_Lean_Parser_nameLit___closed__2 = _init_l_Lean_Parser_nameLit___closed__2();
lean_mark_persistent(l_Lean_Parser_nameLit___closed__2);
l_Lean_Parser_nameLit___closed__3 = _init_l_Lean_Parser_nameLit___closed__3();
lean_mark_persistent(l_Lean_Parser_nameLit___closed__3);
l_Lean_Parser_nameLit = _init_l_Lean_Parser_nameLit();
lean_mark_persistent(l_Lean_Parser_nameLit);
l_Lean_Parser_categoryParserOfStackFn___closed__1 = _init_l_Lean_Parser_categoryParserOfStackFn___closed__1();
lean_mark_persistent(l_Lean_Parser_categoryParserOfStackFn___closed__1);
l_Lean_Parser_categoryParserOfStackFn___closed__2 = _init_l_Lean_Parser_categoryParserOfStackFn___closed__2();
lean_mark_persistent(l_Lean_Parser_categoryParserOfStackFn___closed__2);
l_Lean_Parser_fieldIdxFn___closed__1 = _init_l_Lean_Parser_fieldIdxFn___closed__1();
lean_mark_persistent(l_Lean_Parser_fieldIdxFn___closed__1);
l_Lean_Parser_fieldIdx___closed__1 = _init_l_Lean_Parser_fieldIdx___closed__1();
lean_mark_persistent(l_Lean_Parser_fieldIdx___closed__1);
l_Lean_Parser_fieldIdx___closed__2 = _init_l_Lean_Parser_fieldIdx___closed__2();
lean_mark_persistent(l_Lean_Parser_fieldIdx___closed__2);
l_Lean_Parser_fieldIdx___closed__3 = _init_l_Lean_Parser_fieldIdx___closed__3();
lean_mark_persistent(l_Lean_Parser_fieldIdx___closed__3);
l_Lean_Parser_fieldIdx___closed__4 = _init_l_Lean_Parser_fieldIdx___closed__4();
lean_mark_persistent(l_Lean_Parser_fieldIdx___closed__4);
l_Lean_Parser_fieldIdx___closed__5 = _init_l_Lean_Parser_fieldIdx___closed__5();
lean_mark_persistent(l_Lean_Parser_fieldIdx___closed__5);
l_Lean_Parser_fieldIdx___closed__6 = _init_l_Lean_Parser_fieldIdx___closed__6();
lean_mark_persistent(l_Lean_Parser_fieldIdx___closed__6);
l_Lean_Parser_fieldIdx___closed__7 = _init_l_Lean_Parser_fieldIdx___closed__7();
lean_mark_persistent(l_Lean_Parser_fieldIdx___closed__7);
l_Lean_Parser_fieldIdx = _init_l_Lean_Parser_fieldIdx();
lean_mark_persistent(l_Lean_Parser_fieldIdx);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
