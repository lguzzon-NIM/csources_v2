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
typedef struct tySequence__V9cBl110bSARQ3Xk9bVaXHDw tySequence__V9cBl110bSARQ3Xk9bVaXHDw;
typedef struct tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA;
struct tySequence__V9cBl110bSARQ3Xk9bVaXHDw {
  NI len; tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content* p;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};
typedef NU8 tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA {
NU16 line;
NI16 col;
NI32 fileIndex;
};
struct tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ {
tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ kind;
union{
struct {NimStringV2 text;
} _kind_1;
struct {NimStringV2 labelFmt;
} _kind_2;
struct {NimStringV2 lineIndent;
} _kind_3;
struct {NimStringV2 adType;
} _kind_4;
struct {NI level;
} _kind_5;
struct {NI order;
} _kind_6;
struct {NI quotationDepth;
} _kind_7;
struct {tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA info;
} _kind_8;
struct {NimStringV2 tooltip;
} _kind_9;
struct {NI colCount;
} _kind_10;
struct {NIM_BOOL endsHeader;
} _kind_11;
struct {NI span;
} _kind_12;
};
NimStringV2 anchor;
tySequence__V9cBl110bSARQ3Xk9bVaXHDw sons;
};


#ifndef tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content_PP
#define tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content_PP
struct tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content { NI cap; tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content_PP
#define tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content_PP
struct tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content { NI cap; tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content_PP
#define tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content_PP
struct tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content { NI cap; tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrstast_154)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrstast_140)(tySequence__V9cBl110bSARQ3Xk9bVaXHDw* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p, NI align);
static N_INLINE(void, nimIncRef)(void* p);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrstast_143)(tySequence__V9cBl110bSARQ3Xk9bVaXHDw* dest, tySequence__V9cBl110bSARQ3Xk9bVaXHDw src);
N_LIB_PRIVATE N_NIMCALL(void, setLen__packagesZdocutilsZrstast_190)(tySequence__V9cBl110bSARQ3Xk9bVaXHDw* s, NI newlen);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, add__packagesZdocutilsZrstast_360)(tySequence__V9cBl110bSARQ3Xk9bVaXHDw* x, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* value);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrstast_228)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ** dest, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstNode__packagesZdocutilsZrstast_119)(tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ kind, tySequence__V9cBl110bSARQ3Xk9bVaXHDw sons, NimStringV2 anchor);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap, NI elemSize, NI elemAlign);
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstLeaf__packagesZdocutilsZrstast_348)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(void, add__packagesZdocutilsZrstast_357)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* father, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* son);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderRstToText__packagesZdocutilsZrstast_691)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* node);
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__FFuHZ12IqCWTUfe3IbRMEg_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__FFuHZ12IqCWTUfe3IbRMEg_3 = {0, (NimStrPayload*)&TM__FFuHZ12IqCWTUfe3IbRMEg_2};
static const NimStringV2 TM__FFuHZ12IqCWTUfe3IbRMEg_4 = {0, (NimStrPayload*)&TM__FFuHZ12IqCWTUfe3IbRMEg_2};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__FFuHZ12IqCWTUfe3IbRMEg_5 = { 1 | NIM_STRLIT_FLAG, "`" };
static const NimStringV2 TM__FFuHZ12IqCWTUfe3IbRMEg_6 = {1, (NimStrPayload*)&TM__FFuHZ12IqCWTUfe3IbRMEg_5};
static const NimStringV2 TM__FFuHZ12IqCWTUfe3IbRMEg_7 = {1, (NimStrPayload*)&TM__FFuHZ12IqCWTUfe3IbRMEg_5};
extern NIM_BOOL nimInErrorMode__system_3994;
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)8));
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
	}
	LA3_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrstast_154)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	switch ((*dest).kind) {
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)77):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)75):
	{
		eqdestroy___stdZassertions_13((&(*dest)._kind_1.text));
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)8):
	{
		eqdestroy___stdZassertions_13((&(*dest)._kind_2.labelFmt));
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)30):
	{
		eqdestroy___stdZassertions_13((&(*dest)._kind_3.lineIndent));
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)56):
	{
		eqdestroy___stdZassertions_13((&(*dest)._kind_4.adType));
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)2):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)1):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)3):
	{
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)38):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)39):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)20):
	{
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)28):
	{
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)43):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)44):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)74):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)71):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)16):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)62):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)55):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)46):
	{
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)47):
	{
		eqdestroy___stdZassertions_13((&(*dest)._kind_9.tooltip));
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)32):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)33):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)34):
	{
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)35):
	{
	}
	break;
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)36):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)37):
	{
	}
	break;
	default:
	{
	}
	break;
	}
	eqdestroy___stdZassertions_13((&(*dest).anchor));
	eqdestroy___packagesZdocutilsZrstast_140((&(*dest).sons));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrstast_140)(tySequence__V9cBl110bSARQ3Xk9bVaXHDw* dest) {
	NI colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T3_;
			T3_ = (*dest).len;
			if (!(colontmp_ < T3_)) goto LA2			;
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = nimDecRefIsLast((*dest).p->data[colontmp_]);
				if (!T6_) goto LA7_;
				eqdestroy___packagesZdocutilsZrstast_154((*dest).p->data[colontmp_]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimRawDispose((*dest).p->data[colontmp_], ((NI)4));
			}
			LA7_: ;
			colontmp_ += ((NI)1);
		} LA2: ;
	}
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest).p, NIM_ALIGNOF(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*));
}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___packagesZdocutilsZrstast_149)(tySequence__V9cBl110bSARQ3Xk9bVaXHDw* dest, void* env) {
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___packagesZdocutilsZrstast_146)(tySequence__V9cBl110bSARQ3Xk9bVaXHDw* dest, tySequence__V9cBl110bSARQ3Xk9bVaXHDw src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	if ((*dest).p != src.p) {	eqdestroy___packagesZdocutilsZrstast_140(dest);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
(*dest).len = src.len; (*dest).p = src.p;
	}BeforeRet_: ;
}
static N_INLINE(void, nimIncRef)(void* p) {
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)8));
	(*((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_))).rc += ((NI)16);
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrstast_228)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ** dest, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!src) goto LA3_;
		nimIncRef(src);
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLast((*dest));
		if (!T7_) goto LA8_;
		eqdestroy___packagesZdocutilsZrstast_154((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)4));
	}
	LA8_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___packagesZdocutilsZrstast_231)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ** dest, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrstast_154((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)4));
	}
	LA4_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrstast_143)(tySequence__V9cBl110bSARQ3Xk9bVaXHDw* dest, tySequence__V9cBl110bSARQ3Xk9bVaXHDw src) {
	NI T1_;
	NI colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = src.len;
	setLen__packagesZdocutilsZrstast_190((&(*dest)), T1_);
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T4_;
			T4_ = (*dest).len;
			if (!(colontmp_ < T4_)) goto LA3			;
			{
				if (!src.p->data[colontmp_]) goto LA7_;
				nimIncRef(src.p->data[colontmp_]);
			}
			LA7_: ;
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = nimDecRefIsLast((*dest).p->data[colontmp_]);
				if (!T11_) goto LA12_;
				eqdestroy___packagesZdocutilsZrstast_154((*dest).p->data[colontmp_]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimRawDispose((*dest).p->data[colontmp_], ((NI)4));
			}
			LA12_: ;
			(*dest).p->data[colontmp_] = src.p->data[colontmp_];
			colontmp_ += ((NI)1);
		} LA3: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstNode__packagesZdocutilsZrstast_119)(tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ kind, tySequence__V9cBl110bSARQ3Xk9bVaXHDw sons, NimStringV2 anchor) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* result;
	tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ colontmpD_;
	tySequence__V9cBl110bSARQ3Xk9bVaXHDw colontmpD__2;
	NimStringV2 colontmpD__3;
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	colontmpD_ = (tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)0;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*) nimNewObj(sizeof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ), NIM_ALIGNOF(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ));
	colontmpD_ = kind;
	(*T1_).kind = colontmpD_;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	eqcopy___packagesZdocutilsZrstast_143((&colontmpD__2), sons);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*T1_).sons = colontmpD__2;
	colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
	eqcopy___stdZassertions_16((&colontmpD__3), anchor);
	(*T1_).anchor = colontmpD__3;
	result = T1_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, add__packagesZdocutilsZrstast_357)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* father, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* son) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* colontmpD_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmpD_ = NIM_NIL;
	colontmpD_ = 0;
	eqcopy___packagesZdocutilsZrstast_228(&colontmpD_, son);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__packagesZdocutilsZrstast_360((&(*father).sons), colontmpD_);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstLeaf__packagesZdocutilsZrstast_348)(NimStringV2 s) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* result;
	tySequence__V9cBl110bSARQ3Xk9bVaXHDw T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	T1_.len = 0; T1_.p = NIM_NIL;
	T1_.len = 0; T1_.p = (tySequence__V9cBl110bSARQ3Xk9bVaXHDw_Content*) newSeqPayload(0, sizeof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*), NIM_ALIGNOF(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*));
	result = newRstNode__packagesZdocutilsZrstast_119(((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)77), T1_, TM__FFuHZ12IqCWTUfe3IbRMEg_3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqcopy___stdZassertions_16((&(*result)._kind_1.text), s);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrstast_225)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ** dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrstast_154((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)4));
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, len__packagesZdocutilsZrstast_112)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n).sons.len;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, newRstNode__packagesZdocutilsZrstast_315)(tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ kind, tyObject_TLineInfo__LpCBEHcAwE2yCs4l9cD1BOA info, tySequence__V9cBl110bSARQ3Xk9bVaXHDw sons) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* result;
	tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ colontmpD_;
	tySequence__V9cBl110bSARQ3Xk9bVaXHDw colontmpD__2;
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	colontmpD_ = (tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)0;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = (tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*) nimNewObj(sizeof(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ), NIM_ALIGNOF(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ));
	colontmpD_ = kind;
	(*T1_).kind = colontmpD_;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	eqcopy___packagesZdocutilsZrstast_143((&colontmpD__2), sons);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*T1_).sons = colontmpD__2;
	result = T1_;
	(*result)._kind_8.info = info;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, add__packagesZdocutilsZrstast_380)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* father, NimStringV2 s) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = NIM_NIL;
	T1_ = newRstLeaf__packagesZdocutilsZrstast_348(s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__packagesZdocutilsZrstast_360((&(*father).sons), T1_);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, addIfNotNil__packagesZdocutilsZrstast_387)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* father, tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* son) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!!((son == ((tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*) NIM_NIL)))) goto LA3_;
		add__packagesZdocutilsZrstast_357(father, son);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderRstToText__packagesZdocutilsZrstast_691)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* node) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	{
		if (!(node == ((tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*) NIM_NIL))) goto LA3_;
		result = TM__FFuHZ12IqCWTUfe3IbRMEg_4;
		goto BeforeRet_;
	}
	LA3_: ;
	switch ((*node).kind) {
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)77):
	case ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)75):
	{
		prepareAdd((&result), (*node)._kind_1.text.len + 0);
appendString((&result), (*node)._kind_1.text);
	}
	break;
	default:
	{
		{
			if (!((*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)63) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)71) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)72) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)62))) goto LA9_;
			prepareAdd((&result), 1);
appendString((&result), TM__FFuHZ12IqCWTUfe3IbRMEg_6);
		}
		LA9_: ;
		{
			NI i;
			NI colontmp_;
			NI T12_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			T12_ = (*node).sons.len;
			colontmp_ = T12_;
			i_2 = ((NI)0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA14					;
					i = i_2;
					{
						NimStringV2 colontmpD_;
						colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
						{
							NIM_BOOL T19_;
							T19_ = (NIM_BOOL)0;
							T19_ = ((*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)62) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)55));
							if (!(T19_)) goto LA20_;
							T19_ = (i == ((NI)0));
							LA20_: ;
							if (!T19_) goto LA21_;
							eqdestroy___stdZassertions_13((&colontmpD_));
							goto LA15;
						}
						LA21_: ;
						colontmpD_ = renderRstToText__packagesZdocutilsZrstast_691((*node).sons.p->data[i]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA16_;
						prepareAdd((&result), colontmpD_.len + 0);
appendString((&result), colontmpD_);
						{
							LA16_:;
						}
						{
							eqdestroy___stdZassertions_13((&colontmpD_));
						}
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					} LA15: ;
					i_2 += ((NI)1);
				} LA14: ;
			}
		}
		{
			if (!((*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)63) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)71) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)72) || (*node).kind == ((tyEnum_RstNodeKind__DNoJcMFu9cjq4EGXsLl82CQ)62))) goto LA27_;
			prepareAdd((&result), 1);
appendString((&result), TM__FFuHZ12IqCWTUfe3IbRMEg_7);
		}
		LA27_: ;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ*, lastSon__packagesZdocutilsZrstast_351)(tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* n) {
	tyObject_RstNode__22EYjMYlm9cWcheQxrewdHQ* result;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	T1_ = (*n).sons.len;
	eqcopy___packagesZdocutilsZrstast_228(&result, (*n).sons.p->data[(NI)(T1_ - ((NI)1))]);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
