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
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_TContext__QUPFyDhhyyn3RQbxNbH7xg tyObject_TContext__QUPFyDhhyyn3RQbxNbH7xg;
typedef struct tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef N_NIMCALL_PTR(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, tyProc__Ntct9cf2liy0XMGfc9cIbU8w) (tyObject_TContext__QUPFyDhhyyn3RQbxNbH7xg* c, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
tyProc__Ntct9cf2liy0XMGfc9cIbU8w Field3;
};
typedef tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw tyArray__UZPFH0eh9cBzbE46WzzzQFQ[2];
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, iterToProcImpl__pluginsZitersgen_7)(tyObject_TContext__QUPFyDhhyyn3RQbxNbH7xg* c, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, semLocals__pluginsZlocals_7)(tyObject_TContext__QUPFyDhhyyn3RQbxNbH7xg* c, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, pluginMatches__pluginsupport_18)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw* p, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s);
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__HRYz2qtwWw9bfj4ZuGqghLw_2 = { 6 | NIM_STRLIT_FLAG, "stdlib" };
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__HRYz2qtwWw9bfj4ZuGqghLw_3 = { 6 | NIM_STRLIT_FLAG, "system" };
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__HRYz2qtwWw9bfj4ZuGqghLw_4 = { 10 | NIM_STRLIT_FLAG, "iterToProc" };
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__HRYz2qtwWw9bfj4ZuGqghLw_5 = { 6 | NIM_STRLIT_FLAG, "locals" };
N_LIB_PRIVATE NIM_CONST tyArray__UZPFH0eh9cBzbE46WzzzQFQ plugins__pluginsZactive_6 = {{{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_2},
{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_3},
{10, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_4},
iterToProcImpl__pluginsZitersgen_7}
,
{{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_2},
{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_3},
{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_5},
semLocals__pluginsZlocals_7}
}
;
extern NIM_BOOL nimInErrorMode__system_3980;
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
N_LIB_PRIVATE N_NIMCALL(tyProc__Ntct9cf2liy0XMGfc9cIbU8w, getPlugin__pluginsZactive_45)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* fn) {
	tyProc__Ntct9cf2liy0XMGfc9cIbU8w result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyProc__Ntct9cf2liy0XMGfc9cIbU8w)0;
	{
		tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw p;
		NI i;
		nimZeroMem((void*)(&p), sizeof(tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw));
		i = ((NI)0);
		{
			while (1) {
				p = plugins__pluginsZactive_6[(i)- 0];
				{
					NIM_BOOL T6_;
					T6_ = (NIM_BOOL)0;
					T6_ = pluginMatches__pluginsupport_18(ic, (&p), fn);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					if (!T6_) goto LA7_;
					result = p.Field3;
					goto BeforeRet_;
				}
				LA7_: ;
				{
					if (!(((NI)1) <= ((NI) (i)))) goto LA11_;
					goto LA2;
				}
				LA11_: ;
				i += ((NI)1);
			}
		} LA2: ;
	}
	result = NIM_NIL;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
