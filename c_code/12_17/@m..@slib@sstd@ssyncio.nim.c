/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
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
typedef struct tyObject_IOError__N09bhl56nRkUaUsonzshECg tyObject_IOError__N09bhl56nRkUaUsonzshECg;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_EOFError__d9btBfCv6DANm6rubyJTljg tyObject_EOFError__d9btBfCv6DANm6rubyJTljg;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
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
typedef NU8 tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg;
typedef NCSTRING tyArray__vVEuDkYJYRa9c5i5k5FxKmw[5];
struct tyObject_EOFError__d9btBfCv6DANm6rubyJTljg {
  tyObject_IOError__N09bhl56nRkUaUsonzshECg Sup;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};
typedef NU8 tyEnum_FileSeekPos__9bTJB6D0CIMmNFgwvcGSE3Q;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__stdZsyncio_186)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, checkErr__stdZsyncio_152)(FILE* f);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_3)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__stdZsyncio_106)(NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_405)(FILE** f, NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__stdZsyncio_254)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_243)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setInheritable__stdZsyncio_260)(int f, NIM_BOOL inheritable);
N_LIB_PRIVATE N_NIMCALL(int, getOsFileHandle__stdZsyncio_257)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
static N_INLINE(NIM_BOOL, eqeq___system_7516)(NCSTRING x, NCSTRING y);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readAll__stdZsyncio_363)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize__stdZsyncio_346)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readAllFile__stdZsyncio_354)(FILE* file, NI64 len);
N_NIMCALL(NimStringV2, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__stdZsyncio_155)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__stdZsyncio_350)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readAllBuffer__stdZsyncio_341)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__stdZsyncio_265)(FILE* f, NimStringV2* line);
N_LIB_PRIVATE N_NOINLINE(void, raiseEOF__stdZsyncio_109)(void);
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_230)(FILE* f, NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ, newSeq__stdZsyncio_511)(NI len);
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_2 = { 7 | NIM_STRLIT_FLAG, "errno: " };
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_3 = {7, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_2};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_4 = { 2 | NIM_STRLIT_FLAG, " `" };
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_5 = {2, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_6 = { 1 | NIM_STRLIT_FLAG, "`" };
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_7 = {1, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_6};
extern TNimTypeV2 NTIv2__N09bhl56nRkUaUsonzshECg_;
static const struct {
  NI cap; NIM_CHAR data[27+1];
} TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_8 = { 27 | NIM_STRLIT_FLAG, "cannot write string to file" };
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_9 = {27, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_8};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_10 = { 13 | NIM_STRLIT_FLAG, "cannot open: " };
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_11 = {13, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_10};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_12 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_13 = {0, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_12};
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_14 = {13, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_10};
extern TNimTypeV2 NTIv2__d9btBfCv6DANm6rubyJTljg_;
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_15 = { 11 | NIM_STRLIT_FLAG, "EOF reached" };
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_16 = {11, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_15};
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_17 = {13, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_10};
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_18 = {13, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_10};
static const struct {
  NI cap; NIM_CHAR data[24+1];
} TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_19 = { 24 | NIM_STRLIT_FLAG, "cannot set file position" };
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_20 = {24, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_19};
static const struct {
  NI cap; NIM_CHAR data[29+1];
} TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_21 = { 29 | NIM_STRLIT_FLAG, "cannot retrieve file position" };
static const NimStringV2 TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_22 = {29, (NimStrPayload*)&TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_21};
N_LIB_PRIVATE NIM_CONST tyArray__vVEuDkYJYRa9c5i5k5FxKmw FormatOpen__stdZsyncio_384 = {"rb",
"wb",
"w+b",
"r+b",
"ab"}
;
extern NIM_BOOL nimInErrorMode__system_3975;
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__stdZsyncio_254)(FILE* f) {
	int result;
	result = (int)0;
	result = fileno(f);
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3975);
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__stdZsyncio_106)(NimStringV2 msg) {
	tyObject_IOError__N09bhl56nRkUaUsonzshECg* T2_;
	NimStringV2 blitTmp;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T2_ = NIM_NIL;
	T2_ = (tyObject_IOError__N09bhl56nRkUaUsonzshECg*) nimNewObj(sizeof(tyObject_IOError__N09bhl56nRkUaUsonzshECg), NIM_ALIGNOF(tyObject_IOError__N09bhl56nRkUaUsonzshECg));
	(*T2_).Sup.Sup.Sup.m_type = (&NTIv2__N09bhl56nRkUaUsonzshECg_);
	(*T2_).Sup.Sup.name = "IOError";
	blitTmp = msg;
	msg.len = 0; msg.p = NIM_NIL;
	(*T2_).Sup.Sup.message = blitTmp;
	(*T2_).Sup.Sup.parent = ((Exception*) NIM_NIL);
	raiseExceptionEx((Exception*)T2_, "IOError", "raiseEIO", "syncio.nim", 158);
goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&msg));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, checkErr__stdZsyncio_152)(FILE* f) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		int T3_;
		NimStringV2 msg;
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		NimStringV2 T7_;
		NCSTRING T8_;
		NimStringV2 blitTmp;
		T3_ = (int)0;
		T3_ = ferror(f);
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		msg.len = 0; msg.p = NIM_NIL;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T7_.len = 0; T7_.p = NIM_NIL;
		colontmpD_ = dollar___systemZdollars_3(((NI) (errno)));
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		T8_ = (NCSTRING)0;
		T8_ = strerror(errno);
		colontmpD__2 = cstrToNimstr(T8_);
		T7_ = rawNewString(colontmpD_.len + colontmpD__2.len + 10);
appendString((&T7_), TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_3);
appendString((&T7_), colontmpD_);
appendString((&T7_), TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_5);
appendString((&T7_), colontmpD__2);
appendString((&T7_), TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_7);
		msg = T7_;
		clearerr(f);
		blitTmp = msg;
		msg.len = 0; msg.p = NIM_NIL;
		raiseEIO__stdZsyncio_106(blitTmp);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__2));
			eqdestroy___stdZassertions_13((&colontmpD_));
			eqdestroy___stdZassertions_13((&msg));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__stdZsyncio_186)(FILE* f, void* buffer, NI len) {
	NI result;
	size_t T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = fwrite(buffer, ((size_t)1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	checkErr__stdZsyncio_152(f);
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
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_230)(FILE* f, NimStringV2 s) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = writeBuffer__stdZsyncio_186(f, ((void*) (nimToCStringConv(s))), ((NI) (s.len)));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!((T3_ == s.len))) goto LA4_;
		raiseEIO__stdZsyncio_106(TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_9);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, flushFile__stdZsyncio_252)(FILE* f) {
	int T1_;
	T1_ = (int)0;
	T1_ = fflush(f);
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_243)(FILE* f) {
	{
		int T5_;
		if (!!((f == 0))) goto LA3_;
		T5_ = (int)0;
		T5_ = fclose(f);
		(void)(T5_);
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setInheritable__stdZsyncio_260)(int f, NIM_BOOL inheritable) {
	NIM_BOOL result;
	NI32 colontmpD_;
	NI32 colontmpD__2;
	int flags;
	int T10_;
{	result = (NIM_BOOL)0;
	colontmpD_ = (NI32)0;
	colontmpD__2 = (NI32)0;
	flags = fcntl(f, F_GETFD);
	{
		if (!(flags == ((NI32)-1))) goto LA3_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!inheritable) goto LA7_;
		colontmpD_ = (NI32)(flags & (NI32)((NU32) ~(FD_CLOEXEC)));
		flags = colontmpD_;
	}
	goto LA5_;
	LA7_: ;
	{
		colontmpD__2 = (NI32)(flags | FD_CLOEXEC);
		flags = colontmpD__2;
	}
	LA5_: ;
	T10_ = (int)0;
	T10_ = fcntl(f, F_SETFD, flags);
	result = !((T10_ == ((NI32)-1)));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, getOsFileHandle__stdZsyncio_257)(FILE* f) {
	int result;
	result = (int)0;
	result = fileno(f);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_405)(FILE** f, NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize) {
	NIM_BOOL result;
	void* p;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	p = fopen(nimToCStringConv(filename), FormatOpen__stdZsyncio_384[(mode)- 0]);
	{
		FILE* f2;
		struct stat res;
		if (!!((p == NIM_NIL))) goto LA3_;
		f2 = ((FILE*) (p));
		{
			NIM_BOOL T7_;
			int T8_;
			int T9_;
			T7_ = (NIM_BOOL)0;
			T8_ = (int)0;
			T8_ = getFileHandle__stdZsyncio_254(f2);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T9_ = (int)0;
			T9_ = fstat(T8_, (&res));
			T7_ = (((NI32)0) <= T9_);
			if (!(T7_)) goto LA10_;
			T7_ = S_ISDIR(res.st_mode);
			LA10_: ;
			if (!T7_) goto LA11_;
			close__stdZsyncio_243(f2);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			result = NIM_FALSE;
			goto BeforeRet_;
		}
		LA11_: ;
		{
			int T15_;
			NIM_BOOL T16_;
			T15_ = (int)0;
			T15_ = getOsFileHandle__stdZsyncio_257(f2);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T16_ = (NIM_BOOL)0;
			T16_ = setInheritable__stdZsyncio_260(T15_, NIM_FALSE);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!!(T16_)) goto LA17_;
			close__stdZsyncio_243(f2);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			result = NIM_FALSE;
			goto BeforeRet_;
		}
		LA17_: ;
		result = NIM_TRUE;
		(*f) = ((FILE*) (p));
		{
			NIM_BOOL T21_;
			int T25_;
			T21_ = (NIM_BOOL)0;
			T21_ = (((NI)0) < bufSize);
			if (!(T21_)) goto LA22_;
			T21_ = ((NU64)(((NU) (bufSize))) <= (NU64)(((NU)-1)));
			LA22_: ;
			if (!T21_) goto LA23_;
			T25_ = (int)0;
			T25_ = setvbuf((*f), NIM_NIL, _IOFBF, ((size_t) (bufSize)));
			(void)(T25_);
		}
		goto LA19_;
		LA23_: ;
		{
			int T29_;
			if (!(bufSize == ((NI)0))) goto LA27_;
			T29_ = (int)0;
			T29_ = setvbuf((*f), NIM_NIL, _IONBF, ((size_t)0));
			(void)(T29_);
		}
		goto LA19_;
		LA27_: ;
		LA19_: ;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(FILE*, open__stdZsyncio_449)(NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize) {
	FILE* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (FILE*)0;
	{
		NIM_BOOL T3_;
		tyObject_IOError__N09bhl56nRkUaUsonzshECg* T6_;
		NimStringV2 T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__stdZsyncio_405(&result, filename, mode, bufSize);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		T6_ = NIM_NIL;
		T6_ = (tyObject_IOError__N09bhl56nRkUaUsonzshECg*) nimNewObj(sizeof(tyObject_IOError__N09bhl56nRkUaUsonzshECg), NIM_ALIGNOF(tyObject_IOError__N09bhl56nRkUaUsonzshECg));
		(*T6_).Sup.Sup.Sup.m_type = (&NTIv2__N09bhl56nRkUaUsonzshECg_);
		(*T6_).Sup.Sup.name = "IOError";
		T7_.len = 0; T7_.p = NIM_NIL;
		T7_ = rawNewString(filename.len + 13);
appendString((&T7_), TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_11);
appendString((&T7_), filename);
		(*T6_).Sup.Sup.message = T7_;
		(*T6_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T6_, "IOError", "open", "syncio.nim", 766);
goto BeforeRet_;
	}
	LA4_: ;
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
static N_INLINE(NIM_BOOL, eqeq___system_7516)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32)0));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__stdZsyncio_265)(FILE* f, NimStringV2* line) {
	NIM_BOOL result;
	NI pos;
	NI sp;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	pos = ((NI)0);
	sp = (((*line).len >= ((NI)80)) ? (*line).len : ((NI)80));
	setLengthStrV2((&(*line)), ((NI) (sp)));
	{
		while (1) {
			NIM_BOOL fgetsSuccess;
			void* m;
			{
				NI i;
				NI i_2;
				i = (NI)0;
				i_2 = ((NI)0);
				{
					while (1) {
						if (!(i_2 < sp)) goto LA5						;
						i = i_2;
						nimPrepareStrMutationV2((&(*line)));
						(*line).p->data[(NI)(pos + i)] = 10;
						i_2 += ((NI)1);
					} LA5: ;
				}
			}
			fgetsSuccess = (NIM_BOOL)0;
			{
				while (1) {
					{
						NCSTRING T9_;
						NIM_BOOL T10_;
						T9_ = (NCSTRING)0;
						T9_ = fgets(((NCSTRING) ((&(*line).p->data[pos]))), ((int) (sp)), f);
						T10_ = (NIM_BOOL)0;
						T10_ = eqeq___system_7516(T9_, ((NCSTRING) NIM_NIL));
						fgetsSuccess = !(T10_);
						{
							if (!fgetsSuccess) goto LA13_;
							goto LA6;
						}
						LA13_: ;
						{
							if (!(errno == EINTR)) goto LA17_;
							errno = ((int)0);
							clearerr(f);
							goto LA8;
						}
						LA17_: ;
						checkErr__stdZsyncio_152(f);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						goto LA6;
					} LA8: ;
				}
			} LA6: ;
			m = memchr(((void*) ((&(*line).p->data[pos]))), ((int)10), ((size_t) (sp)));
			{
				NI last;
				NIM_BOOL T42_;
				if (!!((m == NIM_NIL))) goto LA21_;
				last = (NI)(((NI) (ptrdiff_t) (m)) - ((NI) (ptrdiff_t) ((&(*line).p->data[((NI)0)]))));
				{
					NIM_BOOL T25_;
					NIM_BOOL T29_;
					T25_ = (NIM_BOOL)0;
					T25_ = (((NI)0) < last);
					if (!(T25_)) goto LA26_;
					T25_ = ((NU8)((*line).p->data[(NI)(last - ((NI)1))]) == (NU8)(13));
					LA26_: ;
					if (!T25_) goto LA27_;
					setLengthStrV2((&(*line)), ((NI) ((NI)(last - ((NI)1)))));
					T29_ = (NIM_BOOL)0;
					T29_ = (((NI)1) < last);
					if (T29_) goto LA30_;
					T29_ = fgetsSuccess;
					LA30_: ;
					result = T29_;
					goto BeforeRet_;
				}
				goto LA23_;
				LA27_: ;
				{
					NIM_BOOL T32_;
					T32_ = (NIM_BOOL)0;
					T32_ = (((NI)0) < last);
					if (!(T32_)) goto LA33_;
					T32_ = ((NU8)((*line).p->data[(NI)(last - ((NI)1))]) == (NU8)(0));
					LA33_: ;
					if (!T32_) goto LA34_;
					{
						NIM_BOOL T38_;
						T38_ = (NIM_BOOL)0;
						T38_ = (last < (NI)((NI)(pos + sp) - ((NI)1)));
						if (!(T38_)) goto LA39_;
						T38_ = !(((NU8)((*line).p->data[(NI)(last + ((NI)1))]) == (NU8)(0)));
						LA39_: ;
						if (!T38_) goto LA40_;
						last -= ((NI)1);
					}
					LA40_: ;
				}
				goto LA23_;
				LA34_: ;
				LA23_: ;
				setLengthStrV2((&(*line)), ((NI) (last)));
				T42_ = (NIM_BOOL)0;
				T42_ = (((NI)0) < last);
				if (T42_) goto LA43_;
				T42_ = fgetsSuccess;
				LA43_: ;
				result = T42_;
				goto BeforeRet_;
			}
			goto LA19_;
			LA21_: ;
			{
				sp -= ((NI)1);
			}
			LA19_: ;
			pos += sp;
			sp = ((NI)128);
			setLengthStrV2((&(*line)), ((NI) ((NI)(pos + sp))));
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize__stdZsyncio_346)(FILE* file) {
	NI64 result;
	NI64 oldPos;
	int T1_;
	int T2_;
	result = (NI64)0;
	oldPos = ftello(file);
	T1_ = (int)0;
	T1_ = fseeko(file, IL64(0), ((int)2));
	(void)(T1_);
	result = ftello(file);
	T2_ = (int)0;
	T2_ = fseeko(file, oldPos, ((int)0));
	(void)(T2_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__stdZsyncio_155)(FILE* f, void* buffer, NI len) {
	NI result;
	size_t T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = fread(buffer, ((size_t)1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	{
		if (!!((result == ((NI) (len))))) goto LA4_;
		checkErr__stdZsyncio_152(f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__stdZsyncio_350)(FILE* f) {
	NIM_BOOL result;
	int c;
	int T1_;
{	result = (NIM_BOOL)0;
	c = fgetc(f);
	T1_ = (int)0;
	T1_ = ungetc(c, f);
	(void)(T1_);
	result = (c < ((NI32)0));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readAllBuffer__stdZsyncio_341)(FILE* file) {
	NimStringV2 result;
	NimStringV2 buffer;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	buffer.len = 0; buffer.p = NIM_NIL;
	result = TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_13;
	buffer = mnewString(((NI)4000));
	{
		while (1) {
			NI bytesRead;
			bytesRead = readBuffer__stdZsyncio_155(file, ((void*) ((&buffer.p->data[((NI)0)]))), ((NI)4000));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			{
				if (!(bytesRead == ((NI)4000))) goto LA6_;
				prepareAdd((&result), buffer.len + 0);
appendString((&result), buffer);
			}
			goto LA4_;
			LA6_: ;
			{
				setLengthStrV2((&buffer), ((NI) (bytesRead)));
				prepareAdd((&result), buffer.len + 0);
appendString((&result), buffer);
				goto LA2;
			}
			LA4_: ;
		}
	} LA2: ;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&buffer));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readAllFile__stdZsyncio_354)(FILE* file, NI64 len) {
	NimStringV2 result;
	NI bytes;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = mnewString(((NI) (len)));
	bytes = readBuffer__stdZsyncio_155(file, ((void*) ((&result.p->data[((NI)0)]))), ((NI) (len)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = endOfFile__stdZsyncio_350(file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		{
			if (!(((NI64) (bytes)) < len)) goto LA8_;
			setLengthStrV2((&result), ((NI) (bytes)));
		}
		LA8_: ;
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringV2 colontmpD_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD_ = readAllBuffer__stdZsyncio_341(file);
		if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
		prepareAdd((&result), colontmpD_.len + 0);
appendString((&result), colontmpD_);
		{
			LA11_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readAll__stdZsyncio_363)(FILE* file) {
	NimStringV2 result;
	NI64 colontmpD_;
	NI64 colontmpD__2;
	NI64 len;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_ = (NI64)0;
	colontmpD__2 = (NI64)0;
	{
		if (!!((file == stdin))) goto LA3_;
		colontmpD_ = rawFileSize__stdZsyncio_346(file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		len = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = IL64(-1);
		len = colontmpD__2;
	}
	LA1_: ;
	{
		if (!(IL64(0) < len)) goto LA8_;
		result = readAllFile__stdZsyncio_354(file, len);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA6_;
	LA8_: ;
	{
		result = readAllBuffer__stdZsyncio_341(file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA6_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readFile__stdZsyncio_479)(NimStringV2 filename) {
	NimStringV2 result;
	FILE* f;
NIM_BOOL oldNimErrFin6_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	f = ((FILE*) NIM_NIL);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__stdZsyncio_405(&f, filename, ((tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg)0), ((NI)-1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		result = readAll__stdZsyncio_363(f);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			oldNimErrFin6_ = *nimErr_; *nimErr_ = NIM_FALSE;
			close__stdZsyncio_243(f);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			*nimErr_ = oldNimErrFin6_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__N09bhl56nRkUaUsonzshECg* T10_;
		NimStringV2 T11_;
		T10_ = NIM_NIL;
		T10_ = (tyObject_IOError__N09bhl56nRkUaUsonzshECg*) nimNewObj(sizeof(tyObject_IOError__N09bhl56nRkUaUsonzshECg), NIM_ALIGNOF(tyObject_IOError__N09bhl56nRkUaUsonzshECg));
		(*T10_).Sup.Sup.Sup.m_type = (&NTIv2__N09bhl56nRkUaUsonzshECg_);
		(*T10_).Sup.Sup.name = "IOError";
		T11_.len = 0; T11_.p = NIM_NIL;
		T11_ = rawNewString(filename.len + 13);
appendString((&T11_), TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_14);
appendString((&T11_), filename);
		(*T10_).Sup.Sup.message = T11_;
		(*T10_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T10_, "IOError", "readFile", "syncio.nim", 854);
goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readChars__stdZsyncio_167)(FILE* f, NIM_CHAR* a, NI aLen_0) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = readBuffer__stdZsyncio_155(f, ((void*) ((&a[((NI)0)]))), ((NI) (aLen_0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseEOF__stdZsyncio_109)(void) {
	tyObject_EOFError__d9btBfCv6DANm6rubyJTljg* T1_;
{	T1_ = NIM_NIL;
	T1_ = (tyObject_EOFError__d9btBfCv6DANm6rubyJTljg*) nimNewObj(sizeof(tyObject_EOFError__d9btBfCv6DANm6rubyJTljg), NIM_ALIGNOF(tyObject_EOFError__d9btBfCv6DANm6rubyJTljg));
	(*T1_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__d9btBfCv6DANm6rubyJTljg_);
	(*T1_).Sup.Sup.Sup.name = "EOFError";
	(*T1_).Sup.Sup.Sup.message = TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_16;
	(*T1_).Sup.Sup.Sup.parent = ((Exception*) NIM_NIL);
	raiseExceptionEx((Exception*)T1_, "EOFError", "raiseEOF", "syncio.nim", 161);
goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, readLine__stdZsyncio_301)(FILE* f) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = rawNewString(((NI)80));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = readLine__stdZsyncio_265(f, (&result));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		raiseEOF__stdZsyncio_109();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readBytes__icZrodfiles_163)(FILE* f, NU8* a, NI aLen_0, NI start, NI len) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = readBuffer__stdZsyncio_155(f, ((void*) ((&a[start]))), len);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, writeBytes__icZrodfiles_127)(FILE* f, NU8* a, NI aLen_0, NI start, NI len) {
	NI result;
	NI8* x;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	x = ((NI8*) (a));
	result = writeBuffer__stdZsyncio_186(f, ((void*) ((&x[start]))), len);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, writeFile__stdZsyncio_484)(NimStringV2 filename, NimStringV2 content) {
	FILE* f;
NIM_BOOL oldNimErrFin6_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	f = ((FILE*) NIM_NIL);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__stdZsyncio_405(&f, filename, ((tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg)1), ((NI)-1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		write__stdZsyncio_230(f, content);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			oldNimErrFin6_ = *nimErr_; *nimErr_ = NIM_FALSE;
			close__stdZsyncio_243(f);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			*nimErr_ = oldNimErrFin6_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__N09bhl56nRkUaUsonzshECg* T10_;
		NimStringV2 T11_;
		T10_ = NIM_NIL;
		T10_ = (tyObject_IOError__N09bhl56nRkUaUsonzshECg*) nimNewObj(sizeof(tyObject_IOError__N09bhl56nRkUaUsonzshECg), NIM_ALIGNOF(tyObject_IOError__N09bhl56nRkUaUsonzshECg));
		(*T10_).Sup.Sup.Sup.m_type = (&NTIv2__N09bhl56nRkUaUsonzshECg_);
		(*T10_).Sup.Sup.name = "IOError";
		T11_.len = 0; T11_.p = NIM_NIL;
		T11_ = rawNewString(filename.len + 13);
appendString((&T11_), TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_17);
appendString((&T11_), filename);
		(*T10_).Sup.Sup.message = T11_;
		(*T10_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T10_, "IOError", "writeFile", "syncio.nim", 867);
goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ, readLines__stdZsyncio_502)(NimStringV2 filename, NI n) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ result;
	FILE* f;
NIM_BOOL oldNimErrFin6_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	f = ((FILE*) NIM_NIL);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__stdZsyncio_405(&f, filename, ((tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg)0), ((NI)-1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		result = newSeq__stdZsyncio_511(n);
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)(((NI) (n)) - ((NI)1));
			res = ((NI)0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA9					;
					i = res;
					{
						NIM_BOOL T12_;
						T12_ = (NIM_BOOL)0;
						T12_ = readLine__stdZsyncio_265(f, (&result.p->data[i]));
						if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
						if (!!(T12_)) goto LA13_;
						raiseEOF__stdZsyncio_109();
						if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
					}
					LA13_: ;
					res += ((NI)1);
				} LA9: ;
			}
		}
		{
			LA6_:;
		}
		{
			oldNimErrFin6_ = *nimErr_; *nimErr_ = NIM_FALSE;
			close__stdZsyncio_243(f);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			*nimErr_ = oldNimErrFin6_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__N09bhl56nRkUaUsonzshECg* T18_;
		NimStringV2 T19_;
		T18_ = NIM_NIL;
		T18_ = (tyObject_IOError__N09bhl56nRkUaUsonzshECg*) nimNewObj(sizeof(tyObject_IOError__N09bhl56nRkUaUsonzshECg), NIM_ALIGNOF(tyObject_IOError__N09bhl56nRkUaUsonzshECg));
		(*T18_).Sup.Sup.Sup.m_type = (&NTIv2__N09bhl56nRkUaUsonzshECg_);
		(*T18_).Sup.Sup.name = "IOError";
		T19_.len = 0; T19_.p = NIM_NIL;
		T19_ = rawNewString(filename.len + 13);
appendString((&T19_), TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_18);
appendString((&T19_), filename);
		(*T18_).Sup.Sup.message = T19_;
		(*T18_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T18_, "IOError", "readLines", "syncio.nim", 897);
goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_439)(FILE** f, int filehandle, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode) {
	NIM_BOOL result;
	int oshandle;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	oshandle = filehandle;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = setInheritable__stdZsyncio_260(oshandle, NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA4_: ;
	(*f) = fdopen(filehandle, FormatOpen__stdZsyncio_384[(mode)- 0]);
	result = !(((*f) == ((FILE*) NIM_NIL)));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setFilePos__stdZsyncio_455)(FILE* f, NI64 pos, tyEnum_FileSeekPos__9bTJB6D0CIMmNFgwvcGSE3Q relativeTo) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		int T3_;
		T3_ = (int)0;
		T3_ = fseeko(f, pos, ((int) (relativeTo)));
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		raiseEIO__stdZsyncio_106(TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_20);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI64, getFilePos__stdZsyncio_471)(FILE* f) {
	NI64 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI64)0;
	result = ftello(f);
	{
		if (!(result < IL64(0))) goto LA3_;
		raiseEIO__stdZsyncio_106(TM__xNF6mvRQ4Pd1hTNM9cEHXwQ_22);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_334)(FILE* f, NimStringV2* a, NI aLen_0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NimStringV2* x;
		NI i;
		x = (NimStringV2*)0;
		i = ((NI)0);
		{
			while (1) {
				if (!(i < aLen_0)) goto LA3				;
				x = (&a[i]);
				write__stdZsyncio_230(f, (*x));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i += ((NI)1);
			} LA3: ;
		}
	}
	}BeforeRet_: ;
}
