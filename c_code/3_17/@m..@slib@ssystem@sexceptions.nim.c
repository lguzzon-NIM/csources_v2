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
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ;
typedef struct tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ;
typedef struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyTuple__N4J9cV4JZGem3ljqqj5rT0Q;
typedef struct tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ;
typedef struct tyTuple__0F3Kz25HWtRatQmCDVHWEA tyTuple__0F3Kz25HWtRatQmCDVHWEA;
typedef struct tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw;
typedef struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA;
typedef struct tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg;
typedef struct tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw;
typedef struct tyObject_IOError__N09bhl56nRkUaUsonzshECg tyObject_IOError__N09bhl56nRkUaUsonzshECg;
typedef struct tyObject_EOFError__d9btBfCv6DANm6rubyJTljg tyObject_EOFError__d9btBfCv6DANm6rubyJTljg;
typedef struct tyObject_OverflowDefect__2PORNhst6IrjIwxgQkd4EA tyObject_OverflowDefect__2PORNhst6IrjIwxgQkd4EA;
typedef struct tyObject_ArithmeticDefect__LOkrIROjKUTubovxKzZX9cg tyObject_ArithmeticDefect__LOkrIROjKUTubovxKzZX9cg;
typedef struct tyObject_ReraiseDefect__5ox0D5RxdRRpQ8A9b4vF4AA tyObject_ReraiseDefect__5ox0D5RxdRRpQ8A9b4vF4AA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
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
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};
struct RootObj {
TNimTypeV2* m_type;
};
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
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
struct tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA {
  tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw Sup;
};
struct tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ {
NI len;
NI cap;
tyTuple__N4J9cV4JZGem3ljqqj5rT0Q* d;
};
struct tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ {
NI len;
NI cap;
tyTuple__0F3Kz25HWtRatQmCDVHWEA* d;
};
struct tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ {
tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ traceStack;
tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ toFree;
NI freed;
NI touched;
NI edges;
NI rcSum;
NIM_BOOL keepThreshold;
};
struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q {
void** Field0;
TNimTypeV2* Field1;
};
typedef tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyUncheckedArray__72XmdLy0QAaMtx66AmNKfA[1];
struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA {
  Exception Sup;
};
struct tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw {
  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;
};
struct tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg {
  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;
};
struct tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
NI32 errorCode;
};
struct tyObject_IOError__N09bhl56nRkUaUsonzshECg {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_EOFError__d9btBfCv6DANm6rubyJTljg {
  tyObject_IOError__N09bhl56nRkUaUsonzshECg Sup;
};
struct tyObject_ArithmeticDefect__LOkrIROjKUTubovxKzZX9cg {
  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;
};
struct tyObject_OverflowDefect__2PORNhst6IrjIwxgQkd4EA {
  tyObject_ArithmeticDefect__LOkrIROjKUTubovxKzZX9cg Sup;
};
struct tyObject_ReraiseDefect__5ox0D5RxdRRpQ8A9b4vF4AA {
  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;
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

      N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstrtabs_298)(tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA* dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3143)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_55)(tySequence__uB9b75OUPRENsBAu4AnoePA* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZstrtabs_307)(tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA* dest, void* env);
static N_INLINE(void, nimTraceRefDyn)(void* q, void* env);
static N_INLINE(void, add__system_2688)(tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ* s, void** c, TNimTypeV2* t);
N_LIB_PRIVATE N_NOCONV(void*, allocImpl__system_1735)(NI size);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOCONV(void, dealloc)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZassertions_64)(tySequence__uB9b75OUPRENsBAu4AnoePA* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_187)(tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZassertions_196)(tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_4246)(tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_4255)(tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZparseutils_327)(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZparseutils_336)(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZoserrors_58)(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZoserrors_67)(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_7623)(tyObject_IOError__N09bhl56nRkUaUsonzshECg* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_7632)(tyObject_IOError__N09bhl56nRkUaUsonzshECg* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZsyncio_111)(tyObject_EOFError__d9btBfCv6DANm6rubyJTljg* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZsyncio_120)(tyObject_EOFError__d9btBfCv6DANm6rubyJTljg* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_4552)(tyObject_OverflowDefect__2PORNhst6IrjIwxgQkd4EA* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_4561)(tyObject_OverflowDefect__2PORNhst6IrjIwxgQkd4EA* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_4053)(tyObject_ReraiseDefect__5ox0D5RxdRRpQ8A9b4vF4AA* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_4062)(tyObject_ReraiseDefect__5ox0D5RxdRRpQ8A9b4vF4AA* dest, void* env);
N_LIB_PRIVATE TNimTypeV2 NTIv2__3UUWz3XMhDptStqtPF49cMA_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__9cYzagMZd1aDrywuzegYBMw_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__W7zFbor8bJ1meM16OWPdYg_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__PeQ9bR8XhClb9cp9cbW28aSyw_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__N09bhl56nRkUaUsonzshECg_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__d9btBfCv6DANm6rubyJTljg_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__2PORNhst6IrjIwxgQkd4EA_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__5ox0D5RxdRRpQ8A9b4vF4AA_;
extern NIM_BOOL nimInErrorMode__system_3980;
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_2[5] = {3701606400, 1285336064, 3000110592, 3978211584, 1159122688};
N_LIB_PRIVATE TNimTypeV2 NTIv2__3UUWz3XMhDptStqtPF49cMA_ = {.destructor = (void*)eqdestroy___pureZstrtabs_298, .size = sizeof(tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA), .align = (NI16) NIM_ALIGNOF(tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA), .depth = 4, .display = TM__TzI3paKQY09cLjc9cmCvur3A_2, .traceImpl = (void*)eqtrace___pureZstrtabs_307, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_3[4] = {3701606400, 1285336064, 3079805440, 2363129856};
N_LIB_PRIVATE TNimTypeV2 NTIv2__9cYzagMZd1aDrywuzegYBMw_ = {.destructor = (void*)eqdestroy___stdZassertions_187, .size = sizeof(tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw), .align = (NI16) NIM_ALIGNOF(tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_3, .traceImpl = (void*)eqtrace___stdZassertions_196, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_4[4] = {3701606400, 1285336064, 3079805440, 3167055360};
N_LIB_PRIVATE TNimTypeV2 NTIv2__W7zFbor8bJ1meM16OWPdYg_ = {.destructor = (void*)eqdestroy___system_4246, .size = sizeof(tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg), .align = (NI16) NIM_ALIGNOF(tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_4, .traceImpl = (void*)eqtrace___system_4255, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_5[4] = {3701606400, 1285336064, 3000110592, 3978211584};
N_LIB_PRIVATE TNimTypeV2 NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_ = {.destructor = (void*)eqdestroy___pureZparseutils_327, .size = sizeof(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw), .align = (NI16) NIM_ALIGNOF(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_5, .traceImpl = (void*)eqtrace___pureZparseutils_336, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_6[4] = {3701606400, 1285336064, 3000110592, 3829286656};
N_LIB_PRIVATE TNimTypeV2 NTIv2__PeQ9bR8XhClb9cp9cbW28aSyw_ = {.destructor = (void*)eqdestroy___stdZoserrors_58, .size = sizeof(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw), .align = (NI16) NIM_ALIGNOF(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_6, .traceImpl = (void*)eqtrace___stdZoserrors_67, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_7[4] = {3701606400, 1285336064, 3000110592, 1335990016};
N_LIB_PRIVATE TNimTypeV2 NTIv2__N09bhl56nRkUaUsonzshECg_ = {.destructor = (void*)eqdestroy___system_7623, .size = sizeof(tyObject_IOError__N09bhl56nRkUaUsonzshECg), .align = (NI16) NIM_ALIGNOF(tyObject_IOError__N09bhl56nRkUaUsonzshECg), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_7, .traceImpl = (void*)eqtrace___system_7632, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_8[5] = {3701606400, 1285336064, 3000110592, 1335990016, 3946937344};
N_LIB_PRIVATE TNimTypeV2 NTIv2__d9btBfCv6DANm6rubyJTljg_ = {.destructor = (void*)eqdestroy___stdZsyncio_111, .size = sizeof(tyObject_EOFError__d9btBfCv6DANm6rubyJTljg), .align = (NI16) NIM_ALIGNOF(tyObject_EOFError__d9btBfCv6DANm6rubyJTljg), .depth = 4, .display = TM__TzI3paKQY09cLjc9cmCvur3A_8, .traceImpl = (void*)eqtrace___stdZsyncio_120, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_9[5] = {3701606400, 1285336064, 3079805440, 3911917824, 4086380032};
N_LIB_PRIVATE TNimTypeV2 NTIv2__2PORNhst6IrjIwxgQkd4EA_ = {.destructor = (void*)eqdestroy___system_4552, .size = sizeof(tyObject_OverflowDefect__2PORNhst6IrjIwxgQkd4EA), .align = (NI16) NIM_ALIGNOF(tyObject_OverflowDefect__2PORNhst6IrjIwxgQkd4EA), .depth = 4, .display = TM__TzI3paKQY09cLjc9cmCvur3A_9, .traceImpl = (void*)eqtrace___system_4561, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_10[4] = {3701606400, 1285336064, 3079805440, 2356416256};
N_LIB_PRIVATE TNimTypeV2 NTIv2__5ox0D5RxdRRpQ8A9b4vF4AA_ = {.destructor = (void*)eqdestroy___system_4053, .size = sizeof(tyObject_ReraiseDefect__5ox0D5RxdRRpQ8A9b4vF4AA), .align = (NI16) NIM_ALIGNOF(tyObject_ReraiseDefect__5ox0D5RxdRRpQ8A9b4vF4AA), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_10, .traceImpl = (void*)eqtrace___system_4062, .flags = 0};
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)16));
		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
		{
			if (!((NI)((*cell).rc & ((NI)-16)) == ((NI)0))) goto LA8_;
			result = NIM_TRUE;
		}
		goto LA6_;
		LA8_: ;
		{
			(*cell).rc -= ((NI)16);
		}
		LA6_: ;
		rememberCycle__system_3143(result, cell, (*((TNimTypeV2**) (p))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstrtabs_298)(tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).Sup.Sup.Sup.message));
	eqdestroy___stdZassertions_55((&(*dest).Sup.Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.Sup.up);
	}
	LA9_: ;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, add__system_2688)(tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ* s, void** c, TNimTypeV2* t) {
	void** colontmp_;
	TNimTypeV2* colontmp__2;
	{
		tyTuple__N4J9cV4JZGem3ljqqj5rT0Q* d;
		void* T5_;
		if (!((*s).cap <= (*s).len)) goto LA3_;
		(*s).cap = (NI)((NI)((*s).cap * ((NI)3)) / ((NI)2));
		T5_ = (void*)0;
		T5_ = allocImpl__system_1735(((NI) ((NI)((*s).cap * ((NI)16)))));
		d = ((tyTuple__N4J9cV4JZGem3ljqqj5rT0Q*) (T5_));
		copyMem__system_1719(((void*) (d)), ((void*) ((*s).d)), ((NI) ((NI)((*s).len * ((NI)16)))));
		dealloc(((void*) ((*s).d)));
		(*s).d = d;
	}
	LA3_: ;
	colontmp_ = c;
	colontmp__2 = t;
	(*s).d[(*s).len].Field0 = colontmp_;
	(*s).d[(*s).len].Field1 = colontmp__2;
	(*s).len += ((NI)1);
}
static N_INLINE(void, nimTraceRefDyn)(void* q, void* env) {
	void** p;
	p = ((void**) (q));
	{
		tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ* j;
		if (!!(((*p) == NIM_NIL))) goto LA3_;
		j = ((tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ*) (env));
		add__system_2688((&(*j).traceStack), p, (*((TNimTypeV2**) ((*p)))));
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZstrtabs_307)(tyObject_KeyError__3UUWz3XMhDptStqtPF49cMA* dest, void* env) {
	nimTraceRefDyn(&(*dest).Sup.Sup.Sup.parent, env);
	eqtrace___stdZassertions_64((&(*dest).Sup.Sup.Sup.trace), env);
	nimTraceRefDyn(&(*dest).Sup.Sup.Sup.up, env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_187)(tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).Sup.Sup.message));
	eqdestroy___stdZassertions_55((&(*dest).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.up);
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZassertions_196)(tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw* dest, void* env) {
	nimTraceRefDyn(&(*dest).Sup.Sup.parent, env);
	eqtrace___stdZassertions_64((&(*dest).Sup.Sup.trace), env);
	nimTraceRefDyn(&(*dest).Sup.Sup.up, env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_4246)(tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).Sup.Sup.message));
	eqdestroy___stdZassertions_55((&(*dest).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.up);
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_4255)(tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg* dest, void* env) {
	nimTraceRefDyn(&(*dest).Sup.Sup.parent, env);
	eqtrace___stdZassertions_64((&(*dest).Sup.Sup.trace), env);
	nimTraceRefDyn(&(*dest).Sup.Sup.up, env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZparseutils_327)(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).Sup.Sup.message));
	eqdestroy___stdZassertions_55((&(*dest).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.up);
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZparseutils_336)(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw* dest, void* env) {
	nimTraceRefDyn(&(*dest).Sup.Sup.parent, env);
	eqtrace___stdZassertions_64((&(*dest).Sup.Sup.trace), env);
	nimTraceRefDyn(&(*dest).Sup.Sup.up, env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZoserrors_58)(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).Sup.Sup.message));
	eqdestroy___stdZassertions_55((&(*dest).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.up);
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZoserrors_67)(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw* dest, void* env) {
	nimTraceRefDyn(&(*dest).Sup.Sup.parent, env);
	eqtrace___stdZassertions_64((&(*dest).Sup.Sup.trace), env);
	nimTraceRefDyn(&(*dest).Sup.Sup.up, env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_7623)(tyObject_IOError__N09bhl56nRkUaUsonzshECg* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).Sup.Sup.message));
	eqdestroy___stdZassertions_55((&(*dest).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.up);
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_7632)(tyObject_IOError__N09bhl56nRkUaUsonzshECg* dest, void* env) {
	nimTraceRefDyn(&(*dest).Sup.Sup.parent, env);
	eqtrace___stdZassertions_64((&(*dest).Sup.Sup.trace), env);
	nimTraceRefDyn(&(*dest).Sup.Sup.up, env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZsyncio_111)(tyObject_EOFError__d9btBfCv6DANm6rubyJTljg* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).Sup.Sup.Sup.message));
	eqdestroy___stdZassertions_55((&(*dest).Sup.Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.Sup.up);
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZsyncio_120)(tyObject_EOFError__d9btBfCv6DANm6rubyJTljg* dest, void* env) {
	nimTraceRefDyn(&(*dest).Sup.Sup.Sup.parent, env);
	eqtrace___stdZassertions_64((&(*dest).Sup.Sup.Sup.trace), env);
	nimTraceRefDyn(&(*dest).Sup.Sup.Sup.up, env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_4552)(tyObject_OverflowDefect__2PORNhst6IrjIwxgQkd4EA* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).Sup.Sup.Sup.message));
	eqdestroy___stdZassertions_55((&(*dest).Sup.Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.Sup.up);
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_4561)(tyObject_OverflowDefect__2PORNhst6IrjIwxgQkd4EA* dest, void* env) {
	nimTraceRefDyn(&(*dest).Sup.Sup.Sup.parent, env);
	eqtrace___stdZassertions_64((&(*dest).Sup.Sup.Sup.trace), env);
	nimTraceRefDyn(&(*dest).Sup.Sup.Sup.up, env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_4053)(tyObject_ReraiseDefect__5ox0D5RxdRRpQ8A9b4vF4AA* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).Sup.Sup.message));
	eqdestroy___stdZassertions_55((&(*dest).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.up);
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_4062)(tyObject_ReraiseDefect__5ox0D5RxdRRpQ8A9b4vF4AA* dest, void* env) {
	nimTraceRefDyn(&(*dest).Sup.Sup.parent, env);
	eqtrace___stdZassertions_64((&(*dest).Sup.Sup.trace), env);
	nimTraceRefDyn(&(*dest).Sup.Sup.up, env);
}
