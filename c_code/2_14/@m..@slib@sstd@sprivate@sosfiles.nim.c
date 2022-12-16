/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
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
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyTuple__TQ46xUEmHnH4d7YweH4sAw tyTuple__TQ46xUEmHnH4d7YweH4sAw;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU8 tySet_tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg;
typedef NU8 tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg;
typedef NU8 tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg;
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
typedef NU16 tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA;
typedef NU8 tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA;
struct tyTuple__TQ46xUEmHnH4d7YweH4sAw {
NimStringV2 Field0;
tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA Field1;
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

      static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nostryRemoveFile)(NimStringV2 file);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_82)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_85)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryMoveFSObject__stdZprivateZoscommon_71)(NimStringV2 source, NimStringV2 dest, NIM_BOOL isDir);
N_LIB_PRIVATE N_NIMCALL(void, noscopyFile)(NimStringV2 source, NimStringV2 dest, tySet_tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg options);
static N_INLINE(NI, countBits32)(NU32 n);
static N_INLINE(NI, countSetBitsImpl__systemZcountbits95impl_26)(NU32 x);
N_CDECL(int, __builtin_popcount)(unsigned int x);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_224)(NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nossymlinkExists)(NimStringV2 link);
N_LIB_PRIVATE N_NIMCALL(void, createSymlink__stdZprivateZossymlinks_13)(NimStringV2 src, NimStringV2 dest);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, expandSymlink__stdZprivateZossymlinks_19)(NimStringV2 symlinkPath);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_403)(FILE** f, NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_242)(FILE* f);
N_LIB_PRIVATE N_NOCONV(void*, allocImpl__system_1735)(NI size);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__stdZsyncio_155)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__stdZsyncio_186)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NOCONV(void, dealloc)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, flushFile__stdZsyncio_251)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, nosremoveFile)(NimStringV2 file);
N_LIB_PRIVATE N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, popCurrentException)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_33)(Exception** dest, Exception* src, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(void, nossetFilePermissions)(NimStringV2 filename, tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA permissions, NIM_BOOL followSymlinks);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZosfiles_127)(tyTuple__TQ46xUEmHnH4d7YweH4sAw x);
N_LIB_PRIVATE N_NIMCALL(tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA, nosgetFilePermissions)(NimStringV2 filename);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static const struct {
  NI cap; NIM_CHAR data[108+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_2 = { 108 | NIM_STRLIT_FLAG, "osfiles.nim(217, 3) `card(copyFlagSymlink * options) == 1` There should be exactly one cfSymlink* in options" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_3 = {108, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_2};
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_4 = { 10 | NIM_STRLIT_FLAG, "fpUserExec" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_5 = {10, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_4};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_6 = { 11 | NIM_STRLIT_FLAG, "fpUserWrite" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_7 = {11, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_6};
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_8 = { 10 | NIM_STRLIT_FLAG, "fpUserRead" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_9 = {10, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_8};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_10 = { 11 | NIM_STRLIT_FLAG, "fpGroupExec" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_11 = {11, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_10};
static const struct {
  NI cap; NIM_CHAR data[12+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_12 = { 12 | NIM_STRLIT_FLAG, "fpGroupWrite" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_13 = {12, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_12};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_14 = { 11 | NIM_STRLIT_FLAG, "fpGroupRead" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_15 = {11, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_14};
static const struct {
  NI cap; NIM_CHAR data[12+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_16 = { 12 | NIM_STRLIT_FLAG, "fpOthersExec" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_17 = {12, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_16};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_18 = { 13 | NIM_STRLIT_FLAG, "fpOthersWrite" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_19 = {13, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_18};
static const struct {
  NI cap; NIM_CHAR data[12+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_20 = { 12 | NIM_STRLIT_FLAG, "fpOthersRead" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_21 = {12, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_20};
extern NIM_BOOL nimInErrorMode__system_3980;
extern Exception* currException__system_3654;
extern Exception* currException__system_3654;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nostryRemoveFile)(NimStringV2 file) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = NIM_TRUE;
	{
		NIM_BOOL T3_;
		int T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (int)0;
		T4_ = unlink(nimToCStringConv(file));
		T3_ = !((T4_ == ((NI32)0)));
		if (!(T3_)) goto LA5_;
		T3_ = !((errno == ENOENT));
		LA5_: ;
		if (!T3_) goto LA6_;
		result = NIM_FALSE;
	}
	LA6_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nosremoveFile)(NimStringV2 file) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		NI32 T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = nostryRemoveFile(file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_82(T6_, file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, noscopyFile)(NimStringV2 source, NimStringV2 dest, tySet_tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg options) {
	NIM_BOOL isSymlink;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!!((countBits32((7 & options)) == ((NI)1)))) goto LA3_;
		failedAssertImpl__stdZassertions_224(TM__CMIme9a8i2wZOUbxErcFpJA_3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	isSymlink = nossymlinkExists(source);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NIM_BOOL T7_;
		NIM_BOOL T9_;
		T7_ = (NIM_BOOL)0;
		T7_ = isSymlink;
		if (!(T7_)) goto LA8_;
		T9_ = (NIM_BOOL)0;
		T9_ = ((options &((NU8)1<<((NU)((((tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg)2)))&7U)))!=0);
		if (T9_) goto LA10_;
		T9_ = NIM_FALSE;
		LA10_: ;
		T7_ = T9_;
		LA8_: ;
		if (!T7_) goto LA11_;
		goto BeforeRet_;
	}
	LA11_: ;
	{
		NIM_BOOL T15_;
		NimStringV2 colontmpD_;
		T15_ = (NIM_BOOL)0;
		T15_ = isSymlink;
		if (!(T15_)) goto LA16_;
		T15_ = ((options &((NU8)1<<((NU)((((tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg)0)))&7U)))!=0);
		LA16_: ;
		if (!T15_) goto LA17_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD_ = expandSymlink__stdZprivateZossymlinks_19(source);
		if (NIM_UNLIKELY(*nimErr_)) goto LA19_;
		createSymlink__stdZprivateZossymlinks_13(colontmpD_, dest);
		if (NIM_UNLIKELY(*nimErr_)) goto LA19_;
		{
			LA19_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA13_;
	LA17_: ;
	{
		FILE* d;
		FILE* s;
		void* buf;
		d = (FILE*)0;
		s = (FILE*)0;
		{
			NIM_BOOL T25_;
			NI32 T28_;
			T25_ = (NIM_BOOL)0;
			T25_ = open__stdZsyncio_403(&s, source, ((tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg)0), ((NI)-1));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!!(T25_)) goto LA26_;
			T28_ = (NI32)0;
			T28_ = osLastError__stdZoserrors_85();
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			raiseOSError__stdZoserrors_82(T28_, source);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA26_: ;
		{
			NIM_BOOL T31_;
			NI32 T34_;
			T31_ = (NIM_BOOL)0;
			T31_ = open__stdZsyncio_403(&d, dest, ((tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg)1), ((NI)-1));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!!(T31_)) goto LA32_;
			close__stdZsyncio_242(s);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T34_ = (NI32)0;
			T34_ = osLastError__stdZoserrors_85();
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			raiseOSError__stdZoserrors_82(T34_, dest);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA32_: ;
		buf = allocImpl__system_1735(((NI)8000));
		{
			while (1) {
				NI bytesread;
				bytesread = readBuffer__stdZsyncio_155(s, buf, ((NI)8000));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				{
					NI byteswritten;
					if (!(((NI)0) < bytesread)) goto LA39_;
					byteswritten = writeBuffer__stdZsyncio_186(d, buf, ((NI) (bytesread)));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						NI32 T45_;
						if (!!((bytesread == byteswritten))) goto LA43_;
						dealloc(buf);
						close__stdZsyncio_242(s);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						close__stdZsyncio_242(d);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						T45_ = (NI32)0;
						T45_ = osLastError__stdZoserrors_85();
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						raiseOSError__stdZoserrors_82(T45_, dest);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					LA43_: ;
				}
				LA39_: ;
				{
					if (!!((bytesread == ((NI)8000)))) goto LA48_;
					goto LA35;
				}
				LA48_: ;
			}
		} LA35: ;
		dealloc(buf);
		close__stdZsyncio_242(s);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		flushFile__stdZsyncio_251(d);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		close__stdZsyncio_242(d);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA13_: ;
	}BeforeRet_: ;
}
static N_INLINE(void, popCurrentException)(void) {
	eqcopy___stdZassertions_33(&currException__system_3654, (*currException__system_3654).up, NIM_FALSE);
}
N_LIB_PRIVATE N_NIMCALL(void, nosmoveFile)(NimStringV2 source, NimStringV2 dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = tryMoveFSObject__stdZprivateZoscommon_71(source, dest, NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		noscopyFile(source, dest, 1);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nosremoveFile(source);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		if (NIM_UNLIKELY(*nimErr_)) {
			LA6_:;
			{
				NIM_BOOL T10_;
				*nimErr_ = NIM_FALSE;
				T10_ = (NIM_BOOL)0;
				T10_ = nostryRemoveFile(dest);
				if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
				(void)(T10_);
				reraiseException();
goto LA8_;
				popCurrentException();
				LA8_:;
			}
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZosfiles_30)(tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA e) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	switch (e) {
	case ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)0):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_5;
	}
	break;
	case ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)1):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_7;
	}
	break;
	case ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)2):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_9;
	}
	break;
	case ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)3):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_11;
	}
	break;
	case ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)4):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_13;
	}
	break;
	case ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)5):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_15;
	}
	break;
	case ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)6):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_17;
	}
	break;
	case ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)7):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_19;
	}
	break;
	case ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)8):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_21;
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nossetFilePermissions)(NimStringV2 filename, tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA permissions, NIM_BOOL followSymlinks) {
	mode_t p;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	p = ((mode_t)0);
	{
		if (!((permissions &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)2)))&15U)))!=0)) goto LA3_;
		p = (NU32)(p | ((mode_t) (S_IRUSR)));
	}
	LA3_: ;
	{
		if (!((permissions &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)1)))&15U)))!=0)) goto LA7_;
		p = (NU32)(p | ((mode_t) (S_IWUSR)));
	}
	LA7_: ;
	{
		if (!((permissions &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)0)))&15U)))!=0)) goto LA11_;
		p = (NU32)(p | ((mode_t) (S_IXUSR)));
	}
	LA11_: ;
	{
		if (!((permissions &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)5)))&15U)))!=0)) goto LA15_;
		p = (NU32)(p | ((mode_t) (S_IRGRP)));
	}
	LA15_: ;
	{
		if (!((permissions &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)4)))&15U)))!=0)) goto LA19_;
		p = (NU32)(p | ((mode_t) (S_IWGRP)));
	}
	LA19_: ;
	{
		if (!((permissions &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)3)))&15U)))!=0)) goto LA23_;
		p = (NU32)(p | ((mode_t) (S_IXGRP)));
	}
	LA23_: ;
	{
		if (!((permissions &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)8)))&15U)))!=0)) goto LA27_;
		p = (NU32)(p | ((mode_t) (S_IROTH)));
	}
	LA27_: ;
	{
		if (!((permissions &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)7)))&15U)))!=0)) goto LA31_;
		p = (NU32)(p | ((mode_t) (S_IWOTH)));
	}
	LA31_: ;
	{
		if (!((permissions &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)6)))&15U)))!=0)) goto LA35_;
		p = (NU32)(p | ((mode_t) (S_IXOTH)));
	}
	LA35_: ;
	{
		NIM_BOOL T39_;
		T39_ = (NIM_BOOL)0;
		T39_ = !(followSymlinks);
		if (!(T39_)) goto LA40_;
		T39_ = nossymlinkExists(filename);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		LA40_: ;
		if (!T39_) goto LA41_;
	}
	goto LA37_;
	LA41_: ;
	{
		{
			int T46_;
			NimStringV2 colontmpD_;
			NI32 T50_;
			tyTuple__TQ46xUEmHnH4d7YweH4sAw T51_;
			T46_ = (int)0;
			T46_ = chmod(nimToCStringConv(filename), ((mode_t) (p)));
			if (!!((T46_ == ((NI32)0)))) goto LA47_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			T50_ = (NI32)0;
			T50_ = osLastError__stdZoserrors_85();
			if (NIM_UNLIKELY(*nimErr_)) goto LA49_;
			T51_.Field0 = filename;
			T51_.Field1 = permissions;
			colontmpD_ = dollar___stdZprivateZosfiles_127(T51_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA49_;
			raiseOSError__stdZoserrors_82(T50_, colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA49_;
			{
				LA49_:;
			}
			{
				eqdestroy___stdZassertions_13((&colontmpD_));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA47_: ;
	}
	LA37_: ;
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
N_LIB_PRIVATE N_NIMCALL(tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA, nosgetFilePermissions)(NimStringV2 filename) {
	tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA result;
	struct stat a;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA));
	nimZeroMem((void*)(&a), sizeof(struct stat));
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = stat(nimToCStringConv(filename), (&a));
		if (!(T3_ < ((NI32)0))) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_82(T6_, filename);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	result = 0;
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IRUSR))) == ((mode_t)0)))) goto LA9_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)2))) & 15);
	}
	LA9_: ;
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IWUSR))) == ((mode_t)0)))) goto LA13_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)1))) & 15);
	}
	LA13_: ;
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IXUSR))) == ((mode_t)0)))) goto LA17_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)0))) & 15);
	}
	LA17_: ;
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IRGRP))) == ((mode_t)0)))) goto LA21_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)5))) & 15);
	}
	LA21_: ;
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IWGRP))) == ((mode_t)0)))) goto LA25_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)4))) & 15);
	}
	LA25_: ;
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IXGRP))) == ((mode_t)0)))) goto LA29_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)3))) & 15);
	}
	LA29_: ;
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IROTH))) == ((mode_t)0)))) goto LA33_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)8))) & 15);
	}
	LA33_: ;
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IWOTH))) == ((mode_t)0)))) goto LA37_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)7))) & 15);
	}
	LA37_: ;
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IXOTH))) == ((mode_t)0)))) goto LA41_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)6))) & 15);
	}
	LA41_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, copyFileWithPermissions__stdZprivateZosfiles_339)(NimStringV2 source, NimStringV2 dest, NIM_BOOL ignorePermissionErrors, tySet_tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg options) {
	tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	noscopyFile(source, dest, options);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = nosgetFilePermissions(source);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nossetFilePermissions(dest, T2_, ((options &((NU8)1<<((NU)((((tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg)1)))&7U)))!=0));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	if (NIM_UNLIKELY(*nimErr_)) {
		LA1_:;
		{
			*nimErr_ = NIM_FALSE;
			{
				if (!!(ignorePermissionErrors)) goto LA8_;
				reraiseException();
goto LA4_;
			}
			LA8_: ;
			popCurrentException();
			LA4_:;
		}
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
