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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_195)(NU8* x, NI xLen_0);
static N_INLINE(NU32, rotl32__pureZhashes_183)(NU32 x, NI r);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI, emarkamp___pureZhashes_4)(NI h, NI val);
static N_INLINE(NI, emarkdollar___pureZhashes_19)(NI h);
static N_INLINE(NI, hash__pureZhashes_131)(NI x);
static N_INLINE(NI, hashWangYi1__pureZhashes_139)(NU64 x);
static N_INLINE(NU64, hiXorLo__pureZhashes_80)(NU64 a, NU64 b);
extern NIM_BOOL nimInErrorMode__system_4003;
static N_INLINE(NU32, rotl32__pureZhashes_183)(NU32 x, NI r) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)((NU64)(x) << (NU64)(r)) | (NU32)((NU32)(x) >> (NU64)((NI)(((NI)32) - r))));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4003);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_195)(NU8* x, NI xLen_0) {
	NI result;
	NI size;
	NI stepSize;
	NI n;
	NU32 h1;
	NI i;
	NU32 k1_2;
	NI rem;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	size = xLen_0;
	stepSize = ((NI)4);
	n = (NI)(size / stepSize);
	h1 = (NU32)0;
	i = ((NI)0);
	{
		while (1) {
			NU32 k1;
			NI j;
			if (!(i < (NI)(n * stepSize))) goto LA2			;
			k1 = (NU32)0;
			j = stepSize;
			{
				while (1) {
					if (!(((NI)0) < j)) goto LA4					;
					j -= ((NI)1);
					k1 = (NU32)((NU32)((NU64)(k1) << (NU64)(((NI)8))) | ((NU32) (x[(NI)(i + j)])));
				} LA4: ;
			}
			i += stepSize;
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32)IL64(3432918353))));
			k1 = rotl32__pureZhashes_183(k1, ((NI)15));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32)461845907)));
			h1 = (NU32)(h1 ^ k1);
			h1 = rotl32__pureZhashes_183(h1, ((NI)13));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			h1 = (NU32)((NU32)((NU32)((NU32)(h1) * (NU32)(((NU32)5)))) + (NU32)(((NU32)IL64(3864292196))));
		} LA2: ;
	}
	k1_2 = (NU32)0;
	rem = (NI)(size % stepSize);
	{
		while (1) {
			if (!(((NI)0) < rem)) goto LA6			;
			rem -= ((NI)1);
			k1_2 = (NU32)((NU32)((NU64)(k1_2) << (NU64)(((NI)8))) | ((NU32) (x[(NI)(i + rem)])));
		} LA6: ;
	}
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32)IL64(3432918353))));
	k1_2 = rotl32__pureZhashes_183(k1_2, ((NI)15));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32)461845907)));
	h1 = (NU32)(h1 ^ k1_2);
	h1 = (NU32)(h1 ^ ((NU32) (size)));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI)16))));
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32)IL64(2246822507))));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI)13))));
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32)IL64(3266489909))));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI)16))));
	result = ((NI) (h1));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_297)(NimStringV2 x) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = murmurHash__pureZhashes_195((((x).p) ? ((NU8*)x.p->data+(((NI)0))) : NIM_NIL), ((x.len-1))-(((NI)0))+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, emarkamp___pureZhashes_4)(NI h, NI val) {
	NI result;
	NU h_2;
	NU val_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	val_2 = ((NU) (val));
	res = (NU)((NU64)(h_2) + (NU64)(val_2));
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI)10)))));
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI)6))));
	result = ((NI) (res));
	return result;
}
static N_INLINE(NI, emarkdollar___pureZhashes_19)(NI h) {
	NI result;
	NU h_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	res = (NU)((NU64)(h_2) + (NU64)((NU)((NU64)(h_2) << (NU64)(((NI)3)))));
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI)11))));
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI)15)))));
	result = ((NI) (res));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase__pureZhashes_375)(NimStringV2 x) {
	NI result;
	NI h;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	h = ((NI)0);
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(x.len - ((NI)1));
		res = ((NI)0);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res <= colontmp_)) goto LA3				;
				i = res;
				c = x.p->data[i];
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6_;
					c = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) + ((NI)32))))));
				}
				LA6_: ;
				h = emarkamp___pureZhashes_4(h, ((NU8)(c)));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				res += ((NI)1);
			} LA3: ;
		}
	}
	result = emarkdollar___pureZhashes_19(h);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle__pureZhashes_308)(NimStringV2 x) {
	NI result;
	NI h;
	NI i;
	NI xLen;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	h = ((NI)0);
	i = ((NI)0);
	xLen = x.len;
	{
		while (1) {
			NIM_CHAR c;
			if (!(i < xLen)) goto LA2			;
			c = x.p->data[i];
			{
				if (!((NU8)(c) == (NU8)(95))) goto LA5_;
				i += ((NI)1);
			}
			goto LA3_;
			LA5_: ;
			{
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA10_;
					c = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) + ((NI)32))))));
				}
				LA10_: ;
				h = emarkamp___pureZhashes_4(h, ((NU8)(c)));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i += ((NI)1);
			}
			LA3_: ;
		} LA2: ;
	}
	result = emarkdollar___pureZhashes_19(h);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NU64, hiXorLo__pureZhashes_80)(NU64 a, NU64 b) {
	NU64 result;
	result = (NU64)0;
	__uint128_t r = a; r *= b; result = (r >> 64) ^ r;
	return result;
}
static N_INLINE(NI, hashWangYi1__pureZhashes_139)(NU64 x) {
	NI result;
	NU64 T1_;
	NU64 T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (NU64)0;
	T1_ = hiXorLo__pureZhashes_80(11562461410679940143ULL, (NU64)(x ^ 16646288086500911323ULL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NU64)0;
	T2_ = hiXorLo__pureZhashes_80(T1_, 16952864883938283885ULL);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = ((NI) (T2_));
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, hash__pureZhashes_131)(NI x) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = hashWangYi1__pureZhashes_139(((NU64) (x)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__sigmatch_6390)(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ x) {
	NI result;
	NI T1_;
	NI T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (NI)0;
	T1_ = hash__pureZhashes_131(x.Field0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI)0;
	T2_ = hash__pureZhashes_131(x.Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkdollar___pureZhashes_19(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_303)(NimStringV2 sBuf, NI sPos, NI ePos) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = murmurHash__pureZhashes_195((((sBuf).p) ? ((NU8*)sBuf.p->data+(sPos)) : NIM_NIL), (ePos)-(sPos)+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__vm_13716)(NU8* aBuf, NI aBufLen_0, NI sPos, NI ePos) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = murmurHash__pureZhashes_195((NU8*)(aBuf)+(sPos), (ePos)-(sPos)+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__lineinfos_268)(tyTuple__47w2DboNEPf69aPgubZdd7Q x) {
	NI result;
	NI T1_;
	NI T2_;
	NI T3_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (NI)0;
	T1_ = hash__pureZhashes_131(x.Field0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI)0;
	T2_ = hash__pureZhashes_131(x.Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T3_ = (NI)0;
	T3_ = hash__pureZhashes_131(x.Field2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T3_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkdollar___pureZhashes_19(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
