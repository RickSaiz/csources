/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tident_4umxGerWTHGPwUms7Yqu3g Tident_4umxGerWTHGPwUms7Yqu3g;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY_UpiOGlu5Ux6DLM73wSrdpg TY_UpiOGlu5Ux6DLM73wSrdpg;
typedef struct TY_5L3fCt9bX0gyEcO30ervPLw TY_5L3fCt9bX0gyEcO30ervPLw;
typedef struct Tidobj_raN9cHVgzmvaXisezY9aGg9cg Tidobj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TY_4eQHGndY6XBYpFOH09apV8Q TY_4eQHGndY6XBYpFOH09apV8Q;
typedef struct TY_UV3llMMYFckfui8YMBuUZA TY_UV3llMMYFckfui8YMBuUZA;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct Cellseq_Axo1XVm9aaQueTOldv8le5w Cellseq_Axo1XVm9aaQueTOldv8le5w;
typedef struct Gcheap_1TRH1TZMaVZTnLNcIHuNFQ Gcheap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct Gcstack_7fytPA5bBsob6See21YMRA Gcstack_7fytPA5bBsob6See21YMRA;
typedef struct Memregion_x81NhDv59b8ercDZ9bi85jyg Memregion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct Smallchunk_tXn60W2f8h3jgAYdEmy5NQ Smallchunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct Llchunk_XsENErzHIZV9bhvyJx56wGw Llchunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct Bigchunk_Rv9c70Uhp2TytkX7eH78qEg Bigchunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct Intset_EZObFrE3NC9bIb3YMkY9crZA Intset_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct Avlnode_IaqjtwKhxLEpvDS9bct9blEw Avlnode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct Gcstat_0RwLoVBHZPfUAcLczmfQAg Gcstat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct Cellset_jG87P0AI9aZtss9ccTYBIISQ Cellset_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct Pagedesc_fublkgIY4LG3mT51LU2WHg Pagedesc_fublkgIY4LG3mT51LU2WHg;
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
typedef NU8 Tnimkind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p0);
struct  TNimType  {
NI size;
Tnimkind_jIBKr1ejBgsfM33Kxw4j7A kind;
Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tendian_bQ3yFYQJojZPNYsZnS7Zjg;
struct TY_UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
Tendian_bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef TY_UpiOGlu5Ux6DLM73wSrdpg TY_AkFlnp1eOXOampCkGKpGYA[19];
typedef NU8 Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 Tinfoosprop_thetQwB9agpeQ13qFmAcWhg_Set;
struct TY_5L3fCt9bX0gyEcO30ervPLw {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
Tinfoosprop_thetQwB9agpeQ13qFmAcWhg_Set Field12;
};
typedef TY_5L3fCt9bX0gyEcO30ervPLw TY_lqxxFN1iDg3WCzdrp3BQKA[24];
typedef NU8 Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ;
typedef NU8 Tinfoosprop_thetQwB9agpeQ13qFmAcWhg;
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
struct  Tident_4umxGerWTHGPwUms7Yqu3g  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
Tident_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NU8 Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ;
struct  Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw  {
  TNimObject Sup;
NI counter;
TY_4eQHGndY6XBYpFOH09apV8Q* data;
Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct TY_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  Cellseq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  Intset_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
struct  Memregion_x81NhDv59b8ercDZ9bi85jyg  {
NI minlargeobj;
NI maxlargeobj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freesmallchunks;
Llchunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* freechunkslist;
Intset_EZObFrE3NC9bIb3YMkY9crZA chunkstarts;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* root;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* last;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* freeavlnodes;
NIM_BOOL locked;
NIM_BOOL blockchunksizeincrease;
NI nextchunksize;
};
struct  Gcstat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
Pagedesc_fublkgIY4LG3mT51LU2WHg* head;
Pagedesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  Gcheap_1TRH1TZMaVZTnLNcIHuNFQ  {
Gcstack_7fytPA5bBsob6See21YMRA* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq_Axo1XVm9aaQueTOldv8le5w zct;
Cellseq_Axo1XVm9aaQueTOldv8le5w decstack;
Cellseq_Axo1XVm9aaQueTOldv8le5w tempstack;
NI recgclock;
Memregion_x81NhDv59b8ercDZ9bi85jyg region;
Gcstat_0RwLoVBHZPfUAcLczmfQAg stat;
Cellset_jG87P0AI9aZtss9ccTYBIISQ marked;
Cellseq_Axo1XVm9aaQueTOldv8le5w additionalroots;
};
struct  Gcstack_7fytPA5bBsob6See21YMRA  {
Gcstack_7fytPA5bBsob6See21YMRA* prev;
Gcstack_7fytPA5bBsob6See21YMRA* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk_tXn60W2f8h3jgAYdEmy5NQ  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* next;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
Freecell_u6M5LHprqzkn9axr04yg9bGQ* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
Llchunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  Bigchunk_Rv9c70Uhp2TytkX7eH78qEg  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* next;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NI align;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef Avlnode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  Avlnode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc_fublkgIY4LG3mT51LU2WHg  {
Pagedesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  Freecell_u6M5LHprqzkn9axr04yg9bGQ  {
Freecell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zerofield;
};
struct TY_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  TY_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
static N_NIMCALL(void, T_UpH3CWy69aOHB2xkQBDirlg_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerproc0);
N_NIMCALL(NIM_BOOL, isdefined_BNPf2mtM9a7JF7UKiCAngvg)(NimStringDesc* symbol0);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* t0, NimStringDesc* key0);
N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* t0, NimStringDesc* key0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a0, void* b0, NI size0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(NI, hashString)(NimStringDesc* s0);
N_NIMCALL(Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw*, nstnewStringTable)(Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ mode0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, decref_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NIMCALL(void, definesymbol_9aZwRQ421PtIIOO9cHOBczPA)(NimStringDesc* symbol0, NimStringDesc* value0);
N_NIMCALL(void, nstPut)(Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* t0, NimStringDesc* key0, NimStringDesc* val0);
N_NIMCALL(NimStringDesc*, lookupsymbol_P9buDVDzBybAj9b6sfnhhrtw)(NimStringDesc* symbol0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* gsymbols_tS4f2TwBfIz6zIuFAktH6g;
extern TNimType NTI_pkhT5bYRU9ayIZ9cBuuCx4Xw;
extern Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag;
extern Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ targetos_PyF9cBkuAlI8I7Y7KiZHIYQ;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_3, "false", 5);
extern NIM_CONST TY_AkFlnp1eOXOampCkGKpGYA Cpu_uYXopJX8pM87pQDCtmgWfQ;
extern NIM_CONST TY_lqxxFN1iDg3WCzdrp3BQKA Os_Jx0qy9c9bSo4fGkMxUfUaAaw;
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_4, "x86", 3);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_5, "itanium", 7);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_6, "x8664", 5);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_7, "posix", 5);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_8, "unix", 4);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_9, "bsd", 3);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_10, "emulatedthreadvars", 18);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_11, "msdos", 5);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_12, "mswindows", 9);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_13, "win32", 5);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_14, "macintosh", 9);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_15, "sunos", 5);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_16, "littleendian", 12);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_17, "bigendian", 9);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_18, "cpu8", 4);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_19, "cpu16", 5);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_20, "cpu32", 5);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_21, "cpu64", 5);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_22, "nimrawsetjmp", 12);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_23, "nimrod", 6);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_24, "true", 4);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_25, "nimhygiene", 10);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_26, "niminheritable", 14);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_27, "nimmixin", 8);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_28, "nimeffects", 10);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_29, "nimbabel", 8);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_30, "nimcomputedgoto", 15);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_31, "nimunion", 8);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_32, "nimnewshared", 12);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_33, "nimrequiresnimframe", 19);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_34, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_35, "nimalias", 8);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_36, "nimlocks", 8);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_37, "nimnode", 7);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_38, "nimnomagic64", 12);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_39, "nimvarargstyped", 15);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_40, "nimtypedescfixed", 16);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_41, "nimKnowsNimvm", 13);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_42, "nimArrIdx", 9);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_43, "nimImmediateDeprecated", 22);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_44, "nimNewShiftOps", 14);
STRING_LITERAL(T_UpH3CWy69aOHB2xkQBDirlg_45, "nimDistros", 10);
static N_NIMCALL(void, T_UpH3CWy69aOHB2xkQBDirlg_2)(void) {
	nimGCvisit((void*)gsymbols_tS4f2TwBfIz6zIuFAktH6g, 0);
}

static N_INLINE(NIM_BOOL, equalmem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC11 = equalmem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isdefined_BNPf2mtM9a7JF7UKiCAngvg)(NimStringDesc* symbol0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	{
		NIM_BOOL LOC3;
		NimStringDesc** LOC6;
		LOC3 = (NIM_BOOL)0;
		LOC3 = nsthasKey(gsymbols_tS4f2TwBfIz6zIuFAktH6g, symbol0);
		if (!LOC3) goto LA4;
		LOC6 = (NimStringDesc**)0;
		LOC6 = nstTake(gsymbols_tS4f2TwBfIz6zIuFAktH6g, symbol0);
		result0 = !(eqStrings((*LOC6), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_3)));
	}
	goto LA1;
	LA4: ;
	{
		NI LOC8;
		LOC8 = (NI)0;
		LOC8 = nsuCmpIgnoreStyle(symbol0, Cpu_uYXopJX8pM87pQDCtmgWfQ[(targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field0);
		if (!(LOC8 == ((NI) 0))) goto LA9;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA9: ;
	{
		NI LOC12;
		LOC12 = (NI)0;
		LOC12 = nsuCmpIgnoreStyle(symbol0, Os_Jx0qy9c9bSo4fGkMxUfUaAaw[(targetos_PyF9cBkuAlI8I7Y7KiZHIYQ)- 1].Field0);
		if (!(LOC12 == ((NI) 0))) goto LA13;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA13: ;
	{
		NimStringDesc* LOC16;
		LOC16 = (NimStringDesc*)0;
		LOC16 = nsuNormalize(symbol0);
		switch (hashString(LOC16) & 31) {
		case 0: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_13))) goto LA24;
break;
		case 1: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_12))) goto LA24;
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_22))) goto LA33;
break;
		case 2: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_20))) goto LA31;
break;
		case 3: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_11))) goto LA23;
break;
		case 6: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_9))) goto LA21;
break;
		case 13: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_15))) goto LA26;
break;
		case 15: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_4))) goto LA17;
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_5))) goto LA18;
break;
		case 19: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_8))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_10))) goto LA22;
break;
		case 20: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_17))) goto LA28;
break;
		case 22: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_18))) goto LA29;
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_19))) goto LA30;
break;
		case 23: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_6))) goto LA19;
break;
		case 25: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_21))) goto LA32;
break;
		case 27: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_16))) goto LA27;
break;
		case 30: 
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_7))) goto LA20;
if (eqStrings(LOC16, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_14))) goto LA25;
break;
		}
		goto LA34;
		LA17: ;
		{
			result0 = (targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag == ((Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag) 1));
		}
		goto LA35;
		LA18: ;
		{
			result0 = (targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag == ((Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag) 9));
		}
		goto LA35;
		LA19: ;
		{
			result0 = (targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag == ((Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag) 10));
		}
		goto LA35;
		LA20: ;
		{
			result0 = ((3768304 &(1U<<((NU)(targetos_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA35;
		LA21: ;
		{
			result0 = ((3584 &(1U<<((NU)(targetos_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA35;
		LA22: ;
		{
			result0 = ((Os_Jx0qy9c9bSo4fGkMxUfUaAaw[(targetos_PyF9cBkuAlI8I7Y7KiZHIYQ)- 1].Field12 &(1U<<((NU)(((Tinfoosprop_thetQwB9agpeQ13qFmAcWhg) 3))&7U)))!=0);
		}
		goto LA35;
		LA23: ;
		{
			result0 = (targetos_PyF9cBkuAlI8I7Y7KiZHIYQ == ((Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ) 1));
		}
		goto LA35;
		LA24: ;
		{
			result0 = (targetos_PyF9cBkuAlI8I7Y7KiZHIYQ == ((Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ) 2));
		}
		goto LA35;
		LA25: ;
		{
			result0 = ((786432 &(1U<<((NU)(targetos_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA35;
		LA26: ;
		{
			result0 = (targetos_PyF9cBkuAlI8I7Y7KiZHIYQ == ((Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ) 7));
		}
		goto LA35;
		LA27: ;
		{
			result0 = (Cpu_uYXopJX8pM87pQDCtmgWfQ[(targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field2 == ((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0));
		}
		goto LA35;
		LA28: ;
		{
			result0 = (Cpu_uYXopJX8pM87pQDCtmgWfQ[(targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field2 == ((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 1));
		}
		goto LA35;
		LA29: ;
		{
			result0 = (Cpu_uYXopJX8pM87pQDCtmgWfQ[(targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 8));
		}
		goto LA35;
		LA30: ;
		{
			result0 = (Cpu_uYXopJX8pM87pQDCtmgWfQ[(targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 16));
		}
		goto LA35;
		LA31: ;
		{
			result0 = (Cpu_uYXopJX8pM87pQDCtmgWfQ[(targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 32));
		}
		goto LA35;
		LA32: ;
		{
			result0 = (Cpu_uYXopJX8pM87pQDCtmgWfQ[(targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag)- 1].Field4 == ((NI) 64));
		}
		goto LA35;
		LA33: ;
		{
			result0 = ((528000 &(1U<<((NU)(targetos_PyF9cBkuAlI8I7Y7KiZHIYQ)&31U)))!=0);
		}
		goto LA35;
		LA34: ;
		{
		}
		LA35: ;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isdefined_rrIlGPFUdgeaN36zhjolNA)(Tident_4umxGerWTHGPwUms7Yqu3g* symbol0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = isdefined_BNPf2mtM9a7JF7UKiCAngvg((*symbol0).s);
	return result0;
}

N_NIMCALL(NI, countdefinedsymbols_0PZoTF9cuNqw59bHjttVR3uw)(void) {
	NI result0;
	result0 = (NI)0;
	result0 = ((NI) 0);
	{
		NimStringDesc* key_FqDPT1t58HtHSzzDcBmBew;
		NimStringDesc* val_DTtEvybLZ4yehx2dHqVhBA;
		key_FqDPT1t58HtHSzzDcBmBew = (NimStringDesc*)0;
		val_DTtEvybLZ4yehx2dHqVhBA = (NimStringDesc*)0;
		{
			NI h_ruCOIrC9bCsuUxlxavFVvgA;
			NI HEX3Atmp_gkyXSwBnv8SgdIPRvtXZGA;
			NI res_G8gHZEgHIDpy9bwAgg4BQdQ;
			h_ruCOIrC9bCsuUxlxavFVvgA = (NI)0;
			HEX3Atmp_gkyXSwBnv8SgdIPRvtXZGA = (NI)0;
			HEX3Atmp_gkyXSwBnv8SgdIPRvtXZGA = ((*gsymbols_tS4f2TwBfIz6zIuFAktH6g).data ? ((*gsymbols_tS4f2TwBfIz6zIuFAktH6g).data->Sup.len-1) : -1);
			res_G8gHZEgHIDpy9bwAgg4BQdQ = ((NI) 0);
			{
				while (1) {
					if (!(res_G8gHZEgHIDpy9bwAgg4BQdQ <= HEX3Atmp_gkyXSwBnv8SgdIPRvtXZGA)) goto LA4;
					h_ruCOIrC9bCsuUxlxavFVvgA = res_G8gHZEgHIDpy9bwAgg4BQdQ;
					{
						if (!!(((*gsymbols_tS4f2TwBfIz6zIuFAktH6g).data->data[h_ruCOIrC9bCsuUxlxavFVvgA].Field0 == 0))) goto LA7;
						key_FqDPT1t58HtHSzzDcBmBew = (*gsymbols_tS4f2TwBfIz6zIuFAktH6g).data->data[h_ruCOIrC9bCsuUxlxavFVvgA].Field0;
						val_DTtEvybLZ4yehx2dHqVhBA = (*gsymbols_tS4f2TwBfIz6zIuFAktH6g).data->data[h_ruCOIrC9bCsuUxlxavFVvgA].Field1;
						{
							if (!!(eqStrings(val_DTtEvybLZ4yehx2dHqVhBA, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_3)))) goto LA11;
							result0 += ((NI) 1);
						}
						LA11: ;
					}
					LA7: ;
					res_G8gHZEgHIDpy9bwAgg4BQdQ += ((NI) 1);
				} LA4: ;
			}
		}
	}
	return result0;
}

static N_INLINE(void, incref_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result0;
	result0 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result0 = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result0;
}

static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0) {
	addzct_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c0);
}

static N_INLINE(void, decref_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		LOC5 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src0);
		incref_9cAA5YuQAAC3MVbnGeV86swsystem(LOC5);
	}
	LA3: ;
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		LOC10 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest0));
		decref_MV4BBk6J1qu70IbBxwEn4wsystem(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, definesymbol_9aZwRQ421PtIIOO9cHOBczPA)(NimStringDesc* symbol0, NimStringDesc* value0) {
	nstPut(gsymbols_tS4f2TwBfIz6zIuFAktH6g, symbol0, value0);
}

N_NIMCALL(void, initdefines_cpH2nhcvqZlKU3W1Gx7n5Q)(void) {
	asgnRef((void**) (&gsymbols_tS4f2TwBfIz6zIuFAktH6g), nstnewStringTable(((Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ) 2)));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_23), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_25), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_26), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_27), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_28), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_29), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_30), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_31), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_32), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_33), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_34), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_35), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_36), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_37), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_38), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_39), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_40), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_41), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_42), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_43), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_44), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
	definesymbol_9aZwRQ421PtIIOO9cHOBczPA(((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_45), ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_24));
}

N_NIMCALL(void, undefsymbol_A5AFbr8Omc1Bw39cFWCpEFg)(NimStringDesc* symbol0) {
	nstPut(gsymbols_tS4f2TwBfIz6zIuFAktH6g, symbol0, ((NimStringDesc*) &T_UpH3CWy69aOHB2xkQBDirlg_3));
}

N_NIMCALL(NimStringDesc*, lookupsymbol_P9buDVDzBybAj9b6sfnhhrtw)(NimStringDesc* symbol0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		NIM_BOOL LOC3;
		NimStringDesc** LOC6;
		LOC3 = (NIM_BOOL)0;
		LOC3 = isdefined_BNPf2mtM9a7JF7UKiCAngvg(symbol0);
		if (!LOC3) goto LA4;
		LOC6 = (NimStringDesc**)0;
		LOC6 = nstTake(gsymbols_tS4f2TwBfIz6zIuFAktH6g, symbol0);
		result0 = copyString((*LOC6));
	}
	goto LA1;
	LA4: ;
	{
		result0 = copyString(NIM_NIL);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, lookupsymbol_nkM7rGGDtF7m9cAXTVU51ig)(Tident_4umxGerWTHGPwUms7Yqu3g* symbol0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = lookupsymbol_P9buDVDzBybAj9b6sfnhhrtw((*symbol0).s);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit000)(void) {
nimRegisterGlobalMarker(T_UpH3CWy69aOHB2xkQBDirlg_2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit000)(void) {
}

