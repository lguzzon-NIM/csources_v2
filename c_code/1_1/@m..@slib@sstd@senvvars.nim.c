/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdlib.h>
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
typedef struct tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A;
typedef struct tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
typedef struct tySequence__4eQHGndY6XBYpFOH09apV8Q tySequence__4eQHGndY6XBYpFOH09apV8Q;
typedef struct tySequence__4eQHGndY6XBYpFOH09apV8Q_Content tySequence__4eQHGndY6XBYpFOH09apV8Q_Content;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A {
NI bytes;
NI16* data;
};
typedef NI16 tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag[1];
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
struct tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
NI32 errorCode;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
struct tySequence__4eQHGndY6XBYpFOH09apV8Q {
  NI len; tySequence__4eQHGndY6XBYpFOH09apV8Q_Content* p;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__4eQHGndY6XBYpFOH09apV8Q_Content_PP
#define tySequence__4eQHGndY6XBYpFOH09apV8Q_Content_PP
struct tySequence__4eQHGndY6XBYpFOH09apV8Q_Content { NI cap; tyTuple__UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NI16*, getEnvImpl__stdZenvvars_11)(NCSTRING env);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI16*, toWideCString__stdZwidestrs_41)(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A x);
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A, newWideCString__stdZwidestrs_281)(NCSTRING s);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZwidestrs_6)(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A* a);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZwidestrs_356)(NI16* s);
static N_INLINE(NIM_BOOL, contains__stdZenvvars_33)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
static N_INLINE(NI, find__stdZenvvars_38)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_71)(tyTuple__UV3llMMYFckfui8YMBuUZA x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(int, setEnvImpl__stdZprivateZwin95setenv_18)(NimStringV2 name, NimStringV2 value, int overwrite);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_86)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_89)(void);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p, NI align);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZenvvars_151)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest);
N_LIB_PRIVATE N_NIMCALL(void, setLen__stdZenvvars_168)(tySequence__4eQHGndY6XBYpFOH09apV8Q* s, NI newlen);
extern TNimTypeV2 NTIv2__PeQ9bR8XhClb9cp9cbW28aSyw_;
static const struct {
  NI cap; NIM_CHAR data[18+1];
} TM__HBYSwmWBoRvKHp5bIbN68w_2 = { 18 | NIM_STRLIT_FLAG, "invalid key, got: " };
static const NimStringV2 TM__HBYSwmWBoRvKHp5bIbN68w_3 = {18, (NimStrPayload*)&TM__HBYSwmWBoRvKHp5bIbN68w_2};
static const NimStringV2 TM__HBYSwmWBoRvKHp5bIbN68w_4 = {18, (NimStrPayload*)&TM__HBYSwmWBoRvKHp5bIbN68w_2};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__HBYSwmWBoRvKHp5bIbN68w_5 = { 1 | NIM_STRLIT_FLAG, "=" };
static const NimStringV2 TM__HBYSwmWBoRvKHp5bIbN68w_6 = {1, (NimStrPayload*)&TM__HBYSwmWBoRvKHp5bIbN68w_5};
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
static N_INLINE(NI16*, toWideCString__stdZwidestrs_41)(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A x) {
	NI16* result;
	result = (NI16*)0;
	result = x.data;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI16*, getEnvImpl__stdZenvvars_11)(NCSTRING env) {
	NI16* result;
	tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A colontmpD_;
	NI16* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI16*)0;
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A));
	colontmpD_ = newWideCString__stdZwidestrs_281(env);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_ = (NI16*)0;
	T1_ = toWideCString__stdZwidestrs_41(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = _wgetenv(T1_);
	eqdestroy___stdZwidestrs_6((&colontmpD_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		if (!(s.len == ((NI)0))) goto LA3_;
		result = "";
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NCSTRING) ((*s.p).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getEnv__stdZenvvars_14)(NimStringV2 key, NimStringV2 default_0) {
	NimStringV2 result;
	NI16* env;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	env = getEnvImpl__stdZenvvars_11(nimToCStringConv(key));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(env == ((NI16*) NIM_NIL))) goto LA3_;
		eqcopy___stdZassertions_16((&result), default_0);
		goto BeforeRet_;
	}
	LA3_: ;
	result = dollar___stdZwidestrs_356(env);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, find__stdZenvvars_38)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NI result;
{	result = (NI)0;
	result = ((NI)0);
	{
		NIM_CHAR i;
		NI i_2;
		i = (NIM_CHAR)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3				;
				i = a[i_2];
				{
					if (!((NU8)(i) == (NU8)(item))) goto LA6_;
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
static N_INLINE(NIM_BOOL, contains__stdZenvvars_33)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find__stdZenvvars_38(a, aLen_0, item);
	result = (((NI)0) <= T1_);
	goto BeforeRet_;
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
N_LIB_PRIVATE N_NIMCALL(void, putEnv__stdZenvvars_30)(NimStringV2 key, NimStringV2 val) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		NimStringV2 colontmpD_;
		tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw* T8_;
		NimStringV2 T9_;
		tyTuple__UV3llMMYFckfui8YMBuUZA T10_;
		T3_ = (NIM_BOOL)0;
		T3_ = (key.len == ((NI)0));
		if (T3_) goto LA4_;
		T3_ = contains__stdZenvvars_33(((key).p) ? (key.p->data) : NIM_NIL, key.len, 61);
		LA4_: ;
		if (!T3_) goto LA5_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		T8_ = NIM_NIL;
		T8_ = (tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw*) nimNewObj(sizeof(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw), NIM_ALIGNOF(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw));
		(*T8_).Sup.Sup.Sup.m_type = (&NTIv2__PeQ9bR8XhClb9cp9cbW28aSyw_);
		(*T8_).Sup.Sup.name = "OSError";
		T9_.len = 0; T9_.p = NIM_NIL;
		T10_.Field0 = key;
		T10_.Field1 = val;
		colontmpD_ = dollar___stdZprivateZoscommon_71(T10_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		T9_ = rawNewString(colontmpD_.len + 18);
appendString((&T9_), TM__HBYSwmWBoRvKHp5bIbN68w_3);
appendString((&T9_), colontmpD_);
		(*T8_).Sup.Sup.message = T9_;
		(*T8_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T8_, "OSError", "putEnv", "envvars.nim", 121);
goto LA7_;
		{
			LA7_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA5_: ;
	{
		int T15_;
		NimStringV2 colontmpD__2;
		NI32 T19_;
		tyTuple__UV3llMMYFckfui8YMBuUZA T20_;
		T15_ = (int)0;
		T15_ = setEnvImpl__stdZprivateZwin95setenv_18(key, val, ((NI32)1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!((T15_ == ((NI32)0)))) goto LA16_;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T19_ = (NI32)0;
		T19_ = osLastError__stdZoserrors_89();
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		T20_.Field0 = key;
		T20_.Field1 = val;
		colontmpD__2 = dollar___stdZprivateZoscommon_71(T20_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		raiseOSError__stdZoserrors_86(T19_, colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		{
			LA18_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__2));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA16_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, existsEnv__stdZenvvars_23)(NimStringV2 key) {
	NIM_BOOL result;
	NI16* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NI16*)0;
	T1_ = getEnvImpl__stdZenvvars_11(nimToCStringConv(key));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = !((T1_ == ((NI16*) NIM_NIL)));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, delEnv__stdZenvvars_69)(NimStringV2 key) {
	NimStringV2 envToDel;
	NimStringV2 T10_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	envToDel.len = 0; envToDel.p = NIM_NIL;
	{
		NIM_BOOL T4_;
		tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw* T8_;
		NimStringV2 T9_;
		T4_ = (NIM_BOOL)0;
		T4_ = (key.len == ((NI)0));
		if (T4_) goto LA5_;
		T4_ = contains__stdZenvvars_33(((key).p) ? (key.p->data) : NIM_NIL, key.len, 61);
		LA5_: ;
		if (!T4_) goto LA6_;
		T8_ = NIM_NIL;
		T8_ = (tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw*) nimNewObj(sizeof(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw), NIM_ALIGNOF(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw));
		(*T8_).Sup.Sup.Sup.m_type = (&NTIv2__PeQ9bR8XhClb9cp9cbW28aSyw_);
		(*T8_).Sup.Sup.name = "OSError";
		T9_.len = 0; T9_.p = NIM_NIL;
		T9_ = rawNewString(key.len + 18);
appendString((&T9_), TM__HBYSwmWBoRvKHp5bIbN68w_4);
appendString((&T9_), key);
		(*T8_).Sup.Sup.message = T9_;
		(*T8_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T8_, "OSError", "delEnv", "envvars.nim", 145);
goto LA1_;
	}
	LA6_: ;
	T10_.len = 0; T10_.p = NIM_NIL;
	T10_ = rawNewString(key.len + 1);
appendString((&T10_), key);
appendString((&T10_), TM__HBYSwmWBoRvKHp5bIbN68w_6);
	envToDel = T10_;
	{
		int T13_;
		NI32 T16_;
		T13_ = (int)0;
		T13_ = _putenv(nimToCStringConv(envToDel));
		if (!!((T13_ == ((NI32)0)))) goto LA14_;
		T16_ = (NI32)0;
		T16_ = osLastError__stdZoserrors_89();
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		raiseOSError__stdZoserrors_86(T16_, key);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA14_: ;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&envToDel));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZenvvars_151)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest) {
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
 alignedDealloc((*dest).p, NIM_ALIGNOF(tyTuple__UV3llMMYFckfui8YMBuUZA));
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZenvvars_157)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest, tySequence__4eQHGndY6XBYpFOH09apV8Q src) {
	if ((*dest).p != src.p) {	eqdestroy___stdZenvvars_151(dest);
	}
(*dest).len = src.len; (*dest).p = src.p;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZenvvars_160)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest, void* env) {
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZenvvars_154)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest, tySequence__4eQHGndY6XBYpFOH09apV8Q src) {
	NI T1_;
	NI colontmp_;
	T1_ = src.len;
	setLen__stdZenvvars_168((&(*dest)), T1_);
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T4_;
			T4_ = (*dest).len;
			if (!(colontmp_ < T4_)) goto LA3			;
			eqcopy___stdZassertions_16((&(*dest).p->data[colontmp_].Field0), src.p->data[colontmp_].Field0);
			eqcopy___stdZassertions_16((&(*dest).p->data[colontmp_].Field1), src.p->data[colontmp_].Field1);
			colontmp_ += ((NI)1);
		} LA3: ;
	}
}
