/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

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
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toHex__pureZstrutils_1991)(NI x, NI len);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__VzbRQH9cb1xm1tSKH4PwBSw_2 = { 1 | NIM_STRLIT_FLAG, "+" };
static const NimStringV2 TM__VzbRQH9cb1xm1tSKH4PwBSw_3 = {1, (NimStrPayload*)&TM__VzbRQH9cb1xm1tSKH4PwBSw_2};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__VzbRQH9cb1xm1tSKH4PwBSw_4 = { 3 | NIM_STRLIT_FLAG, "%20" };
static const NimStringV2 TM__VzbRQH9cb1xm1tSKH4PwBSw_5 = {3, (NimStrPayload*)&TM__VzbRQH9cb1xm1tSKH4PwBSw_4};
extern NIM_BOOL nimInErrorMode__system_3994;
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
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
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, encodeUrl__pureZuri_60)(NimStringV2 s, NIM_BOOL usePlus) {
	NimStringV2 result;
	NimStringV2 fromSpace;
	NimStringV2 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	fromSpace.len = 0; fromSpace.p = NIM_NIL;
	result = rawNewString(((NI) ((NI)(s.len + (NI)((NI32)(s.len) >> (NU32)(((NI)2)))))));
	T1_.len = 0; T1_.p = NIM_NIL;
	{
		if (!usePlus) goto LA4_;
		fromSpace = TM__VzbRQH9cb1xm1tSKH4PwBSw_3;
	}
	goto LA2_;
	LA4_: ;
	{
		fromSpace = TM__VzbRQH9cb1xm1tSKH4PwBSw_5;
	}
	LA2_: ;
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI)0);
		L = s.len;
		{
			while (1) {
				if (!(i < L)) goto LA9				;
				c = s.p->data[i];
				switch (((NU8)(c))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 45:
				case 46:
				case 95:
				case 126:
				{
					nimAddCharV1((&result), c);
				}
				break;
				case 32:
				{
					prepareAdd((&result), fromSpace.len + 0);
appendString((&result), fromSpace);
				}
				break;
				default:
				{
					NimStringV2 colontmpD_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					nimAddCharV1((&result), 37);
					colontmpD_ = toHex__pureZstrutils_1991(((NU8)(c)), ((NI)2));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					prepareAdd((&result), colontmpD_.len + 0);
appendString((&result), colontmpD_);
					eqdestroy___stdZassertions_13((&colontmpD_));
				}
				break;
				}
				i += ((NI)1);
			} LA9: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
