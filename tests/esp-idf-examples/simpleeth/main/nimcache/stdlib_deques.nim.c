/* Generated by Nim Compiler v1.3.7 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

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
typedef struct tyObject_Deque__NuwIXbomwb0PtcywOgXRnA tyObject_Deque__NuwIXbomwb0PtcywOgXRnA;
typedef struct tySequence__aNpJjaoUowCQc7fBn3wtDQ tySequence__aNpJjaoUowCQc7fBn3wtDQ;
typedef struct tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content;

/* section: NIM_merge_TYPES */
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tySequence__aNpJjaoUowCQc7fBn3wtDQ {
  NI len; tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content* p;
};
struct tyObject_Deque__NuwIXbomwb0PtcywOgXRnA {tySequence__aNpJjaoUowCQc7fBn3wtDQ data;
NI head;
NI tail;
NI count;
NI mask;
};


#ifndef tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content_PP
#define tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content_PP
struct tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content { NI cap; tyProc__HzVCwACFYM9cx9aV62PdjtuA data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content_PP
#define tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content_PP
struct tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content { NI cap; tyProc__HzVCwACFYM9cx9aV62PdjtuA data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, expandIfNeeded__1x32uzSajoB9apwB9bmROoXg)(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA* deq);
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__v2qC0V55wqa9bmqc7eHTz8A)(NI x);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap, NI elemSize, NI elemAlign);
N_LIB_PRIVATE N_NIMCALL(tySequence__aNpJjaoUowCQc7fBn3wtDQ, newSeq__ILSNHW9c3lP5v9b9bo2LBqVtw)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___aNqiYmp9ar7THhnb8lzO5xQ)(tyProc__HzVCwACFYM9cx9aV62PdjtuA* dest, tyProc__HzVCwACFYM9cx9aV62PdjtuA src);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___D0dhBCxVk3XqANuxIsdEFA)(tySequence__aNpJjaoUowCQc7fBn3wtDQ* dest, tySequence__aNpJjaoUowCQc7fBn3wtDQ src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___rUm7oApHfDhst5D9c9bIuG7Q)(tySequence__aNpJjaoUowCQc7fBn3wtDQ* dest);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, eq___aNqiYmp9ar7THhnb8lzO5xQ_2)(tyProc__HzVCwACFYM9cx9aV62PdjtuA* dest, tyProc__HzVCwACFYM9cx9aV62PdjtuA src);

/* section: NIM_merge_VARS */
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */

#line 22 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
#line 24 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 24 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memset(a, v, ((size_t) (size)));}

#line 414 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {	NIM_BOOL* result;	result = (NIM_BOOL*)0;
#line 415 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);	return result;}

#line 33 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
static N_INLINE(void, nimZeroMem)(void* p, NI size) {NIM_BOOL* nimErr_;{nimErr_ = nimErrorFlag();
#line 34 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 34 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
}

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

#line 285 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
N_LIB_PRIVATE N_NIMCALL(void, expandIfNeeded__1x32uzSajoB9apwB9bmROoXg)(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA* deq) {	NI cap;	NI TM__NdgYN5HU2ty0qMI5oazWyg_3;NIM_BOOL* nimErr_;	nimfr_("expandIfNeeded", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");{nimErr_ = nimErrorFlag();
#line 286 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	nimln_(286, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");	{		NI correctSizeX60gensym287_;		NI TM__NdgYN5HU2ty0qMI5oazWyg_2;
#line 76 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(76, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");		if (!((*deq).mask == ((NI) 0))) goto LA3_;

#line 70 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(70, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 70 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		correctSizeX60gensym287_ = nextPowerOfTwo__v2qC0V55wqa9bmqc7eHTz8A(((NI) 4));		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 71 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(71, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 71 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		if (nimSubInt(correctSizeX60gensym287_, ((NI) 1), &TM__NdgYN5HU2ty0qMI5oazWyg_2)) { raiseOverflow(); goto BeforeRet_;};		(*deq).mask = (NI)(TM__NdgYN5HU2ty0qMI5oazWyg_2);
#line 77 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(77, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");		if ((correctSizeX60gensym287_) < ((NI) 0) || (correctSizeX60gensym287_) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(correctSizeX60gensym287_, ((NI) 0), ((NI) IL64(9223372036854775807))); goto BeforeRet_;}		(*deq).data.len = ((NI) (correctSizeX60gensym287_)); (*deq).data.p = (tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content*) newSeqPayload(((NI) (correctSizeX60gensym287_)), sizeof(tyProc__HzVCwACFYM9cx9aV62PdjtuA), NIM_ALIGNOF(tyProc__HzVCwACFYM9cx9aV62PdjtuA));	}
	LA3_: ;

#line 287 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	nimln_(287, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 287 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	if (nimAddInt((*deq).mask, ((NI) 1), &TM__NdgYN5HU2ty0qMI5oazWyg_3)) { raiseOverflow(); goto BeforeRet_;};	cap = (NI)(TM__NdgYN5HU2ty0qMI5oazWyg_3);
#line 288 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	nimln_(288, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");	{		NIM_BOOL T7_;		tySequence__aNpJjaoUowCQc7fBn3wtDQ n;		NI TM__NdgYN5HU2ty0qMI5oazWyg_4;		NI i;		tySequence__aNpJjaoUowCQc7fBn3wtDQ T15_;		NI TM__NdgYN5HU2ty0qMI5oazWyg_8;		NI TM__NdgYN5HU2ty0qMI5oazWyg_9;
#line 2074 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"
		nimln_(2074, "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim");
#line 288 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(288, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 2074 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"
		nimln_(2074, "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim");		T7_ = (NIM_BOOL)0;		T7_ = NIM_UNLIKELY((cap <= (*deq).count));		if (!T7_) goto LA8_;
		n.len = 0; n.p = NIM_NIL;
#line 289 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(289, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 289 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		if (nimMulInt(cap, ((NI) 2), &TM__NdgYN5HU2ty0qMI5oazWyg_4)) { raiseOverflow(); goto BeforeRet_;};		if (((NI)(TM__NdgYN5HU2ty0qMI5oazWyg_4)) < ((NI) 0) || ((NI)(TM__NdgYN5HU2ty0qMI5oazWyg_4)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__NdgYN5HU2ty0qMI5oazWyg_4), ((NI) 0), ((NI) IL64(9223372036854775807))); goto BeforeRet_;}
#line 289 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		n = newSeq__ILSNHW9c3lP5v9b9bo2LBqVtw(((NI) ((NI)(TM__NdgYN5HU2ty0qMI5oazWyg_4))));
#line 290 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(290, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");		i = ((NI) 0);		{			tyProc__HzVCwACFYM9cx9aV62PdjtuA* x;			NI i_2;			x = (tyProc__HzVCwACFYM9cx9aV62PdjtuA*)0;
#line 245 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
			nimln_(245, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");			i_2 = (*deq).head;			{				NI c;				NI i_3;				c = (NI)0;
#line 106 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators_1.nim"
				nimln_(106, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators_1"
".nim");				i_3 = ((NI) 0);				{
#line 107 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators_1.nim"
					nimln_(107, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators_1"
".nim");					while (1) {						tyProc__HzVCwACFYM9cx9aV62PdjtuA T14_;						NI TM__NdgYN5HU2ty0qMI5oazWyg_5;						NI TM__NdgYN5HU2ty0qMI5oazWyg_6;						NI TM__NdgYN5HU2ty0qMI5oazWyg_7;
#line 107 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators_1.nim"
						if (!(i_3 < (*deq).count)) goto LA13;

#line 246 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
						nimln_(246, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");						c = i_3;
#line 291 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
						nimln_(291, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");						if ((NU)(i_2) >= (NU)(*deq).data.len){ raiseIndexError2(i_2,(*deq).data.len-1); goto BeforeRet_;}						x = (&(*deq).data.p->data[i_2]);
#line 114 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/seqs_v2.nim"
						nimln_(114, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/seqs_v2.nim");						if ((NU)(i) >= (NU)n.len){ raiseIndexError2(i,n.len-1); goto BeforeRet_;}
#line 293 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
						nimln_(293, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");						nimZeroMem((void*)(&T14_), sizeof(tyProc__HzVCwACFYM9cx9aV62PdjtuA));						T14_.ClE_0 = (*x).ClE_0;						T14_.ClP_0 = (*x).ClP_0;						nimZeroMem((void*)(&(*x)), sizeof(tyProc__HzVCwACFYM9cx9aV62PdjtuA));
#line 114 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/seqs_v2.nim"
						nimln_(114, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/seqs_v2.nim");						eqsink___aNqiYmp9ar7THhnb8lzO5xQ((&n.p->data[i]), T14_);

#line 294 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
						nimln_(294, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");						if (nimAddInt(i, ((NI) 1), &TM__NdgYN5HU2ty0qMI5oazWyg_5)) { raiseOverflow(); goto BeforeRet_;};						i = (NI)(TM__NdgYN5HU2ty0qMI5oazWyg_5);
#line 248 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
						nimln_(248, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 248 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"

#line 248 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
						if (nimAddInt(i_2, ((NI) 1), &TM__NdgYN5HU2ty0qMI5oazWyg_6)) { raiseOverflow(); goto BeforeRet_;};						i_2 = (NI)((NI)(TM__NdgYN5HU2ty0qMI5oazWyg_6) & (*deq).mask);
#line 109 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators_1.nim"
						nimln_(109, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/iterators_1"
".nim");						if (nimAddInt(i_3, ((NI) 1), &TM__NdgYN5HU2ty0qMI5oazWyg_7)) { raiseOverflow(); goto BeforeRet_;};						i_3 = (NI)(TM__NdgYN5HU2ty0qMI5oazWyg_7);					} LA13: ;
				}
			}
		}

#line 94 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/threads.nim"
		nimln_(94, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/threads.nim");
#line 295 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(295, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");		T15_.len = 0; T15_.p = NIM_NIL;		T15_ = n;		n.len = 0; n.p = NIM_NIL;
#line 94 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/threads.nim"
		nimln_(94, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/threads.nim");		eqsink___D0dhBCxVk3XqANuxIsdEFA((&(*deq).data), T15_);

#line 296 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(296, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 296 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"

#line 296 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		if (nimMulInt(cap, ((NI) 2), &TM__NdgYN5HU2ty0qMI5oazWyg_8)) { raiseOverflow(); goto BeforeRet_;};		if (nimSubInt((NI)(TM__NdgYN5HU2ty0qMI5oazWyg_8), ((NI) 1), &TM__NdgYN5HU2ty0qMI5oazWyg_9)) { raiseOverflow(); goto BeforeRet_;};		(*deq).mask = (NI)(TM__NdgYN5HU2ty0qMI5oazWyg_9);
#line 297 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(297, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");		(*deq).tail = (*deq).count;
#line 298 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
		nimln_(298, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");		(*deq).head = ((NI) 0);
#line 94 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/threads.nim"
		nimln_(94, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/threads.nim");
#line 94 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/threads.nim"
		eqdestroy___rUm7oApHfDhst5D9c9bIuG7Q((&n));
	}
	LA8_: ;
	}BeforeRet_: ;
	popFrame();}

#line 320 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
N_LIB_PRIVATE N_NIMCALL(void, addLast__AjJTTDDB8sceZqEDAtFWRA)(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA* deq, tyProc__HzVCwACFYM9cx9aV62PdjtuA item) {	NI TM__NdgYN5HU2ty0qMI5oazWyg_10;	NI TM__NdgYN5HU2ty0qMI5oazWyg_11;NIM_BOOL* nimErr_;	nimfr_("addLast", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");{nimErr_ = nimErrorFlag();
#line 335 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	nimln_(335, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 335 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	expandIfNeeded__1x32uzSajoB9apwB9bmROoXg(deq);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 336 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	nimln_(336, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");	if (nimAddInt((*deq).count, ((NI) 1), &TM__NdgYN5HU2ty0qMI5oazWyg_10)) { raiseOverflow(); goto BeforeRet_;};	(*deq).count = (NI)(TM__NdgYN5HU2ty0qMI5oazWyg_10);
#line 114 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/seqs_v2.nim"
	nimln_(114, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/seqs_v2.nim");	if ((NU)((*deq).tail) >= (NU)(*deq).data.len){ raiseIndexError2((*deq).tail,(*deq).data.len-1); goto BeforeRet_;}
#line 114 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/seqs_v2.nim"
	eq___aNqiYmp9ar7THhnb8lzO5xQ_2((&(*deq).data.p->data[(*deq).tail]), item);

#line 338 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	nimln_(338, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 338 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"

#line 338 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	if (nimAddInt((*deq).tail, ((NI) 1), &TM__NdgYN5HU2ty0qMI5oazWyg_11)) { raiseOverflow(); goto BeforeRet_;};	(*deq).tail = (NI)((NI)(TM__NdgYN5HU2ty0qMI5oazWyg_11) & (*deq).mask);	}BeforeRet_: ;
	popFrame();}

#line 1143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/asyncdispatch.nim"
N_LIB_PRIVATE N_NIMCALL(void, eqsink___dCzbZ5M07kKVDT8cB39bLkw)(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA* dest, tyObject_Deque__NuwIXbomwb0PtcywOgXRnA* src) {
#line 1143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/asyncdispatch.nim"
	if ((*dest).data.p != (*src).data.p) {
#line 1143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/asyncdispatch.nim"

#line 1143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/asyncdispatch.nim"
	eqdestroy___rUm7oApHfDhst5D9c9bIuG7Q((&(*dest).data));
	}(*dest).data.len = (*src).data.len; (*dest).data.p = (*src).data.p;
#line 1143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/asyncdispatch.nim"
	(*dest).head = (*src).head;
#line 1143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/asyncdispatch.nim"
	(*dest).tail = (*src).tail;
#line 1143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/asyncdispatch.nim"
	(*dest).count = (*src).count;
#line 1143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/asyncdispatch.nim"
	(*dest).mask = (*src).mask;}

#line 79 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA, initDeque__BXrhNE9b8tXeZLatBly0G2w)(NI initialSize) {	tyObject_Deque__NuwIXbomwb0PtcywOgXRnA result;	NI correctSizeX60gensym6_;	NI TM__NdgYN5HU2ty0qMI5oazWyg_12;NIM_BOOL* nimErr_;	nimfr_("initDeque", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");{nimErr_ = nimErrorFlag();	nimZeroMem((void*)(&result), sizeof(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA));
#line 70 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	nimln_(70, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 70 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	correctSizeX60gensym6_ = nextPowerOfTwo__v2qC0V55wqa9bmqc7eHTz8A(initialSize);	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 71 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	nimln_(71, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");
#line 71 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	if (nimSubInt(correctSizeX60gensym6_, ((NI) 1), &TM__NdgYN5HU2ty0qMI5oazWyg_12)) { raiseOverflow(); goto BeforeRet_;};	result.mask = (NI)(TM__NdgYN5HU2ty0qMI5oazWyg_12);
#line 88 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/deques.nim"
	nimln_(88, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/collections/d"
"eques.nim");	if ((correctSizeX60gensym6_) < ((NI) 0) || (correctSizeX60gensym6_) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(correctSizeX60gensym6_, ((NI) 0), ((NI) IL64(9223372036854775807))); goto BeforeRet_;}	result.data.len = ((NI) (correctSizeX60gensym6_)); result.data.p = (tySequence__aNpJjaoUowCQc7fBn3wtDQ_Content*) newSeqPayload(((NI) (correctSizeX60gensym6_)), sizeof(tyProc__HzVCwACFYM9cx9aV62PdjtuA), NIM_ALIGNOF(tyProc__HzVCwACFYM9cx9aV62PdjtuA));	}BeforeRet_: ;
	popFrame();	return result;}
