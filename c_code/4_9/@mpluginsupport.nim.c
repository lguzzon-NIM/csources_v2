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
typedef struct tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ;
typedef struct tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg;
typedef struct tyObject_TContext__QUPFyDhhyyn3RQbxNbH7xg tyObject_TContext__QUPFyDhhyyn3RQbxNbH7xg;
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
struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw {
NI32 module;
NI32 item;
};
struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ {
  RootObj Sup;
tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw itemId;
};
typedef NU8 tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ;
typedef NU16 tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg;
struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU64 tySet_tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg;
typedef NU32 tySet_tyEnum_TOption__PrH9cMsvu5oCG0HODAZ3CAg;
typedef NU8 tyEnum_TLocKind__iCEcZjTaghPmL3Wx2e5DQw;
typedef NU8 tyEnum_TStorageLoc__BKvMXWvKko6Yn5329c9aw9afg;
typedef NU16 tySet_tyEnum_TLocFlag__9a7m8BSAfzn6yluCKaq6viw;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA {
tyEnum_TLocKind__iCEcZjTaghPmL3Wx2e5DQw k;
tyEnum_TStorageLoc__BKvMXWvKko6Yn5329c9aw9afg storage;
tySet_tyEnum_TLocFlag__9a7m8BSAfzn6yluCKaq6viw flags;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* lode;
NimStringV2 r;
};
struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA {
  tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ Sup;
tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ kind;
union{
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* gcUnsafetyReason;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* transformedBody;
} _kind_1;
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* guard;
NI bitsize;
NI alignment;
} _kind_2;
};
tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg magic;
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* name;
tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info;
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* owner;
tySet_tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg flags;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* ast;
tySet_tyEnum_TOption__PrH9cMsvu5oCG0HODAZ3CAg options;
NI position;
NI offset;
tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA loc;
tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg* annex;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* constraint;
};
struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA {
NI id;
NimStringV2 s;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* next;
NI h;
};
typedef N_NIMCALL_PTR(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, tyProc__Ntct9cf2liy0XMGfc9cIbU8w) (tyObject_TContext__QUPFyDhhyyn3RQbxNbH7xg* c, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
struct tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
tyProc__Ntct9cf2liy0XMGfc9cIbU8w Field3;
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*, getIdent__idents_166)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, NimStringV2 identifier);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_133)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_4060)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA** dest);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA*, skipGenericOwner__ast_6087)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_4063)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA** dest, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* src);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
extern NIM_BOOL nimInErrorMode__system_4003;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4003);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, pluginMatches__pluginsupport_18)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, tyTuple__6Z9byQ06j89au3wH6Xj4j3Cw* p, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s) {
	NIM_BOOL result;
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* colontmpD_;
	tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* module;
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* colontmpD__2;
	tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* package;
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* colontmpD__3;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	colontmpD_ = NIM_NIL;
	module = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	package = NIM_NIL;
	colontmpD__3 = NIM_NIL;
	{
		colontmpD_ = getIdent__idents_166(ic, (*p).Field2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!(((*(*s).name).id == (*colontmpD_).id))) goto LA4_;
		result = NIM_FALSE;
		eqdestroy___idents_133(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&package);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___idents_133(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&module);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___idents_133(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA4_: ;
	module = skipGenericOwner__ast_6087(s);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NIM_BOOL T8_;
		NIM_BOOL T9_;
		T8_ = (NIM_BOOL)0;
		T9_ = (NIM_BOOL)0;
		T9_ = (module == ((tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA*) NIM_NIL));
		if (T9_) goto LA10_;
		T9_ = !(((*module).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)6)));
		LA10_: ;
		T8_ = T9_;
		if (T8_) goto LA11_;
		colontmpD__2 = getIdent__idents_166(ic, (*p).Field1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T8_ = !(((*(*module).name).id == (*colontmpD__2).id));
		LA11_: ;
		if (!T8_) goto LA12_;
		result = NIM_FALSE;
		eqdestroy___idents_133(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&package);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___idents_133(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&module);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___idents_133(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA12_: ;
	eqcopy___ast_4063(&package, (*module).owner);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NIM_BOOL T16_;
		NIM_BOOL T17_;
		T16_ = (NIM_BOOL)0;
		T17_ = (NIM_BOOL)0;
		T17_ = (package == ((tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA*) NIM_NIL));
		if (T17_) goto LA18_;
		T17_ = !(((*package).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)24)));
		LA18_: ;
		T16_ = T17_;
		if (T16_) goto LA19_;
		colontmpD__3 = getIdent__idents_166(ic, (*p).Field0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T16_ = !(((*(*package).name).id == (*colontmpD__3).id));
		LA19_: ;
		if (!T16_) goto LA20_;
		result = NIM_FALSE;
		eqdestroy___idents_133(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&package);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___idents_133(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&module);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___idents_133(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA20_: ;
	result = NIM_TRUE;
	eqdestroy___idents_133(&colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_4060(&package);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___idents_133(&colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_4060(&module);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___idents_133(&colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___idents_133(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&package);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___idents_133(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_4060(&module);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___idents_133(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
