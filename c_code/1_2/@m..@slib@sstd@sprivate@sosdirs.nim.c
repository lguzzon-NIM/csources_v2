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
typedef struct tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A;
typedef struct tyObject_IOError__N09bhl56nRkUaUsonzshECg tyObject_IOError__N09bhl56nRkUaUsonzshECg;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
typedef struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA;
typedef struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw;
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
typedef N_STDCALL_PTR(NI32, tyProc__uBkkHOkdpyfFusi9cbg9cHww) (NI16* pathName, void* security);
typedef NI16 tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag[1];
typedef N_STDCALL_PTR(NI32, tyProc__9bXer9a4ps9aSGctILcxWReVw) (void);
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
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
typedef NU8 tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ;
struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw {
NI32 dwLowDateTime;
NI32 dwHighDateTime;
};
typedef NI16 tyArray__EKfNt9b8uxndgFbu2Ky3XAQ[260];
typedef NI16 tyArray__Get9cpRTS5VjGKP6CDsI9bYA[14];
struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA {
NI32 dwFileAttributes;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftCreationTime;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftLastAccessTime;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftLastWriteTime;
NI32 nFileSizeHigh;
NI32 nFileSizeLow;
NI32 dwReserved0;
NI32 dwReserved1;
tyArray__EKfNt9b8uxndgFbu2Ky3XAQ cFileName;
tyArray__Get9cpRTS5VjGKP6CDsI9bYA cAlternateFileName;
};
typedef N_STDCALL_PTR(NI32, tyProc__jwEWAkul5J6p6K0UfXa1tw) (NI hFindFile, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef N_STDCALL_PTR(void, tyProc__ofoySXaAAlxxs9bQS9a1etlg) (NI hFindFile);
typedef N_STDCALL_PTR(NI32, tyProc__5sqIMptsyAfPn3c9cPj4DOA) (NI16* lpPathName);
typedef NU8 tySet_tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsOrCreateDir)(NimStringV2 dir);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir__stdZprivateZosdirs_400)(NimStringV2 dir);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI16*, toWideCString__stdZwidestrs_41)(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A x);
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A, newWideCString__stdZwidestrs_287)(NimStringV2 s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_86)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_89)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZwidestrs_6)(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A* a);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosdirExists)(NimStringV2 dir);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosparentDir)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, splitDrive__stdZprivateZntpath_2)(NimStringV2 p, tyTuple__UV3llMMYFckfui8YMBuUZA* Result);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7601)(NimStringV2 s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZprivateZntpath_116)(tyTuple__UV3llMMYFckfui8YMBuUZA* dest);
N_LIB_PRIVATE N_NIMCALL(NI, findFirstFile__stdZprivateZoscommon_25)(NimStringV2 a, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* b);
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_90)(NimStringV2 head, NimStringV2 tail);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosjoinPath)(NimStringV2 head, NimStringV2 tail);
static N_INLINE(NIM_BOOL, skipFindData__stdZprivateZoscommon_34)(tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* f);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosextractFilename)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZwidestrs_356)(NI16* s);
N_LIB_PRIVATE N_NIMCALL(void, nosremoveFile)(NimStringV2 file);
N_LIB_PRIVATE N_NIMCALL(void, nosremoveDir)(NimStringV2 dir, NIM_BOOL checkDir);
N_LIB_PRIVATE N_NIMCALL(void, rawRemoveDir__stdZprivateZosdirs_391)(NimStringV2 dir);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryMoveFSObject__stdZprivateZoscommon_61)(NimStringV2 source, NimStringV2 dest, NIM_BOOL isDir);
N_LIB_PRIVATE N_NIMCALL(void, noscopyDir)(NimStringV2 source, NimStringV2 dest);
N_LIB_PRIVATE N_NIMCALL(void, noscreateDir)(NimStringV2 dir);
N_LIB_PRIVATE N_NIMCALL(void, nossplitPath)(NimStringV2 path, tyTuple__UV3llMMYFckfui8YMBuUZA* Result);
N_LIB_PRIVATE N_NIMCALL(void, noscopyFile)(NimStringV2 source, NimStringV2 dest, tySet_tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg options);
extern TNimTypeV2 NTIv2__N09bhl56nRkUaUsonzshECg_;
static const struct {
  NI cap; NIM_CHAR data[18+1];
} TM__UhMx4BhJKblm8VrPrbmAGA_2 = { 18 | NIM_STRLIT_FLAG, "Failed to create \'" };
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_3 = {18, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_2};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__UhMx4BhJKblm8VrPrbmAGA_4 = { 1 | NIM_STRLIT_FLAG, "\'" };
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_5 = {1, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__UhMx4BhJKblm8VrPrbmAGA_6 = { 1 | NIM_STRLIT_FLAG, "*" };
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_7 = {1, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_6};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__UhMx4BhJKblm8VrPrbmAGA_8 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_9 = {0, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_8};
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_10 = {1, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_6};
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_11 = {0, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_8};
extern NIM_BOOL nimInErrorMode__system_3980;
extern tyProc__uBkkHOkdpyfFusi9cbg9cHww Dl_1442840766_;
extern tyProc__9bXer9a4ps9aSGctILcxWReVw Dl_1442840748_;
extern tyProc__jwEWAkul5J6p6K0UfXa1tw Dl_1442840831_;
extern tyProc__ofoySXaAAlxxs9bQS9a1etlg Dl_1442840834_;
extern tyProc__5sqIMptsyAfPn3c9cPj4DOA Dl_1442840769_;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir__stdZprivateZosdirs_400)(NimStringV2 dir) {
	NIM_BOOL result;
	tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A colontmpD_;
	NI32 res;
	NI16* T2_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A));
	colontmpD_ = newWideCString__stdZwidestrs_287(dir);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_ = (NI16*)0;
	T2_ = toWideCString__stdZwidestrs_41(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	res = Dl_1442840766_(T2_, NIM_NIL);
	{
		if (!!((res == ((NI32)0)))) goto LA5_;
		result = NIM_TRUE;
	}
	goto LA3_;
	LA5_: ;
	{
		NI32 T8_;
		T8_ = (NI32)0;
		T8_ = Dl_1442840748_();
		if (!(T8_ == ((NI32)183))) goto LA9_;
		result = NIM_FALSE;
	}
	goto LA3_;
	LA9_: ;
	{
		NI32 T12_;
		T12_ = (NI32)0;
		T12_ = osLastError__stdZoserrors_89();
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		raiseOSError__stdZoserrors_86(T12_, dir);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA3_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___stdZwidestrs_6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsOrCreateDir)(NimStringV2 dir) {
	NIM_BOOL result;
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = rawCreateDir__stdZprivateZosdirs_400(dir);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = !(T1_);
	{
		if (!result) goto LA4_;
		{
			NIM_BOOL T8_;
			tyObject_IOError__N09bhl56nRkUaUsonzshECg* T11_;
			NimStringV2 T12_;
			T8_ = (NIM_BOOL)0;
			T8_ = nosdirExists(dir);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!!(T8_)) goto LA9_;
			T11_ = NIM_NIL;
			T11_ = (tyObject_IOError__N09bhl56nRkUaUsonzshECg*) nimNewObj(sizeof(tyObject_IOError__N09bhl56nRkUaUsonzshECg), NIM_ALIGNOF(tyObject_IOError__N09bhl56nRkUaUsonzshECg));
			(*T11_).Sup.Sup.Sup.m_type = (&NTIv2__N09bhl56nRkUaUsonzshECg_);
			(*T11_).Sup.Sup.name = "IOError";
			T12_.len = 0; T12_.p = NIM_NIL;
			T12_ = rawNewString(dir.len + 19);
appendString((&T12_), TM__UhMx4BhJKblm8VrPrbmAGA_3);
appendString((&T12_), dir);
appendString((&T12_), TM__UhMx4BhJKblm8VrPrbmAGA_5);
			(*T11_).Sup.Sup.message = T12_;
			(*T11_).Sup.Sup.parent = ((Exception*) NIM_NIL);
			raiseExceptionEx((Exception*)T11_, "IOError", "existsOrCreateDir", "osdirs.nim", 426);
goto BeforeRet_;
		}
		LA9_: ;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, noscreateDir)(NimStringV2 dir) {
	NIM_BOOL omitNext;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!(dir.len == 0)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	omitNext = nosisAbsolute(dir);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NimStringV2 p;
		p.len = 0; p.p = NIM_NIL;
		{
			NimStringV2 current;
			if (!NIM_FALSE) goto LA9_;
			current.len = 0; current.p = NIM_NIL;
			eqcopy___stdZassertions_16((&current), dir);
			{
				if (!NIM_TRUE) goto LA14_;
				eqcopy___stdZassertions_16((&p), dir);
				{
					if (!omitNext) goto LA18_;
					omitNext = NIM_FALSE;
				}
				goto LA16_;
				LA18_: ;
				{
					NIM_BOOL T21_;
					T21_ = (NIM_BOOL)0;
					T21_ = nosexistsOrCreateDir(p);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					(void)(T21_);
				}
				LA16_: ;
			}
			LA14_: ;
			{
				while (1) {
					NimStringV2 colontmpD_;
					NimStringV2 T29_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					{
						NIM_BOOL T26_;
						colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
						eqcopy___stdZassertions_16((&colontmpD_), current);
						T26_ = (NIM_BOOL)0;
						T26_ = nosisRootDir(colontmpD_);
						if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
						if (!T26_) goto LA27_;
						goto LA22;
					}
					LA27_: ;
					T29_.len = 0; T29_.p = NIM_NIL;
					T29_ = nosparentDir(current);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					eqsink___stdZassertions_19((&current), T29_);
					eqcopy___stdZassertions_16((&p), current);
					{
						if (!omitNext) goto LA32_;
						omitNext = NIM_FALSE;
					}
					goto LA30_;
					LA32_: ;
					{
						NIM_BOOL T35_;
						T35_ = (NIM_BOOL)0;
						T35_ = nosexistsOrCreateDir(p);
						if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
						(void)(T35_);
					}
					LA30_: ;
				}
			} LA22: ;
			{
				LA11_:;
			}
			{
				eqdestroy___stdZassertions_13((&current));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		}
		goto LA7_;
		LA9_: ;
		{
			NimStringV2 colontmpD__2;
			tyTuple__UV3llMMYFckfui8YMBuUZA colontmpD__3;
			NI start;
			colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
			nimZeroMem((void*)(&colontmpD__3), sizeof(tyTuple__UV3llMMYFckfui8YMBuUZA));
			colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
			eqcopy___stdZassertions_16((&colontmpD__2), dir);
			splitDrive__stdZprivateZntpath_2(colontmpD__2, (&colontmpD__3));
			if (NIM_UNLIKELY(*nimErr_)) goto LA39_;
			start = colontmpD__3.Field0.len;
			{
				NI i;
				NI colontmp_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = (NI)(dir.len - ((NI)2));
				res = start;
				{
					while (1) {
						if (!(res <= colontmp_)) goto LA42						;
						i = res;
						{
							NIM_BOOL T45_;
							NIM_BOOL T47_;
							NimStringV2 T51_;
							T45_ = (NIM_BOOL)0;
							T45_ = (((NU8)(dir.p->data[i])) == ((NU8)(92)) || ((NU8)(dir.p->data[i])) == ((NU8)(47)));
							if (!(T45_)) goto LA46_;
							T47_ = (NIM_BOOL)0;
							T47_ = (i == ((NI)0));
							if (T47_) goto LA48_;
							T47_ = !((((NU8)(dir.p->data[(NI)(i - ((NI)1))])) == ((NU8)(92)) || ((NU8)(dir.p->data[(NI)(i - ((NI)1))])) == ((NU8)(47))));
							LA48_: ;
							T45_ = T47_;
							LA46_: ;
							if (!T45_) goto LA49_;
							T51_.len = 0; T51_.p = NIM_NIL;
							T51_ = substr__system_7601(dir, ((NI)0), i);
							eqsink___stdZassertions_19((&p), T51_);
							{
								if (!omitNext) goto LA54_;
								omitNext = NIM_FALSE;
							}
							goto LA52_;
							LA54_: ;
							{
								NIM_BOOL T57_;
								T57_ = (NIM_BOOL)0;
								T57_ = nosexistsOrCreateDir(p);
								if (NIM_UNLIKELY(*nimErr_)) goto LA39_;
								(void)(T57_);
							}
							LA52_: ;
						}
						LA49_: ;
						res += ((NI)1);
					} LA42: ;
				}
			}
			{
				if (!NIM_TRUE) goto LA60_;
				eqcopy___stdZassertions_16((&p), dir);
				{
					if (!omitNext) goto LA64_;
					omitNext = NIM_FALSE;
				}
				goto LA62_;
				LA64_: ;
				{
					NIM_BOOL T67_;
					T67_ = (NIM_BOOL)0;
					T67_ = nosexistsOrCreateDir(p);
					if (NIM_UNLIKELY(*nimErr_)) goto LA39_;
					(void)(T67_);
				}
				LA62_: ;
			}
			LA60_: ;
			{
				LA39_:;
			}
			{
				eqdestroy___stdZprivateZntpath_116((&colontmpD__3));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		}
		LA7_: ;
		{
			LA6_:;
		}
		{
			eqdestroy___stdZassertions_13((&p));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	}BeforeRet_: ;
}
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_90)(NimStringV2 head, NimStringV2 tail) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = nosjoinPath(head, tail);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, skipFindData__stdZprivateZoscommon_34)(tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* f) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T3_;
	NIM_BOOL T5_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI) ((*f).cFileName[(((NI)0))- 0])) == ((NI)46));
	if (!(T1_)) goto LA2_;
	T3_ = (NIM_BOOL)0;
	T3_ = (((NI) ((*f).cFileName[(((NI)1))- 0])) == ((NI)0));
	if (T3_) goto LA4_;
	T5_ = (NIM_BOOL)0;
	T5_ = (((NI) ((*f).cFileName[(((NI)1))- 0])) == ((NI)46));
	if (!(T5_)) goto LA6_;
	T5_ = (((NI) ((*f).cFileName[(((NI)2))- 0])) == ((NI)0));
	LA6_: ;
	T3_ = T5_;
	LA4_: ;
	T1_ = T3_;
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, rawRemoveDir__stdZprivateZosdirs_391)(NimStringV2 dir) {
	tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A colontmpD_;
	NI32 res;
	NI16* T2_;
	NI32 lastError;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A));
	colontmpD_ = newWideCString__stdZwidestrs_287(dir);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_ = (NI16*)0;
	T2_ = toWideCString__stdZwidestrs_41(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	res = Dl_1442840769_(T2_);
	lastError = osLastError__stdZoserrors_89();
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NIM_BOOL T5_;
		NIM_BOOL T6_;
		NIM_BOOL T7_;
		T5_ = (NIM_BOOL)0;
		T6_ = (NIM_BOOL)0;
		T7_ = (NIM_BOOL)0;
		T7_ = (res == ((NI32)0));
		if (!(T7_)) goto LA8_;
		T7_ = !((lastError == ((NI32)3)));
		LA8_: ;
		T6_ = T7_;
		if (!(T6_)) goto LA9_;
		T6_ = !((lastError == ((NI32)18)));
		LA9_: ;
		T5_ = T6_;
		if (!(T5_)) goto LA10_;
		T5_ = !((lastError == ((NI32)2)));
		LA10_: ;
		if (!T5_) goto LA11_;
		raiseOSError__stdZoserrors_86(lastError, dir);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA11_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___stdZwidestrs_6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, nosremoveDir)(NimStringV2 dir, NIM_BOOL checkDir) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NimStringV2 path;
		NimStringV2 colontmpD_;
		tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ kind;
		tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA f;
		NI h;
		path.len = 0; path.p = NIM_NIL;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		kind = (tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0;
		nimZeroMem((void*)(&f), sizeof(tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA));
		colontmpD_ = slash___stdZprivateZospaths50_90(dir, TM__UhMx4BhJKblm8VrPrbmAGA_7);
		if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
		h = findFirstFile__stdZprivateZoscommon_25(colontmpD_, (&f));
		if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
		{
			if (!(h == ((NI)-1))) goto LA5_;
			{
				NI32 T11_;
				if (!checkDir) goto LA9_;
				T11_ = (NI32)0;
				T11_ = osLastError__stdZoserrors_89();
				if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
				raiseOSError__stdZoserrors_86(T11_, dir);
				if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
			}
			LA9_: ;
		}
		goto LA3_;
		LA5_: ;
		{
			{
				while (1) {
					tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ k;
					k = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0);
					{
						NIM_BOOL T18_;
						NimStringV2 xx;
						NimStringV2 T30_;
						T18_ = (NIM_BOOL)0;
						T18_ = skipFindData__stdZprivateZoscommon_34((&f));
						if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
						if (!!(T18_)) goto LA19_;
						xx.len = 0; xx.p = NIM_NIL;
						{
							if (!!(((NI32)(f.dwFileAttributes & ((NI32)16)) == ((NI32)0)))) goto LA24_;
							k = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)2);
						}
						LA24_: ;
						{
							if (!!(((NI32)(f.dwFileAttributes & ((NI32)1024)) == ((NI32)0)))) goto LA28_;
							k = (tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)(k + ((NI)1));
						}
						LA28_: ;
						T30_.len = 0; T30_.p = NIM_NIL;
						{
							NimStringV2 colontmpD__2;
							if (!NIM_FALSE) goto LA33_;
							colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
							colontmpD__2 = dollar___stdZwidestrs_356(((NI16*) ((&f.cFileName[(((NI)0))- 0]))));
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							xx = nosextractFilename(colontmpD__2);
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							eqdestroy___stdZassertions_13((&colontmpD__2));
						}
						goto LA31_;
						LA33_: ;
						{
							NimStringV2 colontmpD__3;
							NimStringV2 colontmpD__4;
							colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
							colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
							colontmpD__3 = dollar___stdZwidestrs_356(((NI16*) ((&f.cFileName[(((NI)0))- 0]))));
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							colontmpD__4 = nosextractFilename(colontmpD__3);
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							xx = slash___stdZprivateZospaths50_90(dir, colontmpD__4);
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							eqdestroy___stdZassertions_13((&colontmpD__4));
							eqdestroy___stdZassertions_13((&colontmpD__3));
						}
						LA31_: ;
						kind = k;
						eqsink___stdZassertions_19((&path), xx);
						xx.len = 0; xx.p = NIM_NIL;
						switch (kind) {
						case ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0):
						case ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)1):
						case ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)3):
						{
							nosremoveFile(path);
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
						}
						break;
						case ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)2):
						{
							nosremoveDir(path, NIM_TRUE);
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
						}
						break;
						}
						{
							LA21_:;
						}
						{
							eqdestroy___stdZassertions_13((&xx));
						}
						if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
					}
					LA19_: ;
					{
						NI32 T42_;
						NI32 errCode;
						T42_ = (NI32)0;
						T42_ = Dl_1442840831_(h, (&f));
						if (!(T42_ == ((NI32)0))) goto LA43_;
						errCode = Dl_1442840748_();
						{
							if (!(errCode == ((NI32)18))) goto LA47_;
							goto LA14;
						}
						goto LA45_;
						LA47_: ;
						{
							raiseOSError__stdZoserrors_86(errCode, TM__UhMx4BhJKblm8VrPrbmAGA_9);
							if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
						}
						LA45_: ;
					}
					LA43_: ;
				}
			} LA14: ;
			{
				LA13_:;
			}
			{
				Dl_1442840834_(h);
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
		}
		LA3_: ;
		{
			LA2_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD_));
			eqdestroy___stdZassertions_13((&path));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	rawRemoveDir__stdZprivateZosdirs_391(dir);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, noscopyDir)(NimStringV2 source, NimStringV2 dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	noscreateDir(dest);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NimStringV2 path;
		NimStringV2 colontmpD_;
		tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ kind;
		tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA f;
		NI h;
		path.len = 0; path.p = NIM_NIL;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		kind = (tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0;
		nimZeroMem((void*)(&f), sizeof(tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA));
		colontmpD_ = slash___stdZprivateZospaths50_90(source, TM__UhMx4BhJKblm8VrPrbmAGA_10);
		if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
		h = findFirstFile__stdZprivateZoscommon_25(colontmpD_, (&f));
		if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
		{
			if (!(h == ((NI)-1))) goto LA5_;
			{
				NI32 T11_;
				if (!NIM_FALSE) goto LA9_;
				T11_ = (NI32)0;
				T11_ = osLastError__stdZoserrors_89();
				if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
				raiseOSError__stdZoserrors_86(T11_, source);
				if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
			}
			LA9_: ;
		}
		goto LA3_;
		LA5_: ;
		{
			{
				while (1) {
					tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ k;
					k = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0);
					{
						NIM_BOOL T18_;
						NimStringV2 xx;
						NimStringV2 noSource;
						NimStringV2 colontmpD__2;
						tyTuple__UV3llMMYFckfui8YMBuUZA colontmpD__3;
						NimStringV2 T30_;
						T18_ = (NIM_BOOL)0;
						T18_ = skipFindData__stdZprivateZoscommon_34((&f));
						if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
						if (!!(T18_)) goto LA19_;
						xx.len = 0; xx.p = NIM_NIL;
						noSource.len = 0; noSource.p = NIM_NIL;
						colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
						nimZeroMem((void*)(&colontmpD__3), sizeof(tyTuple__UV3llMMYFckfui8YMBuUZA));
						{
							if (!!(((NI32)(f.dwFileAttributes & ((NI32)16)) == ((NI32)0)))) goto LA24_;
							k = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)2);
						}
						LA24_: ;
						{
							if (!!(((NI32)(f.dwFileAttributes & ((NI32)1024)) == ((NI32)0)))) goto LA28_;
							k = (tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)(k + ((NI)1));
						}
						LA28_: ;
						T30_.len = 0; T30_.p = NIM_NIL;
						{
							NimStringV2 colontmpD__4;
							if (!NIM_FALSE) goto LA33_;
							colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
							colontmpD__4 = dollar___stdZwidestrs_356(((NI16*) ((&f.cFileName[(((NI)0))- 0]))));
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							xx = nosextractFilename(colontmpD__4);
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							eqdestroy___stdZassertions_13((&colontmpD__4));
						}
						goto LA31_;
						LA33_: ;
						{
							NimStringV2 colontmpD__5;
							NimStringV2 colontmpD__6;
							colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
							colontmpD__6.len = 0; colontmpD__6.p = NIM_NIL;
							colontmpD__5 = dollar___stdZwidestrs_356(((NI16*) ((&f.cFileName[(((NI)0))- 0]))));
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							colontmpD__6 = nosextractFilename(colontmpD__5);
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							xx = slash___stdZprivateZospaths50_90(source, colontmpD__6);
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							eqdestroy___stdZassertions_13((&colontmpD__6));
							eqdestroy___stdZassertions_13((&colontmpD__5));
						}
						LA31_: ;
						kind = k;
						eqsink___stdZassertions_19((&path), xx);
						xx.len = 0; xx.p = NIM_NIL;
						colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
						eqcopy___stdZassertions_16((&colontmpD__2), path);
						nossplitPath(colontmpD__2, (&colontmpD__3));
						if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
						eqcopy___stdZassertions_16((&noSource), colontmpD__3.Field1);
						{
							NimStringV2 colontmpD__7;
							if (!(kind == ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)2))) goto LA38_;
							colontmpD__7.len = 0; colontmpD__7.p = NIM_NIL;
							colontmpD__7 = slash___stdZprivateZospaths50_90(dest, noSource);
							if (NIM_UNLIKELY(*nimErr_)) goto LA40_;
							noscopyDir(path, colontmpD__7);
							if (NIM_UNLIKELY(*nimErr_)) goto LA40_;
							{
								LA40_:;
							}
							{
								eqdestroy___stdZassertions_13((&colontmpD__7));
							}
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
						}
						goto LA36_;
						LA38_: ;
						{
							NimStringV2 colontmpD__8;
							colontmpD__8.len = 0; colontmpD__8.p = NIM_NIL;
							colontmpD__8 = slash___stdZprivateZospaths50_90(dest, noSource);
							if (NIM_UNLIKELY(*nimErr_)) goto LA44_;
							noscopyFile(path, colontmpD__8, 1);
							if (NIM_UNLIKELY(*nimErr_)) goto LA44_;
							{
								LA44_:;
							}
							{
								eqdestroy___stdZassertions_13((&colontmpD__8));
							}
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
						}
						LA36_: ;
						{
							LA21_:;
						}
						{
							eqdestroy___stdZprivateZntpath_116((&colontmpD__3));
							eqdestroy___stdZassertions_13((&noSource));
							eqdestroy___stdZassertions_13((&xx));
						}
						if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
					}
					LA19_: ;
					{
						NI32 T51_;
						NI32 errCode;
						T51_ = (NI32)0;
						T51_ = Dl_1442840831_(h, (&f));
						if (!(T51_ == ((NI32)0))) goto LA52_;
						errCode = Dl_1442840748_();
						{
							if (!(errCode == ((NI32)18))) goto LA56_;
							goto LA14;
						}
						goto LA54_;
						LA56_: ;
						{
							raiseOSError__stdZoserrors_86(errCode, TM__UhMx4BhJKblm8VrPrbmAGA_11);
							if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
						}
						LA54_: ;
					}
					LA52_: ;
				}
			} LA14: ;
			{
				LA13_:;
			}
			{
				Dl_1442840834_(h);
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
		}
		LA3_: ;
		{
			LA2_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD_));
			eqdestroy___stdZassertions_13((&path));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, moveDir__stdZprivateZosdirs_434)(NimStringV2 source, NimStringV2 dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = tryMoveFSObject__stdZprivateZoscommon_61(source, dest, NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		noscopyDir(source, dest);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nosremoveDir(source, NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
