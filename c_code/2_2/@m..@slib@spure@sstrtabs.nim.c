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
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__xv3aaFd3JCw8NbmALHiezQ tySequence__xv3aaFd3JCw8NbmALHiezQ;
typedef struct tySequence__xv3aaFd3JCw8NbmALHiezQ_Content tySequence__xv3aaFd3JCw8NbmALHiezQ_Content;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA tyTuple__sPaDkVPSC0MkcoXCxPH9ccA;
typedef struct tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA;
typedef struct tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
typedef NU8 tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ;
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
struct tySequence__xv3aaFd3JCw8NbmALHiezQ {
  NI len; tySequence__xv3aaFd3JCw8NbmALHiezQ_Content* p;
};
struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg {
  RootObj Sup;
NI counter;
tySequence__xv3aaFd3JCw8NbmALHiezQ data;
tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA {
NimStringV2 Field0;
NimStringV2 Field1;
NIM_BOOL Field2;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA {
  tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw Sup;
};
typedef NU8 tySet_tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg;
typedef NU8 tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg;
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};


#ifndef tySequence__xv3aaFd3JCw8NbmALHiezQ_Content_PP
#define tySequence__xv3aaFd3JCw8NbmALHiezQ_Content_PP
struct tySequence__xv3aaFd3JCw8NbmALHiezQ_Content { NI cap; tyTuple__sPaDkVPSC0MkcoXCxPH9ccA data[SEQ_DECL_SIZE];};
#endif

      struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void*, nimNewObjUninit)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstrtabs_426)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstrtabs_82)(tySequence__xv3aaFd3JCw8NbmALHiezQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p, NI align);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZstrtabs_435)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZstrtabs_91)(tySequence__xv3aaFd3JCw8NbmALHiezQ* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(tySequence__xv3aaFd3JCw8NbmALHiezQ, newSeq__pureZstrtabs_418)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, rawGet__pureZstrtabs_261)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key);
N_LIB_PRIVATE N_NIMCALL(NI, myhash__pureZstrtabs_241)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key);
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_284)(NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase__pureZhashes_362)(NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle__pureZhashes_295)(NimStringV2 x);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, myCmp__pureZstrtabs_245)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 a, NimStringV2 b);
N_LIB_PRIVATE N_NIMCALL(NI, cmp__system_1543)(NimStringV2 x, NimStringV2 y);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringV2 a, NimStringV2 b);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringV2 a, NimStringV2 b);
static N_INLINE(NI, nextTry__pureZstrtabs_257)(NI h, NI maxHash);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash__pureZstrtabs_250)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(void, enlarge__pureZstrtabs_361)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t);
N_LIB_PRIVATE N_NIMCALL(void, newSeq__pureZstrtabs_367)(tySequence__xv3aaFd3JCw8NbmALHiezQ* s, NI len);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert__pureZstrtabs_349)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySequence__xv3aaFd3JCw8NbmALHiezQ* data, NimStringV2 key, NimStringV2 val);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___pureZstrtabs_141)(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA* dest, tyTuple__sPaDkVPSC0MkcoXCxPH9ccA* src);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getValue__pureZstrtabs_495)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySet_tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg flags, NimStringV2 key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsthasKey)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getOrDefault__pureZstrtabs_335)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key, NimStringV2 default_0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getEnv__stdZenvvars_15)(NimStringV2 key, NimStringV2 default_0);
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, raiseFormatException__pureZstrtabs_492)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7536)(NimStringV2 s, NI first, NI last);
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3143)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE TNimTypeV2 NTIv2__V5PVrt9bIxZEeV7lfvqqtNg_;
extern TNimTypeV2 NTIv2__3UUWz3XMhDptStqtPF49cMA_;
static const struct {
  NI cap; NIM_CHAR data[15+1];
} TM__ZT9crccxweoChVXn9cHcxIXQ_3 = { 15 | NIM_STRLIT_FLAG, "key not found: " };
static const NimStringV2 TM__ZT9crccxweoChVXn9cHcxIXQ_4 = {15, (NimStrPayload*)&TM__ZT9crccxweoChVXn9cHcxIXQ_3};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__ZT9crccxweoChVXn9cHcxIXQ_5 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__ZT9crccxweoChVXn9cHcxIXQ_6 = {0, (NimStrPayload*)&TM__ZT9crccxweoChVXn9cHcxIXQ_5};
static const NimStringV2 TM__ZT9crccxweoChVXn9cHcxIXQ_7 = {0, (NimStrPayload*)&TM__ZT9crccxweoChVXn9cHcxIXQ_5};
static const NimStringV2 TM__ZT9crccxweoChVXn9cHcxIXQ_8 = {0, (NimStrPayload*)&TM__ZT9crccxweoChVXn9cHcxIXQ_5};
static const NimStringV2 TM__ZT9crccxweoChVXn9cHcxIXQ_9 = {0, (NimStrPayload*)&TM__ZT9crccxweoChVXn9cHcxIXQ_5};
static const NimStringV2 TM__ZT9crccxweoChVXn9cHcxIXQ_10 = {0, (NimStrPayload*)&TM__ZT9crccxweoChVXn9cHcxIXQ_5};
static const NimStringV2 TM__ZT9crccxweoChVXn9cHcxIXQ_11 = {0, (NimStrPayload*)&TM__ZT9crccxweoChVXn9cHcxIXQ_5};
extern TNimTypeV2 NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_;
static const struct {
  NI cap; NIM_CHAR data[30+1];
} TM__ZT9crccxweoChVXn9cHcxIXQ_12 = { 30 | NIM_STRLIT_FLAG, "format string: key not found: " };
static const NimStringV2 TM__ZT9crccxweoChVXn9cHcxIXQ_13 = {30, (NimStrPayload*)&TM__ZT9crccxweoChVXn9cHcxIXQ_12};
static NIM_CONST NU32 TM__ZT9crccxweoChVXn9cHcxIXQ_2[2] = {3701606400, 2480254464};
N_LIB_PRIVATE TNimTypeV2 NTIv2__V5PVrt9bIxZEeV7lfvqqtNg_ = {.destructor = (void*)eqdestroy___pureZstrtabs_426, .size = sizeof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg), .align = (NI16) NIM_ALIGNOF(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg), .depth = 1, .display = TM__ZT9crccxweoChVXn9cHcxIXQ_2, .traceImpl = (void*)eqtrace___pureZstrtabs_435, .flags = 0};
extern NIM_BOOL nimInErrorMode__system_3980;
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstrtabs_82)(tySequence__xv3aaFd3JCw8NbmALHiezQ* dest) {
	NI colontmp_;
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T3_;
			T3_ = (*dest).len;
			if (!(colontmp_ < T3_)) goto LA2			;
			eqdestroy___stdZassertions_13((&(*dest).p->data[colontmp_].Field0));
			eqdestroy___stdZassertions_13((&(*dest).p->data[colontmp_].Field1));
			colontmp_ += ((NI)1);
		} LA2: ;
	}
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest).p, NIM_ALIGNOF(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA));
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstrtabs_426)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* dest) {
	eqdestroy___pureZstrtabs_82((&(*dest).data));
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZstrtabs_91)(tySequence__xv3aaFd3JCw8NbmALHiezQ* dest, void* env) {
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZstrtabs_435)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* dest, void* env) {
	eqtrace___pureZstrtabs_91((&(*dest).data), env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___pureZstrtabs_141)(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA* dest, tyTuple__sPaDkVPSC0MkcoXCxPH9ccA* src) {
	if ((*dest).Field0.p != (*src).Field0.p) {	eqdestroy___stdZassertions_13((&(*dest).Field0));
	}
(*dest).Field0.len = (*src).Field0.len; (*dest).Field0.p = (*src).Field0.p;
	if ((*dest).Field1.p != (*src).Field1.p) {	eqdestroy___stdZassertions_13((&(*dest).Field1));
	}
(*dest).Field1.len = (*src).Field1.len; (*dest).Field1.p = (*src).Field1.p;
	(*dest).Field2 = (*src).Field2;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*, nstnewStringTable)(tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode) {
	tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* result;
	tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ colontmpD_;
	tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* T1_;
	result = NIM_NIL;
	colontmpD_ = (tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ)0;
	T1_ = NIM_NIL;
	T1_ = (tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*) nimNewObjUninit(sizeof(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg), NIM_ALIGNOF(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg));
	(*T1_).Sup.m_type = (&NTIv2__V5PVrt9bIxZEeV7lfvqqtNg_);
	colontmpD_ = mode;
	(*T1_).mode = colontmpD_;
	(*T1_).counter = ((NI)0);
	(*T1_).data = newSeq__pureZstrtabs_418(((NI)64));
	result = T1_;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, myhash__pureZstrtabs_241)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	switch ((*t).mode) {
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ)0):
	{
		result = hash__pureZhashes_284(key);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ)1):
	{
		result = hashIgnoreCase__pureZhashes_362(key);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ)2):
	{
		result = hashIgnoreStyle__pureZhashes_295(key);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, myCmp__pureZstrtabs_245)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 a, NimStringV2 b) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	switch ((*t).mode) {
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ)0):
	{
		NI T2_;
		T2_ = (NI)0;
		T2_ = cmp__system_1543(a, b);
		result = (T2_ == ((NI)0));
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ)1):
	{
		NI T4_;
		T4_ = (NI)0;
		T4_ = nsuCmpIgnoreCase(a, b);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = (T4_ == ((NI)0));
	}
	break;
	case ((tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ)2):
	{
		NI T6_;
		T6_ = (NI)0;
		T6_ = nsuCmpIgnoreStyle(a, b);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = (T6_ == ((NI)0));
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, nextTry__pureZstrtabs_257)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)(h + ((NI)1)) & maxHash);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rawGet__pureZstrtabs_261)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key) {
	NI result;
	NI h;
	NI T1_;
	NI T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (NI)0;
	T1_ = myhash__pureZstrtabs_241(t, key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = ((*t).data.len-1);
	h = (NI)(T1_ & T2_);
	{
		while (1) {
			NI T10_;
			if (!(*t).data.p->data[h].Field2) goto LA4			;
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = myCmp__pureZstrtabs_245(t, (*t).data.p->data[h].Field0, key);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!T7_) goto LA8_;
				result = h;
				goto BeforeRet_;
			}
			LA8_: ;
			T10_ = ((*t).data.len-1);
			h = nextTry__pureZstrtabs_257(h, T10_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		} LA4: ;
	}
	result = ((NI)-1);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsthasKey)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key) {
	NIM_BOOL result;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = rawGet__pureZstrtabs_261(t, key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (((NI)0) <= T1_);
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2*, nstTake)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key) {
	NimStringV2* result;
	NI indexX60gensym3_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringV2*)0;
	indexX60gensym3_ = rawGet__pureZstrtabs_261(t, key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(((NI)0) <= indexX60gensym3_)) goto LA3_;
		result = (&(*t).data.p->data[indexX60gensym3_].Field1);
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA* T6_;
		NimStringV2 T7_;
		T6_ = NIM_NIL;
		T6_ = (tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA*) nimNewObj(sizeof(tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA), NIM_ALIGNOF(tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA));
		(*T6_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__3UUWz3XMhDptStqtPF49cMA_);
		(*T6_).Sup.Sup.Sup.name = "KeyError";
		T7_.len = 0; T7_.p = NIM_NIL;
		T7_ = rawNewString(key.len + 15);
appendString((&T7_), TM__ZT9crccxweoChVXn9cHcxIXQ_4);
appendString((&T7_), key);
		(*T6_).Sup.Sup.Sup.message = T7_;
		(*T6_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T6_, "KeyError", "[]", "strtabs.nim", 148);
goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash__pureZstrtabs_250)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(length * ((NI)2)) < (NI)(counter * ((NI)3)));
	if (T1_) goto LA2_;
	T1_ = ((NI)(length - counter) < ((NI)4));
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, rawInsert__pureZstrtabs_349)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySequence__xv3aaFd3JCw8NbmALHiezQ* data, NimStringV2 key, NimStringV2 val) {
	NI h;
	NI T1_;
	NI T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NI)0;
	T1_ = myhash__pureZstrtabs_241(t, key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = ((*data).len-1);
	h = (NI)(T1_ & T2_);
	{
		while (1) {
			NI T5_;
			if (!(*data).p->data[h].Field2) goto LA4			;
			T5_ = ((*data).len-1);
			h = nextTry__pureZstrtabs_257(h, T5_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		} LA4: ;
	}
	eqsink___stdZassertions_19((&(*data).p->data[h].Field0), key);
	eqsink___stdZassertions_19((&(*data).p->data[h].Field1), val);
	(*data).p->data[h].Field2 = NIM_TRUE;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, enlarge__pureZstrtabs_361)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t) {
	tySequence__xv3aaFd3JCw8NbmALHiezQ n;
	NI T1_;
	tySequence__xv3aaFd3JCw8NbmALHiezQ T12_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	n.len = 0; n.p = NIM_NIL;
	T1_ = (*t).data.len;
	newSeq__pureZstrtabs_367((&n), ((NI) ((NI)(T1_ * ((NI)2)))));
	{
		NI i;
		NI colontmp_;
		NI T3_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T3_ = ((*t).data.len-1);
		colontmp_ = T3_;
		res = ((NI)0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA5				;
				i = res;
				{
					NimStringV2 T10_;
					NimStringV2 T11_;
					if (!(*t).data.p->data[i].Field2) goto LA8_;
					T10_.len = 0; T10_.p = NIM_NIL;
					T10_ = (*t).data.p->data[i].Field0;
					(*t).data.p->data[i].Field0.len = 0; (*t).data.p->data[i].Field0.p = NIM_NIL;
					T11_.len = 0; T11_.p = NIM_NIL;
					T11_ = (*t).data.p->data[i].Field1;
					(*t).data.p->data[i].Field1.len = 0; (*t).data.p->data[i].Field1.p = NIM_NIL;
					rawInsert__pureZstrtabs_349(t, (&n), T10_, T11_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				LA8_: ;
				res += ((NI)1);
			} LA5: ;
		}
	}
	T12_.len = 0; T12_.p = NIM_NIL;
	T12_ = (*t).data;
	(*t).data = n;
	n = T12_;
	eqdestroy___pureZstrtabs_82((&n));
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, nstPut)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key, NimStringV2 val) {
	NI index;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	index = rawGet__pureZstrtabs_261(t, key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(((NI)0) <= index)) goto LA3_;
		eqcopy___stdZassertions_16((&(*t).data.p->data[index].Field1), val);
	}
	goto LA1_;
	LA3_: ;
	{
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* T12_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		{
			NI T8_;
			NIM_BOOL T9_;
			T8_ = (*t).data.len;
			T9_ = (NIM_BOOL)0;
			T9_ = mustRehash__pureZstrtabs_250(T8_, (*t).counter);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T9_) goto LA10_;
			enlarge__pureZstrtabs_361(t);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA10_: ;
		T12_ = NIM_NIL;
		T12_ = t;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		eqcopy___stdZassertions_16((&colontmpD_), key);
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		eqcopy___stdZassertions_16((&colontmpD__2), val);
		rawInsert__pureZstrtabs_349(T12_, (&(*t).data), colontmpD_, colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*t).counter += ((NI)1);
	}
	LA1_: ;
	}BeforeRet_: ;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, del__pureZstrtabs_534)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key) {
	NI i;
	NI msk;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	i = rawGet__pureZstrtabs_261(t, key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_ = ((*t).data.len-1);
	msk = T1_;
	{
		if (!(((NI)0) <= i)) goto LA4_;
		(*t).counter -= ((NI)1);
		{
			{
				while (1) {
					NI j;
					NI r;
					tyTuple__sPaDkVPSC0MkcoXCxPH9ccA T30_;
					j = i;
					r = j;
					(*t).data.p->data[i].Field2 = NIM_FALSE;
					eqsink___stdZassertions_19((&(*t).data.p->data[i].Field0), TM__ZT9crccxweoChVXn9cHcxIXQ_6);
					eqsink___stdZassertions_19((&(*t).data.p->data[i].Field1), TM__ZT9crccxweoChVXn9cHcxIXQ_7);
					{
						while (1) {
							NI T15_;
							i = (NI)((NI)(i + ((NI)1)) & msk);
							{
								if (!!((*t).data.p->data[i].Field2)) goto LA13_;
								goto LA6;
							}
							LA13_: ;
							T15_ = (NI)0;
							T15_ = myhash__pureZstrtabs_241(t, (*t).data.p->data[i].Field0);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							r = (NI)(T15_ & msk);
							{
								NIM_BOOL T18_;
								NIM_BOOL T19_;
								NIM_BOOL T20_;
								NIM_BOOL T23_;
								NIM_BOOL T26_;
								T18_ = (NIM_BOOL)0;
								T19_ = (NIM_BOOL)0;
								T20_ = (NIM_BOOL)0;
								T20_ = (r <= i);
								if (!(T20_)) goto LA21_;
								T20_ = (j < r);
								LA21_: ;
								T19_ = T20_;
								if (T19_) goto LA22_;
								T23_ = (NIM_BOOL)0;
								T23_ = (j < r);
								if (!(T23_)) goto LA24_;
								T23_ = (i < j);
								LA24_: ;
								T19_ = T23_;
								LA22_: ;
								T18_ = T19_;
								if (T18_) goto LA25_;
								T26_ = (NIM_BOOL)0;
								T26_ = (i < j);
								if (!(T26_)) goto LA27_;
								T26_ = (r <= i);
								LA27_: ;
								T18_ = T26_;
								LA25_: ;
								if (!!(T18_)) goto LA28_;
								goto LA9;
							}
							LA28_: ;
						}
					} LA9: ;
					T30_ = (*t).data.p->data[i];
					nimZeroMem((void*)(&(*t).data.p->data[i]), sizeof(tyTuple__sPaDkVPSC0MkcoXCxPH9ccA));
					eqsink___pureZstrtabs_141((&(*t).data.p->data[j]), (&T30_));
				}
			}
		} LA6: ;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, nstlen)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t) {
	NI result;
	result = (NI)0;
	result = (*t).counter;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getOrDefault__pureZstrtabs_335)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringV2 key, NimStringV2 default_0) {
	NimStringV2 result;
	NI index;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	index = rawGet__pureZstrtabs_261(t, key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(((NI)0) <= index)) goto LA3_;
		eqcopy___stdZassertions_16((&result), (*t).data.p->data[index].Field1);
	}
	goto LA1_;
	LA3_: ;
	{
		eqcopy___stdZassertions_16((&result), default_0);
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
}
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c) {
	(*(*dest).p).data[(*dest).len] = c;
	(*(*dest).p).data[(NI)((*dest).len + ((NI)1))] = 0;
	(*dest).len += ((NI)1);
}
N_LIB_PRIVATE N_NIMCALL(void, raiseFormatException__pureZstrtabs_492)(NimStringV2 s) {
	tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw* T1_;
	NimStringV2 T2_;
{	T1_ = NIM_NIL;
	T1_ = (tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw*) nimNewObj(sizeof(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw), NIM_ALIGNOF(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_);
	(*T1_).Sup.Sup.name = "ValueError";
	T2_.len = 0; T2_.p = NIM_NIL;
	T2_ = rawNewString(s.len + 30);
appendString((&T2_), TM__ZT9crccxweoChVXn9cHcxIXQ_13);
appendString((&T2_), s);
	(*T1_).Sup.Sup.message = T2_;
	(*T1_).Sup.Sup.parent = ((Exception*) NIM_NIL);
	raiseExceptionEx((Exception*)T1_, "ValueError", "raiseFormatException", "strtabs.nim", 300);
goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getValue__pureZstrtabs_495)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySet_tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg flags, NimStringV2 key) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nsthasKey(t, key);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		result = getOrDefault__pureZstrtabs_335(t, key, TM__ZT9crccxweoChVXn9cHcxIXQ_9);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA4_: ;
	{
		if (!((flags &((NU8)1<<((NU)((((tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg)0)))&7U)))!=0)) goto LA8_;
		result = getEnv__stdZenvvars_15(key, TM__ZT9crccxweoChVXn9cHcxIXQ_10);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA6_;
	LA8_: ;
	{
		result = TM__ZT9crccxweoChVXn9cHcxIXQ_11;
	}
	LA6_: ;
	{
		if (!(result.len == ((NI)0))) goto LA13_;
		{
			NimStringV2 T19_;
			if (!((flags &((NU8)1<<((NU)((((tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg)2)))&7U)))!=0)) goto LA17_;
			T19_.len = 0; T19_.p = NIM_NIL;
			T19_ = rawNewString(key.len + 1);
appendChar((&T19_), 36);
appendString((&T19_), key);
			eqsink___stdZassertions_19((&result), T19_);
		}
		goto LA15_;
		LA17_: ;
		{
			if (!!(((flags &((NU8)1<<((NU)((((tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg)1)))&7U)))!=0))) goto LA21_;
			raiseFormatException__pureZstrtabs_492(key);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA15_;
		LA21_: ;
		LA15_: ;
	}
	LA13_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nstFormat)(NimStringV2 f, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* t, tySet_tyEnum_FormatFlag__F4vlKAV4d0Kt9aXmu9cVNBrg flags) {
	NimStringV2 result;
	NI i;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = TM__ZT9crccxweoChVXn9cHcxIXQ_8;
	i = ((NI)0);
	{
		while (1) {
			if (!(i < f.len)) goto LA2			;
			{
				if (!((NU8)(f.p->data[i]) == (NU8)(36))) goto LA5_;
				switch (((NU8)(f.p->data[(NI)(i + ((NI)1))]))) {
				case 36:
				{
					nimAddCharV1((&result), 36);
					i += ((NI)2);
				}
				break;
				case 123:
				{
					NimStringV2 colontmpD_;
					NimStringV2 colontmpD__2;
					NI j;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
					j = (NI)(i + ((NI)1));
					{
						while (1) {
							NIM_BOOL T12_;
							T12_ = (NIM_BOOL)0;
							T12_ = (j < f.len);
							if (!(T12_)) goto LA13_;
							T12_ = !(((NU8)(f.p->data[j]) == (NU8)(125)));
							LA13_: ;
							if (!T12_) goto LA11							;
							j += ((NI)1);
						} LA11: ;
					}
					colontmpD_ = substr__system_7536(f, (NI)(i + ((NI)2)), (NI)(j - ((NI)1)));
					colontmpD__2 = getValue__pureZstrtabs_495(t, flags, colontmpD_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
					prepareAdd((&result), colontmpD__2.len + 0);
appendString((&result), colontmpD__2);
					i = (NI)(j + ((NI)1));
					{
						LA9_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD__2));
						eqdestroy___stdZassertions_13((&colontmpD_));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NimStringV2 colontmpD__3;
					NimStringV2 colontmpD__4;
					NI j_2;
					colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
					colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
					j_2 = (NI)(i + ((NI)1));
					{
						while (1) {
							NIM_BOOL T20_;
							T20_ = (NIM_BOOL)0;
							T20_ = (j_2 < f.len);
							if (!(T20_)) goto LA21_;
							T20_ = (((NU8)(f.p->data[j_2])) >= ((NU8)(97)) && ((NU8)(f.p->data[j_2])) <= ((NU8)(122)) || ((NU8)(f.p->data[j_2])) >= ((NU8)(65)) && ((NU8)(f.p->data[j_2])) <= ((NU8)(90)) || ((NU8)(f.p->data[j_2])) >= ((NU8)(48)) && ((NU8)(f.p->data[j_2])) <= ((NU8)(57)) || ((NU8)(f.p->data[j_2])) == ((NU8)(95)) || ((NU8)(f.p->data[j_2])) >= ((NU8)(128)) && ((NU8)(f.p->data[j_2])) <= ((NU8)(255)));
							LA21_: ;
							if (!T20_) goto LA19							;
							j_2 += ((NI)1);
						} LA19: ;
					}
					colontmpD__3 = substr__system_7536(f, (NI)(i + ((NI)1)), (NI)(j_2 - ((NI)1)));
					colontmpD__4 = getValue__pureZstrtabs_495(t, flags, colontmpD__3);
					if (NIM_UNLIKELY(*nimErr_)) goto LA17_;
					prepareAdd((&result), colontmpD__4.len + 0);
appendString((&result), colontmpD__4);
					i = j_2;
					{
						LA17_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD__4));
						eqdestroy___stdZassertions_13((&colontmpD__3));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				break;
				default:
				{
					nimAddCharV1((&result), f.p->data[i]);
					i += ((NI)1);
				}
				break;
				}
			}
			goto LA3_;
			LA5_: ;
			{
				nimAddCharV1((&result), f.p->data[i]);
				i += ((NI)1);
			}
			LA3_: ;
		} LA2: ;
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic) {
	tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* h;
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)16));
	h = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_));
	(*h).rc += ((NI)16);
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)16));
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
		rememberCycle__system_3143(result, cell, (*((TNimTypeV2**) (p))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZstrtabs_446)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg** dest, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* src, NIM_BOOL cyclic) {
	tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* colontmp_;
	colontmp_ = (*dest);
	{
		if (!src) goto LA3_;
		nimIncRefCyclic(src, cyclic);
	}
	LA3_: ;
	(*dest) = src;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLastCyclicDyn(colontmp_);
		if (!T7_) goto LA8_;
		nimDestroyAndDispose(colontmp_);
	}
	LA8_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___pureZstrtabs_450)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg** dest, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* src) {
	tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* colontmp_;
	colontmp_ = (*dest);
	(*dest) = src;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn(colontmp_);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose(colontmp_);
	}
	LA4_: ;
}
