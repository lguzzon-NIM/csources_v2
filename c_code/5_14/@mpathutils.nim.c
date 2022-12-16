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
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
};
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosrelativePath)(NimStringV2 path, NimStringV2 base, NIM_CHAR sep);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NIM_BOOL, eqImpl__pathutils_92)(NimStringV2 x, NimStringV2 y);
N_LIB_PRIVATE N_NIMCALL(NI, noscmpPaths)(NimStringV2 pathA, NimStringV2 pathB);
static N_INLINE(NIM_BOOL, isEmpty__pathutils_107)(NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetCurrentDir)(void);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_77)(NimStringV2 x, NimStringV2* result, NI* state, NIM_CHAR dirSep);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringV2 path);
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_91)(NimStringV2 head, NimStringV2 tail);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosjoinPath)(NimStringV2 head, NimStringV2 tail);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringV2 path, tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* Result);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, slash___pathutils_103)(NimStringV2 base, NimStringV2 f);
extern NIM_BOOL nimInErrorMode__system_3994;
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___options_5279)(NimStringV2 x) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	eqcopy___stdZassertions_16((&colontmpD_), x);
	result = colontmpD_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___options_5373)(NimStringV2 x) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	eqcopy___stdZassertions_16((&colontmpD_), x);
	result = colontmpD_;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, relativeTo__pathutils_152)(NimStringV2 fullPath, NimStringV2 baseFilename, NIM_CHAR sep) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = nosrelativePath(fullPath, baseFilename, sep);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, eqImpl__pathutils_92)(NimStringV2 x, NimStringV2 y) {
	NIM_BOOL result;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = noscmpPaths(x, y);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (T1_ == ((NI)0));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___options_4977)(NimStringV2 x, NimStringV2 y) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	result = eqImpl__pathutils_92(x, y);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, isEmpty__pathutils_107)(NimStringV2 x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (x.len == ((NI)0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, slash___pathutils_128)(NimStringV2 base, NimStringV2 f) {
	NimStringV2 result;
	NimStringV2 base_2;
	NimStringV2 T2_;
	NI state;
	NimStringV2 T9_;
	NimStringV2 T10_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	base_2.len = 0; base_2.p = NIM_NIL;
	T2_.len = 0; T2_.p = NIM_NIL;
	{
		NIM_BOOL T5_;
		T5_ = (NIM_BOOL)0;
		T5_ = isEmpty__pathutils_107(base);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!T5_) goto LA6_;
		base_2 = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	goto LA3_;
	LA6_: ;
	{
		eqcopy___stdZassertions_16((&base_2), base);
	}
	LA3_: ;
	result = rawNewString(((NI) ((NI)(base_2.len + f.len))));
	state = ((NI)0);
	T9_.len = 0; T9_.p = NIM_NIL;
	T9_ = base_2;
	addNormalizePath__pureZpathnorm_77(T9_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T10_.len = 0; T10_.p = NIM_NIL;
	T10_ = f;
	addNormalizePath__pureZpathnorm_77(T10_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&base_2));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_91)(NimStringV2 head, NimStringV2 tail) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = nosjoinPath(head, tail);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toAbsoluteDir__pathutils_85)(NimStringV2 path) {
	NimStringV2 result;
	NimStringV2 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	T1_.len = 0; T1_.p = NIM_NIL;
	{
		NIM_BOOL T4_;
		NimStringV2 colontmpD_;
		T4_ = (NIM_BOOL)0;
		T4_ = nosisAbsolute(path);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T4_) goto LA5_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		eqcopy___stdZassertions_16((&colontmpD_), path);
		result = colontmpD_;
	}
	goto LA2_;
	LA5_: ;
	{
		NimStringV2 colontmpD__2;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		colontmpD__2 = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
		result = slash___stdZprivateZospaths50_91(colontmpD__2, path);
		if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
		{
			LA8_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__2));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA2_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, slash___pathutils_103)(NimStringV2 base, NimStringV2 f) {
	NimStringV2 result;
	NimStringV2 base_2;
	NimStringV2 T2_;
	NI state;
	NimStringV2 T9_;
	NimStringV2 T10_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	base_2.len = 0; base_2.p = NIM_NIL;
	T2_.len = 0; T2_.p = NIM_NIL;
	{
		NIM_BOOL T5_;
		T5_ = (NIM_BOOL)0;
		T5_ = isEmpty__pathutils_107(base);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!T5_) goto LA6_;
		base_2 = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	goto LA3_;
	LA6_: ;
	{
		eqcopy___stdZassertions_16((&base_2), base);
	}
	LA3_: ;
	result = rawNewString(((NI) ((NI)(base_2.len + f.len))));
	state = ((NI)0);
	T9_.len = 0; T9_.p = NIM_NIL;
	T9_ = base_2;
	addNormalizePath__pureZpathnorm_77(T9_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T10_.len = 0; T10_.p = NIM_NIL;
	T10_ = f;
	addNormalizePath__pureZpathnorm_77(T10_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&base_2));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
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
N_LIB_PRIVATE N_NIMCALL(void, splitFile__pathutils_31)(NimStringV2 x, tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* Result) {
	tyTuple__7q7q3E6Oj24ZNVJb9aonhAg colontmp_;
	NimStringV2 a;
	NimStringV2 b;
	NimStringV2 c;
	NimStringV2 colontmp__2;
	NimStringV2 colontmp__3;
	NimStringV2 colontmp__4;
	NimStringV2 blitTmp;
	NimStringV2 blitTmp_2;
	NimStringV2 blitTmp_3;
	NimStringV2 blitTmp_4;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&colontmp_), sizeof(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg));
	a.len = 0; a.p = NIM_NIL;
	b.len = 0; b.p = NIM_NIL;
	c.len = 0; c.p = NIM_NIL;
	colontmp__2.len = 0; colontmp__2.p = NIM_NIL;
	colontmp__3.len = 0; colontmp__3.p = NIM_NIL;
	colontmp__4.len = 0; colontmp__4.p = NIM_NIL;
	nossplitFile(x, (&colontmp_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	a = colontmp_.Field0;
	b = colontmp_.Field1;
	c = colontmp_.Field2;
	blitTmp = a;
	colontmp__2 = blitTmp;
	colontmp__3 = b;
	colontmp__4 = c;
	blitTmp_2 = colontmp__2;
	(*Result).Field0 = blitTmp_2;
	blitTmp_3 = colontmp__3;
	(*Result).Field1 = blitTmp_3;
	blitTmp_4 = colontmp__4;
	(*Result).Field2 = blitTmp_4;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pathutils_55)(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* dest) {
	eqdestroy___stdZassertions_13((&(*dest).Field0));
	eqdestroy___stdZassertions_13((&(*dest).Field1));
	eqdestroy___stdZassertions_13((&(*dest).Field2));
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___nimconf_314)(NimStringV2 x, NimStringV2 y) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	result = eqImpl__pathutils_92(x, y);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___nimconf_454)(NimStringV2 x, NimStringV2 y) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	result = eqImpl__pathutils_92(x, y);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___docgen_13130)(NimStringV2 x) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	eqcopy___stdZassertions_16((&colontmpD_), x);
	result = colontmpD_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toAbsolute__pathutils_157)(NimStringV2 file, NimStringV2 base) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	{
		NIM_BOOL T3_;
		NimStringV2 colontmpD_;
		T3_ = (NIM_BOOL)0;
		T3_ = nosisAbsolute(file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		eqcopy___stdZassertions_16((&colontmpD_), file);
		result = colontmpD_;
	}
	goto LA1_;
	LA4_: ;
	{
		result = slash___pathutils_103(base, file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
