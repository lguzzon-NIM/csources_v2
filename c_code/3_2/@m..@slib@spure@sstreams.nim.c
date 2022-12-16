/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
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
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ;
typedef struct tyObject_IOError__N09bhl56nRkUaUsonzshECg tyObject_IOError__N09bhl56nRkUaUsonzshECg;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
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
typedef N_NIMCALL_PTR(void, tyProc__JQrsH08b4uPTH9cyFPlVOZg) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__9bmhFrLahRsL2hltfRDVtlQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(void, tyProc__3svSoGIUJIsHkaBL7q4DAQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc__xflqkf2D1uVClg70czEDHA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NI, tyProc__c9c0f59ak4YGQ6neEym8LPKw) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__7jFfqMk9ajToCz6Hv9atCA4A) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* line);
typedef N_NIMCALL_PTR(NI, tyProc__2VVzVL9bOnKhj1eZKkf9cEuA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ {
  RootObj Sup;
tyProc__JQrsH08b4uPTH9cyFPlVOZg closeImpl;
tyProc__9bmhFrLahRsL2hltfRDVtlQ atEndImpl;
tyProc__3svSoGIUJIsHkaBL7q4DAQ setPositionImpl;
tyProc__xflqkf2D1uVClg70czEDHA getPositionImpl;
tyProc__c9c0f59ak4YGQ6neEym8LPKw readDataStrImpl;
tyProc__7jFfqMk9ajToCz6Hv9atCA4A readLineImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA readDataImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA peekDataImpl;
tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ writeDataImpl;
tyProc__JQrsH08b4uPTH9cyFPlVOZg flushImpl;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};
struct tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ {
  tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ Sup;
FILE* f;
};
typedef NU8 tyEnum_FileSeekPos__9bTJB6D0CIMmNFgwvcGSE3Q;
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
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
struct tyObject_IOError__N09bhl56nRkUaUsonzshECg {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw {
  tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ Sup;
NimStringV2 data;
NI pos;
};
typedef NU8 tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, writeData__pureZstreams_175)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3143)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_844)(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ** dest);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, fsClose__pureZstreams_838)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_243)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, fsAtEnd__pureZstreams_877)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__stdZsyncio_350)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, fsSetPosition__pureZstreams_880)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, setFilePos__stdZsyncio_455)(FILE* f, NI64 pos, tyEnum_FileSeekPos__9bTJB6D0CIMmNFgwvcGSE3Q relativeTo);
N_LIB_PRIVATE N_NIMCALL(NI, fsGetPosition__pureZstreams_883)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NI64, getFilePos__stdZsyncio_471)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NI, fsReadDataStr__pureZstreams_891)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__stdZsyncio_155)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, fsReadData__pureZstreams_886)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, fsReadLine__pureZstreams_907)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* line);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__stdZsyncio_265)(FILE* f, NimStringV2* line);
N_LIB_PRIVATE N_NIMCALL(NI, fsPeekData__pureZstreams_897)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(void, fsWriteData__pureZstreams_903)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__stdZsyncio_186)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(tyObject_IOError__N09bhl56nRkUaUsonzshECg*, newEIO__pureZstreams_3)(NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_7626)(tyObject_IOError__N09bhl56nRkUaUsonzshECg** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, fsFlush__pureZstreams_875)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, flushFile__stdZsyncio_252)(FILE* f);
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, atEnd__pureZstreams_67)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, readChar__pureZstreams_209)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NI, readData__pureZstreams_79)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, prepareMutation__system_2313)(NimStringV2* s);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_581)(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_594)(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, ssClose__pureZstreams_742)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZstreams_616)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ** dest, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* src, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, ssAtEnd__pureZstreams_577)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, ssSetPosition__pureZstreams_644)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, clamp__pureZstreams_648)(NI x, NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NI, ssGetPosition__pureZstreams_654)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NI, ssReadDataStr__pureZstreams_658)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, ssReadData__pureZstreams_715)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(NI, ssPeekData__pureZstreams_726)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(void, ssWriteData__pureZstreams_732)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_405)(FILE** f, NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*, newFileStream__pureZstreams_911)(FILE* f);
N_LIB_PRIVATE TNimTypeV2 NTIv2__9bEVSsOIpkY9cf5lCtaS39bPQ_;
extern TNimTypeV2 NTIv2__N09bhl56nRkUaUsonzshECg_;
static const struct {
  NI cap; NIM_CHAR data[22+1];
} TM__Ue7tnBcsL67VCiRfvt8q0A_3 = { 22 | NIM_STRLIT_FLAG, "cannot write to stream" };
static const NimStringV2 TM__Ue7tnBcsL67VCiRfvt8q0A_4 = {22, (NimStrPayload*)&TM__Ue7tnBcsL67VCiRfvt8q0A_3};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__Ue7tnBcsL67VCiRfvt8q0A_5 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__Ue7tnBcsL67VCiRfvt8q0A_6 = {0, (NimStrPayload*)&TM__Ue7tnBcsL67VCiRfvt8q0A_5};
static const struct {
  NI cap; NIM_CHAR data[23+1];
} TM__Ue7tnBcsL67VCiRfvt8q0A_7 = { 23 | NIM_STRLIT_FLAG, "cannot read from stream" };
static const NimStringV2 TM__Ue7tnBcsL67VCiRfvt8q0A_8 = {23, (NimStrPayload*)&TM__Ue7tnBcsL67VCiRfvt8q0A_7};
N_LIB_PRIVATE TNimTypeV2 NTIv2__Olau5FPRehZBBEB77FHnfw_;
static const NimStringV2 TM__Ue7tnBcsL67VCiRfvt8q0A_10 = {0, (NimStrPayload*)&TM__Ue7tnBcsL67VCiRfvt8q0A_5};
extern NIM_BOOL nimInErrorMode__system_3980;
static NIM_CONST NU32 TM__Ue7tnBcsL67VCiRfvt8q0A_2[3] = {3701606400, 1981855744, 1163046912};
N_LIB_PRIVATE TNimTypeV2 NTIv2__9bEVSsOIpkY9cf5lCtaS39bPQ_ = {.destructor = (void*)NIM_NIL, .size = sizeof(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ), .align = (NI16) NIM_ALIGNOF(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ), .depth = 2, .display = TM__Ue7tnBcsL67VCiRfvt8q0A_2, .traceImpl = (void*)NIM_NIL, .flags = 0};
static NIM_CONST NU32 TM__Ue7tnBcsL67VCiRfvt8q0A_9[3] = {3701606400, 1981855744, 1454302208};
N_LIB_PRIVATE TNimTypeV2 NTIv2__Olau5FPRehZBBEB77FHnfw_ = {.destructor = (void*)eqdestroy___pureZstreams_594, .size = sizeof(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw), .align = (NI16) NIM_ALIGNOF(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw), .depth = 2, .display = TM__Ue7tnBcsL67VCiRfvt8q0A_9, .traceImpl = (void*)NIM_NIL, .flags = 0};
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, writeData__pureZstreams_175)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	(*s).writeDataImpl(s, buffer, bufLen);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, write__pureZstreams_184)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2 x) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!(((NI)0) < x.len)) goto LA3_;
		writeData__pureZstreams_175(s, ((void*) (nimToCStringConv(x))), x.len);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
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
N_LIB_PRIVATE N_NIMCALL(void, eqsink___pureZstreams_620)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ** dest, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* src) {
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmp_;
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
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_844)(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, fsClose__pureZstreams_838)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!!(((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f == ((FILE*) NIM_NIL)))) goto LA3_;
		close__stdZsyncio_243((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f = ((FILE*) NIM_NIL);
	}
	LA3_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, fsAtEnd__pureZstreams_877)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	result = endOfFile__stdZsyncio_350((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, fsSetPosition__pureZstreams_880)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	setFilePos__stdZsyncio_455((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, ((NI64) (pos)), ((tyEnum_FileSeekPos__9bTJB6D0CIMmNFgwvcGSE3Q)0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, fsGetPosition__pureZstreams_883)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NI result;
	NI64 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (NI64)0;
	T1_ = getFilePos__stdZsyncio_471((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = ((NI) (T1_));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, fsReadDataStr__pureZstreams_891)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = readBuffer__stdZsyncio_155((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, ((void*) ((&(*buffer).p->data[slice.a]))), ((NI) ((NI)((NI)(slice.b + ((NI)1)) - slice.a))));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, fsReadData__pureZstreams_886)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = readBuffer__stdZsyncio_155((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, buffer, ((NI) (bufLen)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, fsReadLine__pureZstreams_907)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* line) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	result = readLine__stdZsyncio_265((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, line);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, fsPeekData__pureZstreams_897)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
	NI pos;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	pos = fsGetPosition__pureZstreams_883(s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = readBuffer__stdZsyncio_155((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, buffer, ((NI) (bufLen)));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		fsSetPosition__pureZstreams_880(s, pos);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_IOError__N09bhl56nRkUaUsonzshECg*, newEIO__pureZstreams_3)(NimStringV2 msg) {
	tyObject_IOError__N09bhl56nRkUaUsonzshECg* result;
	result = NIM_NIL;
	eqdestroy___system_7626(&result);
	result = (tyObject_IOError__N09bhl56nRkUaUsonzshECg*) nimNewObj(sizeof(tyObject_IOError__N09bhl56nRkUaUsonzshECg), NIM_ALIGNOF(tyObject_IOError__N09bhl56nRkUaUsonzshECg));
	(*result).Sup.Sup.Sup.m_type = (&NTIv2__N09bhl56nRkUaUsonzshECg_);
	(*result).Sup.Sup.name = "IOError";
	eqsink___stdZassertions_19((&(*result).Sup.Sup.message), msg);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, fsWriteData__pureZstreams_903)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI T3_;
		tyObject_IOError__N09bhl56nRkUaUsonzshECg* T6_;
		T3_ = (NI)0;
		T3_ = writeBuffer__stdZsyncio_186((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, buffer, ((NI) (bufLen)));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!((T3_ == bufLen))) goto LA4_;
		T6_ = NIM_NIL;
		T6_ = newEIO__pureZstreams_3(TM__Ue7tnBcsL67VCiRfvt8q0A_4);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseExceptionEx((Exception*)T6_, "IOError", "fsWriteData", "streams.nim", 1347);
goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, fsFlush__pureZstreams_875)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	flushFile__stdZsyncio_252((*((tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*, newFileStream__pureZstreams_911)(FILE* f) {
	tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ* result;
	result = NIM_NIL;
	eqdestroy___pureZstreams_844(&result);
	result = (tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*) nimNewObj(sizeof(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ), NIM_ALIGNOF(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ));
	(*result).Sup.Sup.m_type = (&NTIv2__9bEVSsOIpkY9cf5lCtaS39bPQ_);
	(*result).f = f;
	(*result).Sup.closeImpl = fsClose__pureZstreams_838;
	(*result).Sup.atEndImpl = fsAtEnd__pureZstreams_877;
	(*result).Sup.setPositionImpl = fsSetPosition__pureZstreams_880;
	(*result).Sup.getPositionImpl = fsGetPosition__pureZstreams_883;
	(*result).Sup.readDataStrImpl = fsReadDataStr__pureZstreams_891;
	(*result).Sup.readDataImpl = fsReadData__pureZstreams_886;
	(*result).Sup.readLineImpl = fsReadLine__pureZstreams_907;
	(*result).Sup.peekDataImpl = fsPeekData__pureZstreams_897;
	(*result).Sup.writeDataImpl = fsWriteData__pureZstreams_903;
	(*result).Sup.flushImpl = fsFlush__pureZstreams_875;
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
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZstreams_616)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ** dest, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* src, NIM_BOOL cyclic) {
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmp_;
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
N_LIB_PRIVATE N_NIMCALL(void, close__pureZstreams_58)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((s == 0));
		if (!(T3_)) goto LA4_;
		T3_ = !(((*s).closeImpl == 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		(*s).closeImpl(s);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA5_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_613)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, atEnd__pureZstreams_67)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	result = (*s).atEndImpl(s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readData__pureZstreams_79)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = (*s).readDataImpl(s, buffer, bufLen);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, readChar__pureZstreams_209)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_CHAR result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_CHAR)0;
	{
		{
			NI T4_;
			T4_ = (NI)0;
			T4_ = readData__pureZstreams_79(s, ((void*) ((&result))), ((NI)1));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!!((T4_ == ((NI)1)))) goto LA5_;
			result = 0;
		}
		LA5_: ;
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readLine__pureZstreams_558)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = TM__Ue7tnBcsL67VCiRfvt8q0A_6;
	{
		NIM_BOOL T3_;
		tyObject_IOError__N09bhl56nRkUaUsonzshECg* T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = atEnd__pureZstreams_67(s);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		T6_ = NIM_NIL;
		T6_ = newEIO__pureZstreams_3(TM__Ue7tnBcsL67VCiRfvt8q0A_8);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseExceptionEx((Exception*)T6_, "IOError", "readLine", "streams.nim", 1085);
goto BeforeRet_;
	}
	LA4_: ;
	{
		while (1) {
			NIM_CHAR c;
			c = readChar__pureZstreams_209(s);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA11_;
				c = readChar__pureZstreams_209(s);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				goto LA7;
			}
			LA11_: ;
			{
				NIM_BOOL T15_;
				T15_ = (NIM_BOOL)0;
				T15_ = ((NU8)(c) == (NU8)(10));
				if (T15_) goto LA16_;
				T15_ = ((NU8)(c) == (NU8)(0));
				LA16_: ;
				if (!T15_) goto LA17_;
				goto LA7;
			}
			goto LA13_;
			LA17_: ;
			{
				nimAddCharV1((&result), c);
			}
			LA13_: ;
		}
	} LA7: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__pureZstreams_543)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* line) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		if (!!(((*s).readLineImpl == NIM_NIL))) goto LA3_;
		result = (*s).readLineImpl(s, line);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		setLengthStrV2((&(*line)), ((NI)0));
		{
			while (1) {
				NIM_CHAR c;
				c = readChar__pureZstreams_209(s);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				{
					if (!((NU8)(c) == (NU8)(13))) goto LA10_;
					c = readChar__pureZstreams_209(s);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto LA6;
				}
				goto LA8_;
				LA10_: ;
				{
					if (!((NU8)(c) == (NU8)(10))) goto LA13_;
					goto LA6;
				}
				goto LA8_;
				LA13_: ;
				{
					if (!((NU8)(c) == (NU8)(0))) goto LA16_;
					{
						if (!(((NI)0) < (*line).len)) goto LA20_;
						goto LA6;
					}
					goto LA18_;
					LA20_: ;
					{
						result = NIM_FALSE;
						goto BeforeRet_;
					}
					LA18_: ;
				}
				goto LA8_;
				LA16_: ;
				LA8_: ;
				nimAddCharV1((&(*line)), c);
			}
		} LA6: ;
		result = NIM_TRUE;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
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
static N_INLINE(void, prepareMutation__system_2313)(NimStringV2* s) {
	NimStringV2* s_2;
	s_2 = s;
	nimPrepareStrMutationV2(((NimStringV2*) (s_2)));
}
N_LIB_PRIVATE N_NIMCALL(NI, readDataStr__pureZstreams_85)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!!(((*s).readDataStrImpl == NIM_NIL))) goto LA3_;
		result = (*s).readDataStrImpl(s, buffer, slice);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		prepareMutation__system_2313(buffer);
		result = readData__pureZstreams_79(s, ((void*) ((&(*buffer).p->data[slice.a]))), (NI)((NI)(slice.b + ((NI)1)) - slice.a));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_581)(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstreams_594)(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* dest) {
	eqdestroy___stdZassertions_13((&(*dest).data));
}
N_LIB_PRIVATE N_NIMCALL(void, ssClose__pureZstreams_742)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_616(&colontmpD_, s, NIM_TRUE);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	eqsink___stdZassertions_19((&(*s_2).data), TM__Ue7tnBcsL67VCiRfvt8q0A_10);
	eqdestroy___pureZstreams_581(&s_2);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, ssAtEnd__pureZstreams_577)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_BOOL result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
{	result = (NIM_BOOL)0;
	s_2 = NIM_NIL;
	s_2 = ((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*) (s));
	result = ((*s_2).data.len <= (*s_2).pos);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, ssSetPosition__pureZstreams_644)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos) {
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_616(&colontmpD_, s, NIM_TRUE);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	(*s_2).pos = clamp__pureZstreams_648(pos, ((NI)0), (*s_2).data.len);
	eqdestroy___pureZstreams_581(&s_2);
}
N_LIB_PRIVATE N_NIMCALL(NI, ssGetPosition__pureZstreams_654)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s) {
	NI result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
{	result = (NI)0;
	s_2 = NIM_NIL;
	s_2 = ((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*) (s));
	result = (*s_2).pos;
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
N_LIB_PRIVATE N_NIMCALL(NI, ssReadDataStr__pureZstreams_658)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice) {
	NI result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
	result = (NI)0;
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_616(&colontmpD_, s, NIM_TRUE);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	prepareMutation__system_2313(buffer);
	result = (((NI)((NI)(slice.b + ((NI)1)) - slice.a) <= (NI)((*s_2).data.len - (*s_2).pos)) ? (NI)((NI)(slice.b + ((NI)1)) - slice.a) : (NI)((*s_2).data.len - (*s_2).pos));
	{
		if (!(((NI)0) < result)) goto LA3_;
		{
			copyMem__system_1719(((void*) ((&(*buffer).p->data[slice.a]))), ((void*) ((&(*s_2).data.p->data[(*s_2).pos]))), ((NI) (result)));
		}
		(*s_2).pos += result;
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI)0);
	}
	LA1_: ;
	eqdestroy___pureZstreams_581(&s_2);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, ssReadData__pureZstreams_715)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
	result = (NI)0;
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_616(&colontmpD_, s, NIM_TRUE);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	result = ((bufLen <= (NI)((*s_2).data.len - (*s_2).pos)) ? bufLen : (NI)((*s_2).data.len - (*s_2).pos));
	{
		if (!(((NI)0) < result)) goto LA3_;
		copyMem__system_1719(buffer, ((void*) ((&(*s_2).data.p->data[(*s_2).pos]))), ((NI) (result)));
		(*s_2).pos += result;
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI)0);
	}
	LA1_: ;
	eqdestroy___pureZstreams_581(&s_2);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, ssPeekData__pureZstreams_726)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	result = (NI)0;
	s_2 = NIM_NIL;
	s_2 = ((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*) (s));
	result = ((bufLen <= (NI)((*s_2).data.len - (*s_2).pos)) ? bufLen : (NI)((*s_2).data.len - (*s_2).pos));
	{
		if (!(((NI)0) < result)) goto LA3_;
		copyMem__system_1719(buffer, ((void*) ((&(*s_2).data.p->data[(*s_2).pos]))), ((NI) (result)));
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI)0);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, ssWriteData__pureZstreams_732)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* s_2;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* colontmpD_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	s_2 = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___pureZstreams_616(&colontmpD_, s, NIM_TRUE);
	s_2 = (*((tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw**) (&(colontmpD_))));
	{
		if (!(bufLen <= ((NI)0))) goto LA4_;
		eqdestroy___pureZstreams_581(&s_2);
		goto BeforeRet_;
	}
	LA4_: ;
	{
		if (!((*s_2).data.len < (NI)((*s_2).pos + bufLen))) goto LA8_;
		setLengthStrV2((&(*s_2).data), ((NI) ((NI)((*s_2).pos + bufLen))));
	}
	LA8_: ;
	copyMem__system_1719(((void*) ((&(*s_2).data.p->data[(*s_2).pos]))), buffer, ((NI) (bufLen)));
	(*s_2).pos += bufLen;
	{
		LA1_:;
	}
	{
		eqdestroy___pureZstreams_581(&s_2);
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*, newStringStream__pureZstreams_745)(NimStringV2 s) {
	tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw* result;
	result = NIM_NIL;
	eqdestroy___pureZstreams_581(&result);
	result = (tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw*) nimNewObj(sizeof(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw), NIM_ALIGNOF(tyObject_StringStreamObj__Olau5FPRehZBBEB77FHnfw));
	(*result).Sup.Sup.m_type = (&NTIv2__Olau5FPRehZBBEB77FHnfw_);
	eqsink___stdZassertions_19((&(*result).data), s);
	prepareMutation__system_2313((&(*result).data));
	(*result).pos = ((NI)0);
	(*result).Sup.closeImpl = ssClose__pureZstreams_742;
	(*result).Sup.atEndImpl = ssAtEnd__pureZstreams_577;
	(*result).Sup.setPositionImpl = ssSetPosition__pureZstreams_644;
	(*result).Sup.getPositionImpl = ssGetPosition__pureZstreams_654;
	(*result).Sup.readDataStrImpl = ssReadDataStr__pureZstreams_658;
	(*result).Sup.readDataImpl = ssReadData__pureZstreams_715;
	(*result).Sup.peekDataImpl = ssPeekData__pureZstreams_726;
	(*result).Sup.writeDataImpl = ssWriteData__pureZstreams_732;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*, newFileStream__pureZstreams_929)(NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize) {
	tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ* result;
	FILE* f;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__stdZsyncio_405(&f, filename, mode, bufSize);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		result = newFileStream__pureZstreams_911(f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
