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
typedef struct tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ tySequence__6H5Oh5UUvVCLiakt9aTwtUQ;
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content;
typedef struct tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
typedef struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content;
typedef struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA;
struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ {
  NI len; tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content* p;
};
typedef NU32 tyArray__FleBT9cC2nxhgiXmSYYnEKA[4];
struct tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg {
tyArray__FleBT9cC2nxhgiXmSYYnEKA udata;
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
typedef NU8 tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ;
typedef NU8 tyEnum_TCallingConvention__XL1p2EKvOAlAHpc68ecZPw;
typedef NU64 tySet_tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q;
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ {
  NI len; tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content* p;
};
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


#ifndef tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content_PP
#define tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content_PP
struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content { NI cap; NU8 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
#define tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content { NI cap; tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ, toBitSet__nimsets_104)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* s);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg, firstOrd__types_1373)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t);
N_LIB_PRIVATE N_NIMCALL(void, bitSetInit__bitsets_56)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* b, NI length);
N_LIB_PRIVATE N_NIMCALL(NI64, getSize__types_3555)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg, getOrdValue__types_162)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg onError);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, lteq___int495056_313)(tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg a, tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg b);
N_LIB_PRIVATE N_NIMCALL(void, bitSetIncl__bitsets_23)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, NI64 elem);
N_LIB_PRIVATE N_NIMCALL(NI64, toInt64__int495056_77)(tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg arg);
N_LIB_PRIVATE N_NIMCALL(tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg, minus___int495056_476)(tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg a, tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg b);
N_LIB_PRIVATE N_NIMCALL(void, inc__int495056_252)(tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg* a, NU32 y);
N_LIB_PRIVATE N_NIMCALL(NI64, bitSetCard__bitsets_202)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZtimes_2288)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetContains__bitsets_127)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetEquals__bitsets_115)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y);
N_LIB_PRIVATE N_NIMCALL(void, bitSetIntersect__bitsets_104)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, toTreeSet__nimsets_129)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ s, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* settype, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3546)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newNodeI__ast_3949)(tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetIn__bitsets_11)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x, NI64 e);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newIntTypeNode__ast_4848)(NI64 intVal, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ);
N_LIB_PRIVATE N_NIMCALL(void, add__ast_6233)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* father, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* son);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___ast_3460)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3543)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest);
N_LIB_PRIVATE N_NIMCALL(void, bitSetUnion__bitsets_71)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y);
N_LIB_PRIVATE N_NIMCALL(void, bitSetDiff__bitsets_82)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, leValue__astalgo_136)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, sameValue__astalgo_120)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b);
extern NIM_CONST tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg Max__int495056_28;
extern NIM_BOOL nimInErrorMode__system_4003;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4003);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
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
N_LIB_PRIVATE N_NIMCALL(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ, toBitSet__nimsets_104)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* s) {
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ result;
	tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg first;
	tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg j;
	NI64 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimZeroMem((void*)(&first), sizeof(tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg));
	nimZeroMem((void*)(&j), sizeof(tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg));
	first = firstOrd__types_1373(conf, (*(*s).typ).sons.p->data[((NI)0)]);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_ = (NI64)0;
	T1_ = getSize__types_3555(conf, (*s).typ);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	bitSetInit__bitsets_56((&result), ((NI) (T1_)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len__ast_3325(s);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA4				;
				i = i_2;
				{
					if (!((*(*s)._kind_6.sons.p->data[i]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)44))) goto LA7_;
					j = getOrdValue__types_162((*(*s)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)0)], first);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						while (1) {
							tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg T11_;
							NIM_BOOL T12_;
							tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg T13_;
							NI64 T14_;
							T11_ = getOrdValue__types_162((*(*s)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)1)], first);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							T12_ = (NIM_BOOL)0;
							T12_ = lteq___int495056_313(j, T11_);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							if (!T12_) goto LA10							;
							T13_ = minus___int495056_476(j, first);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							T14_ = (NI64)0;
							T14_ = toInt64__int495056_77(T13_);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							bitSetIncl__bitsets_23((&result), T14_);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							inc__int495056_252((&j), ((NU32)1));
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						} LA10: ;
					}
				}
				goto LA5_;
				LA7_: ;
				{
					tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg T16_;
					tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg T17_;
					NI64 T18_;
					T16_ = getOrdValue__types_162((*s)._kind_6.sons.p->data[i], Max__int495056_28);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					T17_ = minus___int495056_476(T16_, first);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					T18_ = (NI64)0;
					T18_ = toInt64__int495056_77(T17_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					bitSetIncl__bitsets_23((&result), T18_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				LA5_: ;
				i_2 += ((NI)1);
			} LA4: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, cardSet__nimsets_245)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a) {
	NI64 result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI64)0;
	x.len = 0; x.p = NIM_NIL;
	x = toBitSet__nimsets_104(conf, a);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = bitSetCard__bitsets_202(x);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___pureZtimes_2288((&x));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsSets__nimsets_213)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b) {
	NIM_BOOL result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	x.len = 0; x.p = NIM_NIL;
	y.len = 0; y.p = NIM_NIL;
	x = toBitSet__nimsets_104(conf, a);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	y = toBitSet__nimsets_104(conf, b);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = bitSetContains__bitsets_127(x, y);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___pureZtimes_2288((&y));
		eqdestroy___pureZtimes_2288((&x));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalSets__nimsets_220)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b) {
	NIM_BOOL result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	x.len = 0; x.p = NIM_NIL;
	y.len = 0; y.p = NIM_NIL;
	x = toBitSet__nimsets_104(conf, a);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	y = toBitSet__nimsets_104(conf, b);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = bitSetEquals__bitsets_115(x, y);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___pureZtimes_2288((&y));
		eqdestroy___pureZtimes_2288((&x));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, toTreeSet__nimsets_129)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ s, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* settype, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* elemType;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	tyObject_Int128__o11U6O9aAgrfFG9bStrwmHkg T2_;
NIM_BOOL oldNimErrFin11_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	elemType = NIM_NIL;
	n = NIM_NIL;
	a = (NI64)0;
	b = (NI64)0;
	e = (NI64)0;
	first = (NI64)0;
	eqcopy___ast_3546(&elemType, (*settype).sons.p->data[((NI)0)]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_ = firstOrd__types_1373(conf, elemType);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	first = toInt64__int495056_77(T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = newNodeI__ast_3949(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)39), info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	eqcopy___ast_3546(&(*result).typ, settype);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	(*result).info = info;
	e = IL64(0);
	{
		while (1) {
			NI T5_;
			T5_ = s.len;
			if (!(e < ((NI64) ((NI)(T5_ * ((NI)8)))))) goto LA4			;
			{
				NIM_BOOL T8_;
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* aa;
				T8_ = (NIM_BOOL)0;
				T8_ = bitSetIn__bitsets_11(s, e);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				if (!T8_) goto LA9_;
				aa = NIM_NIL;
				a = e;
				b = e;
				{
					while (1) {
						b += ((NI)1);
						{
							NIM_BOOL T16_;
							NI T17_;
							NIM_BOOL T19_;
							T16_ = (NIM_BOOL)0;
							T17_ = s.len;
							T16_ = (((NI64) ((NI)(T17_ * ((NI)8)))) <= b);
							if (T16_) goto LA18_;
							T19_ = (NIM_BOOL)0;
							T19_ = bitSetIn__bitsets_11(s, b);
							if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
							T16_ = !(T19_);
							LA18_: ;
							if (!T16_) goto LA20_;
							goto LA12;
						}
						LA20_: ;
					}
				} LA12: ;
				b -= ((NI)1);
				aa = newIntTypeNode__ast_4848((NI64)(a + first), elemType);
				if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
				(*aa).info = info;
				{
					if (!(a == b)) goto LA24_;
					add__ast_6233(result, aa);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
				}
				goto LA22_;
				LA24_: ;
				{
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* bb;
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* T27_;
					bb = NIM_NIL;
					T27_ = NIM_NIL;
					T27_ = newNodeI__ast_3949(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)44), info);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					eqsink___ast_3460(&n, T27_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					eqcopy___ast_3546(&(*n).typ, elemType);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					add__ast_6233(n, aa);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					bb = newIntTypeNode__ast_4848((NI64)(b + first), elemType);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					(*bb).info = info;
					add__ast_6233(n, bb);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					add__ast_6233(result, n);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					eqdestroy___ast_3454(&bb);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
				}
				LA22_: ;
				e = b;
				{
					LA11_:;
				}
				{
					oldNimErrFin11_ = *nimErr_; *nimErr_ = NIM_FALSE;
					eqdestroy___ast_3454(&aa);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					*nimErr_ = oldNimErrFin11_;
				}
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			LA9_: ;
			e += ((NI)1);
		} LA4: ;
	}
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&n);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3543(&elemType);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, intersectSets__nimsets_199)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	x.len = 0; x.p = NIM_NIL;
	y.len = 0; y.p = NIM_NIL;
	x = toBitSet__nimsets_104(conf, a);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	y = toBitSet__nimsets_104(conf, b);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	bitSetIntersect__bitsets_104((&x), y);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = toTreeSet__nimsets_129(conf, x, (*a).typ, (*a).info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___pureZtimes_2288((&y));
		eqdestroy___pureZtimes_2288((&x));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, unionSets__nimsets_185)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	x.len = 0; x.p = NIM_NIL;
	y.len = 0; y.p = NIM_NIL;
	x = toBitSet__nimsets_104(conf, a);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	y = toBitSet__nimsets_104(conf, b);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	bitSetUnion__bitsets_71((&x), y);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = toTreeSet__nimsets_129(conf, x, (*a).typ, (*a).info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___pureZtimes_2288((&y));
		eqdestroy___pureZtimes_2288((&x));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, diffSets__nimsets_192)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	x.len = 0; x.p = NIM_NIL;
	y.len = 0; y.p = NIM_NIL;
	x = toBitSet__nimsets_104(conf, a);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	y = toBitSet__nimsets_104(conf, b);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	bitSetDiff__bitsets_82((&x), y);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = toTreeSet__nimsets_129(conf, x, (*a).typ, (*a).info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___pureZtimes_2288((&y));
		eqdestroy___pureZtimes_2288((&x));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, inSet__nimsets_8)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* s, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* elem) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		if (!!(((*s).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)39)))) goto LA3_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len__ast_3325(s);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA7				;
				i = i_2;
				{
					if (!((*(*s)._kind_6.sons.p->data[i]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)44))) goto LA10_;
					{
						NIM_BOOL T14_;
						T14_ = (NIM_BOOL)0;
						T14_ = leValue__astalgo_136((*(*s)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)0)], elem);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						if (!(T14_)) goto LA15_;
						T14_ = leValue__astalgo_136(elem, (*(*s)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						LA15_: ;
						if (!T14_) goto LA16_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA16_: ;
				}
				goto LA8_;
				LA10_: ;
				{
					{
						NIM_BOOL T21_;
						T21_ = (NIM_BOOL)0;
						T21_ = sameValue__astalgo_120((*s)._kind_6.sons.p->data[i], elem);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						if (!T21_) goto LA22_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA22_: ;
				}
				LA8_: ;
				i_2 += ((NI)1);
			} LA7: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, overlap__nimsets_41)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		if (!((*a).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)44))) goto LA3_;
		{
			NIM_BOOL T9_;
			if (!((*b).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)44))) goto LA7_;
			T9_ = (NIM_BOOL)0;
			T9_ = leValue__astalgo_136((*a)._kind_6.sons.p->data[((NI)0)], (*b)._kind_6.sons.p->data[((NI)1)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(T9_)) goto LA10_;
			T9_ = leValue__astalgo_136((*b)._kind_6.sons.p->data[((NI)0)], (*a)._kind_6.sons.p->data[((NI)1)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			LA10_: ;
			result = T9_;
		}
		goto LA5_;
		LA7_: ;
		{
			NIM_BOOL T12_;
			T12_ = (NIM_BOOL)0;
			T12_ = leValue__astalgo_136((*a)._kind_6.sons.p->data[((NI)0)], b);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(T12_)) goto LA13_;
			T12_ = leValue__astalgo_136(b, (*a)._kind_6.sons.p->data[((NI)1)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			LA13_: ;
			result = T12_;
		}
		LA5_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		{
			NIM_BOOL T19_;
			if (!((*b).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)44))) goto LA17_;
			T19_ = (NIM_BOOL)0;
			T19_ = leValue__astalgo_136((*b)._kind_6.sons.p->data[((NI)0)], a);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(T19_)) goto LA20_;
			T19_ = leValue__astalgo_136(a, (*b)._kind_6.sons.p->data[((NI)1)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			LA20_: ;
			result = T19_;
		}
		goto LA15_;
		LA17_: ;
		{
			result = sameValue__astalgo_120(a, b);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA15_: ;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, emptyRange__nimsets_277)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b) {
	NIM_BOOL result;
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = leValue__astalgo_136(a, b);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = !(T1_);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, deduplicate__nimsets_240)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	x.len = 0; x.p = NIM_NIL;
	x = toBitSet__nimsets_104(conf, a);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = toTreeSet__nimsets_129(conf, x, (*a).typ, (*a).info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___pureZtimes_2288((&x));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
