/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 32

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
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_224)(NimStringV2 msg);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuReplaceChar)(NimStringV2 s, NIM_CHAR sub, NIM_CHAR by);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static const struct {
  NI cap; NIM_CHAR data[77+1];
} TM__ZF8ppk9aofq5DcpfJb2DIsg_2 = { 77 | NIM_STRLIT_FLAG, "globs.nim(63, 9) `false` paths like `C:foo` are currently unsupported, path: " };
static const NimStringV2 TM__ZF8ppk9aofq5DcpfJb2DIsg_3 = {77, (NimStrPayload*)&TM__ZF8ppk9aofq5DcpfJb2DIsg_2};
extern NIM_BOOL nimInErrorMode__system_3980;
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s).p).cap & ((NI)1073741824)) == ((NI)1073741824));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_2301(s);
	}
	LA5_: ;
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
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nativeToUnixPath__stdZprivateZglobs_77)(NimStringV2 path) {
	NimStringV2 result;
	NimStringV2 T20_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	eqcopy___stdZassertions_16((&result), path);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (((NI)2) <= path.len);
		if (!(T4_)) goto LA5_;
		T4_ = (((NU8)(path.p->data[((NI)0)])) >= ((NU8)(97)) && ((NU8)(path.p->data[((NI)0)])) <= ((NU8)(122)) || ((NU8)(path.p->data[((NI)0)])) >= ((NU8)(65)) && ((NU8)(path.p->data[((NI)0)])) <= ((NU8)(90)));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)(path.p->data[((NI)1)]) == (NU8)(58));
		LA6_: ;
		if (!T3_) goto LA7_;
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)0)] = 47;
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)1)] = path.p->data[((NI)0)];
		{
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (((NI)2) < path.len);
			if (!(T11_)) goto LA12_;
			T11_ = !(((NU8)(path.p->data[((NI)2)]) == (NU8)(92)));
			LA12_: ;
			if (!T11_) goto LA13_;
			{
				NimStringV2 colontmpD_;
				NimStringV2 T19_;
				if (!NIM_TRUE) goto LA17_;
				colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
				T19_.len = 0; T19_.p = NIM_NIL;
				T19_ = rawNewString(path.len + 77);
appendString((&T19_), TM__ZF8ppk9aofq5DcpfJb2DIsg_3);
appendString((&T19_), path);
				colontmpD_ = T19_;
				failedAssertImpl__stdZassertions_224(colontmpD_);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				eqdestroy___stdZassertions_13((&colontmpD_));
			}
			LA17_: ;
		}
		LA13_: ;
	}
	LA7_: ;
	T20_.len = 0; T20_.p = NIM_NIL;
	T20_ = nsuReplaceChar(result, 92, 47);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqsink___stdZassertions_19((&result), T20_);
	}BeforeRet_: ;
	return result;
}
