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
typedef struct tySequence__IWXeVgKgI4IltTBItDiIwQ tySequence__IWXeVgKgI4IltTBItDiIwQ;
typedef struct tySequence__IWXeVgKgI4IltTBItDiIwQ_Content tySequence__IWXeVgKgI4IltTBItDiIwQ_Content;
typedef struct tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA;
typedef struct tyObject_PackedType__KhxjjuiksMoB49bARLu38lQ tyObject_PackedType__KhxjjuiksMoB49bARLu38lQ;
typedef struct tyObject_PackedInstantiation__OE4cbwsIr9bR8qwTi4zXZWw tyObject_PackedInstantiation__OE4cbwsIr9bR8qwTi4zXZWw;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw;
typedef struct tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q;
typedef struct tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content;
typedef struct tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q;
typedef struct tyObject_PackedLineInfo__wLj9aHuk4ZvBakrzOfuTRFg tyObject_PackedLineInfo__wLj9aHuk4ZvBakrzOfuTRFg;
struct tySequence__IWXeVgKgI4IltTBItDiIwQ {
  NI len; tySequence__IWXeVgKgI4IltTBItDiIwQ_Content* p;
};
struct tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA {
NU32 module;
NI32 item;
};
typedef NU8 tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ;
typedef NU8 tyEnum_TCallingConvention__XL1p2EKvOAlAHpc68ecZPw;
typedef NU64 tySet_tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q;
struct tyObject_PackedType__KhxjjuiksMoB49bARLu38lQ {
tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ kind;
tyEnum_TCallingConvention__XL1p2EKvOAlAHpc68ecZPw callConv;
tySet_tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q flags;
tySequence__IWXeVgKgI4IltTBItDiIwQ types;
NI32 n;
tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA sym;
tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA owner;
NI64 size;
NI16 align;
NI16 paddingAtEnd;
tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA typeInst;
NI32 nonUniqueId;
};
struct tyObject_PackedInstantiation__OE4cbwsIr9bR8qwTi4zXZWw {
tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA key;
tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA sym;
tySequence__IWXeVgKgI4IltTBItDiIwQ concreteTypes;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q {
  NI len; tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content* p;
};
struct tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw {
tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q nodes;
};
typedef NU8 tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ;
typedef NU32 tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw;
struct tyObject_PackedLineInfo__wLj9aHuk4ZvBakrzOfuTRFg {
NU16 line;
NI16 col;
NU32 file;
};
struct tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q {
tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind;
tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw flags;
NI32 operand;
tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA typeId_0;
tyObject_PackedLineInfo__wLj9aHuk4ZvBakrzOfuTRFg info;
};


#ifndef tySequence__IWXeVgKgI4IltTBItDiIwQ_Content_PP
#define tySequence__IWXeVgKgI4IltTBItDiIwQ_Content_PP
struct tySequence__IWXeVgKgI4IltTBItDiIwQ_Content { NI cap; tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__IWXeVgKgI4IltTBItDiIwQ_Content_PP
#define tySequence__IWXeVgKgI4IltTBItDiIwQ_Content_PP
struct tySequence__IWXeVgKgI4IltTBItDiIwQ_Content { NI cap; tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content_PP
#define tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content_PP
struct tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content { NI cap; tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content_PP
#define tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content_PP
struct tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content { NI cap; tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content_PP
#define tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content_PP
struct tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content { NI cap; tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p, NI align);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___icZic_3400)(tySequence__IWXeVgKgI4IltTBItDiIwQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, setLen__icZic_3416)(tySequence__IWXeVgKgI4IltTBItDiIwQ* s, NI newlen);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI, span__icZpacked95ast_671)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tree, NI pos);
static N_INLINE(NIM_BOOL, isAtom__icZpacked95ast_353)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tree, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, add__icZpacked95ast_273)(tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q* x, tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q* value);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___icZpacked95ast_128)(tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___icZpacked95ast_134)(tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q* dest, tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q src);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap, NI elemSize, NI elemAlign);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___icZpacked95ast_131)(tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q* dest, tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q src);
static N_INLINE(void, nextChild__icZpacked95ast_468)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tree, NI* pos);
N_LIB_PRIVATE NIM_CONST tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA nilItemId__icZpacked95ast_15 = {((NU32)0), ((NI32)-1)}
;
extern NIM_BOOL nimInErrorMode__system_3980;
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___icZic_3400)(tySequence__IWXeVgKgI4IltTBItDiIwQ* dest) {
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest).p, NIM_ALIGNOF(tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA));
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___icZic_3394)(tyObject_PackedType__KhxjjuiksMoB49bARLu38lQ* dest, tyObject_PackedType__KhxjjuiksMoB49bARLu38lQ* src) {
	(*dest).kind = (*src).kind;
	(*dest).callConv = (*src).callConv;
	(*dest).flags = (*src).flags;
	if ((*dest).types.p != (*src).types.p) {	eqdestroy___icZic_3400((&(*dest).types));
	}
(*dest).types.len = (*src).types.len; (*dest).types.p = (*src).types.p;
	(*dest).n = (*src).n;
	(*dest).sym.module = (*src).sym.module;
	(*dest).sym.item = (*src).sym.item;
	(*dest).owner.module = (*src).owner.module;
	(*dest).owner.item = (*src).owner.item;
	(*dest).size = (*src).size;
	(*dest).align = (*src).align;
	(*dest).paddingAtEnd = (*src).paddingAtEnd;
	(*dest).typeInst.module = (*src).typeInst.module;
	(*dest).typeInst.item = (*src).typeInst.item;
	(*dest).nonUniqueId = (*src).nonUniqueId;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___icZic_3406)(tySequence__IWXeVgKgI4IltTBItDiIwQ* dest, tySequence__IWXeVgKgI4IltTBItDiIwQ src) {
	if ((*dest).p != src.p) {	eqdestroy___icZic_3400(dest);
	}
(*dest).len = src.len; (*dest).p = src.p;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___icZic_4236)(tyObject_PackedInstantiation__OE4cbwsIr9bR8qwTi4zXZWw* dest, tyObject_PackedInstantiation__OE4cbwsIr9bR8qwTi4zXZWw* src) {
	(*dest).key.module = (*src).key.module;
	(*dest).key.item = (*src).key.item;
	(*dest).sym.module = (*src).sym.module;
	(*dest).sym.item = (*src).sym.item;
	if ((*dest).concreteTypes.p != (*src).concreteTypes.p) {	eqdestroy___icZic_3400((&(*dest).concreteTypes));
	}
(*dest).concreteTypes.len = (*src).concreteTypes.len; (*dest).concreteTypes.p = (*src).concreteTypes.p;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___icZic_3403)(tySequence__IWXeVgKgI4IltTBItDiIwQ* dest, tySequence__IWXeVgKgI4IltTBItDiIwQ src) {
	NI T1_;
	NI colontmp_;
	T1_ = src.len;
	setLen__icZic_3416((&(*dest)), T1_);
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T4_;
			T4_ = (*dest).len;
			if (!(colontmp_ < T4_)) goto LA3			;
			(*dest).p->data[colontmp_].module = src.p->data[colontmp_].module;
			(*dest).p->data[colontmp_].item = src.p->data[colontmp_].item;
			colontmp_ += ((NI)1);
		} LA3: ;
	}
}
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
static N_INLINE(NIM_BOOL, isAtom__icZpacked95ast_353)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tree, NI pos) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (tree.nodes.p->data[pos].kind <= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23));
	return result;
}
static N_INLINE(NI, span__icZpacked95ast_671)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tree, NI pos) {
	NI result;
	NI colontmpD_;
	NI colontmpD__2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isAtom__icZpacked95ast_353(tree, pos);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		colontmpD_ = ((NI)1);
		result = colontmpD_;
	}
	goto LA1_;
	LA4_: ;
	{
		colontmpD__2 = ((NI) (tree.nodes.p->data[pos].operand));
		result = colontmpD__2;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, sons2__icZpacked95ast_675)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tree, NI n) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
	NI a;
	NI b;
	NI T1_;
	NI colontmp_;
	NI colontmp__2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	a = (NI)(n + ((NI)1));
	T1_ = (NI)0;
	T1_ = span__icZpacked95ast_671(tree, a);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	b = (NI)(a + T1_);
	colontmp_ = a;
	colontmp__2 = b;
	result.Field0 = colontmp_;
	result.Field1 = colontmp__2;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, prepare__icZpacked95ast_393)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw* tree, tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind, tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw flags, tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA typeId_0, tyObject_PackedLineInfo__wLj9aHuk4ZvBakrzOfuTRFg info) {
	NI result;
	tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ colontmpD_;
	tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw colontmpD__2;
	tyObject_PackedLineInfo__wLj9aHuk4ZvBakrzOfuTRFg colontmpD__3;
	tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA colontmpD__4;
	NI T1_;
	tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q T2_;
	result = (NI)0;
	colontmpD_ = (tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)0;
	nimZeroMem((void*)(&colontmpD__2), sizeof(tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw));
	nimZeroMem((void*)(&colontmpD__3), sizeof(tyObject_PackedLineInfo__wLj9aHuk4ZvBakrzOfuTRFg));
	nimZeroMem((void*)(&colontmpD__4), sizeof(tyObject_PackedItemId__ujcbfSfQQs6BRj9aXRwDsoA));
	T1_ = (*tree).nodes.len;
	result = T1_;
	nimZeroMem((void*)(&T2_), sizeof(tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q));
	colontmpD_ = kind;
	T2_.kind = colontmpD_;
	colontmpD__2 = flags;
	T2_.flags = colontmpD__2;
	T2_.operand = ((NI32)0);
	colontmpD__3 = info;
	T2_.info = colontmpD__3;
	colontmpD__4 = typeId_0;
	T2_.typeId_0 = colontmpD__4;
	add__icZpacked95ast_273((&(*tree).nodes), (&T2_));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, patch__icZpacked95ast_431)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw* tree, NI pos) {
	NI pos_2;
	NI32 distance;
	NI T1_;
	pos_2 = pos;
	T1_ = (*tree).nodes.len;
	distance = ((NI32) ((NI)(T1_ - pos_2)));
	(*tree).nodes.p->data[pos_2].operand = distance;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___icZic_3388)(tyObject_PackedType__KhxjjuiksMoB49bARLu38lQ* dest) {
	eqdestroy___icZic_3400((&(*dest).types));
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___icZpacked95ast_517)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw* dest, tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw src) {
	if ((*dest).nodes.p != src.nodes.p) {	eqdestroy___icZpacked95ast_128((&(*dest).nodes));
	}
(*dest).nodes.len = src.nodes.len; (*dest).nodes.p = src.nodes.p;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw, newTreeFrom__icZpacked95ast_121)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw old) {
	tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw result;
	tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q T1_;
	nimZeroMem((void*)(&result), sizeof(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw));
	T1_.len = 0; T1_.p = NIM_NIL;
	T1_.len = 0; T1_.p = (tySequence__UcUXRl4r0D9c3zw9ayCMUU7Q_Content*) newSeqPayload(0, sizeof(tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q), NIM_ALIGNOF(tyObject_PackedNode__4DO5SncX6BltUGwnK9bpl3Q));
	eqsink___icZpacked95ast_134((&result.nodes), T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___icZpacked95ast_514)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw* dest, tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw src) {
	eqcopy___icZpacked95ast_131((&(*dest).nodes), src.nodes);
}
static N_INLINE(void, nextChild__icZpacked95ast_468)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tree, NI* pos) {
	{
		if (!(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23) < tree.nodes.p->data[(*pos)].kind)) goto LA3_;
		(*pos) += tree.nodes.p->data[(*pos)].operand;
	}
	goto LA1_;
	LA3_: ;
	{
		(*pos) += ((NI)1);
	}
	LA1_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, ithSon__icZpacked95ast_718)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tree, NI n, NI i) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		NI count;
		if (!(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23) < tree.nodes.p->data[n].kind)) goto LA3_;
		count = ((NI)0);
		{
			NI child;
			NI pos;
			NI last;
			child = (NI)0;
			pos = n;
			last = (NI)(pos + ((NI) (tree.nodes.p->data[pos].operand)));
			pos += ((NI)1);
			{
				while (1) {
					if (!(pos < last)) goto LA7					;
					child = pos;
					{
						if (!(count == i)) goto LA10_;
						result = child;
						goto BeforeRet_;
					}
					LA10_: ;
					count += ((NI)1);
					nextChild__icZpacked95ast_468(tree, (&pos));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				} LA7: ;
			}
		}
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___icZpacked95ast_511)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw* dest) {
	eqdestroy___icZpacked95ast_128((&(*dest).nodes));
}
N_LIB_PRIVATE N_NIMCALL(NI, parentImpl__icZpacked95ast_605)(tyObject_PackedTree__NQ7d1M9bD3cUZLhD9aRSVMRw tree, NI n) {
	NI result;
	NI pos;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	pos = (NI)(n - ((NI)1));
	{
		while (1) {
			NIM_BOOL T3_;
			NIM_BOOL T5_;
			T3_ = (NIM_BOOL)0;
			T3_ = (((NI)0) <= pos);
			if (!(T3_)) goto LA4_;
			T5_ = (NIM_BOOL)0;
			T5_ = isAtom__icZpacked95ast_353(tree, pos);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (T5_) goto LA6_;
			T5_ = ((NI)((NI)(pos + ((NI) (tree.nodes.p->data[pos].operand))) - ((NI)1)) < n);
			LA6_: ;
			T3_ = T5_;
			LA4_: ;
			if (!T3_) goto LA2			;
			pos -= ((NI)1);
		} LA2: ;
	}
	result = pos;
	}BeforeRet_: ;
	return result;
}
