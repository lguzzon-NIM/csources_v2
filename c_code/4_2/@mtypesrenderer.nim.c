/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64

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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
typedef struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw;
typedef struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA;
typedef struct tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg {
NU16 line;
NI16 col;
NI32 fileIndex;
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
struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA {
NI id;
NimStringV2 s;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* next;
NI h;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};
typedef NU8 tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ;
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


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderPlainSymbolName__typesrenderer_9)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderDefinitionName__renderer_109)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s, NIM_BOOL noQuotes);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap, NI elemSize, NI elemAlign);
N_LIB_PRIVATE N_NIMCALL(void, renderParamTypes__typesrenderer_178)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* found, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NIM_BOOL toNormalize);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderType__typesrenderer_18)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NIM_BOOL toNormalize);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nimIdentNormalize__pureZstrutils_122)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeToString__types_51)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ, tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ prefer);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(void, X5BX5Deq___system_7090)(NimStringV2* s, NI i, NIM_CHAR x);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3546)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3543)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest);
N_LIB_PRIVATE N_NIMCALL(void, add__stdZenumutils_69)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringV2 value);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___renderer_2511)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuJoinSep)(NimStringV2* a, NI aLen_0, NimStringV2 sep);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_3539)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_224)(NimStringV2 msg);
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_3 = {0, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_2};
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_4 = {0, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_2};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_5 = { 3 | NIM_STRLIT_FLAG, "var" };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_6 = {3, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_5};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_7 = { 4 | NIM_STRLIT_FLAG, "ref." };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_8 = {4, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_7};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_9 = { 3 | NIM_STRLIT_FLAG, "ref" };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_10 = {3, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_9};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_11 = { 4 | NIM_STRLIT_FLAG, "ptr." };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_12 = {4, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_11};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_13 = { 3 | NIM_STRLIT_FLAG, "ptr" };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_14 = {3, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_13};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_15 = { 5 | NIM_STRLIT_FLAG, "proc(" };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_16 = {5, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_15};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_17 = { 4 | NIM_STRLIT_FLAG, "proc" };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_18 = {4, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_17};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_19 = { 6 | NIM_STRLIT_FLAG, "tuple[" };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_20 = {6, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_19};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_21 = { 2 | NIM_STRLIT_FLAG, ", " };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_22 = {2, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_21};
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_23 = {0, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_2};
static const struct {
  NI cap; NIM_CHAR data[53+1];
} TM__dsDVotbyEVuB5Q6kJIHAAQ_24 = { 53 | NIM_STRLIT_FLAG, "typesrenderer.nim(103, 3) `n.kind == nkFormalParams` " };
static const NimStringV2 TM__dsDVotbyEVuB5Q6kJIHAAQ_25 = {53, (NimStrPayload*)&TM__dsDVotbyEVuB5Q6kJIHAAQ_24};
extern NIM_BOOL nimInErrorMode__system_4003;
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n)._kind_6.sons.len;
	result = T1_;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4003);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderPlainSymbolName__typesrenderer_9)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)31):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)53):
	{
		NI T2_;
		T2_ = (NI)0;
		T2_ = len__ast_3325(n);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = renderPlainSymbolName__typesrenderer_9((*n)._kind_6.sons.p->data[(NI)(T2_ - ((NI)1))]);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2):
	{
		eqcopy___stdZassertions_16((&result), (*(*n)._kind_5.ident).s);
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
	{
		result = renderDefinitionName__renderer_109((*n)._kind_4.sym, NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)43):
	{
		result = renderPlainSymbolName__typesrenderer_9((*n)._kind_6.sons.p->data[((NI)0)]);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	default:
	{
		result = TM__dsDVotbyEVuB5Q6kJIHAAQ_3;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
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
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c) {
	(*(*dest).p).data[(*dest).len] = c;
	(*(*dest).p).data[(NI)((*dest).len + ((NI)1))] = 0;
	(*dest).len += ((NI)1);
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s).p).cap & ((NI)IL64(4611686018427387904))) == ((NI)IL64(4611686018427387904)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_2301(s);
	}
	LA5_: ;
}
static N_INLINE(void, X5BX5Deq___system_7090)(NimStringV2* s, NI i, NIM_CHAR x) {
	nimPrepareStrMutationV2((&(*s)));
	(*s).p->data[(NI)((*s).len - i)] = x;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderType__typesrenderer_18)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NIM_BOOL toNormalize) {
	NimStringV2 result;
NIM_BOOL oldNimErrFin53_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2):
	{
		NimStringV2 T2_;
		T2_.len = 0; T2_.p = NIM_NIL;
		{
			if (!toNormalize) goto LA5_;
			result = nimIdentNormalize__pureZstrutils_122((*(*n)._kind_5.ident).s);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA3_;
		LA5_: ;
		{
			eqcopy___stdZassertions_16((&result), (*(*n)._kind_5.ident).s);
		}
		LA3_: ;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
	{
		NimStringV2 T9_;
		T9_.len = 0; T9_.p = NIM_NIL;
		{
			NimStringV2 colontmpD_;
			if (!toNormalize) goto LA12_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			colontmpD_ = typeToString__types_51((*(*n)._kind_4.sym).typ, ((tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ)0));
			if (NIM_UNLIKELY(*nimErr_)) goto LA14_;
			result = nimIdentNormalize__pureZstrutils_122(colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA14_;
			{
				LA14_:;
			}
			{
				eqdestroy___stdZassertions_13((&colontmpD_));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA10_;
		LA12_: ;
		{
			result = typeToString__types_51((*(*n)._kind_4.sym).typ, ((tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ)0));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA10_: ;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)143):
	{
		{
			NI T21_;
			T21_ = (NI)0;
			T21_ = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(T21_ == ((NI)1))) goto LA22_;
			result = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[((NI)0)], toNormalize);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA19_;
		LA22_: ;
		{
			result = TM__dsDVotbyEVuB5Q6kJIHAAQ_6;
		}
		LA19_: ;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)141):
	{
		{
			NI T28_;
			NimStringV2 colontmpD__2;
			NimStringV2 T32_;
			T28_ = (NI)0;
			T28_ = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(T28_ == ((NI)1))) goto LA29_;
			colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
			T32_.len = 0; T32_.p = NIM_NIL;
			colontmpD__2 = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[((NI)0)], toNormalize);
			if (NIM_UNLIKELY(*nimErr_)) goto LA31_;
			T32_ = rawNewString(colontmpD__2.len + 4);
appendString((&T32_), TM__dsDVotbyEVuB5Q6kJIHAAQ_8);
appendString((&T32_), colontmpD__2);
			result = T32_;
			{
				LA31_:;
			}
			{
				eqdestroy___stdZassertions_13((&colontmpD__2));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA26_;
		LA29_: ;
		{
			result = TM__dsDVotbyEVuB5Q6kJIHAAQ_10;
		}
		LA26_: ;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)142):
	{
		{
			NI T39_;
			NimStringV2 colontmpD__3;
			NimStringV2 T43_;
			T39_ = (NI)0;
			T39_ = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(T39_ == ((NI)1))) goto LA40_;
			colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
			T43_.len = 0; T43_.p = NIM_NIL;
			colontmpD__3 = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[((NI)0)], toNormalize);
			if (NIM_UNLIKELY(*nimErr_)) goto LA42_;
			T43_ = rawNewString(colontmpD__3.len + 4);
appendString((&T43_), TM__dsDVotbyEVuB5Q6kJIHAAQ_12);
appendString((&T43_), colontmpD__3);
			result = T43_;
			{
				LA42_:;
			}
			{
				eqdestroy___stdZassertions_13((&colontmpD__3));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA37_;
		LA40_: ;
		{
			result = TM__dsDVotbyEVuB5Q6kJIHAAQ_14;
		}
		LA37_: ;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)147):
	{
		{
			NI T50_;
			tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* params;
			T50_ = (NI)0;
			T50_ = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(((NI)1) < T50_)) goto LA51_;
			params = NIM_NIL;
			eqcopy___ast_3457(&params, (*n)._kind_6.sons.p->data[((NI)0)]);
			if (NIM_UNLIKELY(*nimErr_)) goto LA53_;
			result = TM__dsDVotbyEVuB5Q6kJIHAAQ_16;
			{
				NI i;
				NI colontmp_;
				NI i_2;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = len__ast_3325(params);
				if (NIM_UNLIKELY(*nimErr_)) goto LA53_;
				i_2 = ((NI)1);
				{
					while (1) {
						NimStringV2 colontmpD__4;
						NimStringV2 colontmpD__5;
						NimStringV2 T58_;
						if (!(i_2 < colontmp_)) goto LA56						;
						colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
						colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
						i = i_2;
						T58_.len = 0; T58_.p = NIM_NIL;
						colontmpD__4 = renderType__typesrenderer_18((*params)._kind_6.sons.p->data[i], toNormalize);
						if (NIM_UNLIKELY(*nimErr_)) goto LA57_;
						T58_ = rawNewString(colontmpD__4.len + 1);
appendString((&T58_), colontmpD__4);
appendChar((&T58_), 44);
						colontmpD__5 = T58_;
						prepareAdd((&result), colontmpD__5.len + 0);
appendString((&result), colontmpD__5);
						i_2 += ((NI)1);
						{
							LA57_:;
						}
						{
							eqdestroy___stdZassertions_13((&colontmpD__5));
							eqdestroy___stdZassertions_13((&colontmpD__4));
						}
						if (NIM_UNLIKELY(*nimErr_)) goto LA53_;
					} LA56: ;
				}
			}
			X5BX5Deq___system_7090((&result), ((NI)1), 41);
			if (NIM_UNLIKELY(*nimErr_)) goto LA53_;
			{
				LA53_:;
			}
			{
				oldNimErrFin53_ = *nimErr_; *nimErr_ = NIM_FALSE;
				eqdestroy___ast_3454(&params);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				*nimErr_ = oldNimErrFin53_;
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA48_;
		LA51_: ;
		{
			result = TM__dsDVotbyEVuB5Q6kJIHAAQ_18;
		}
		LA48_: ;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)35):
	{
		NimStringV2 typeStr;
		NI typePos;
		NI T66_;
		typeStr.len = 0; typeStr.p = NIM_NIL;
		T66_ = (NI)0;
		T66_ = len__ast_3325(n);
		if (NIM_UNLIKELY(*nimErr_)) goto LA65_;
		typePos = (NI)(T66_ - ((NI)2));
		typeStr = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[typePos], toNormalize);
		if (NIM_UNLIKELY(*nimErr_)) goto LA65_;
		eqcopy___stdZassertions_16((&result), typeStr);
		{
			NI i_3;
			NI i_4;
			i_3 = (NI)0;
			i_4 = ((NI)1);
			{
				while (1) {
					NimStringV2 colontmpD__6;
					NimStringV2 T70_;
					if (!(i_4 < typePos)) goto LA69					;
					colontmpD__6.len = 0; colontmpD__6.p = NIM_NIL;
					i_3 = i_4;
					T70_.len = 0; T70_.p = NIM_NIL;
					T70_ = rawNewString(typeStr.len + 1);
appendChar((&T70_), 44);
appendString((&T70_), typeStr);
					colontmpD__6 = T70_;
					prepareAdd((&result), colontmpD__6.len + 0);
appendString((&result), colontmpD__6);
					i_4 += ((NI)1);
					eqdestroy___stdZassertions_13((&colontmpD__6));
				} LA69: ;
			}
		}
		{
			LA65_:;
		}
		{
			eqdestroy___stdZassertions_13((&typeStr));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)134):
	{
		result = TM__dsDVotbyEVuB5Q6kJIHAAQ_20;
		{
			NI i_5;
			NI colontmp__2;
			NI i_6;
			i_5 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i_6 = ((NI)0);
			{
				while (1) {
					NimStringV2 colontmpD__7;
					NimStringV2 colontmpD__8;
					NimStringV2 T78_;
					if (!(i_6 < colontmp__2)) goto LA76					;
					colontmpD__7.len = 0; colontmpD__7.p = NIM_NIL;
					colontmpD__8.len = 0; colontmpD__8.p = NIM_NIL;
					i_5 = i_6;
					T78_.len = 0; T78_.p = NIM_NIL;
					colontmpD__7 = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[i_5], toNormalize);
					if (NIM_UNLIKELY(*nimErr_)) goto LA77_;
					T78_ = rawNewString(colontmpD__7.len + 1);
appendString((&T78_), colontmpD__7);
appendChar((&T78_), 44);
					colontmpD__8 = T78_;
					prepareAdd((&result), colontmpD__8.len + 0);
appendString((&result), colontmpD__8);
					i_6 += ((NI)1);
					{
						LA77_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD__8));
						eqdestroy___stdZassertions_13((&colontmpD__7));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				} LA76: ;
			}
		}
		X5BX5Deq___system_7090((&result), ((NI)1), 93);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)42):
	{
		NimStringV2 colontmpD__9;
		NimStringV2 T83_;
		colontmpD__9.len = 0; colontmpD__9.p = NIM_NIL;
		T83_.len = 0; T83_.p = NIM_NIL;
		colontmpD__9 = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[((NI)0)], toNormalize);
		if (NIM_UNLIKELY(*nimErr_)) goto LA82_;
		T83_ = rawNewString(colontmpD__9.len + 1);
appendString((&T83_), colontmpD__9);
appendChar((&T83_), 91);
		result = T83_;
		{
			NI i_7;
			NI colontmp__3;
			NI i_8;
			i_7 = (NI)0;
			colontmp__3 = (NI)0;
			colontmp__3 = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto LA82_;
			i_8 = ((NI)1);
			{
				while (1) {
					NimStringV2 colontmpD__10;
					NimStringV2 colontmpD__11;
					NimStringV2 T88_;
					if (!(i_8 < colontmp__3)) goto LA86					;
					colontmpD__10.len = 0; colontmpD__10.p = NIM_NIL;
					colontmpD__11.len = 0; colontmpD__11.p = NIM_NIL;
					i_7 = i_8;
					T88_.len = 0; T88_.p = NIM_NIL;
					colontmpD__10 = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[i_7], toNormalize);
					if (NIM_UNLIKELY(*nimErr_)) goto LA87_;
					T88_ = rawNewString(colontmpD__10.len + 1);
appendString((&T88_), colontmpD__10);
appendChar((&T88_), 44);
					colontmpD__11 = T88_;
					prepareAdd((&result), colontmpD__11.len + 0);
appendString((&result), colontmpD__11);
					i_8 += ((NI)1);
					{
						LA87_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD__11));
						eqdestroy___stdZassertions_13((&colontmpD__10));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto LA82_;
				} LA86: ;
			}
		}
		X5BX5Deq___system_7090((&result), ((NI)1), 93);
		if (NIM_UNLIKELY(*nimErr_)) goto LA82_;
		{
			LA82_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__9));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)26):
	{
		result = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[((NI)0)], toNormalize);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		{
			NI i_9;
			NI colontmp__4;
			NI i_10;
			i_9 = (NI)0;
			colontmp__4 = (NI)0;
			colontmp__4 = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i_10 = ((NI)1);
			{
				while (1) {
					NimStringV2 colontmpD__12;
					if (!(i_10 < colontmp__4)) goto LA96					;
					colontmpD__12.len = 0; colontmpD__12.p = NIM_NIL;
					i_9 = i_10;
					{
						if (!(((NI)1) < i_9)) goto LA100_;
						prepareAdd((&result), 2);
appendString((&result), TM__dsDVotbyEVuB5Q6kJIHAAQ_22);
					}
					LA100_: ;
					colontmpD__12 = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[i_9], toNormalize);
					if (NIM_UNLIKELY(*nimErr_)) goto LA97_;
					prepareAdd((&result), colontmpD__12.len + 0);
appendString((&result), colontmpD__12);
					i_10 += ((NI)1);
					{
						LA97_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD__12));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				} LA96: ;
			}
		}
	}
	break;
	default:
	{
		result = TM__dsDVotbyEVuB5Q6kJIHAAQ_23;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, renderParamTypes__typesrenderer_178)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* found, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NIM_BOOL toNormalize) {
NIM_BOOL oldNimErrFin14_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)76):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i_2 = ((NI)1);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA4					;
					i = i_2;
					renderParamTypes__typesrenderer_178(found, (*n)._kind_6.sons.p->data[i], toNormalize);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_2 += ((NI)1);
				} LA4: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)35):
	{
		NimStringV2 typeStr;
		NI typePos;
		NI T7_;
		typeStr.len = 0; typeStr.p = NIM_NIL;
		T7_ = (NI)0;
		T7_ = len__ast_3325(n);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		typePos = (NI)(T7_ - ((NI)2));
		typeStr = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[typePos], toNormalize);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			NIM_BOOL T10_;
			tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ;
			T10_ = (NIM_BOOL)0;
			T10_ = (typeStr.len < ((NI)1));
			if (!(T10_)) goto LA11_;
			T10_ = !(((*(*n)._kind_6.sons.p->data[(NI)(typePos + ((NI)1))]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)1)));
			LA11_: ;
			if (!T10_) goto LA12_;
			typ = NIM_NIL;
			eqcopy___ast_3546(&typ, (*(*n)._kind_6.sons.p->data[(NI)(typePos + ((NI)1))]).typ);
			if (NIM_UNLIKELY(*nimErr_)) goto LA14_;
			{
				NimStringV2 T19_;
				if (!!((typ == 0))) goto LA17_;
				T19_.len = 0; T19_.p = NIM_NIL;
				T19_ = typeToString__types_51(typ, ((tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ)2));
				if (NIM_UNLIKELY(*nimErr_)) goto LA14_;
				eqsink___stdZassertions_19((&typeStr), T19_);
			}
			LA17_: ;
			{
				if (!(typeStr.len < ((NI)1))) goto LA22_;
				eqdestroy___ast_3543(&typ);
				if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
				eqdestroy___stdZassertions_13((&typeStr));
				goto BeforeRet_;
			}
			LA22_: ;
			{
				LA14_:;
			}
			{
				oldNimErrFin14_ = *nimErr_; *nimErr_ = NIM_FALSE;
				eqdestroy___ast_3543(&typ);
				if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
				*nimErr_ = oldNimErrFin14_;
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		}
		LA12_: ;
		{
			NI i_3;
			NI i_4;
			i_3 = (NI)0;
			i_4 = ((NI)0);
			{
				while (1) {
					NimStringV2 colontmpD_;
					if (!(i_4 < typePos)) goto LA28					;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					i_3 = i_4;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					eqcopy___stdZassertions_16((&colontmpD_), typeStr);
					add__stdZenumutils_69((&(*found)), colontmpD_);
					i_4 += ((NI)1);
				} LA28: ;
			}
		}
		{
			LA6_:;
		}
		{
			eqdestroy___stdZassertions_13((&typeStr));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	default:
	{
		NimStringV2 T32_;
		T32_.len = 0; T32_.p = NIM_NIL;
		T32_ = dollar___renderer_2511(n);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		add__stdZenumutils_69((&(*found)), T32_);
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderParamTypes__typesrenderer_223)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NimStringV2 sep, NIM_BOOL toNormalize) {
	NimStringV2 result;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ found;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	found.len = 0; found.p = NIM_NIL;
	result = TM__dsDVotbyEVuB5Q6kJIHAAQ_4;
	found.len = 0; found.p = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content*) newSeqPayload(0, sizeof(NimStringV2), NIM_ALIGNOF(NimStringV2));
	renderParamTypes__typesrenderer_178((&found), n, toNormalize);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NI T4_;
		NimStringV2 T7_;
		T4_ = found.len;
		if (!(((NI)0) < T4_)) goto LA5_;
		T7_.len = 0; T7_.p = NIM_NIL;
		T7_ = nsuJoinSep(((found).p) ? (found.p->data) : NIM_NIL, found.len, sep);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		eqsink___stdZassertions_19((&result), T7_);
	}
	LA5_: ;
	{
		LA1_:;
	}
	{
		eqdestroy___system_3539((&found));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ, renderParamNames__typesrenderer_127)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NIM_BOOL toNormalize) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	{
		if (!!(((*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)76)))) goto LA3_;
		failedAssertImpl__stdZassertions_224(TM__dsDVotbyEVuB5Q6kJIHAAQ_25);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)76):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i_2 = ((NI)1);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA8					;
					i = i_2;
					{
						NI typePos;
						NI T13_;
						if (!((*(*n)._kind_6.sons.p->data[i]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)35))) goto LA11_;
						T13_ = (NI)0;
						T13_ = len__ast_3325((*n)._kind_6.sons.p->data[i]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						typePos = (NI)(T13_ - ((NI)2));
						{
							NI j;
							NI i_3;
							j = (NI)0;
							i_3 = ((NI)0);
							{
								while (1) {
									NimStringV2 colontmpD_;
									NimStringV2 colontmpD__2;
									NimStringV2 T18_;
									if (!(i_3 < typePos)) goto LA16									;
									colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
									colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
									j = i_3;
									T18_.len = 0; T18_.p = NIM_NIL;
									{
										NimStringV2 colontmpD__3;
										NimStringV2 blitTmp;
										if (!toNormalize) goto LA21_;
										colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
										colontmpD__3 = dollar___renderer_2511((*(*n)._kind_6.sons.p->data[i])._kind_6.sons.p->data[j]);
										if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
										colontmpD_ = nimIdentNormalize__pureZstrutils_122(colontmpD__3);
										if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
										blitTmp = colontmpD_;
										colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
										T18_ = blitTmp;
										{
											LA23_:;
										}
										{
											eqdestroy___stdZassertions_13((&colontmpD__3));
										}
										if (NIM_UNLIKELY(*nimErr_)) goto LA17_;
									}
									goto LA19_;
									LA21_: ;
									{
										NimStringV2 blitTmp_2;
										colontmpD__2 = dollar___renderer_2511((*(*n)._kind_6.sons.p->data[i])._kind_6.sons.p->data[j]);
										if (NIM_UNLIKELY(*nimErr_)) goto LA27_;
										blitTmp_2 = colontmpD__2;
										colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
										T18_ = blitTmp_2;
										{
											LA27_:;
										}
										{
										}
										if (NIM_UNLIKELY(*nimErr_)) goto LA17_;
									}
									LA19_: ;
									add__stdZenumutils_69((&result), T18_);
									i_3 += ((NI)1);
									{
										LA17_:;
									}
									{
										eqdestroy___stdZassertions_13((&colontmpD__2));
										eqdestroy___stdZassertions_13((&colontmpD_));
									}
									if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
								} LA16: ;
							}
						}
					}
					goto LA9_;
					LA11_: ;
					{
						NimStringV2 T33_;
						T33_.len = 0; T33_.p = NIM_NIL;
						T33_ = dollar___renderer_2511((*n)._kind_6.sons.p->data[i]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						add__stdZenumutils_69((&result), T33_);
					}
					LA9_: ;
					i_2 += ((NI)1);
				} LA8: ;
			}
		}
	}
	break;
	default:
	{
		NimStringV2 T35_;
		T35_.len = 0; T35_.p = NIM_NIL;
		T35_ = dollar___renderer_2511(n);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		add__stdZenumutils_69((&result), T35_);
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderOutType__typesrenderer_236)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NIM_BOOL toNormalize) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = renderType__typesrenderer_18((*n)._kind_6.sons.p->data[((NI)0)], toNormalize);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
