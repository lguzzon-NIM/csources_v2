/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
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
typedef struct tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw;
typedef struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
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
struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA {
  Exception Sup;
};
struct tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw {
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

      N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__stdZassertions_27)(NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
extern TNimTypeV2 NTIv2__9cYzagMZd1aDrywuzegYBMw_;
extern NIM_BOOL nimInErrorMode__system_4004;
N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__stdZassertions_27)(NimStringV2 msg) {
	NimStringV2 colontmpD_;
	tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw* T1_;
{	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = (tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw*) nimNewObj(sizeof(tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw), NIM_ALIGNOF(tyObject_AssertionDefect__9cYzagMZd1aDrywuzegYBMw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIv2__9cYzagMZd1aDrywuzegYBMw_);
	(*T1_).Sup.Sup.name = "AssertionDefect";
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	eqcopy___stdZassertions_16((&colontmpD_), msg);
	(*T1_).Sup.Sup.message = colontmpD_;
	(*T1_).Sup.Sup.parent = ((Exception*) NIM_NIL);
	raiseExceptionEx((Exception*)T1_, "AssertionDefect", "raiseAssert", "assertions.nim", 31);
goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4004);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_224)(NimStringV2 msg) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	raiseAssert__stdZassertions_27(msg);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
