/* Generated by Nim Compiler v1.7.3 */
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
typedef struct tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag {
NI32 module;
NI32 symId;
NI32 typeId_0;
NIM_BOOL sealed;
};
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__passaux_93)(NimStringV2* s, NI32 x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__passaux_130)(NimStringV2* s, NIM_BOOL x);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__US7tUPSVHwyWbwv9cB5DrpQ_2 = { 1 | NIM_STRLIT_FLAG, "(" };
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_3 = {1, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_2};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__US7tUPSVHwyWbwv9cB5DrpQ_4 = { 2 | NIM_STRLIT_FLAG, ", " };
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_5 = {2, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_4};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__US7tUPSVHwyWbwv9cB5DrpQ_6 = { 6 | NIM_STRLIT_FLAG, "module" };
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_7 = {6, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_6};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__US7tUPSVHwyWbwv9cB5DrpQ_8 = { 2 | NIM_STRLIT_FLAG, ": " };
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_9 = {2, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_8};
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_10 = {2, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_4};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__US7tUPSVHwyWbwv9cB5DrpQ_11 = { 5 | NIM_STRLIT_FLAG, "symId" };
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_12 = {5, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_11};
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_13 = {2, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_8};
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_14 = {2, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_4};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__US7tUPSVHwyWbwv9cB5DrpQ_15 = { 6 | NIM_STRLIT_FLAG, "typeId" };
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_16 = {6, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_15};
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_17 = {2, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_8};
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_18 = {2, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_4};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__US7tUPSVHwyWbwv9cB5DrpQ_19 = { 6 | NIM_STRLIT_FLAG, "sealed" };
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_20 = {6, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_19};
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_21 = {2, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_8};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__US7tUPSVHwyWbwv9cB5DrpQ_22 = { 1 | NIM_STRLIT_FLAG, ")" };
static const NimStringV2 TM__US7tUPSVHwyWbwv9cB5DrpQ_23 = {1, (NimStrPayload*)&TM__US7tUPSVHwyWbwv9cB5DrpQ_22};
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___passaux_67)(tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag x) {
	NimStringV2 result;
	NI countX60gensym0_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__US7tUPSVHwyWbwv9cB5DrpQ_3;
	countX60gensym0_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym0_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_5);
	}
	LA3_: ;
	prepareAdd((&result), 6);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_7);
	prepareAdd((&result), 2);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_9);
	countX60gensym0_ += ((NI)1);
	addQuoted__passaux_93((&result), x.module);
	{
		if (!(((NI)0) < countX60gensym0_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_10);
	}
	LA7_: ;
	prepareAdd((&result), 5);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_12);
	prepareAdd((&result), 2);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_13);
	countX60gensym0_ += ((NI)1);
	addQuoted__passaux_93((&result), x.symId);
	{
		if (!(((NI)0) < countX60gensym0_)) goto LA11_;
		prepareAdd((&result), 2);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_14);
	}
	LA11_: ;
	prepareAdd((&result), 6);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_16);
	prepareAdd((&result), 2);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_17);
	countX60gensym0_ += ((NI)1);
	addQuoted__passaux_93((&result), x.typeId_0);
	{
		if (!(((NI)0) < countX60gensym0_)) goto LA15_;
		prepareAdd((&result), 2);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_18);
	}
	LA15_: ;
	prepareAdd((&result), 6);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_20);
	prepareAdd((&result), 2);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_21);
	countX60gensym0_ += ((NI)1);
	addQuoted__passaux_130((&result), x.sealed);
	prepareAdd((&result), 1);
appendString((&result), TM__US7tUPSVHwyWbwv9cB5DrpQ_23);
	return result;
}