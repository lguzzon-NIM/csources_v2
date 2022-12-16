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
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};


#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringV2 s, NIM_CHAR sub, NI start, NI last);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7525)(NimStringV2 s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7537)(NimStringV2 s, NI first);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, libCandidates__pureZdynlib_56)(NimStringV2 s, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, add__stdZenumutils_69)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringV2 value);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
extern NIM_BOOL nimInErrorMode__system_4003;
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
	result = (&nimInErrorMode__system_4003);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, libCandidates__pureZdynlib_56)(NimStringV2 s, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest) {
	NI le;
	NI ri;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	le = nsuFindChar(s, 40, ((NI)0), ((NI)-1));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	ri = nsuFindChar(s, 41, ((NI) ((NI)(le + ((NI)1)))), ((NI)-1));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NIM_BOOL T3_;
		NimStringV2 prefix;
		NimStringV2 suffix;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI)0) <= le);
		if (!(T3_)) goto LA4_;
		T3_ = (le < ri);
		LA4_: ;
		if (!T3_) goto LA5_;
		prefix.len = 0; prefix.p = NIM_NIL;
		suffix.len = 0; suffix.p = NIM_NIL;
		prefix = substr__system_7525(s, ((NI)0), (NI)(le - ((NI)1)));
		suffix = substr__system_7537(s, (NI)(ri + ((NI)1)));
		{
			NimStringV2 middle;
			NimStringV2 colontmp_;
			NI lastX60gensym33_;
			NI splitsX60gensym33_;
			middle.len = 0; middle.p = NIM_NIL;
			colontmp_.len = 0; colontmp_.p = NIM_NIL;
			colontmp_ = substr__system_7525(s, (NI)(le + ((NI)1)), (NI)(ri - ((NI)1)));
			lastX60gensym33_ = ((NI)0);
			splitsX60gensym33_ = ((NI)-1);
			{
				while (1) {
					NimStringV2 colontmpD_;
					NI firstX60gensym33_;
					NimStringV2 T21_;
					NimStringV2 T22_;
					if (!(lastX60gensym33_ <= colontmp_.len)) goto LA11					;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					firstX60gensym33_ = lastX60gensym33_;
					{
						while (1) {
							NIM_BOOL T15_;
							T15_ = (NIM_BOOL)0;
							T15_ = (lastX60gensym33_ < colontmp_.len);
							if (!(T15_)) goto LA16_;
							T15_ = !(((NU8)(colontmp_.p->data[lastX60gensym33_]) == (NU8)(124)));
							LA16_: ;
							if (!T15_) goto LA14							;
							lastX60gensym33_ += ((NI)1);
						} LA14: ;
					}
					{
						if (!(splitsX60gensym33_ == ((NI)0))) goto LA19_;
						lastX60gensym33_ = colontmp_.len;
					}
					LA19_: ;
					T21_.len = 0; T21_.p = NIM_NIL;
					T21_ = substr__system_7525(colontmp_, firstX60gensym33_, (NI)(lastX60gensym33_ - ((NI)1)));
					eqsink___stdZassertions_19((&middle), T21_);
					T22_.len = 0; T22_.p = NIM_NIL;
					T22_ = rawNewString(prefix.len + middle.len + suffix.len + 0);
appendString((&T22_), prefix);
appendString((&T22_), middle);
appendString((&T22_), suffix);
					colontmpD_ = T22_;
					libCandidates__pureZdynlib_56(colontmpD_, dest);
					if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
					{
						if (!(splitsX60gensym33_ == ((NI)0))) goto LA25_;
						eqdestroy___stdZassertions_13((&colontmpD_));
						goto LA10;
					}
					LA25_: ;
					splitsX60gensym33_ -= ((NI)1);
					lastX60gensym33_ += ((NI)1);
					{
						LA12_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD_));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
				} LA11: ;
			} LA10: ;
			{
				LA9_:;
			}
			{
				eqdestroy___stdZassertions_13((&colontmp_));
				eqdestroy___stdZassertions_13((&middle));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		}
		{
			LA7_:;
		}
		{
			eqdestroy___stdZassertions_13((&suffix));
			eqdestroy___stdZassertions_13((&prefix));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		NimStringV2 colontmpD__2;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		eqcopy___stdZassertions_16((&colontmpD__2), s);
		add__stdZenumutils_69((&(*dest)), colontmpD__2);
	}
	LA1_: ;
	}BeforeRet_: ;
}
