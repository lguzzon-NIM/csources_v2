/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <unistd.h>
#include <string.h>
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
typedef struct tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef NU16 tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
typedef NU8 tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU8 tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg;
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__stdZsyncio_253)(FILE* f);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_230)(FILE* f, NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, ansiStyleCode__pureZterminal_333)(NI style);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, formatValue__pureZstrformat_170)(NimStringV2* result, NimStringV2 value, NimStringV2 specifier);
N_LIB_PRIVATE N_NIMCALL(void, formatValue__pureZterminal_210)(NimStringV2* result, NI value, NimStringV2 specifier);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_2 = { 2 | NIM_STRLIT_FLAG, "\033[" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_3 = {2, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_2};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_4 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_5 = {0, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_4};
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_6 = {0, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_7 = { 1 | NIM_STRLIT_FLAG, "m" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_8 = {1, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_7};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_9 = { 4 | NIM_STRLIT_FLAG, "\033[0m" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_10 = {4, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_9};
N_LIB_PRIVATE tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* gTerm__pureZterminal_12;
N_LIB_PRIVATE NI gFG__pureZterminal_316;
N_LIB_PRIVATE NI gBG__pureZterminal_317;
extern NIM_BOOL nimInErrorMode__system_3978;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3978);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty__pureZterminal_550)(FILE* f) {
	NIM_BOOL result;
	int T1_;
	int T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = getFileHandle__stdZsyncio_253(f);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (int)0;
	T2_ = isatty(T1_);
	result = !((T2_ == ((NI32)0)));
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, ansiStyleCode__pureZterminal_333)(NI style) {
	NimStringV2 result;
	NimStringV2 fmtRes;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	fmtRes.len = 0; fmtRes.p = NIM_NIL;
	fmtRes = rawNewString(((NI)41));
	formatValue__pureZstrformat_170((&fmtRes), TM__CN3raB9atujkEiPpxYAdlgQ_3, TM__CN3raB9atujkEiPpxYAdlgQ_5);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	formatValue__pureZterminal_210((&fmtRes), style, TM__CN3raB9atujkEiPpxYAdlgQ_6);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	prepareAdd((&fmtRes), 1);
appendString((&fmtRes), TM__CN3raB9atujkEiPpxYAdlgQ_8);
	result = fmtRes;
	fmtRes.len = 0; fmtRes.p = NIM_NIL;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&fmtRes));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setStyle__pureZterminal_351)(FILE* f, tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA style) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		tyEnum_Style__NXKayqTLMsAibFwNceBlpA s;
		NI i;
		s = (tyEnum_Style__NXKayqTLMsAibFwNceBlpA)0;
		i = ((NI)1);
		{
			while (1) {
				if (!(i <= ((NI)9))) goto LA3				;
				{
					NimStringV2 colontmpD_;
					if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) (i)) - 1))&15U)))!=0)) goto LA6_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					s = ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) (i));
					colontmpD_ = ansiStyleCode__pureZterminal_333(((NI) (s)));
					if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
					write__stdZsyncio_230(f, colontmpD_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
					{
						LA8_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD_));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				LA6_: ;
				i += ((NI)1);
			} LA3: ;
		}
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, resetAttributes__pureZterminal_318)(FILE* f) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	write__stdZsyncio_230(f, TM__CN3raB9atujkEiPpxYAdlgQ_10);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	gFG__pureZterminal_316 = ((NI)0);
	gBG__pureZterminal_317 = ((NI)0);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, setForegroundColor__pureZterminal_432)(FILE* f, tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg fg, NIM_BOOL bright) {
	NimStringV2 colontmpD_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	gFG__pureZterminal_316 = fg;
	{
		if (!bright) goto LA4_;
		gFG__pureZterminal_316 += ((NI)60);
	}
	LA4_: ;
	colontmpD_ = ansiStyleCode__pureZterminal_333(gFG__pureZterminal_316);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	write__stdZsyncio_230(f, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
