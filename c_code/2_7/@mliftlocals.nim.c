/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ;
typedef struct tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg;
typedef struct tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
typedef struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw;
typedef struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA;
typedef struct tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
struct tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q {
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* partialParam;
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* objType;
tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache;
tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag* idgen;
};
struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw;
typedef NU8 tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
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
typedef NU16 tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA;
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
struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw {
NI32 module;
NI32 item;
};
struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ {
  RootObj Sup;
tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw itemId;
};
typedef NU8 tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ;
typedef NU16 tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg;
typedef NU64 tySet_tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg;
typedef NU32 tySet_tyEnum_TOption__PrH9cMsvu5oCG0HODAZ3CAg;
typedef NU8 tyEnum_TLocKind__iCEcZjTaghPmL3Wx2e5DQw;
typedef NU8 tyEnum_TStorageLoc__BKvMXWvKko6Yn5329c9aw9afg;
typedef NU16 tySet_tyEnum_TLocFlag__9a7m8BSAfzn6yluCKaq6viw;
struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA {
tyEnum_TLocKind__iCEcZjTaghPmL3Wx2e5DQw k;
tyEnum_TStorageLoc__BKvMXWvKko6Yn5329c9aw9afg storage;
tySet_tyEnum_TLocFlag__9a7m8BSAfzn6yluCKaq6viw flags;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* lode;
NimStringV2 r;
};
struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA {
  tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ Sup;
tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ kind;
union{
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* gcUnsafetyReason;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* transformedBody;
} _kind_1;
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* guard;
NI bitsize;
NI alignment;
} _kind_2;
};
tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg magic;
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* name;
tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info;
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* owner;
tySet_tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg flags;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* ast;
tySet_tyEnum_TOption__PrH9cMsvu5oCG0HODAZ3CAg options;
NI position;
NI offset;
tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA loc;
tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg* annex;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* constraint;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};
struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA {
NI id;
NimStringV2 s;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* next;
NI h;
};
typedef NU8 tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ;
typedef NU8 tyEnum_TCallingConvention__XL1p2EKvOAlAHpc68ecZPw;
typedef NU64 tySet_tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q;
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ {
  NI len; tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content* p;
};
struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA {
  tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ Sup;
tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ kind;
tyEnum_TCallingConvention__XL1p2EKvOAlAHpc68ecZPw callConv;
tySet_tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q flags;
tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ sons;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n;
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* owner;
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym;
NI64 size;
NI16 align;
NI16 paddingAtEnd;
tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA loc;
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typeInst;
tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw uniqueId;
};
typedef NU8 tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA;
typedef NU8 tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw;
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringV2 Field0;
NI Field1;
NI Field2;
};
typedef NimStringV2 tyArray__Re75IspeoxXy2oCZHwcRrA[2];
typedef NU8 tySet_tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ[9];
typedef NU8 tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q;
typedef tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* tyArray__ITlg8UhAbnS7vsiPAhcspQ[1];
typedef NU8 tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg;


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
#define tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content { NI cap; tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, getPragmaVal__pragmas_97)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* procAst, tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA name);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___liftlocals_110)(tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q* dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p, TNimTypeV2* desc);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3143)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_224)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3232)(tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3543)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_4060)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA** dest);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA*, lookupParam__liftlocals_59)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* params, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* dest);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_4063)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA** dest, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* src);
N_LIB_PRIVATE N_NOINLINE(void, liMessage__msgs_1172)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info, tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA msg, NimStringV2 arg, tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw eh, tyTuple__kN8up2W6YKc5YA9avn5mV5w info2, NIM_BOOL isRaw);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatOpenArray)(NimStringV2 formatstr, NimStringV2* a, NI aLen_0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___renderer_2511)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*, skipTypes__ast_4803)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t, tySet_tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ kinds);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatSingleElem)(NimStringV2 formatstr, NimStringV2 a);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___idents_266)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ** dest, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* src, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3247)(tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag** dest, tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag* src, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newTree__ast_3975)(tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** children, NI childrenLen_0);
N_LIB_PRIVATE N_NIMCALL(void, liftLocals__liftlocals_47)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NI i, tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q* c);
static N_INLINE(NIM_BOOL, interestingVar__liftlocals_17)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___ast_3460)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lookupOrAdd__liftlocals_28)(tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q* c, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA*, addUniqueField__lowerings_450)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* obj, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag* idgen);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newNodeI__ast_3949)(tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3546)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* src);
N_LIB_PRIVATE N_NIMCALL(void, add__ast_6233)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* father, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newSymNode__ast_4787)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newSymNode__ast_4784)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym);
static N_INLINE(NI, safeLen__ast_3318)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
extern TNimTypeV2 NTIv2__4yiDOEx3Y9aOTV1fsziBtCQ_;
extern TNimTypeV2 NTIv2__C1k2TcDRT9cU4DEatQIT09ag_;
static const struct {
  NI cap; NIM_CHAR data[31+1];
} TM__N3PVvLhrju29a7N4YrE3m7Q_2 = { 31 | NIM_STRLIT_FLAG, "\'$1\' is not a parameter of \'$2\'" };
static const NimStringV2 TM__N3PVvLhrju29a7N4YrE3m7Q_3 = {31, (NimStrPayload*)&TM__N3PVvLhrju29a7N4YrE3m7Q_2};
static const struct {
  NI cap; NIM_CHAR data[40+1];
} TM__N3PVvLhrju29a7N4YrE3m7Q_5 = { 40 | NIM_STRLIT_FLAG, "/home/wind/nimv2/compiler/liftlocals.nim" };
static NIM_CONST tySet_tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ TM__N3PVvLhrju29a7N4YrE3m7Q_6 = {
0x10, 0xa9, 0xe0, 0x00, 0x00, 0xe0, 0x80, 0x00,
0x00}
;
static const struct {
  NI cap; NIM_CHAR data[51+1];
} TM__N3PVvLhrju29a7N4YrE3m7Q_7 = { 51 | NIM_STRLIT_FLAG, "parameter \'$1\' is not a pointer to a partial object" };
static const NimStringV2 TM__N3PVvLhrju29a7N4YrE3m7Q_8 = {51, (NimStrPayload*)&TM__N3PVvLhrju29a7N4YrE3m7Q_7};
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__N3PVvLhrju29a7N4YrE3m7Q_4 = {{40, (NimStrPayload*)&TM__N3PVvLhrju29a7N4YrE3m7Q_5},
((NI)63),
((NI)14)}
;
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__N3PVvLhrju29a7N4YrE3m7Q_9 = {{40, (NimStrPayload*)&TM__N3PVvLhrju29a7N4YrE3m7Q_5},
((NI)68),
((NI)14)}
;
extern NIM_BOOL nimInErrorMode__system_3980;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)8));
		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
		{
			if (!((NI)((*cell).rc & ((NI)-16)) == ((NI)0))) goto LA8_;
			result = NIM_TRUE;
		}
		goto LA6_;
		LA8_: ;
		{
			(*cell).rc -= ((NI)16);
		}
		LA6_: ;
	}
	LA3_: ;
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p, TNimTypeV2* desc) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)8));
		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
		{
			if (!((NI)((*cell).rc & ((NI)-16)) == ((NI)0))) goto LA8_;
			result = NIM_TRUE;
		}
		goto LA6_;
		LA8_: ;
		{
			(*cell).rc -= ((NI)16);
		}
		LA6_: ;
		rememberCycle__system_3143(result, cell, desc);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___liftlocals_110)(tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q* dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).partialParam);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).partialParam);
	}
	LA4_: ;
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLast((*dest).objType);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).objType);
	}
	LA9_: ;
	{
		NIM_BOOL T13_;
		T13_ = (NIM_BOOL)0;
		T13_ = nimDecRefIsLastCyclicStatic((*dest).cache, (&NTIv2__4yiDOEx3Y9aOTV1fsziBtCQ_));
		if (!T13_) goto LA14_;
		eqdestroy___idents_224((*dest).cache);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).cache, ((NI)4));
	}
	LA14_: ;
	{
		NIM_BOOL T18_;
		T18_ = (NIM_BOOL)0;
		T18_ = nimDecRefIsLastCyclicStatic((*dest).idgen, (&NTIv2__C1k2TcDRT9cU4DEatQIT09ag_));
		if (!T18_) goto LA19_;
		eqdestroy___ast_3232((*dest).idgen);
		nimRawDispose((*dest).idgen, ((NI)4));
	}
	LA19_: ;
	}BeforeRet_: ;
}
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n)._kind_6.sons.len;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA*, lookupParam__liftlocals_59)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* params, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* dest) {
	tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	{
		if (!!(((*dest).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2)))) goto LA3_;
		result = ((tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA*) NIM_NIL);
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len__ast_3325(params);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		i_2 = ((NI)1);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA7				;
				i = i_2;
				{
					NIM_BOOL T10_;
					T10_ = (NIM_BOOL)0;
					T10_ = ((*(*params)._kind_6.sons.p->data[i]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3));
					if (!(T10_)) goto LA11_;
					T10_ = ((*(*(*(*params)._kind_6.sons.p->data[i])._kind_4.sym).name).id == (*(*dest)._kind_5.ident).id);
					LA11_: ;
					if (!T10_) goto LA12_;
					eqcopy___ast_4063(&result, (*(*params)._kind_6.sons.p->data[i])._kind_4.sym);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto BeforeRet_;
				}
				LA12_: ;
				i_2 += ((NI)1);
			} LA7: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, interestingVar__liftlocals_17)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((*s).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)8) || (*s).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)9) || (*s).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)5) || (*s).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)21) || (*s).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)11));
	if (!(T1_)) goto LA2_;
	T1_ = !((((*s).flags &((NU64)1<<((NU)((((tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg)3)))&63U)))!=0));
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lookupOrAdd__liftlocals_28)(tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q* c, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* field;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* deref;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	field = NIM_NIL;
	deref = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	field = addUniqueField__lowerings_450((*c).objType, s, (*c).cache, (*c).idgen);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	deref = newNodeI__ast_3949(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)65), info);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqcopy___ast_3546(&(*deref).typ, (*c).objType);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	colontmpD_ = newSymNode__ast_4787((*c).partialParam, info);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__ast_6233(deref, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = newNodeI__ast_3949(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45), info);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__ast_6233(result, deref);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	colontmpD__2 = newSymNode__ast_4784(field);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__ast_6233(result, colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqcopy___ast_3546(&(*result).typ, (*field).typ);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_3454(&colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_3454(&colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_3454(&deref);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_4060(&field);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, safeLen__ast_3318)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!((*n).kind >= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)0) && (*n).kind <= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23))) goto LA3_;
		result = ((NI)0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = len__ast_3325(n);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, liftLocals__liftlocals_47)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NI i, tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q* c) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* it;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	it = NIM_NIL;
	eqcopy___ast_3457(&it, (*n)._kind_6.sons.p->data[i]);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	switch ((*it).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
	{
		{
			NIM_BOOL T4_;
			tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* T7_;
			T4_ = (NIM_BOOL)0;
			T4_ = interestingVar__liftlocals_17((*it)._kind_4.sym);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T4_) goto LA5_;
			T7_ = NIM_NIL;
			T7_ = lookupOrAdd__liftlocals_28(c, (*it)._kind_4.sym, (*it).info);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			eqsink___ast_3460(&(*n)._kind_6.sons.p->data[i], T7_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA5_: ;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)51) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)52):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)98):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)123):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)122):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)79) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)81):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)84):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)159):
	{
	}
	break;
	default:
	{
		{
			NI i_2;
			NI colontmp_;
			NI i_3;
			i_2 = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = safeLen__ast_3318(it);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i_3 = ((NI)0);
			{
				while (1) {
					if (!(i_3 < colontmp_)) goto LA12					;
					i_2 = i_3;
					liftLocals__liftlocals_47(it, i_2, c);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_3 += ((NI)1);
				} LA12: ;
			}
		}
	}
	break;
	}
	eqdestroy___ast_3454(&it);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, liftLocalsIfRequested__liftlocals_82)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* prc, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag* idgen) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* liftDest;
	tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* partialParam;
	tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* objType;
	tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q c;
	tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* colontmpD_;
	tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag* colontmpD__2;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* w;
	tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* blitTmp;
	tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* blitTmp_2;
	tyArray__ITlg8UhAbnS7vsiPAhcspQ T24_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	liftDest = NIM_NIL;
	partialParam = NIM_NIL;
	objType = NIM_NIL;
	nimZeroMem((void*)(&c), sizeof(tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q));
	colontmpD_ = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	w = NIM_NIL;
	liftDest = getPragmaVal__pragmas_97((*prc).ast, ((tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA)226));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		if (!(liftDest == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL))) goto LA4_;
		eqcopy___ast_3457(&result, n);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		eqdestroy___ast_3454(&w);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___liftlocals_110((&c));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3543(&objType);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&partialParam);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&liftDest);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA4_: ;
	partialParam = lookupParam__liftlocals_59((*(*prc).typ).n, liftDest);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NimStringV2 colontmpD__3;
		NimStringV2 colontmpD__4;
		tyArray__Re75IspeoxXy2oCZHwcRrA T11_;
		if (!(partialParam == 0)) goto LA8_;
		colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
		colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
		colontmpD__3 = dollar___renderer_2511(liftDest);
		if (NIM_UNLIKELY(*nimErr_)) goto LA10_;
		T11_[0] = colontmpD__3;
		T11_[1] = (*(*prc).name).s;
		colontmpD__4 = nsuFormatOpenArray(TM__N3PVvLhrju29a7N4YrE3m7Q_3, T11_, 2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA10_;
		liMessage__msgs_1172(conf, (*liftDest).info, ((tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA)17), colontmpD__4, ((tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw)0), TM__N3PVvLhrju29a7N4YrE3m7Q_4, NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto LA10_;
		eqcopy___ast_3457(&result, n);
		if (NIM_UNLIKELY(*nimErr_)) goto LA10_;
		eqdestroy___stdZassertions_13((&colontmpD__4));
		eqdestroy___stdZassertions_13((&colontmpD__3));
		eqdestroy___ast_3454(&w);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___liftlocals_110((&c));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3543(&objType);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&partialParam);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&liftDest);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
		{
			LA10_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__4));
			eqdestroy___stdZassertions_13((&colontmpD__3));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA8_: ;
	objType = skipTypes__ast_4803((*partialParam).typ, TM__N3PVvLhrju29a7N4YrE3m7Q_6);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NIM_BOOL T16_;
		NimStringV2 colontmpD__5;
		NimStringV2 T21_;
		T16_ = (NIM_BOOL)0;
		T16_ = !(((*objType).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)17)));
		if (T16_) goto LA17_;
		T16_ = !((((*objType).flags &((NU64)1<<((NU)((((tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q)16)))&63U)))!=0));
		LA17_: ;
		if (!T16_) goto LA18_;
		colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
		T21_.len = 0; T21_.p = NIM_NIL;
		T21_ = dollar___renderer_2511(liftDest);
		if (NIM_UNLIKELY(*nimErr_)) goto LA20_;
		colontmpD__5 = nsuFormatSingleElem(TM__N3PVvLhrju29a7N4YrE3m7Q_8, T21_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA20_;
		liMessage__msgs_1172(conf, (*liftDest).info, ((tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA)17), colontmpD__5, ((tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw)0), TM__N3PVvLhrju29a7N4YrE3m7Q_9, NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto LA20_;
		eqcopy___ast_3457(&result, n);
		if (NIM_UNLIKELY(*nimErr_)) goto LA20_;
		eqdestroy___stdZassertions_13((&colontmpD__5));
		eqdestroy___ast_3454(&w);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___liftlocals_110((&c));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3543(&objType);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&partialParam);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&liftDest);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
		{
			LA20_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__5));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA18_: ;
	nimZeroMem((void*)(&c), sizeof(tyObject_Ctx__jIQrVm0rKyqU9cYDcgfo9c3Q));
	blitTmp = partialParam;
	partialParam = 0;
	c.partialParam = blitTmp;
	blitTmp_2 = objType;
	objType = 0;
	c.objType = blitTmp_2;
	colontmpD_ = 0;
	eqcopy___idents_266(&colontmpD_, cache, NIM_TRUE);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	c.cache = colontmpD_;
	colontmpD__2 = 0;
	eqcopy___ast_3247(&colontmpD__2, idgen, NIM_TRUE);
	c.idgen = colontmpD__2;
	nimZeroMem((void*)T24_, sizeof(tyArray__ITlg8UhAbnS7vsiPAhcspQ));
	T24_[0] = n;
	w = newTree__ast_3975(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)115), T24_, 1);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	liftLocals__liftlocals_47(w, ((NI)0), (&c));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	eqcopy___ast_3457(&result, (*w)._kind_6.sons.p->data[((NI)0)]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&w);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___liftlocals_110((&c));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3543(&objType);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&partialParam);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&liftDest);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
