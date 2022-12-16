/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64
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
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__pureZxmltree_681)(NimStringV2* result, NimStringV2 s);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2 = { 4 | NIM_STRLIT_FLAG, "&lt;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3 = {4, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4 = { 4 | NIM_STRLIT_FLAG, "&gt;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5 = {4, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6 = { 5 | NIM_STRLIT_FLAG, "&amp;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7 = {5, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8 = { 6 | NIM_STRLIT_FLAG, "&quot;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9 = {6, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_10 = { 6 | NIM_STRLIT_FLAG, "&apos;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_11 = {6, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_10};
extern NIM_BOOL nimInErrorMode__system_3980;
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
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
}
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__pureZxmltree_681)(NimStringV2* result, NimStringV2 s) {
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI)0);
		L = s.len;
		{
			while (1) {
				if (!(i < L)) goto LA3				;
				c = s.p->data[i];
				switch (((NU8)(c))) {
				case 60:
				{
					prepareAdd((&(*result)), 4);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3);
				}
				break;
				case 62:
				{
					prepareAdd((&(*result)), 4);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5);
				}
				break;
				case 38:
				{
					prepareAdd((&(*result)), 5);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7);
				}
				break;
				case 34:
				{
					prepareAdd((&(*result)), 6);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9);
				}
				break;
				case 39:
				{
					prepareAdd((&(*result)), 6);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_11);
				}
				break;
				default:
				{
					nimAddCharV1((&(*result)), c);
				}
				break;
				}
				i += ((NI)1);
			} LA3: ;
		}
	}
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, escape__pureZxmltree_685)(NimStringV2 s) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = rawNewString(((NI) (s.len)));
	addEscaped__pureZxmltree_681((&result), s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
