/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64

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
typedef struct tySequence__lBgZ7a89beZGYPl8PiANMTA tySequence__lBgZ7a89beZGYPl8PiANMTA;
typedef struct tySequence__lBgZ7a89beZGYPl8PiANMTA_Content tySequence__lBgZ7a89beZGYPl8PiANMTA_Content;
struct tySequence__lBgZ7a89beZGYPl8PiANMTA {
  NI len; tySequence__lBgZ7a89beZGYPl8PiANMTA_Content* p;
};


#ifndef tySequence__lBgZ7a89beZGYPl8PiANMTA_Content_PP
#define tySequence__lBgZ7a89beZGYPl8PiANMTA_Content_PP
struct tySequence__lBgZ7a89beZGYPl8PiANMTA_Content { NI cap; NIM_CHAR data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p, NI align);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZosproc_1102)(tySequence__lBgZ7a89beZGYPl8PiANMTA* dest) {
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest).p, NIM_ALIGNOF(NIM_CHAR));
}
}
