/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
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
typedef struct tyTuple__MuQpYKhupAt9a7EFKGkr9ayg tyTuple__MuQpYKhupAt9a7EFKGkr9ayg;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU8 tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ;
struct tyTuple__MuQpYKhupAt9a7EFKGkr9ayg {
tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ Field0;
NIM_BOOL Field1;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_85)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_82)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_78)(tyTuple__UV3llMMYFckfui8YMBuUZA* x);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileExists)(NimStringV2 filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
{	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&res), sizeof(struct stat));
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(nimToCStringConv(filename), (&res));
	T1_ = (((NI32)0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISREG(res.st_mode);
	LA3_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__MuQpYKhupAt9a7EFKGkr9ayg, getSymlinkFileKind__stdZprivateZoscommon_26)(NimStringV2 path) {
	tyTuple__MuQpYKhupAt9a7EFKGkr9ayg result;
	struct stat s;
	tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ colontmp_;
	NIM_BOOL colontmp__2;
	nimZeroMem((void*)(&result), sizeof(tyTuple__MuQpYKhupAt9a7EFKGkr9ayg));
	nimZeroMem((void*)(&s), sizeof(struct stat));
	colontmp_ = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)1);
	colontmp__2 = NIM_FALSE;
	result.Field0 = colontmp_;
	result.Field1 = colontmp__2;
	{
		int T3_;
		T3_ = (int)0;
		T3_ = stat(nimToCStringConv(path), (&s));
		if (!(T3_ == ((NI32)0))) goto LA4_;
		{
			NIM_BOOL T8_;
			tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ colontmp__3;
			NIM_BOOL colontmp__4;
			T8_ = (NIM_BOOL)0;
			T8_ = S_ISDIR(s.st_mode);
			if (!T8_) goto LA9_;
			colontmp__3 = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)3);
			colontmp__4 = NIM_FALSE;
			result.Field0 = colontmp__3;
			result.Field1 = colontmp__4;
		}
		goto LA6_;
		LA9_: ;
		{
			NIM_BOOL T12_;
			tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ colontmp__5;
			NIM_BOOL colontmp__6;
			T12_ = (NIM_BOOL)0;
			T12_ = S_ISREG(s.st_mode);
			if (!!(T12_)) goto LA13_;
			colontmp__5 = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)1);
			colontmp__6 = NIM_TRUE;
			result.Field0 = colontmp__5;
			result.Field1 = colontmp__6;
		}
		goto LA6_;
		LA13_: ;
		LA6_: ;
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosdirExists)(NimStringV2 dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&res), sizeof(struct stat));
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(nimToCStringConv(dir), (&res));
	T1_ = (((NI32)0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISDIR(res.st_mode);
	LA3_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nossymlinkExists)(NimStringV2 link) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&res), sizeof(struct stat));
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = lstat(nimToCStringConv(link), (&res));
	T1_ = (((NI32)0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISLNK(res.st_mode);
	LA3_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryMoveFSObject__stdZprivateZoscommon_71)(NimStringV2 source, NimStringV2 dest, NIM_BOOL isDir) {
	NIM_BOOL result;
	int T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = rename(nimToCStringConv(source), nimToCStringConv(dest));
	result = (T1_ == ((NI32)0));
	{
		NI32 err;
		NIM_BOOL isAccessDeniedError;
		if (!!(result)) goto LA4_;
		err = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		isAccessDeniedError = (err == EXDEV);
		{
			NimStringV2 colontmpD_;
			tyTuple__UV3llMMYFckfui8YMBuUZA T11_;
			if (!!(isAccessDeniedError)) goto LA8_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			T11_.Field0 = source;
			T11_.Field1 = dest;
			colontmpD_ = dollar___stdZprivateZoscommon_78((&T11_));
			if (NIM_UNLIKELY(*nimErr_)) goto LA10_;
			raiseOSError__stdZoserrors_82(err, colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA10_;
			{
				LA10_:;
			}
			{
				eqdestroy___stdZassertions_13((&colontmpD_));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA8_: ;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
