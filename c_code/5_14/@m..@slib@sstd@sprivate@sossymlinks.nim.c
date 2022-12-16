/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <unistd.h>
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
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_82)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_85)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_78)(tyTuple__UV3llMMYFckfui8YMBuUZA* x);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_NIMCALL(NimStringV2, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
extern NIM_BOOL nimInErrorMode__system_3994;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, createSymlink__stdZprivateZossymlinks_13)(NimStringV2 src, NimStringV2 dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		int T3_;
		NimStringV2 colontmpD_;
		NI32 T7_;
		tyTuple__UV3llMMYFckfui8YMBuUZA T8_;
		T3_ = (int)0;
		T3_ = symlink(nimToCStringConv(src), nimToCStringConv(dest));
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		T7_ = (NI32)0;
		T7_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		T8_.Field0 = src;
		T8_.Field1 = dest;
		colontmpD_ = dollar___stdZprivateZoscommon_78((&T8_));
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		raiseOSError__stdZoserrors_82(T7_, colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, expandSymlink__stdZprivateZossymlinks_19)(NimStringV2 symlinkPath) {
	NimStringV2 result;
	NI len;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = mnewString(((NI)1024));
	len = readlink(nimToCStringConv(symlinkPath), nimToCStringConv(result), ((NI)1024));
	{
		NI32 T5_;
		if (!(len < ((NI)0))) goto LA3_;
		T5_ = (NI32)0;
		T5_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_82(T5_, symlinkPath);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	{
		NimStringV2 T10_;
		if (!(((NI)1024) < len)) goto LA8_;
		T10_.len = 0; T10_.p = NIM_NIL;
		T10_ = mnewString(((NI) ((NI)(len + ((NI)1)))));
		eqsink___stdZassertions_19((&result), T10_);
		len = readlink(nimToCStringConv(symlinkPath), nimToCStringConv(result), len);
	}
	LA8_: ;
	setLengthStrV2((&result), ((NI) (len)));
	}BeforeRet_: ;
	return result;
}
