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
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
typedef struct tyTuple__5XMUqxrIUJFm4anRkGuUEw tyTuple__5XMUqxrIUJFm4anRkGuUEw;
typedef struct tyTuple__YspSNcisaonPJrJIbOY46g tyTuple__YspSNcisaonPJrJIbOY46g;
typedef struct tyTuple__jq7X5k7hWG0tdTZTDkiyGQ tyTuple__jq7X5k7hWG0tdTZTDkiyGQ;
typedef struct tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q;
typedef struct tyTuple__TQ46xUEmHnH4d7YweH4sAw tyTuple__TQ46xUEmHnH4d7YweH4sAw;
typedef struct tyTuple__OUcH9a81op0hUTKMOuOa3xg tyTuple__OUcH9a81op0hUTKMOuOa3xg;
typedef struct tyTuple__P6cpJHzOA5ZfI5jnHe7B4g tyTuple__P6cpJHzOA5ZfI5jnHe7B4g;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
typedef NU8 tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ;
struct tyTuple__5XMUqxrIUJFm4anRkGuUEw {
NimStringV2 Field0;
tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ Field1;
NimStringV2 Field2;
NimStringV2 Field3;
NimStringV2 Field4;
NI Field5;
};
typedef NU8 tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ;
struct tyTuple__YspSNcisaonPJrJIbOY46g {
NimStringV2 Field0;
tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ Field1;
};
typedef NU8 tySet_tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA[38];
typedef NU16 tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA;
struct tyTuple__jq7X5k7hWG0tdTZTDkiyGQ {
NimStringV2 Field0;
tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* Field1;
};
typedef NU8 tySet_tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg;
typedef NU8 tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg;
typedef NU16 tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA;
struct tyTuple__TQ46xUEmHnH4d7YweH4sAw {
NimStringV2 Field0;
tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA Field1;
};
typedef NU8 tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA;
typedef NU8 tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ;
struct tyTuple__OUcH9a81op0hUTKMOuOa3xg {
NimStringV2 Field0;
tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ Field1;
};
typedef NU8 tyEnum_TJSTypeKind__H6PW8hR2oUufkIEX9b1rorA;
struct tyTuple__P6cpJHzOA5ZfI5jnHe7B4g {
NimStringV2 Field0;
tyEnum_TJSTypeKind__H6PW8hR2oUufkIEX9b1rorA Field1;
tyEnum_TJSTypeKind__H6PW8hR2oUufkIEX9b1rorA Field2;
};
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringV2 Field0;
NI Field1;
NI Field2;
};
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
};
static N_INLINE(void, addInt__stdZprivateZdigitsutils_198)(NimStringV2* result, NI x);
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_176)(NimStringV2* result, NI64 x);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__stdZprivateZoscommon_104)(NimStringV2* s, NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_173)(NimStringV2* result, NU64 x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__ast_3423)(NimStringV2* s, tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__vm_1563)(NimStringV2* s, NI x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__vm_1768)(NimStringV2* s, tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, collectionToString__importer_3616)(tySet_tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA x, NimStringV2 prefix, NimStringV2 separator, NimStringV2 suffix);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__importer_3649)(NimStringV2* s, tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA x);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__stdZjsonutils_471)(NimStringV2* s, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, collectionToString__pureZjson_5739)(tySet_tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg x, NimStringV2 prefix, NimStringV2 separator, NimStringV2 suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__pureZjson_5772)(NimStringV2* s, tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__stdZprivateZosfiles_223)(NimStringV2* s, tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, collectionToString__stdZprivateZosfiles_233)(tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA x, NimStringV2 prefix, NimStringV2 separator, NimStringV2 suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__stdZprivateZosfiles_266)(NimStringV2* s, tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__jsgen_3509)(NimStringV2* s, tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__jsgen_3042)(NimStringV2* s, tyEnum_TJSTypeKind__H6PW8hR2oUufkIEX9b1rorA x);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__docgen_3994)(NimStringV2* s, NI x);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_2 = { 1 | NIM_STRLIT_FLAG, "(" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_3 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_4 = { 2 | NIM_STRLIT_FLAG, ", " };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_5 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_6 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_7 = { 1 | NIM_STRLIT_FLAG, "," };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_8 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_7};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_9 = { 1 | NIM_STRLIT_FLAG, ")" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_10 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_9};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_11 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_12 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_13 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_14 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_15 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_16 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_17 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_18 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_7};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_19 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_9};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_20 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_21 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_22 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_23 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_7};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_24 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_9};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_25 = { 1 | NIM_STRLIT_FLAG, "{" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_26 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_25};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_27 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_28 = { 1 | NIM_STRLIT_FLAG, "}" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_29 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_28};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_30 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_31 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_32 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__n49a9aYp5BrbXv9a6OCpJYm0g_33 = { 3 | NIM_STRLIT_FLAG, "nil" };
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_34 = {3, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_33};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_35 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_7};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_36 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_9};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_37 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_25};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_38 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_39 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_28};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_40 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_41 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_42 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_43 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_25};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_44 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_45 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_28};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_46 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_7};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_47 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_9};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_48 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_49 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_50 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_51 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_7};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_52 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_9};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_53 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_54 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_55 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_56 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_57 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_7};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_58 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_9};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_59 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_60 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_61 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_62 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_63 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_7};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_64 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_9};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_65 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_2};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_66 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_67 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_68 = {2, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_4};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_69 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_7};
static const NimStringV2 TM__n49a9aYp5BrbXv9a6OCpJYm0g_70 = {1, (NimStrPayload*)&TM__n49a9aYp5BrbXv9a6OCpJYm0g_9};
extern NIM_BOOL nimInErrorMode__system_4004;
static N_INLINE(void, addInt__stdZprivateZdigitsutils_198)(NimStringV2* result, NI x) {
	addInt__stdZprivateZdigitsutils_176(result, ((NI64) (x)));
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_3)(NI x) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	addInt__stdZprivateZdigitsutils_198((&result), x);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_6)(NI64 x) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	addInt__stdZprivateZdigitsutils_176((&result), x);
	return result;
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_78)(tyTuple__UV3llMMYFckfui8YMBuUZA x) {
	NimStringV2 result;
	NI countX60gensym3_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_3;
	countX60gensym3_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym3_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_5);
	}
	LA3_: ;
	countX60gensym3_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field0);
	{
		if (!(((NI)0) < countX60gensym3_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_6);
	}
	LA7_: ;
	countX60gensym3_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field1);
	{
		if (!(countX60gensym3_ == ((NI)1))) goto LA11_;
		prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_8);
	}
	LA11_: ;
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_10);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_9)(NU64 x) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	addInt__stdZprivateZdigitsutils_173((&result), x);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___vm_1474)(tyTuple__5XMUqxrIUJFm4anRkGuUEw* x) {
	NimStringV2 result;
	NI countX60gensym367_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_11;
	countX60gensym367_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym367_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_12);
	}
	LA3_: ;
	countX60gensym367_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), (*x).Field0);
	{
		if (!(((NI)0) < countX60gensym367_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_13);
	}
	LA7_: ;
	countX60gensym367_ += ((NI)1);
	addQuoted__ast_3423((&result), (*x).Field1);
	{
		if (!(((NI)0) < countX60gensym367_)) goto LA11_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_14);
	}
	LA11_: ;
	countX60gensym367_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), (*x).Field2);
	{
		if (!(((NI)0) < countX60gensym367_)) goto LA15_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_15);
	}
	LA15_: ;
	countX60gensym367_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), (*x).Field3);
	{
		if (!(((NI)0) < countX60gensym367_)) goto LA19_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_16);
	}
	LA19_: ;
	countX60gensym367_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), (*x).Field4);
	{
		if (!(((NI)0) < countX60gensym367_)) goto LA23_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_17);
	}
	LA23_: ;
	countX60gensym367_ += ((NI)1);
	addQuoted__vm_1563((&result), (*x).Field5);
	{
		if (!(countX60gensym367_ == ((NI)1))) goto LA27_;
		prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_18);
	}
	LA27_: ;
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_19);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___vm_1727)(tyTuple__YspSNcisaonPJrJIbOY46g x) {
	NimStringV2 result;
	NI countX60gensym484_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_20;
	countX60gensym484_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym484_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_21);
	}
	LA3_: ;
	countX60gensym484_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field0);
	{
		if (!(((NI)0) < countX60gensym484_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_22);
	}
	LA7_: ;
	countX60gensym484_ += ((NI)1);
	addQuoted__vm_1768((&result), x.Field1);
	{
		if (!(countX60gensym484_ == ((NI)1))) goto LA11_;
		prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_23);
	}
	LA11_: ;
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_24);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, collectionToString__importer_3616)(tySet_tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA x, NimStringV2 prefix, NimStringV2 separator, NimStringV2 suffix) {
	NimStringV2 result;
	NIM_BOOL firstElement;
	result.len = 0; result.p = NIM_NIL;
	eqcopy___stdZassertions_16((&result), prefix);
	firstElement = NIM_TRUE;
	{
		tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA value;
		NI i;
		value = (tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA)0;
		i = ((NI)0);
		{
			while (1) {
				if (!(i <= ((NI)298))) goto LA3				;
				{
					if (!((x[(NU)((((tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA) (i))))>>3] &(1U<<((NU)((((tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA) (i))))&7U)))!=0)) goto LA6_;
					value = ((tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA) (i));
					{
						if (!firstElement) goto LA10_;
						firstElement = NIM_FALSE;
					}
					goto LA8_;
					LA10_: ;
					{
						prepareAdd((&result), separator.len + 0);
appendString((&result), separator);
					}
					LA8_: ;
					addQuoted__importer_3649((&result), value);
				}
				LA6_: ;
				i += ((NI)1);
			} LA3: ;
		}
	}
	prepareAdd((&result), suffix.len + 0);
appendString((&result), suffix);
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4004);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___importer_3612)(tySet_tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA x) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = collectionToString__importer_3616(x, TM__n49a9aYp5BrbXv9a6OCpJYm0g_26, TM__n49a9aYp5BrbXv9a6OCpJYm0g_27, TM__n49a9aYp5BrbXv9a6OCpJYm0g_29);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZjsonutils_427)(tyTuple__jq7X5k7hWG0tdTZTDkiyGQ x) {
	NimStringV2 result;
	NI countX60gensym27_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_30;
	countX60gensym27_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym27_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_31);
	}
	LA3_: ;
	countX60gensym27_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field0);
	{
		if (!(((NI)0) < countX60gensym27_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_32);
	}
	LA7_: ;
	countX60gensym27_ += ((NI)1);
	{
		if (!(x.Field1 == 0)) goto LA11_;
		prepareAdd((&result), 3);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_34);
	}
	goto LA9_;
	LA11_: ;
	{
		addQuoted__stdZjsonutils_471((&result), x.Field1);
	}
	LA9_: ;
	{
		if (!(countX60gensym27_ == ((NI)1))) goto LA16_;
		prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_35);
	}
	LA16_: ;
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_36);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, collectionToString__pureZjson_5739)(tySet_tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg x, NimStringV2 prefix, NimStringV2 separator, NimStringV2 suffix) {
	NimStringV2 result;
	NIM_BOOL firstElement;
	result.len = 0; result.p = NIM_NIL;
	eqcopy___stdZassertions_16((&result), prefix);
	firstElement = NIM_TRUE;
	{
		tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg value;
		NI i;
		value = (tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg)0;
		i = ((NI)0);
		{
			while (1) {
				if (!(i <= ((NI)6))) goto LA3				;
				{
					if (!((x &((NU8)1<<((NU)((((tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg) (i))))&7U)))!=0)) goto LA6_;
					value = ((tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg) (i));
					{
						if (!firstElement) goto LA10_;
						firstElement = NIM_FALSE;
					}
					goto LA8_;
					LA10_: ;
					{
						prepareAdd((&result), separator.len + 0);
appendString((&result), separator);
					}
					LA8_: ;
					addQuoted__pureZjson_5772((&result), value);
				}
				LA6_: ;
				i += ((NI)1);
			} LA3: ;
		}
	}
	prepareAdd((&result), suffix.len + 0);
appendString((&result), suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___pureZjson_5735)(tySet_tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg x) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = collectionToString__pureZjson_5739(x, TM__n49a9aYp5BrbXv9a6OCpJYm0g_37, TM__n49a9aYp5BrbXv9a6OCpJYm0g_38, TM__n49a9aYp5BrbXv9a6OCpJYm0g_39);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, collectionToString__stdZprivateZosfiles_233)(tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA x, NimStringV2 prefix, NimStringV2 separator, NimStringV2 suffix) {
	NimStringV2 result;
	NIM_BOOL firstElement;
	result.len = 0; result.p = NIM_NIL;
	eqcopy___stdZassertions_16((&result), prefix);
	firstElement = NIM_TRUE;
	{
		tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA value;
		NI i;
		value = (tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA)0;
		i = ((NI)0);
		{
			while (1) {
				if (!(i <= ((NI)8))) goto LA3				;
				{
					if (!((x &((NU16)1<<((NU)((((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA) (i))))&15U)))!=0)) goto LA6_;
					value = ((tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA) (i));
					{
						if (!firstElement) goto LA10_;
						firstElement = NIM_FALSE;
					}
					goto LA8_;
					LA10_: ;
					{
						prepareAdd((&result), separator.len + 0);
appendString((&result), separator);
					}
					LA8_: ;
					addQuoted__stdZprivateZosfiles_266((&result), value);
				}
				LA6_: ;
				i += ((NI)1);
			} LA3: ;
		}
	}
	prepareAdd((&result), suffix.len + 0);
appendString((&result), suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZosfiles_229)(tySet_tyEnum_FilePermission__9a5SPDJ9aL9aLJgb0TzciuflA x) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = collectionToString__stdZprivateZosfiles_233(x, TM__n49a9aYp5BrbXv9a6OCpJYm0g_43, TM__n49a9aYp5BrbXv9a6OCpJYm0g_44, TM__n49a9aYp5BrbXv9a6OCpJYm0g_45);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZosfiles_127)(tyTuple__TQ46xUEmHnH4d7YweH4sAw x) {
	NimStringV2 result;
	NI countX60gensym19_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_40;
	countX60gensym19_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym19_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_41);
	}
	LA3_: ;
	countX60gensym19_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field0);
	{
		if (!(((NI)0) < countX60gensym19_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_42);
	}
	LA7_: ;
	countX60gensym19_ += ((NI)1);
	addQuoted__stdZprivateZosfiles_223((&result), x.Field1);
	{
		if (!(countX60gensym19_ == ((NI)1))) goto LA11_;
		prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_46);
	}
	LA11_: ;
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_47);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___jsgen_3468)(tyTuple__OUcH9a81op0hUTKMOuOa3xg x) {
	NimStringV2 result;
	NI countX60gensym683_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_48;
	countX60gensym683_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym683_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_49);
	}
	LA3_: ;
	countX60gensym683_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field0);
	{
		if (!(((NI)0) < countX60gensym683_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_50);
	}
	LA7_: ;
	countX60gensym683_ += ((NI)1);
	addQuoted__jsgen_3509((&result), x.Field1);
	{
		if (!(countX60gensym683_ == ((NI)1))) goto LA11_;
		prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_51);
	}
	LA11_: ;
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_52);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___jsgen_3001)(tyTuple__P6cpJHzOA5ZfI5jnHe7B4g x) {
	NimStringV2 result;
	NI countX60gensym569_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_53;
	countX60gensym569_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym569_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_54);
	}
	LA3_: ;
	countX60gensym569_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field0);
	{
		if (!(((NI)0) < countX60gensym569_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_55);
	}
	LA7_: ;
	countX60gensym569_ += ((NI)1);
	addQuoted__jsgen_3042((&result), x.Field1);
	{
		if (!(((NI)0) < countX60gensym569_)) goto LA11_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_56);
	}
	LA11_: ;
	countX60gensym569_ += ((NI)1);
	addQuoted__jsgen_3042((&result), x.Field2);
	{
		if (!(countX60gensym569_ == ((NI)1))) goto LA15_;
		prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_57);
	}
	LA15_: ;
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_58);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___docgen_3956)(tyTuple__kN8up2W6YKc5YA9avn5mV5w x) {
	NimStringV2 result;
	NI countX60gensym141_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_59;
	countX60gensym141_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym141_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_60);
	}
	LA3_: ;
	countX60gensym141_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field0);
	{
		if (!(((NI)0) < countX60gensym141_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_61);
	}
	LA7_: ;
	countX60gensym141_ += ((NI)1);
	addQuoted__docgen_3994((&result), x.Field1);
	{
		if (!(((NI)0) < countX60gensym141_)) goto LA11_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_62);
	}
	LA11_: ;
	countX60gensym141_ += ((NI)1);
	addQuoted__docgen_3994((&result), x.Field2);
	{
		if (!(countX60gensym141_ == ((NI)1))) goto LA15_;
		prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_63);
	}
	LA15_: ;
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_64);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___nimpaths_31)(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg x) {
	NimStringV2 result;
	NI countX60gensym0_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__n49a9aYp5BrbXv9a6OCpJYm0g_65;
	countX60gensym0_ = ((NI)0);
	{
		if (!(((NI)0) < countX60gensym0_)) goto LA3_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_66);
	}
	LA3_: ;
	countX60gensym0_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field0);
	{
		if (!(((NI)0) < countX60gensym0_)) goto LA7_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_67);
	}
	LA7_: ;
	countX60gensym0_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field1);
	{
		if (!(((NI)0) < countX60gensym0_)) goto LA11_;
		prepareAdd((&result), 2);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_68);
	}
	LA11_: ;
	countX60gensym0_ += ((NI)1);
	addQuoted__stdZprivateZoscommon_104((&result), x.Field2);
	{
		if (!(countX60gensym0_ == ((NI)1))) goto LA15_;
		prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_69);
	}
	LA15_: ;
	prepareAdd((&result), 1);
appendString((&result), TM__n49a9aYp5BrbXv9a6OCpJYm0g_70);
	return result;
}
