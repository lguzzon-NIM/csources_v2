/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ;
typedef struct tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg;
typedef struct tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA;
typedef struct tyObject_Lexer__UvQf9aXrtW2JG4IMwuSv9cXA tyObject_Lexer__UvQf9aXrtW2JG4IMwuSv9cXA;
typedef struct tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct tyObject_Token__kYhYXOlGtXyCuQli9biTdZA tyObject_Token__kYhYXOlGtXyCuQli9biTdZA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
struct TNimTypeV2 {
void* destructor;
NI size;
NI16 align;
NI16 depth;
NU32* display;
void* traceImpl;
void* typeInfoV1;
NI flags;
};
struct RootObj {
TNimTypeV2* m_type;
};
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw {
  RootObj Sup;
NI bufpos;
NCSTRING buf;
NimStringV2 bufStorage;
NI bufLen;
tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* stream;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
};
typedef NU8 tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info, tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA msg, NimStringV2 arg, void* ClE_0);
void* ClE_0;
} tyProc__ARwI3dj1dFJlCkFrlsuq2A;
struct tyObject_Lexer__UvQf9aXrtW2JG4IMwuSv9cXA {
  tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw Sup;
NI32 fileIdx;
NI indentAhead;
NI currLineIndent;
NIM_BOOL strongSpaces;
NIM_BOOL allowTabs;
tyProc__ARwI3dj1dFJlCkFrlsuq2A errorHandler;
tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache;
tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config;
};
typedef NU8 tyEnum_TokType__FBGVnQ0tiQKJV9co2BPPhQQ;
typedef NU8 tyEnum_NumericalBase__AbSe5ri9aXAVP9cA1JY4Ahdw;
typedef NU8 tyEnum_TokenSpacing__perxzrRsffkZSokgB16rRw;
struct tyObject_Token__kYhYXOlGtXyCuQli9biTdZA {
tyEnum_TokType__FBGVnQ0tiQKJV9co2BPPhQQ tokType;
NI indent;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* ident;
NI64 iNumber;
NF fNumber;
tyEnum_NumericalBase__AbSe5ri9aXAVP9cA1JY4Ahdw base;
NIM_BOOL strongSpaceA;
tyEnum_TokenSpacing__perxzrRsffkZSokgB16rRw strongSpaceB;
NimStringV2 literal;
NI line;
NI col;
};
struct tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA {
NI currInd;
NIM_BOOL firstTok;
NIM_BOOL hasProgress;
tyObject_Lexer__UvQf9aXrtW2JG4IMwuSv9cXA lex;
tyObject_Token__kYhYXOlGtXyCuQli9biTdZA tok;
NI lineStartPrevious;
NI lineNumberPrevious;
NI bufposPrevious;
NI inPragma;
NI inSemiStmtList;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* emptyNode;
};
typedef NU8 tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg;
struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU8 tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw;
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringV2 Field0;
NI Field1;
NI Field2;
};
typedef NU32 tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw;
typedef NU8 tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ;
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ {
  NI len; tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content* p;
};
struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q {
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ;
tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info;
tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw flags;
tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind;
union{
struct {NI64 intVal;
} _kind_1;
struct {NF floatVal;
} _kind_2;
struct {NimStringV2 strVal;
} _kind_3;
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym;
} _kind_4;
struct {tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* ident;
} _kind_5;
struct {tySequence__xxu3GgaFAGO6lOns9aHaeLQ sons;
} _kind_6;
};
};
typedef NU8 tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, void* buf, NI bufLen, void* ClE_0);
void* ClE_0;
} tyProc__oi9b0z9awBBnvGw9arizvgdNw;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw {
  RootObj Sup;
tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w kind;
FILE* f;
NimStringV2 s;
NI rd;
NI wr;
NI lineOffset;
tyProc__oi9b0z9awBBnvGw9arizvgdNw repl;
tyProc__HzVCwACFYM9cx9aV62PdjtuA onPrompt;
};
struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA {
NI id;
NimStringV2 s;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* next;
NI h;
};
typedef NU8 tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA;
typedef NU16 tySet_tyEnum_TRenderFlag__MM5FVX0phapzCgLaUUssTA;
typedef NU8 tyEnum_TMsgKind__w451l0dg4CacKSKYxza9cvw;
typedef NU8 tySet_tyEnum_MsgFlag__q34X3Ekr9cqax7QgRzs9cM1A;


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setupParser__syntaxes_219)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, NI32 fileIdx, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toFullPathConsiderDirty__msgs_622)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, NI32 fileIdx);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_403)(FILE** f, NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize);
N_LIB_PRIVATE N_NOINLINE(void, liMessage__msgs_1172)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info, tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA msg, NimStringV2 arg, tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw eh, tyTuple__kN8up2W6YKc5YA9avn5mV5w* info2, NIM_BOOL isRaw);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___llstream_68)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw** dest);
N_LIB_PRIVATE N_NIMCALL(void, openParser__syntaxes_199)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, NI32 fileIdx, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* inputstream, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, parsePipe__syntaxes_41)(NimStringV2 filename, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* inputStream, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newNode__ast_3934)(tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, llStreamOpen__llstream_101)(NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine__llstream_256)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, NimStringV2* line);
N_LIB_PRIVATE N_NIMCALL(NI, utf8Bom__syntaxes_24)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsShebang__syntaxes_27)(NimStringV2 s, NI i);
N_LIB_PRIVATE N_NIMCALL(void, openParser__parser_132)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, NimStringV2 filename, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* inputStream, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, llStreamOpen__llstream_31)(NimStringV2 data);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7562)(NimStringV2 s, NI first);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___ast_3460)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, parseAll__parser_38)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p);
N_LIB_PRIVATE N_NIMCALL(void, closeParser__parser_40)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___parser_2563)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* dest);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose__llstream_164)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___options_3378)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg** dest, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, evalPipe__syntaxes_155)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NimStringV2 filename, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* start);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___llstream_71)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw** dest, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* src, NIM_BOOL cyclic);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a, NimStringV2 b);
static N_INLINE(NIM_BOOL, equalMem__system_1727)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___llstream_75)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw** dest, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, applyFilter__syntaxes_136)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NimStringV2 filename, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* stdin_0);
N_LIB_PRIVATE N_NIMCALL(tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA, getFilter__syntaxes_75)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* ident);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringV2 a, NimStringV2 b);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___syntaxes_21)(tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA e);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*, getCallee__syntaxes_118)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___idents_136)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA** dest, tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderTree__renderer_50)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, tySet_tyEnum_TRenderFlag__MM5FVX0phapzCgLaUUssTA renderFlags);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, filterTmpl__filter95tmpl_223)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* stdin_0, NimStringV2 filename, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* call);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, filterStrip__filters_98)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* stdin_0, NimStringV2 filename, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* call);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, filterReplace__filters_109)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* stdin_0, NimStringV2 filename, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* call);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasHint__options_530)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyEnum_TMsgKind__w451l0dg4CacKSKYxza9cvw note);
N_LIB_PRIVATE N_NIMCALL(void, msgWriteln__msgs_698)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, NimStringV2 s, tySet_tyEnum_MsgFlag__q34X3Ekr9cqax7QgRzs9cM1A flags);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_133)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA** dest);
N_LIB_PRIVATE N_NIMCALL(void, openParser__parser_126)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, NI32 fileIdx, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* inputStream, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, llStreamOpen__llstream_95)(FILE* f);
extern TNimTypeV2 NTIv2__UvQf9aXrtW2JG4IMwuSv9cXA_;
static const struct {
  NI cap; NIM_CHAR data[18+1];
} TM__xy1U79cq9cILOyMzz14OxC9cQ_3 = { 18 | NIM_STRLIT_FLAG, "cannot open file: " };
static const NimStringV2 TM__xy1U79cq9cILOyMzz14OxC9cQ_4 = {18, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_3};
static const struct {
  NI cap; NIM_CHAR data[38+1];
} TM__xy1U79cq9cILOyMzz14OxC9cQ_6 = { 38 | NIM_STRLIT_FLAG, "/home/wind/nimv2/compiler/syntaxes.nim" };
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__xy1U79cq9cILOyMzz14OxC9cQ_7 = { 1 | NIM_STRLIT_FLAG, "|" };
static const NimStringV2 TM__xy1U79cq9cILOyMzz14OxC9cQ_8 = {1, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_7};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__xy1U79cq9cILOyMzz14OxC9cQ_9 = { 4 | NIM_STRLIT_FLAG, "none" };
static const NimStringV2 TM__xy1U79cq9cILOyMzz14OxC9cQ_10 = {4, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_9};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__xy1U79cq9cILOyMzz14OxC9cQ_11 = { 7 | NIM_STRLIT_FLAG, "stdtmpl" };
static const NimStringV2 TM__xy1U79cq9cILOyMzz14OxC9cQ_12 = {7, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_11};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__xy1U79cq9cILOyMzz14OxC9cQ_13 = { 7 | NIM_STRLIT_FLAG, "replace" };
static const NimStringV2 TM__xy1U79cq9cILOyMzz14OxC9cQ_14 = {7, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_13};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__xy1U79cq9cILOyMzz14OxC9cQ_15 = { 5 | NIM_STRLIT_FLAG, "strip" };
static const NimStringV2 TM__xy1U79cq9cILOyMzz14OxC9cQ_16 = {5, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_15};
static const struct {
  NI cap; NIM_CHAR data[16+1];
} TM__xy1U79cq9cILOyMzz14OxC9cQ_17 = { 16 | NIM_STRLIT_FLAG, "invalid filter: " };
static const NimStringV2 TM__xy1U79cq9cILOyMzz14OxC9cQ_18 = {16, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_17};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__xy1U79cq9cILOyMzz14OxC9cQ_20 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__xy1U79cq9cILOyMzz14OxC9cQ_21 = {0, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_20};
static const NimStringV2 TM__xy1U79cq9cILOyMzz14OxC9cQ_23 = {0, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_20};
static NIM_CONST tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA TM__xy1U79cq9cILOyMzz14OxC9cQ_2 = {0, NIM_FALSE, NIM_FALSE, {{{(&NTIv2__UvQf9aXrtW2JG4IMwuSv9cXA_)}, 0, NIM_NIL, {0, NIM_NIL}, 0, NIM_NIL, 0, 0, 0, 0}, 0, 0, 0, NIM_FALSE, NIM_FALSE, {NIM_NIL, NIM_NIL}, NIM_NIL, NIM_NIL}, {0, 0, NIM_NIL, 0, 0.0, 0, NIM_FALSE, 0, {0, NIM_NIL}, 0, 0}, 0, 0, 0, 0, 0, NIM_NIL}
;
extern NIM_CONST tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg unknownLineInfo__lineinfos_338;
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__xy1U79cq9cILOyMzz14OxC9cQ_5 = {{38, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_6},
((NI)129),
((NI)14)}
;
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__xy1U79cq9cILOyMzz14OxC9cQ_19 = {{38, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_6},
((NI)77),
((NI)14)}
;
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__xy1U79cq9cILOyMzz14OxC9cQ_22 = {{38, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_6},
((NI)94),
((NI)16)}
;
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__xy1U79cq9cILOyMzz14OxC9cQ_24 = {{38, (NimStrPayload*)&TM__xy1U79cq9cILOyMzz14OxC9cQ_6},
((NI)96),
((NI)16)}
;
extern NIM_BOOL nimInErrorMode__system_3994;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {
	{
		if (!(((NI)0) < src.len)) goto LA3_;
		copyMem__system_1719(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI)0)]))), ((NI) ((NI)(src.len + ((NI)1)))));
		(*dest).len += src.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, utf8Bom__syntaxes_24)(NimStringV2 s) {
	NI result;
	NI colontmpD_;
	NI colontmpD__2;
	result = (NI)0;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T5_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T5_ = (NIM_BOOL)0;
		T5_ = (((NI)3) <= s.len);
		if (!(T5_)) goto LA6_;
		T5_ = ((NU8)(s.p->data[((NI)0)]) == (NU8)(239));
		LA6_: ;
		T4_ = T5_;
		if (!(T4_)) goto LA7_;
		T4_ = ((NU8)(s.p->data[((NI)1)]) == (NU8)(187));
		LA7_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA8_;
		T3_ = ((NU8)(s.p->data[((NI)2)]) == (NU8)(191));
		LA8_: ;
		if (!T3_) goto LA9_;
		colontmpD_ = ((NI)3);
		result = colontmpD_;
	}
	goto LA1_;
	LA9_: ;
	{
		colontmpD__2 = ((NI)0);
		result = colontmpD__2;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsShebang__syntaxes_27)(NimStringV2 s, NI i) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI j;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((NI)(i + ((NI)1)) < s.len);
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)(s.p->data[i]) == (NU8)(35));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)(s.p->data[(NI)(i + ((NI)1))]) == (NU8)(33));
		LA6_: ;
		if (!T3_) goto LA7_;
		j = (NI)(i + ((NI)2));
		{
			while (1) {
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = (j < s.len);
				if (!(T11_)) goto LA12_;
				T11_ = (((NU8)(s.p->data[j])) == ((NU8)(32)) || ((NU8)(s.p->data[j])) == ((NU8)(9)) || ((NU8)(s.p->data[j])) == ((NU8)(11)) || ((NU8)(s.p->data[j])) == ((NU8)(13)) || ((NU8)(s.p->data[j])) == ((NU8)(10)) || ((NU8)(s.p->data[j])) == ((NU8)(12)));
				LA12_: ;
				if (!T11_) goto LA10				;
				j += ((NI)1);
			} LA10: ;
		}
		result = ((NU8)(s.p->data[j]) == (NU8)(47));
	}
	LA7_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, parsePipe__syntaxes_41)(NimStringV2 filename, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* inputStream, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s;
NIM_BOOL oldNimErrFin22_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	s = NIM_NIL;
	result = newNode__ast_3934(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)1));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	s = llStreamOpen__llstream_101(filename, ((tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg)0));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NimStringV2 line;
		NIM_BOOL T7_;
		NI i;
		NI linenumber;
		if (!!((s == ((tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*) NIM_NIL)))) goto LA4_;
		line.len = 0; line.p = NIM_NIL;
		line = rawNewString(((NI)80));
		T7_ = (NIM_BOOL)0;
		T7_ = llStreamReadLine__llstream_256(s, (&line));
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		(void)(T7_);
		i = utf8Bom__syntaxes_24(line);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		linenumber = ((NI)1);
		{
			NIM_BOOL T10_;
			NIM_BOOL T13_;
			T10_ = (NIM_BOOL)0;
			T10_ = containsShebang__syntaxes_27(line, i);
			if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
			if (!T10_) goto LA11_;
			T13_ = (NIM_BOOL)0;
			T13_ = llStreamReadLine__llstream_256(s, (&line));
			if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
			(void)(T13_);
			i = ((NI)0);
			linenumber += ((NI)1);
		}
		LA11_: ;
		{
			NIM_BOOL T16_;
			NIM_BOOL T17_;
			tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA p;
			NimStringV2 colontmpD_;
			tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* colontmpD__2;
			tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* T27_;
			T16_ = (NIM_BOOL)0;
			T17_ = (NIM_BOOL)0;
			T17_ = ((NI)(i + ((NI)1)) < line.len);
			if (!(T17_)) goto LA18_;
			T17_ = ((NU8)(line.p->data[i]) == (NU8)(35));
			LA18_: ;
			T16_ = T17_;
			if (!(T16_)) goto LA19_;
			T16_ = ((NU8)(line.p->data[(NI)(i + ((NI)1))]) == (NU8)(63));
			LA19_: ;
			if (!T16_) goto LA20_;
			nimZeroMem((void*)(&p), sizeof(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA));
			p = TM__xy1U79cq9cILOyMzz14OxC9cQ_2;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			colontmpD__2 = NIM_NIL;
			i += ((NI)2);
			{
				while (1) {
					NIM_BOOL T25_;
					T25_ = (NIM_BOOL)0;
					T25_ = (i < line.len);
					if (!(T25_)) goto LA26_;
					T25_ = (((NU8)(line.p->data[i])) == ((NU8)(32)) || ((NU8)(line.p->data[i])) == ((NU8)(9)) || ((NU8)(line.p->data[i])) == ((NU8)(11)) || ((NU8)(line.p->data[i])) == ((NU8)(13)) || ((NU8)(line.p->data[i])) == ((NU8)(10)) || ((NU8)(line.p->data[i])) == ((NU8)(12)));
					LA26_: ;
					if (!T25_) goto LA24					;
					i += ((NI)1);
				} LA24: ;
			}
			colontmpD_ = substr__system_7562(line, i);
			colontmpD__2 = llStreamOpen__llstream_31(colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA22_;
			openParser__parser_132((&p), filename, colontmpD__2, cache, config);
			if (NIM_UNLIKELY(*nimErr_)) goto LA22_;
			T27_ = NIM_NIL;
			T27_ = parseAll__parser_38((&p));
			if (NIM_UNLIKELY(*nimErr_)) goto LA22_;
			eqsink___ast_3460(&result, T27_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA22_;
			closeParser__parser_40((&p));
			if (NIM_UNLIKELY(*nimErr_)) goto LA22_;
			{
				LA22_:;
			}
			{
				oldNimErrFin22_ = *nimErr_; *nimErr_ = NIM_FALSE;
				eqdestroy___llstream_68(&colontmpD__2);
				eqdestroy___stdZassertions_13((&colontmpD_));
				eqdestroy___parser_2563((&p));
				if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
				*nimErr_ = oldNimErrFin22_;
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		}
		LA20_: ;
		llStreamClose__llstream_164(s);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			eqdestroy___stdZassertions_13((&line));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA4_: ;
	{
		LA1_:;
	}
	{
		eqdestroy___llstream_68(&s);
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__system_1727)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32)0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a, NimStringV2 b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = a.len;
	blen = b.len;
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI)0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem__system_1727(((void*) ((&a.p->data[((NI)0)]))), ((void*) ((&b.p->data[((NI)0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___syntaxes_21)(tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA e) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	switch (e) {
	case ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)0):
	{
		result = TM__xy1U79cq9cILOyMzz14OxC9cQ_10;
	}
	break;
	case ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)1):
	{
		result = TM__xy1U79cq9cILOyMzz14OxC9cQ_12;
	}
	break;
	case ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)2):
	{
		result = TM__xy1U79cq9cILOyMzz14OxC9cQ_14;
	}
	break;
	case ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)3):
	{
		result = TM__xy1U79cq9cILOyMzz14OxC9cQ_16;
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA, getFilter__syntaxes_75)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* ident) {
	tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)0;
	{
		tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA i;
		i = (tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)0;
		{
			tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA v;
			NI res;
			v = (tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)0;
			res = ((NI)0);
			{
				while (1) {
					NimStringV2 colontmpD_;
					if (!(res <= ((NI)3))) goto LA4					;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					v = ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA) (res));
					i = v;
					{
						NI T8_;
						colontmpD_ = dollar___syntaxes_21(i);
						T8_ = (NI)0;
						T8_ = nsuCmpIgnoreStyle((*ident).s, colontmpD_);
						if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
						if (!(T8_ == ((NI)0))) goto LA9_;
						result = i;
						eqdestroy___stdZassertions_13((&colontmpD_));
						goto BeforeRet_;
					}
					LA9_: ;
					res += ((NI)1);
					{
						LA5_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD_));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				} LA4: ;
			}
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*, getCallee__syntaxes_118)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)27) || (*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)29) || (*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)30) || (*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)31) || (*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)26) || (*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)28) || (*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)32));
		if (!(T3_)) goto LA4_;
		T3_ = ((*(*n)._kind_6.sons.p->data[((NI)0)]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2));
		LA4_: ;
		if (!T3_) goto LA5_;
		eqcopy___idents_136(&result, (*(*n)._kind_6.sons.p->data[((NI)0)])._kind_5.ident);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		if (!((*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2))) goto LA8_;
		eqcopy___idents_136(&result, (*n)._kind_5.ident);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA8_: ;
	{
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		NimStringV2 T12_;
		tySet_tyEnum_TRenderFlag__MM5FVX0phapzCgLaUUssTA T13_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T12_.len = 0; T12_.p = NIM_NIL;
		T13_ = 0;
		colontmpD_ = renderTree__renderer_50(n, T13_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
		T12_ = rawNewString(colontmpD_.len + 16);
appendString((&T12_), TM__xy1U79cq9cILOyMzz14OxC9cQ_18);
appendString((&T12_), colontmpD_);
		colontmpD__2 = T12_;
		liMessage__msgs_1172(conf, (*n).info, ((tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA)17), colontmpD__2, ((tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw)0), (&TM__xy1U79cq9cILOyMzz14OxC9cQ_19), NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
		{
			LA11_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__2));
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, applyFilter__syntaxes_136)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NimStringV2 filename, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* stdin_0) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* result;
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* colontmpD_;
	tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA f;
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* T2_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = getCallee__syntaxes_118((*p).lex.config, n);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	f = getFilter__syntaxes_75(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_ = NIM_NIL;
	switch (f) {
	case ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)0):
	{
		eqcopy___llstream_71(&result, stdin_0, NIM_FALSE);
	}
	break;
	case ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)1):
	{
		result = filterTmpl__filter95tmpl_223((*p).lex.config, stdin_0, filename, n);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	break;
	case ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)3):
	{
		result = filterStrip__filters_98((*p).lex.config, stdin_0, filename, n);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	break;
	case ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)2):
	{
		result = filterReplace__filters_109((*p).lex.config, stdin_0, filename, n);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	break;
	}
	{
		if (!!((f == ((tyEnum_FilterKind__t9bIe7ZGeUa2Zu5efx1vWJA)0)))) goto LA9_;
		{
			NIM_BOOL T13_;
			tySet_tyEnum_MsgFlag__q34X3Ekr9cqax7QgRzs9cM1A T16_;
			T13_ = (NIM_BOOL)0;
			T13_ = hasHint__options_530((*p).lex.config, ((tyEnum_TMsgKind__w451l0dg4CacKSKYxza9cvw)91));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			if (!T13_) goto LA14_;
			liMessage__msgs_1172((*p).lex.config, unknownLineInfo__lineinfos_338, ((tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA)91), TM__xy1U79cq9cILOyMzz14OxC9cQ_21, ((tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw)1), (&TM__xy1U79cq9cILOyMzz14OxC9cQ_22), NIM_FALSE);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			T16_ = 0;
			msgWriteln__msgs_698((*p).lex.config, (*result).s, T16_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			liMessage__msgs_1172((*p).lex.config, unknownLineInfo__lineinfos_338, ((tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA)92), TM__xy1U79cq9cILOyMzz14OxC9cQ_23, ((tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw)1), (&TM__xy1U79cq9cILOyMzz14OxC9cQ_24), NIM_FALSE);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		}
		LA14_: ;
	}
	LA9_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___idents_133(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, evalPipe__syntaxes_155)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NimStringV2 filename, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* start) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	eqcopy___llstream_71(&result, start, NIM_FALSE);
	{
		if (!((*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)1))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		NIM_BOOL T8_;
		T7_ = (NIM_BOOL)0;
		T8_ = (NIM_BOOL)0;
		T8_ = ((*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)29));
		if (!(T8_)) goto LA9_;
		T8_ = ((*(*n)._kind_6.sons.p->data[((NI)0)]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2));
		LA9_: ;
		T7_ = T8_;
		if (!(T7_)) goto LA10_;
		T7_ = eqStrings((*(*(*n)._kind_6.sons.p->data[((NI)0)])._kind_5.ident).s, TM__xy1U79cq9cILOyMzz14OxC9cQ_8);
		LA10_: ;
		if (!T7_) goto LA11_;
		{
			NI i;
			NI res;
			i = (NI)0;
			res = ((NI)1);
			{
				while (1) {
					if (!(res <= ((NI)2))) goto LA15					;
					i = res;
					{
						tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* T20_;
						if (!((*(*n)._kind_6.sons.p->data[i]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)29))) goto LA18_;
						T20_ = NIM_NIL;
						T20_ = evalPipe__syntaxes_155(p, (*n)._kind_6.sons.p->data[i], filename, result);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						eqsink___llstream_75(&result, T20_);
					}
					goto LA16_;
					LA18_: ;
					{
						tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* T22_;
						T22_ = NIM_NIL;
						T22_ = applyFilter__syntaxes_136(p, (*n)._kind_6.sons.p->data[i], filename, result);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						eqsink___llstream_75(&result, T22_);
					}
					LA16_: ;
					res += ((NI)1);
				} LA15: ;
			}
		}
	}
	goto LA5_;
	LA11_: ;
	{
		tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* T26_;
		if (!((*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)115))) goto LA24_;
		T26_ = NIM_NIL;
		T26_ = evalPipe__syntaxes_155(p, (*n)._kind_6.sons.p->data[((NI)0)], filename, result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqsink___llstream_75(&result, T26_);
	}
	goto LA5_;
	LA24_: ;
	{
		tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* T28_;
		T28_ = NIM_NIL;
		T28_ = applyFilter__syntaxes_136(p, n, filename, result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqsink___llstream_75(&result, T28_);
	}
	LA5_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, openParser__syntaxes_199)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, NI32 fileIdx, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* inputstream, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config) {
	NimStringV2 filename;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* pipe;
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s;
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* T2_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	filename.len = 0; filename.p = NIM_NIL;
	pipe = NIM_NIL;
	s = NIM_NIL;
	filename = toFullPathConsiderDirty__msgs_622(config, fileIdx);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	pipe = parsePipe__syntaxes_41(filename, inputstream, cache, config);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	eqcopy___options_3378(&(*p).lex.config, config);
	T2_ = NIM_NIL;
	{
		if (!!((pipe == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL)))) goto LA5_;
		s = evalPipe__syntaxes_155(p, pipe, filename, inputstream);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	goto LA3_;
	LA5_: ;
	{
		eqcopy___llstream_71(&s, inputstream, NIM_FALSE);
	}
	LA3_: ;
	openParser__parser_126(p, fileIdx, s, cache, config);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___llstream_68(&s);
		eqdestroy___ast_3454(&pipe);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZassertions_13((&filename));
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setupParser__syntaxes_219)(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA* p, NI32 fileIdx, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config) {
	NIM_BOOL result;
	NimStringV2 filename;
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* colontmpD_;
	FILE* f;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	filename.len = 0; filename.p = NIM_NIL;
	colontmpD_ = NIM_NIL;
	filename = toFullPathConsiderDirty__msgs_622(config, fileIdx);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	f = (FILE*)0;
	{
		NIM_BOOL T4_;
		NimStringV2 colontmpD__2;
		NimStringV2 T8_;
		T4_ = (NIM_BOOL)0;
		T4_ = open__stdZsyncio_403(&f, filename, ((tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg)0), ((NI)-1));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!(T4_)) goto LA5_;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T8_.len = 0; T8_.p = NIM_NIL;
		T8_ = rawNewString(filename.len + 18);
appendString((&T8_), TM__xy1U79cq9cILOyMzz14OxC9cQ_4);
appendString((&T8_), filename);
		colontmpD__2 = T8_;
		liMessage__msgs_1172(config, unknownLineInfo__lineinfos_338, ((tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA)17), colontmpD__2, ((tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw)1), (&TM__xy1U79cq9cILOyMzz14OxC9cQ_5), NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		result = NIM_FALSE;
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___llstream_68(&colontmpD_);
		eqdestroy___stdZassertions_13((&filename));
		goto BeforeRet_;
		{
			LA7_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__2));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA5_: ;
	colontmpD_ = llStreamOpen__llstream_95(f);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	openParser__syntaxes_199(p, fileIdx, colontmpD_, cache, config);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = NIM_TRUE;
	{
		LA1_:;
	}
	{
		eqdestroy___llstream_68(&colontmpD_);
		eqdestroy___stdZassertions_13((&filename));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, parseFile__syntaxes_227)(NI32 fileIdx, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA p;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	nimZeroMem((void*)(&p), sizeof(tyObject_Parser__v5vNexcoxHVAc0S6NqA1zA));
	p = TM__xy1U79cq9cILOyMzz14OxC9cQ_2;
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = setupParser__syntaxes_219((&p), fileIdx, cache, config);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!T4_) goto LA5_;
		result = parseAll__parser_38((&p));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		closeParser__parser_40((&p));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA5_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___parser_2563((&p));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
