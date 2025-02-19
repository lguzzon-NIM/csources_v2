/* Generated by Nim Compiler v1.9.0 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <math.h>
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
typedef NU8 tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA;
static N_INLINE(NF, abs__system_4680)(NF x);
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__pureZmath_183)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI)1));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)32))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)16))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)8))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)4))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)2))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)1))));
	result += (NI)(((NI)1) + (x <= ((NI)0)));
	return result;
}
static N_INLINE(NF, abs__system_4680)(NF x) {
	NF result;
	result = (NF)0;
	result = fabs(x);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA, classify__pureZmath_151)(NF x) {
	tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA result;
{	result = (tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)0;
	{
		if (!(x == 0.0)) goto LA3_;
		{
			if (!(((NF)(1.0) / (NF)(x)) == INF)) goto LA7_;
			result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)2);
			goto BeforeRet_;
		}
		goto LA5_;
		LA7_: ;
		{
			result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)3);
			goto BeforeRet_;
		}
		LA5_: ;
	}
	LA3_: ;
	{
		if (!(((NF)(x) * (NF)(0.5)) == x)) goto LA12_;
		{
			if (!(0.0 < x)) goto LA16_;
			result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)5);
			goto BeforeRet_;
		}
		goto LA14_;
		LA16_: ;
		{
			result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)6);
			goto BeforeRet_;
		}
		LA14_: ;
	}
	LA12_: ;
	{
		if (!!((x == x))) goto LA21_;
		result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)4);
		goto BeforeRet_;
	}
	LA21_: ;
	{
		NF T25_;
		T25_ = (NF)0;
		T25_ = abs__system_4680(x);
		if (!(T25_ < 2.225073858507201e-308)) goto LA26_;
		result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)1);
		goto BeforeRet_;
	}
	LA26_: ;
	result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)0);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NF, round__vm_13588)(NF x, NI places) {
	NF result;
	result = (NF)0;
	{
		if (!(places == ((NI)0))) goto LA3_;
		result = round(x);
	}
	goto LA1_;
	LA3_: ;
	{
		NF mult;
		NF T6_;
		mult = pow(10.0, ((NF) (places)));
		T6_ = (NF)0;
		T6_ = round(((NF)(x) * (NF)(mult)));
		result = ((NF)(T6_) / (NF)(mult));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, floorDiv__pureZtimes_284)(NI64 x, NI64 y) {
	NI64 result;
	NI64 r;
	result = (NI64)0;
	result = (NI64)(x / y);
	r = (NI64)(x % y);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T7_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (IL64(0) < r);
		if (!(T4_)) goto LA5_;
		T4_ = (y < IL64(0));
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T7_ = (NIM_BOOL)0;
		T7_ = (r < IL64(0));
		if (!(T7_)) goto LA8_;
		T7_ = (IL64(0) < y);
		LA8_: ;
		T3_ = T7_;
		LA6_: ;
		if (!T3_) goto LA9_;
		result -= ((NI)1);
	}
	LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isPowerOfTwo__pureZmath_180)(NI x) {
	NIM_BOOL result;
	NIM_BOOL T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI)0) < x);
	if (!(T1_)) goto LA2_;
	T1_ = ((NI)(x & (NI)(x - ((NI)1))) == ((NI)0));
	LA2_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
