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
typedef struct tyObject_SystemInfo__f4Lhi7eyAk75xViiIQxzwA tyObject_SystemInfo__f4Lhi7eyAk75xViiIQxzwA;
struct tyObject_SystemInfo__f4Lhi7eyAk75xViiIQxzwA {
NU32 u1;
NU32 dwPageSize;
void* lpMinimumApplicationAddress;
void* lpMaximumApplicationAddress;
NU32* dwActiveProcessorMask;
NU32 dwNumberOfProcessors;
NU32 dwProcessorType;
NU32 dwAllocationGranularity;
NU16 wProcessorLevel;
NU16 wProcessorRevision;
};
typedef N_STDCALL_PTR(void, tyProc__XREkURzNQL2Z5IyS3U7xYw) (tyObject_SystemInfo__f4Lhi7eyAk75xViiIQxzwA* lpSystemInfo);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
extern NIM_BOOL nimInErrorMode__system_3980;
extern tyProc__XREkURzNQL2Z5IyS3U7xYw Dl_2566914060_;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	tyObject_SystemInfo__f4Lhi7eyAk75xViiIQxzwA si;
	result = (NI)0;
	nimZeroMem((void*)(&si), sizeof(tyObject_SystemInfo__f4Lhi7eyAk75xViiIQxzwA));
	Dl_2566914060_((&si));
	result = ((NI) (si.dwNumberOfProcessors));
	{
		if (!(result <= ((NI)0))) goto LA3_;
		result = ((NI)0);
	}
	LA3_: ;
	return result;
}
