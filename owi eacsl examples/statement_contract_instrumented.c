/* Generated by Frama-C */
char *__gen_e_acsl_literal_string;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef unsigned long uintptr_t;
typedef unsigned long size_t;
typedef int wchar_t;
typedef int32_t pid_t;
struct __stdio_file {
   int fd ;
   int flags ;
   uint32_t bs ;
   uint32_t bm ;
   uint32_t buflen ;
   char *buf ;
   struct __stdio_file *next ;
   pid_t popen_kludge ;
   unsigned char ungetbuf ;
   char ungotten ;
};
typedef struct __stdio_file FILE;
struct __e_acsl_mpz_struct {
   int _mp_alloc ;
   int _mp_size ;
   unsigned long *_mp_d ;
};
typedef struct __e_acsl_mpz_struct __e_acsl_mpz_struct;
typedef __e_acsl_mpz_struct ( __attribute__((__FC_BUILTIN__)) __e_acsl_mpz_t)[1];
struct __e_acsl_mpq_struct {
   __e_acsl_mpz_struct _mp_num ;
   __e_acsl_mpz_struct _mp_den ;
};
typedef struct __e_acsl_mpq_struct __e_acsl_mpq_struct;
typedef __e_acsl_mpq_struct ( __attribute__((__FC_BUILTIN__)) __e_acsl_mpq_t)[1];
typedef unsigned long __e_acsl_mp_bitcnt_t;
enum __e_acsl_assert_data_type_t {
    E_ACSL_INT = 0,
    E_ACSL_REAL = 1,
    E_ACSL_PTR = 2,
    E_ACSL_ARRAY = 3,
    E_ACSL_FUN = 4,
    E_ACSL_STRUCT = 5,
    E_ACSL_UNION = 6,
    E_ACSL_OTHER = 1000
};
typedef enum __e_acsl_assert_data_type_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_type_t;
enum __e_acsl_assert_data_ikind_t {
    E_ACSL_IBOOL = 0,
    E_ACSL_ICHAR = 1,
    E_ACSL_ISCHAR = 2,
    E_ACSL_IUCHAR = 3,
    E_ACSL_IINT = 4,
    E_ACSL_IUINT = 5,
    E_ACSL_ISHORT = 6,
    E_ACSL_IUSHORT = 7,
    E_ACSL_ILONG = 8,
    E_ACSL_IULONG = 9,
    E_ACSL_ILONGLONG = 10,
    E_ACSL_IULONGLONG = 11,
    E_ACSL_IMPZ = 12
};
typedef enum __e_acsl_assert_data_ikind_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_ikind_t;
enum __e_acsl_assert_data_rkind_t {
    E_ACSL_RFLOAT = 0,
    E_ACSL_RDOUBLE = 1,
    E_ACSL_RLONGDOUBLE = 2,
    E_ACSL_RMPQ = 3
};
typedef enum __e_acsl_assert_data_rkind_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_rkind_t;
union __e_acsl_assert_data_int_value_t {
   _Bool value_bool ;
   char value_char ;
   signed char value_schar ;
   unsigned char value_uchar ;
   int value_int ;
   unsigned int value_uint ;
   short value_short ;
   unsigned short value_ushort ;
   long value_long ;
   unsigned long value_ulong ;
   long long value_llong ;
   unsigned long long value_ullong ;
   struct __e_acsl_mpz_struct *value_mpz ;
};
typedef union __e_acsl_assert_data_int_value_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_int_value_t;
union __e_acsl_assert_data_real_value_t {
   float value_float ;
   double value_double ;
   long double value_ldouble ;
   struct __e_acsl_mpq_struct *value_mpq ;
};
typedef union __e_acsl_assert_data_real_value_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_real_value_t;
struct __e_acsl_assert_data_int_content_t {
   int is_enum ;
   __e_acsl_assert_data_ikind_t kind ;
   __e_acsl_assert_data_int_value_t value ;
};
typedef struct __e_acsl_assert_data_int_content_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_int_content_t;
struct __e_acsl_assert_data_real_content_t {
   __e_acsl_assert_data_rkind_t kind ;
   __e_acsl_assert_data_real_value_t value ;
};
typedef struct __e_acsl_assert_data_real_content_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_real_content_t;
union __e_acsl_assert_data_content_t {
   __e_acsl_assert_data_int_content_t int_content ;
   __e_acsl_assert_data_real_content_t real_content ;
   uintptr_t value_ptr ;
   uintptr_t value_array ;
};
typedef union __e_acsl_assert_data_content_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_content_t;
struct __e_acsl_assert_data_value_t {
   char const *name ;
   __e_acsl_assert_data_type_t type ;
   __e_acsl_assert_data_content_t content ;
   struct __e_acsl_assert_data_value_t *next ;
};
typedef struct __e_acsl_assert_data_value_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_value_t;
struct __e_acsl_assert_data_t {
   int blocking ;
   char const *kind ;
   char const *name ;
   char const *pred_txt ;
   char const *file ;
   char const *fct ;
   int line ;
   __e_acsl_assert_data_value_t *values ;
};
typedef struct __e_acsl_assert_data_t __attribute__((__FC_BUILTIN__)) __e_acsl_assert_data_t;
struct __e_acsl_contract_t;
typedef struct __e_acsl_contract_t __attribute__((__FC_BUILTIN__)) __e_acsl_contract_t;
struct sched_param {
   int sched_priority ;
};
typedef int pthread_t;
struct __anonstruct_pthread_attr_t_6 {
   int __detachstate ;
   int __schedpolicy ;
   struct sched_param __schedparam ;
   int __inheritsched ;
   int __scope ;
   void *__stackaddr ;
   unsigned long __stacksize ;
};
typedef struct __anonstruct_pthread_attr_t_6 pthread_attr_t;
/*@ ghost extern int __e_acsl_init; */

/*@ requires \valid_read(data) ∧ \initialized(data);
    assigns \nothing;
    
    behavior blocking:
      assumes data->blocking ≢ 0;
      requires predicate ≢ 0;
    
    behavior non_blocking:
      assumes data->blocking ≡ 0;
      check requires predicate ≢ 0;
    
    complete behaviors non_blocking, blocking;
    disjoint behaviors non_blocking, blocking;
 */
 __attribute__((__FC_BUILTIN__)) void __e_acsl_assert(int predicate,
                                                      __e_acsl_assert_data_t *data);

extern size_t __e_acsl_heap_allocation_size;

extern size_t __e_acsl_heap_allocated_blocks;

/*@ ghost extern int __fc_heap_status; */

/*@ requires \valid(data);
    requires data->values ≡ \null ∨ \valid(data->values);
    assigns data->values;
    assigns data->values \from (indirect: __fc_heap_status), value;
 */
 __attribute__((__FC_BUILTIN__)) void __e_acsl_assert_register_int(__e_acsl_assert_data_t *data,
                                                                   char const *name,
                                                                   int is_enum,
                                                                   int value);

/*@ requires \valid(data);
    assigns \nothing; */
 __attribute__((__FC_BUILTIN__)) void __e_acsl_assert_clean(__e_acsl_assert_data_t *data);

/*@ admit ensures \valid(\result);
    assigns \result;
    assigns \result \from (indirect: __fc_heap_status), (indirect: size);
 */
 __attribute__((__FC_BUILTIN__)) __e_acsl_contract_t *__e_acsl_contract_init
(size_t size);

/*@ requires \valid(c);
    assigns \nothing; */
 __attribute__((__FC_BUILTIN__)) void __e_acsl_contract_clean(__e_acsl_contract_t *c);

/*@ requires \valid(c);
    assigns *c;
    assigns *c \from (indirect: c), (indirect: i), assumes;
 */
 __attribute__((__FC_BUILTIN__)) void __e_acsl_contract_set_behavior_assumes
(__e_acsl_contract_t *c, size_t i, int assumes);

/*@ requires \valid_read(c);
    ensures \result ≡ 0 ∨ \result ≡ 1;
    assigns \result;
    assigns \result \from (indirect: c), (indirect: i);
 */
 __attribute__((__FC_BUILTIN__)) int __e_acsl_contract_get_behavior_assumes
(__e_acsl_contract_t const *c, size_t i);

 __attribute__((__FC_BUILTIN__)) int __e_acsl_contract_partial_count_all_behaviors
(__e_acsl_contract_t const *c);

/*@
axiomatic dynamic_allocation {
  predicate is_allocable{L}(ℤ n) 
    reads __fc_heap_status;
  
  axiom never_allocable{L}:
    ∀ ℤ i; i < 0 ∨ i > 0xfffffffful ⇒ ¬is_allocable(i);
  
  }
 */
/*@ assigns \nothing; */
 __attribute__((__FC_BUILTIN__)) void __e_acsl_memory_init(int *argc_ref,
                                                           char ***argv,
                                                           size_t ptr_size);

/*@ assigns \nothing; */
 __attribute__((__FC_BUILTIN__)) void __e_acsl_memory_clean(void);

/*@ ensures \result ≡ \old(ptr);
    assigns \result;
    assigns \result \from *((char *)ptr + (0 .. size - 1)), ptr, size;
 */
 __attribute__((__FC_BUILTIN__)) void *__e_acsl_store_block(void *ptr,
                                                            size_t size);

/*@ assigns \nothing; */
 __attribute__((__FC_BUILTIN__)) void __e_acsl_full_init(void *ptr);

/*@ assigns \nothing; */
 __attribute__((__FC_BUILTIN__)) void __e_acsl_mark_readonly(void *ptr);

long valid_nstring(char *s, long n, int wrtbl);

long valid_nwstring(wchar_t *s, long n, int wrtbl);

__inline static long valid_string__fc_inline(char *s, int wrtbl)
{
  long tmp;
  tmp = valid_nstring(s,(long)(-1),wrtbl);
  return tmp;
}

__inline static long valid_wstring__fc_inline(wchar_t *s, int wrtbl)
{
  long tmp;
  tmp = valid_nwstring(s,(long)(-1),wrtbl);
  return tmp;
}

extern  __attribute__((__FC_BUILTIN__)) int __e_acsl_sound_verdict;

typedef long long time_t;
time_t time(time_t *t);

extern int ( /* missing proto */ srand)(long long x_0);

extern int ( /* missing proto */ rand)(void);

/*@ assigns \result;
    assigns \result
      \from (indirect: *(format + (0 ..))), (indirect: param1),
            (indirect: param0);
 */
int printf_va_1(char const *format, int param0, int param1);

void __e_acsl_globals_init(void)
{
  static char __e_acsl_already_run = 0;
  if (! __e_acsl_already_run) {
    __e_acsl_already_run = 1;
    __gen_e_acsl_literal_string = "Value: %d, Result: %d\n";
    __e_acsl_store_block((void *)__gen_e_acsl_literal_string,
                         sizeof("Value: %d, Result: %d\n"));
    __e_acsl_full_init((void *)__gen_e_acsl_literal_string);
    __e_acsl_mark_readonly((void *)__gen_e_acsl_literal_string);
  }
  return;
}

int main(void)
{
  __e_acsl_contract_t *__gen_e_acsl_contract;
  int __retres;
  int value;
  int sign;
  int result;
  time_t tmp;
  __e_acsl_memory_init((int *)0,(char ***)0,8UL);
  __e_acsl_globals_init();
  tmp = time((time_t *)0);
  srand(tmp);
  value = rand();
  sign = rand();
  if (sign % 2) value = - value;
  {
    int __gen_e_acsl_assumes_value;
    {
      int __gen_e_acsl_active_bhvrs;
      __gen_e_acsl_contract = __e_acsl_contract_init(2UL);
      __e_acsl_assert_data_t __gen_e_acsl_assert_data =
        {.values = (void *)0};
      __e_acsl_assert_register_int(& __gen_e_acsl_assert_data,"value",0,
                                   value);
      __gen_e_acsl_assert_data.blocking = 1;
      __gen_e_acsl_assert_data.kind = "Precondition";
      __gen_e_acsl_assert_data.pred_txt = "value > -1 - 0x7fffffff";
      __gen_e_acsl_assert_data.file = "E-ACSL-examples/owi eacsl examples/statement_contract.c";
      __gen_e_acsl_assert_data.fct = "main";
      __gen_e_acsl_assert_data.line = 17;
      __e_acsl_assert(value > (-2147483647-1),& __gen_e_acsl_assert_data);
      __e_acsl_assert_clean(& __gen_e_acsl_assert_data);
      __e_acsl_contract_set_behavior_assumes(__gen_e_acsl_contract,0UL,
                                             value >= 0);
      __e_acsl_contract_set_behavior_assumes(__gen_e_acsl_contract,1UL,
                                             value < 0);
      __gen_e_acsl_active_bhvrs = __e_acsl_contract_partial_count_all_behaviors
      ((__e_acsl_contract_t const *)__gen_e_acsl_contract);
      __e_acsl_assert_data_t __gen_e_acsl_assert_data_2 =
        {.values = (void *)0};
      __e_acsl_assert_data_t __gen_e_acsl_assert_data_3 =
        {.values = (void *)0};
      if (__gen_e_acsl_active_bhvrs != 1) {
        __gen_e_acsl_assert_data_2.blocking = 1;
        __gen_e_acsl_assert_data_2.kind = "Precondition";
        __gen_e_acsl_assert_data_2.pred_txt = "all behaviors complete";
        __gen_e_acsl_assert_data_2.file = "E-ACSL-examples/owi eacsl examples/statement_contract.c";
        __gen_e_acsl_assert_data_2.fct = "main";
        __gen_e_acsl_assert_data_2.line = 32;
        __e_acsl_assert(__gen_e_acsl_active_bhvrs >= 1,
                        & __gen_e_acsl_assert_data_2);
        __e_acsl_assert_clean(& __gen_e_acsl_assert_data_2);
        __gen_e_acsl_assert_data_3.blocking = 1;
        __gen_e_acsl_assert_data_3.kind = "Precondition";
        __gen_e_acsl_assert_data_3.pred_txt = "all behaviors disjoint";
        __gen_e_acsl_assert_data_3.file = "E-ACSL-examples/owi eacsl examples/statement_contract.c";
        __gen_e_acsl_assert_data_3.fct = "main";
        __gen_e_acsl_assert_data_3.line = 32;
        __e_acsl_assert(__gen_e_acsl_active_bhvrs <= 1,
                        & __gen_e_acsl_assert_data_3);
        __e_acsl_assert_clean(& __gen_e_acsl_assert_data_3);
      }
    }
    /*@ requires value > -1 - 0x7fffffff;
        ensures result ≥ 0;
        assigns result;
        
        behavior pos:
          assumes value ≥ 0;
          ensures result ≡ value;
        
        behavior neg:
          assumes value < 0;
          ensures result ≡ -value;
        
        complete behaviors neg, pos;
        disjoint behaviors neg, pos;
    */
    if (value < 0) result = - value; else result = value;
    __e_acsl_assert_data_t __gen_e_acsl_assert_data_4 =
      {.values = (void *)0};
    __e_acsl_assert_register_int(& __gen_e_acsl_assert_data_4,"result",0,
                                 result);
    __gen_e_acsl_assert_data_4.blocking = 1;
    __gen_e_acsl_assert_data_4.kind = "Postcondition";
    __gen_e_acsl_assert_data_4.pred_txt = "result \342\211\245 0";
    __gen_e_acsl_assert_data_4.file = "E-ACSL-examples/owi eacsl examples/statement_contract.c";
    __gen_e_acsl_assert_data_4.fct = "main";
    __gen_e_acsl_assert_data_4.line = 19;
    __e_acsl_assert(result >= 0,& __gen_e_acsl_assert_data_4);
    __e_acsl_assert_clean(& __gen_e_acsl_assert_data_4);
    __gen_e_acsl_assumes_value = __e_acsl_contract_get_behavior_assumes
    ((__e_acsl_contract_t const *)__gen_e_acsl_contract,0UL);
    if (__gen_e_acsl_assumes_value) {
      __e_acsl_assert_data_t __gen_e_acsl_assert_data_5 =
        {.values = (void *)0};
      __e_acsl_assert_register_int(& __gen_e_acsl_assert_data_5,"result",0,
                                   result);
      __e_acsl_assert_register_int(& __gen_e_acsl_assert_data_5,"value",0,
                                   value);
      __gen_e_acsl_assert_data_5.blocking = 1;
      __gen_e_acsl_assert_data_5.kind = "Postcondition";
      __gen_e_acsl_assert_data_5.pred_txt = "result \342\211\241 value";
      __gen_e_acsl_assert_data_5.file = "E-ACSL-examples/owi eacsl examples/statement_contract.c";
      __gen_e_acsl_assert_data_5.fct = "main";
      __gen_e_acsl_assert_data_5.line = 23;
      __gen_e_acsl_assert_data_5.name = "pos";
      __e_acsl_assert(result == value,& __gen_e_acsl_assert_data_5);
      __e_acsl_assert_clean(& __gen_e_acsl_assert_data_5);
    }
    __gen_e_acsl_assumes_value = __e_acsl_contract_get_behavior_assumes
    ((__e_acsl_contract_t const *)__gen_e_acsl_contract,1UL);
    if (__gen_e_acsl_assumes_value) {
      __e_acsl_assert_data_t __gen_e_acsl_assert_data_6 =
        {.values = (void *)0};
      __e_acsl_assert_register_int(& __gen_e_acsl_assert_data_6,"result",0,
                                   result);
      __e_acsl_assert_register_int(& __gen_e_acsl_assert_data_6,"value",0,
                                   value);
      __gen_e_acsl_assert_data_6.blocking = 1;
      __gen_e_acsl_assert_data_6.kind = "Postcondition";
      __gen_e_acsl_assert_data_6.pred_txt = "result \342\211\241 -value";
      __gen_e_acsl_assert_data_6.file = "E-ACSL-examples/owi eacsl examples/statement_contract.c";
      __gen_e_acsl_assert_data_6.fct = "main";
      __gen_e_acsl_assert_data_6.line = 27;
      __gen_e_acsl_assert_data_6.name = "neg";
      __e_acsl_assert((long)result == - ((long)value),
                      & __gen_e_acsl_assert_data_6);
      __e_acsl_assert_clean(& __gen_e_acsl_assert_data_6);
    }
    __e_acsl_contract_clean(__gen_e_acsl_contract);
  }
  printf(__gen_e_acsl_literal_string,value,result); /* printf_va_1 */
  __retres = 0;
  __e_acsl_memory_clean();
  return __retres;
}

