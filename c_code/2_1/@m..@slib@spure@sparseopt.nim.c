/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 32

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
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
typedef struct RootObj RootObj;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
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
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};
struct RootObj {
TNimTypeV2* m_type;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
typedef NU8 tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg {
  RootObj Sup;
NI pos;
NIM_BOOL inShortState;
NIM_BOOL allowWhitespaceAfterColon;
tySet_tyChar__nmiMWKVIe46vacnhAFrQvw shortNoVal;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ longNoVal;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ cmds;
NI idx;
tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA kind;
NimStringV2 key;
NimStringV2 val;
};
typedef NU8 tyArray__S8ib5N31oJbAkqOZTlNg5Q[8192];
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};


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

      N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZparseopt_74)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_3516)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, initOptParser__pureZparseopt_55)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ cmdline, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw shortNoVal, tySequence__sM4lkSb7zS6F7OVMvW9cffQ longNoVal, NIM_BOOL allowWhitespaceAfterColon, tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* Result);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___system_3519)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest, tySequence__sM4lkSb7zS6F7OVMvW9cffQ src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___system_3522)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest, tySequence__sM4lkSb7zS6F7OVMvW9cffQ src);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ, newSeq__stdZsyncio_509)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NI, paramCount__stdZcmdline_59)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, paramStr__stdZcmdline_53)(NI i);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ, nosparseCmdLine)(NimStringV2 c);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, handleShortOption__pureZparseopt_150)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* p, NimStringV2 cmd);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(NI, cardSet)(tyArray__S8ib5N31oJbAkqOZTlNg5Q s, NI len);
static N_INLINE(NI, countBits64)(NU64 n);
static N_INLINE(NI, countSetBitsImpl__systemZcountbits95impl_61)(NU64 x);
N_CDECL(int, __builtin_popcountll)(unsigned long long x);
static N_INLINE(NI, countBits32)(NU32 n);
static N_INLINE(NI, countSetBitsImpl__systemZcountbits95impl_26)(NU32 x);
N_CDECL(int, __builtin_popcount)(unsigned int x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7536)(NimStringV2 s, NI first);
N_LIB_PRIVATE N_NIMCALL(NI, parseWord__pureZparseopt_25)(NimStringV2 s, NI i, NimStringV2* w, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw delim);
static N_INLINE(NIM_BOOL, contains__stdZenumutils_49)(NimStringV2* a, NI aLen_0, NimStringV2 item);
static N_INLINE(NI, find__stdZenumutils_54)(NimStringV2* a, NI aLen_0, NimStringV2 item);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a, NimStringV2 b);
static N_INLINE(NIM_BOOL, equalMem__system_1727)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, quoteShellCommand__pureZos_84)(NimStringV2* args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ, X5BX5D___pureZparseopt_315)(NimStringV2* s, NI sLen_0, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___stdZenumutils_128)(NI a, NI b);
N_LIB_PRIVATE TNimTypeV2 NTIv2__l9cyoK9aLLTUH7LBRIbLqETg_;
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__GYgvYKeHVTEls0AcywABHQ_3 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__GYgvYKeHVTEls0AcywABHQ_4 = {0, (NimStrPayload*)&TM__GYgvYKeHVTEls0AcywABHQ_3};
static const NimStringV2 TM__GYgvYKeHVTEls0AcywABHQ_5 = {0, (NimStrPayload*)&TM__GYgvYKeHVTEls0AcywABHQ_3};
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__GYgvYKeHVTEls0AcywABHQ_6 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static const NimStringV2 TM__GYgvYKeHVTEls0AcywABHQ_7 = {0, (NimStrPayload*)&TM__GYgvYKeHVTEls0AcywABHQ_3};
static NIM_CONST NU32 TM__GYgvYKeHVTEls0AcywABHQ_2[2] = {3701606400, 4238879488};
N_LIB_PRIVATE TNimTypeV2 NTIv2__l9cyoK9aLLTUH7LBRIbLqETg_ = {.destructor = (void*)eqdestroy___pureZparseopt_74, .size = sizeof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg), .align = (NI16) NIM_ALIGNOF(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg), .depth = 1, .display = TM__GYgvYKeHVTEls0AcywABHQ_2, .traceImpl = (void*)NIM_NIL, .flags = 0};
extern NIM_BOOL nimInErrorMode__system_3980;
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZparseopt_74)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* dest) {
	eqdestroy___system_3516((&(*dest).longNoVal));
	eqdestroy___system_3516((&(*dest).cmds));
	eqdestroy___stdZassertions_13((&(*dest).key));
	eqdestroy___stdZassertions_13((&(*dest).val));
}
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
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
N_LIB_PRIVATE N_NIMCALL(void, initOptParser__pureZparseopt_55)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ cmdline, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw shortNoVal, tySequence__sM4lkSb7zS6F7OVMvW9cffQ longNoVal, NIM_BOOL allowWhitespaceAfterColon, tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* Result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Result, sizeof(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg));
	(*Result).Sup.m_type = (&NTIv2__l9cyoK9aLLTUH7LBRIbLqETg_);
	(*Result).pos = ((NI)0);
	(*Result).idx = ((NI)0);
	(*Result).inShortState = NIM_FALSE;
	nimCopyMem((void*)(*Result).shortNoVal, (NIM_CONST void*)shortNoVal, 32);
	eqcopy___system_3519((&(*Result).longNoVal), longNoVal);
	(*Result).allowWhitespaceAfterColon = allowWhitespaceAfterColon;
	{
		NI T3_;
		NI T6_;
		tySequence__sM4lkSb7zS6F7OVMvW9cffQ T7_;
		T3_ = cmdline.len;
		if (!!((T3_ == ((NI)0)))) goto LA4_;
		T6_ = cmdline.len;
		T7_.len = 0; T7_.p = NIM_NIL;
		T7_ = newSeq__stdZsyncio_509(((NI) (T6_)));
		eqsink___system_3522((&(*Result).cmds), T7_);
		{
			NI i;
			NI colontmp_;
			NI T9_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			T9_ = cmdline.len;
			colontmp_ = T9_;
			i_2 = ((NI)0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA11					;
					i = i_2;
					eqcopy___stdZassertions_16((&(*Result).cmds.p->data[i]), cmdline.p->data[i]);
					i_2 += ((NI)1);
				} LA11: ;
			}
		}
	}
	goto LA1_;
	LA4_: ;
	{
		NI T13_;
		tySequence__sM4lkSb7zS6F7OVMvW9cffQ T14_;
		T13_ = (NI)0;
		T13_ = paramCount__stdZcmdline_59();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T14_.len = 0; T14_.p = NIM_NIL;
		T14_ = newSeq__stdZsyncio_509(((NI) (T13_)));
		eqsink___system_3522((&(*Result).cmds), T14_);
		{
			NI i_3;
			NI colontmp__2;
			NI res;
			i_3 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = paramCount__stdZcmdline_59();
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			res = ((NI)1);
			{
				while (1) {
					NimStringV2 T18_;
					if (!(res <= colontmp__2)) goto LA17					;
					i_3 = res;
					T18_.len = 0; T18_.p = NIM_NIL;
					T18_ = paramStr__stdZcmdline_53(i_3);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					eqsink___stdZassertions_19((&(*Result).cmds.p->data[(NI)(i_3 - ((NI)1))]), T18_);
					res += ((NI)1);
				} LA17: ;
			}
		}
	}
	LA1_: ;
	(*Result).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA)0);
	eqsink___stdZassertions_19((&(*Result).key), TM__GYgvYKeHVTEls0AcywABHQ_4);
	eqsink___stdZassertions_19((&(*Result).val), TM__GYgvYKeHVTEls0AcywABHQ_5);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, initOptParser__pureZparseopt_64)(NimStringV2 cmdline, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw shortNoVal, tySequence__sM4lkSb7zS6F7OVMvW9cffQ longNoVal, NIM_BOOL allowWhitespaceAfterColon, tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* Result) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ colontmpD_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD_ = nosparseCmdLine(cmdline);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	initOptParser__pureZparseopt_55(colontmpD_, shortNoVal, longNoVal, allowWhitespaceAfterColon, Result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___system_3516((&colontmpD_));
	}BeforeRet_: ;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
}
static N_INLINE(NI, countSetBitsImpl__systemZcountbits95impl_61)(NU64 x) {
	NI result;
	NU64 x_2;
	int T1_;
	result = (NI)0;
	x_2 = x;
	T1_ = (int)0;
	T1_ = __builtin_popcountll(x_2);
	result = ((NI) (T1_));
	return result;
}
static N_INLINE(NI, countBits64)(NU64 n) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = countSetBitsImpl__systemZcountbits95impl_61(n);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, countSetBitsImpl__systemZcountbits95impl_26)(NU32 x) {
	NI result;
	NU32 x_2;
	int T1_;
	result = (NI)0;
	x_2 = x;
	T1_ = (int)0;
	T1_ = __builtin_popcount(x_2);
	result = ((NI) (T1_));
	return result;
}
static N_INLINE(NI, countBits32)(NU32 n) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = countSetBitsImpl__systemZcountbits95impl_26(n);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, cardSet)(tyArray__S8ib5N31oJbAkqOZTlNg5Q s, NI len) {
	NI result;
	NI i;
	result = (NI)0;
	i = ((NI)0);
	result = ((NI)0);
	{
		while (1) {
			NI T3_;
			if (!(i < (NI)(len - ((NI)8)))) goto LA2			;
			T3_ = (NI)0;
			T3_ = countBits64((*((NU64*) ((&s[(i)- 0])))));
			result += T3_;
			i += ((NI)8);
		} LA2: ;
	}
	{
		while (1) {
			NI T6_;
			if (!(i < len)) goto LA5			;
			T6_ = (NI)0;
			T6_ = countBits32(((NU32) (s[(i)- 0])));
			result += T6_;
			i += ((NI)1);
		} LA5: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, handleShortOption__pureZparseopt_150)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* p, NimStringV2 cmd) {
	NI i;
	i = (*p).pos;
	(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA)3);
	{
		if (!(i < cmd.len)) goto LA3_;
		nimAddCharV1((&(*p).key), cmd.p->data[i]);
		i += ((NI)1);
	}
	LA3_: ;
	(*p).inShortState = NIM_TRUE;
	{
		while (1) {
			NIM_BOOL T7_;
			T7_ = (NIM_BOOL)0;
			T7_ = (i < cmd.len);
			if (!(T7_)) goto LA8_;
			T7_ = (((NU8)(cmd.p->data[i])) == ((NU8)(9)) || ((NU8)(cmd.p->data[i])) == ((NU8)(32)));
			LA8_: ;
			if (!T7_) goto LA6			;
			i += ((NI)1);
			(*p).inShortState = NIM_FALSE;
		} LA6: ;
	}
	{
		NIM_BOOL T11_;
		NIM_BOOL T13_;
		NIM_BOOL T15_;
		NimStringV2 T29_;
		T11_ = (NIM_BOOL)0;
		T11_ = (i < cmd.len);
		if (!(T11_)) goto LA12_;
		T13_ = (NIM_BOOL)0;
		T13_ = (((NU8)(cmd.p->data[i])) == ((NU8)(58)) || ((NU8)(cmd.p->data[i])) == ((NU8)(61)));
		if (T13_) goto LA14_;
		T15_ = (NIM_BOOL)0;
		T15_ = (((NI)0) < cardSet((*p).shortNoVal, 32));
		if (!(T15_)) goto LA16_;
		T15_ = !((((*p).shortNoVal[(NU)((((NU8)((*p).key.p->data[((NI)0)]))))>>3] &(1U<<((NU)((((NU8)((*p).key.p->data[((NI)0)]))))&7U)))!=0));
		LA16_: ;
		T13_ = T15_;
		LA14_: ;
		T11_ = T13_;
		LA12_: ;
		if (!T11_) goto LA17_;
		{
			NIM_BOOL T21_;
			T21_ = (NIM_BOOL)0;
			T21_ = (i < cmd.len);
			if (!(T21_)) goto LA22_;
			T21_ = (((NU8)(cmd.p->data[i])) == ((NU8)(58)) || ((NU8)(cmd.p->data[i])) == ((NU8)(61)));
			LA22_: ;
			if (!T21_) goto LA23_;
			i += ((NI)1);
		}
		LA23_: ;
		(*p).inShortState = NIM_FALSE;
		{
			while (1) {
				NIM_BOOL T27_;
				T27_ = (NIM_BOOL)0;
				T27_ = (i < cmd.len);
				if (!(T27_)) goto LA28_;
				T27_ = (((NU8)(cmd.p->data[i])) == ((NU8)(9)) || ((NU8)(cmd.p->data[i])) == ((NU8)(32)));
				LA28_: ;
				if (!T27_) goto LA26				;
				i += ((NI)1);
			} LA26: ;
		}
		T29_.len = 0; T29_.p = NIM_NIL;
		T29_ = substr__system_7536(cmd, i);
		eqsink___stdZassertions_19((&(*p).val), T29_);
		(*p).pos = ((NI)0);
		(*p).idx += ((NI)1);
	}
	goto LA9_;
	LA17_: ;
	{
		(*p).pos = i;
	}
	LA9_: ;
	{
		if (!(cmd.len <= i)) goto LA33_;
		(*p).inShortState = NIM_FALSE;
		(*p).pos = ((NI)0);
		(*p).idx += ((NI)1);
	}
	LA33_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseWord__pureZparseopt_25)(NimStringV2 s, NI i, NimStringV2* w, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw delim) {
	NI result;
	result = (NI)0;
	result = i;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (result < s.len);
		if (!(T3_)) goto LA4_;
		T3_ = ((NU8)(s.p->data[result]) == (NU8)(34));
		LA4_: ;
		if (!T3_) goto LA5_;
		result += ((NI)1);
		{
			while (1) {
				if (!(result < s.len)) goto LA8				;
				{
					if (!((NU8)(s.p->data[result]) == (NU8)(34))) goto LA11_;
					result += ((NI)1);
					goto LA7;
				}
				LA11_: ;
				nimAddCharV1((&(*w)), s.p->data[result]);
				result += ((NI)1);
			} LA8: ;
		} LA7: ;
	}
	goto LA1_;
	LA5_: ;
	{
		{
			while (1) {
				NIM_BOOL T16_;
				T16_ = (NIM_BOOL)0;
				T16_ = (result < s.len);
				if (!(T16_)) goto LA17_;
				T16_ = !(((delim[(NU)((((NU8)(s.p->data[result]))))>>3] &(1U<<((NU)((((NU8)(s.p->data[result]))))&7U)))!=0));
				LA17_: ;
				if (!T16_) goto LA15				;
				nimAddCharV1((&(*w)), s.p->data[result]);
				result += ((NI)1);
			} LA15: ;
		}
	}
	LA1_: ;
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
static N_INLINE(NI, find__stdZenumutils_54)(NimStringV2* a, NI aLen_0, NimStringV2 item) {
	NI result;
{	result = (NI)0;
	result = ((NI)0);
	{
		NimStringV2* i;
		NI i_2;
		i = (NimStringV2*)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3				;
				i = (&a[i_2]);
				{
					if (!eqStrings((*i), item)) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				result += ((NI)1);
				i_2 += ((NI)1);
			} LA3: ;
		}
	}
	result = ((NI)-1);
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, contains__stdZenumutils_49)(NimStringV2* a, NI aLen_0, NimStringV2 item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find__stdZenumutils_54(a, aLen_0, item);
	result = (((NI)0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nponext)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* p) {
	NI i;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI T3_;
		T3_ = (*p).cmds.len;
		if (!(T3_ <= (*p).idx)) goto LA4_;
		(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA)0);
		goto BeforeRet_;
	}
	LA4_: ;
	i = (*p).pos;
	{
		while (1) {
			NIM_BOOL T8_;
			T8_ = (NIM_BOOL)0;
			T8_ = (i < (*p).cmds.p->data[(*p).idx].len);
			if (!(T8_)) goto LA9_;
			T8_ = (((NU8)((*p).cmds.p->data[(*p).idx].p->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmds.p->data[(*p).idx].p->data[i])) == ((NU8)(32)));
			LA9_: ;
			if (!T8_) goto LA7			;
			i += ((NI)1);
		} LA7: ;
	}
	(*p).pos = i;
	setLengthStrV2((&(*p).key), ((NI)0));
	setLengthStrV2((&(*p).val), ((NI)0));
	{
		if (!(*p).inShortState) goto LA12_;
		(*p).inShortState = NIM_FALSE;
		{
			if (!((*p).cmds.p->data[(*p).idx].len <= i)) goto LA16_;
			(*p).idx += ((NI)1);
			(*p).pos = ((NI)0);
			{
				NI T20_;
				T20_ = (*p).cmds.len;
				if (!(T20_ <= (*p).idx)) goto LA21_;
				(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA)0);
				goto BeforeRet_;
			}
			LA21_: ;
		}
		goto LA14_;
		LA16_: ;
		{
			handleShortOption__pureZparseopt_150(p, (*p).cmds.p->data[(*p).idx]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			goto BeforeRet_;
		}
		LA14_: ;
	}
	LA12_: ;
	{
		NIM_BOOL T26_;
		T26_ = (NIM_BOOL)0;
		T26_ = (i < (*p).cmds.p->data[(*p).idx].len);
		if (!(T26_)) goto LA27_;
		T26_ = ((NU8)((*p).cmds.p->data[(*p).idx].p->data[i]) == (NU8)(45));
		LA27_: ;
		if (!T26_) goto LA28_;
		i += ((NI)1);
		{
			NIM_BOOL T32_;
			NimStringV2 T36_;
			T32_ = (NIM_BOOL)0;
			T32_ = (i < (*p).cmds.p->data[(*p).idx].len);
			if (!(T32_)) goto LA33_;
			T32_ = ((NU8)((*p).cmds.p->data[(*p).idx].p->data[i]) == (NU8)(45));
			LA33_: ;
			if (!T32_) goto LA34_;
			(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA)2);
			i += ((NI)1);
			T36_.len = 0; T36_.p = NIM_NIL;
			T36_ = (*p).cmds.p->data[(*p).idx];
			i = parseWord__pureZparseopt_25(T36_, i, (&(*p).key), TM__GYgvYKeHVTEls0AcywABHQ_6);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				while (1) {
					NIM_BOOL T39_;
					T39_ = (NIM_BOOL)0;
					T39_ = (i < (*p).cmds.p->data[(*p).idx].len);
					if (!(T39_)) goto LA40_;
					T39_ = (((NU8)((*p).cmds.p->data[(*p).idx].p->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmds.p->data[(*p).idx].p->data[i])) == ((NU8)(32)));
					LA40_: ;
					if (!T39_) goto LA38					;
					i += ((NI)1);
				} LA38: ;
			}
			{
				NIM_BOOL T43_;
				T43_ = (NIM_BOOL)0;
				T43_ = (i < (*p).cmds.p->data[(*p).idx].len);
				if (!(T43_)) goto LA44_;
				T43_ = (((NU8)((*p).cmds.p->data[(*p).idx].p->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmds.p->data[(*p).idx].p->data[i])) == ((NU8)(61)));
				LA44_: ;
				if (!T43_) goto LA45_;
				i += ((NI)1);
				{
					while (1) {
						NIM_BOOL T49_;
						T49_ = (NIM_BOOL)0;
						T49_ = (i < (*p).cmds.p->data[(*p).idx].len);
						if (!(T49_)) goto LA50_;
						T49_ = (((NU8)((*p).cmds.p->data[(*p).idx].p->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmds.p->data[(*p).idx].p->data[i])) == ((NU8)(32)));
						LA50_: ;
						if (!T49_) goto LA48						;
						i += ((NI)1);
					} LA48: ;
				}
				{
					NIM_BOOL T53_;
					NIM_BOOL T54_;
					NI T56_;
					T53_ = (NIM_BOOL)0;
					T54_ = (NIM_BOOL)0;
					T54_ = ((*p).cmds.p->data[(*p).idx].len <= i);
					if (!(T54_)) goto LA55_;
					T56_ = (*p).cmds.len;
					T54_ = ((*p).idx < T56_);
					LA55_: ;
					T53_ = T54_;
					if (!(T53_)) goto LA57_;
					T53_ = (*p).allowWhitespaceAfterColon;
					LA57_: ;
					if (!T53_) goto LA58_;
					(*p).idx += ((NI)1);
					i = ((NI)0);
				}
				LA58_: ;
				{
					NI T62_;
					NimStringV2 T65_;
					T62_ = (*p).cmds.len;
					if (!((*p).idx < T62_)) goto LA63_;
					T65_.len = 0; T65_.p = NIM_NIL;
					T65_ = substr__system_7536((*p).cmds.p->data[(*p).idx], i);
					eqsink___stdZassertions_19((&(*p).val), T65_);
				}
				LA63_: ;
			}
			goto LA41_;
			LA45_: ;
			{
				NIM_BOOL T67_;
				NIM_BOOL T68_;
				NI T69_;
				NIM_BOOL T71_;
				NI T73_;
				T67_ = (NIM_BOOL)0;
				T68_ = (NIM_BOOL)0;
				T69_ = (*p).longNoVal.len;
				T68_ = (((NI)0) < T69_);
				if (!(T68_)) goto LA70_;
				T71_ = (NIM_BOOL)0;
				T71_ = contains__stdZenumutils_49((((*p).longNoVal).p) ? ((*p).longNoVal.p->data) : NIM_NIL, (*p).longNoVal.len, (*p).key);
				T68_ = !(T71_);
				LA70_: ;
				T67_ = T68_;
				if (!(T67_)) goto LA72_;
				T73_ = (*p).cmds.len;
				T67_ = ((NI)((*p).idx + ((NI)1)) < T73_);
				LA72_: ;
				if (!T67_) goto LA74_;
				eqcopy___stdZassertions_16((&(*p).val), (*p).cmds.p->data[(NI)((*p).idx + ((NI)1))]);
				(*p).idx += ((NI)1);
			}
			goto LA41_;
			LA74_: ;
			{
				eqsink___stdZassertions_19((&(*p).val), TM__GYgvYKeHVTEls0AcywABHQ_7);
			}
			LA41_: ;
			(*p).idx += ((NI)1);
			(*p).pos = ((NI)0);
		}
		goto LA30_;
		LA34_: ;
		{
			(*p).pos = i;
			handleShortOption__pureZparseopt_150(p, (*p).cmds.p->data[(*p).idx]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA30_: ;
	}
	goto LA24_;
	LA28_: ;
	{
		(*p).kind = ((tyEnum_CmdLineKind__XkdXq9atxjiuhkFFh0XYrSA)1);
		eqcopy___stdZassertions_16((&(*p).key), (*p).cmds.p->data[(*p).idx]);
		(*p).idx += ((NI)1);
		(*p).pos = ((NI)0);
	}
	LA24_: ;
	}BeforeRet_: ;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___stdZenumutils_128)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, npocmdLineRest)(tyObject_OptParser__l9cyoK9aLLTUH7LBRIbLqETg* p) {
	NimStringV2 result;
	NI colontmpD_;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ colontmpD__2;
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_ = (NI)0;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	colontmpD_ = (*p).idx;
	T1_ = dotdot___stdZenumutils_128(colontmpD_, ((NI)1));
	colontmpD__2 = X5BX5D___pureZparseopt_315((((*p).cmds).p) ? ((*p).cmds.p->data) : NIM_NIL, (*p).cmds.len, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = quoteShellCommand__pureZos_84(((colontmpD__2).p) ? (colontmpD__2.p->data) : NIM_NIL, colontmpD__2.len);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___system_3516((&colontmpD__2));
	}BeforeRet_: ;
	return result;
}
