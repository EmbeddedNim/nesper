/* Generated by Nim Compiler v1.3.7 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

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

/* section: NIM_merge_FRAME_DEFINES */
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_AssertionDefect__PtYxPmY5X0dorfvxAFbJpQ tyObject_AssertionDefect__PtYxPmY5X0dorfvxAFbJpQ;
typedef struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct NimStrPayload {NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {NI len;
NimStrPayload* p;
};
struct TNimTypeV2 {void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* disposeImpl;
void* typeInfoV1;
};
struct RootObj {TNimTypeV2* m_type;};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {  RootObj Sup;Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA {  Exception Sup;};
struct tyObject_AssertionDefect__PtYxPmY5X0dorfvxAFbJpQ {  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__gpGJG5CoQzE64skFd9bPG7A)(NimStringV2 msg);
static N_INLINE(void, sysFatal__3MqFiUWEqQBXOyOla7Oh4gassertions)(NimStringV2 message);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, eq___aBBXmHFBEivKqERloP6zmA)(NimStringV2* dest, NimStringV2 src);

/* section: NIM_merge_DATA */
extern TNimTypeV2 NTIv2__PtYxPmY5X0dorfvxAFbJpQ_;

/* section: NIM_merge_VARS */
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */

#line 414 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {	NIM_BOOL* result;	result = (NIM_BOOL*)0;
#line 415 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);	return result;}

#line 544 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, nimFrame)(TFrame* s) {
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;

#line 546 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = ((NI16) 0);	}
	goto LA1_;
	LA3_: ;
	{
#line 549 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 549 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));	}
	LA1_: ;

#line 551 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
#line 552 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;

#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}

#line 86 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, popFrame)(void) {
#line 87 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;}

#line 48 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
static N_INLINE(void, sysFatal__3MqFiUWEqQBXOyOla7Oh4gassertions)(NimStringV2 message) {	tyObject_AssertionDefect__PtYxPmY5X0dorfvxAFbJpQ* T2_;	NimStringV2 blitTmp;NIM_BOOL* nimErr_;	nimfr_("sysFatal", "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");{nimErr_ = nimErrorFlag();	T2_ = (tyObject_AssertionDefect__PtYxPmY5X0dorfvxAFbJpQ*)0;	T2_ = (tyObject_AssertionDefect__PtYxPmY5X0dorfvxAFbJpQ*) nimNewObj(sizeof(tyObject_AssertionDefect__PtYxPmY5X0dorfvxAFbJpQ));	(*T2_).Sup.Sup.Sup.m_type = (&NTIv2__PtYxPmY5X0dorfvxAFbJpQ_);	(*T2_).Sup.Sup.name = "AssertionDefect";
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	nimln_(49, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");	blitTmp = message;
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	message.len = 0; message.p = NIM_NIL;	(*T2_).Sup.Sup.message = blitTmp;
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	raiseExceptionEx((Exception*)T2_, "AssertionDefect", "sysFatal", "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim", 49);	goto LA1_;	{		LA1_:;	}
	{
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"

#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&message));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();}

#line 22 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions.nim"
N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__gpGJG5CoQzE64skFd9bPG7A)(NimStringV2 msg) {	NimStringV2 colontmpD_;NIM_BOOL* nimErr_;	nimfr_("raiseAssert", "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions."
"nim");{nimErr_ = nimErrorFlag();	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
#line 23 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions.nim"
	nimln_(23, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions."
"nim");
#line 23 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions.nim"
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	nimln_(49, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	eq___aBBXmHFBEivKqERloP6zmA((&colontmpD_), msg);

#line 23 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions.nim"
	nimln_(23, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions."
"nim");	sysFatal__3MqFiUWEqQBXOyOla7Oh4gassertions(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();}

#line 25 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions.nim"
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringV2 msg) {NIM_BOOL* nimErr_;	nimfr_("failedAssertImpl", "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions."
"nim");{nimErr_ = nimErrorFlag();
#line 30 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions.nim"
	nimln_(30, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions."
"nim");
#line 30 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/assertions.nim"
	raiseAssert__gpGJG5CoQzE64skFd9bPG7A(msg);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();}
