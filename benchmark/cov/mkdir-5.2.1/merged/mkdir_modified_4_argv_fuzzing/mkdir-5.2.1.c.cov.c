#include "argv-fuzz-inl.h"
typedef unsigned long uintmax_t;
enum strtol_error {
  LONGINT_OK = 0,
  LONGINT_OVERFLOW = 1,
  LONGINT_INVALID_SUFFIX_CHAR = 2,
  LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
  LONGINT_INVALID = 4
};
typedef enum strtol_error strtol_error;
typedef long intmax_t;
typedef unsigned long size_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
typedef long __time_t;
typedef long __syscall_slong_t;
typedef __time_t time_t;
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
enum quoting_style {
  literal_quoting_style = 0,
  shell_quoting_style = 1,
  shell_always_quoting_style = 2,
  c_quoting_style = 3,
  escape_quoting_style = 4,
  locale_quoting_style = 5,
  clocale_quoting_style = 6
};
typedef long ptrdiff_t;
typedef unsigned short __u_short;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef __u_short u_short;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __nlink_t nlink_t;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
struct stat {
  __dev_t st_dev;
  __ino_t st_ino;
  __nlink_t st_nlink;
  __mode_t st_mode;
  __uid_t st_uid;
  __gid_t st_gid;
  int __pad0;
  __dev_t st_rdev;
  __off_t st_size;
  __blksize_t st_blksize;
  __blkcnt_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
};
struct dev_ino {
  ino_t st_ino;
  dev_t st_dev;
};
struct cycle_check_state {
  struct dev_ino dev_ino;
  size_t chdir_counter;
  unsigned long magic;
};
struct _ftsent;
struct _ftsent;
struct __anonstruct_FTS_26 {
  struct _ftsent *fts_cur;
  struct _ftsent *fts_child;
  struct _ftsent **fts_array;
  dev_t fts_dev;
  char *fts_path;
  int fts_rfd;
  size_t fts_pathlen;
  int fts_nitems;
  int (*fts_compar)(void const *, void const *);
  int fts_options;
  Hash_table *active_dir_ht;
  struct cycle_check_state *cycle_state;
};
typedef struct __anonstruct_FTS_26 FTS;
struct _ftsent {
  struct _ftsent *fts_cycle;
  struct _ftsent *fts_parent;
  struct _ftsent *fts_link;
  long fts_number;
  void *fts_pointer;
  char *fts_accpath;
  char *fts_path;
  int fts_errno;
  int fts_symfd;
  size_t fts_pathlen;
  ino_t fts_ino;
  dev_t fts_dev;
  nlink_t fts_nlink;
  int fts_level;
  u_short fts_namelen;
  u_short fts_info;
  u_short fts_flags;
  u_short fts_instr;
  struct stat *fts_statp;
  char fts_name[1];
};
typedef struct _ftsent FTSENT;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
struct _IO_FILE {
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[(15UL * sizeof(int) - 4UL * sizeof(void *)) - sizeof(size_t)];
};
typedef int wchar_t;
typedef unsigned int wint_t;
enum __anonenum_arg_type_26 {
  TYPE_NONE = 0,
  TYPE_SCHAR = 1,
  TYPE_UCHAR = 2,
  TYPE_SHORT = 3,
  TYPE_USHORT = 4,
  TYPE_INT = 5,
  TYPE_UINT = 6,
  TYPE_LONGINT = 7,
  TYPE_ULONGINT = 8,
  TYPE_LONGLONGINT = 9,
  TYPE_ULONGLONGINT = 10,
  TYPE_DOUBLE = 11,
  TYPE_LONGDOUBLE = 12,
  TYPE_CHAR = 13,
  TYPE_WIDE_CHAR = 14,
  TYPE_STRING = 15,
  TYPE_WIDE_STRING = 16,
  TYPE_POINTER = 17,
  TYPE_COUNT_SCHAR_POINTER = 18,
  TYPE_COUNT_SHORT_POINTER = 19,
  TYPE_COUNT_INT_POINTER = 20,
  TYPE_COUNT_LONGINT_POINTER = 21,
  TYPE_COUNT_LONGLONGINT_POINTER = 22
};
typedef enum __anonenum_arg_type_26 arg_type;
union __anonunion_a_28 {
  signed char a_schar;
  unsigned char a_uchar;
  short a_short;
  unsigned short a_ushort;
  int a_int;
  unsigned int a_uint;
  long a_longint;
  unsigned long a_ulongint;
  long long a_longlongint;
  unsigned long long a_ulonglongint;
  float a_float;
  double a_double;
  long double a_longdouble;
  int a_char;
  wint_t a_wide_char;
  char const *a_string;
  wchar_t const *a_wide_string;
  void *a_pointer;
  signed char *a_count_schar_pointer;
  short *a_count_short_pointer;
  int *a_count_int_pointer;
  long *a_count_longint_pointer;
  long long *a_count_longlongint_pointer;
};
struct __anonstruct_argument_27 {
  arg_type type;
  union __anonunion_a_28 a;
};
typedef struct __anonstruct_argument_27 argument;
struct __anonstruct_arguments_29 {
  unsigned int count;
  argument *arg;
};
typedef struct __anonstruct_arguments_29 arguments;
struct __anonstruct_char_directive_30 {
  char const *dir_start;
  char const *dir_end;
  int flags;
  char const *width_start;
  char const *width_end;
  int width_arg_index;
  char const *precision_start;
  char const *precision_end;
  int precision_arg_index;
  char conversion;
  int arg_index;
};
typedef struct __anonstruct_char_directive_30 char_directive;
struct __anonstruct_char_directives_31 {
  unsigned int count;
  char_directive *dir;
  unsigned int max_width_length;
  unsigned int max_precision_length;
};
typedef struct __anonstruct_char_directives_31 char_directives;
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
typedef __gid_t gid_t;
typedef __uid_t uid_t;
struct passwd {
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
struct group {
  char *gr_name;
  char *gr_passwd;
  __gid_t gr_gid;
  char **gr_mem;
};
typedef void *iconv_t;
struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long tm_gmtoff;
  char const *tm_zone;
};
union __anonunion___value_16 {
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_15 {
  int __count;
  union __anonunion___value_16 __value;
};
typedef struct __anonstruct___mbstate_t_15 __mbstate_t;
typedef __mbstate_t mbstate_t;
struct numname {
  int num;
  char const name[8];
};
typedef unsigned int md5_uint32;
typedef unsigned long md5_uintptr;
struct sha_ctx {
  md5_uint32 A;
  md5_uint32 B;
  md5_uint32 C;
  md5_uint32 D;
  md5_uint32 E;
  md5_uint32 total[2];
  md5_uint32 buflen;
  char buffer[128];
};
typedef int __clockid_t;
typedef __clockid_t clockid_t;
struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
struct dirent {
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
};
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
struct saved_cwd {
  int desc;
  char *name;
};
typedef int __int32_t;
typedef int __pid_t;
struct __exit_status {
  short e_termination;
  short e_exit;
};
struct __anonstruct_ut_tv_27 {
  __int32_t tv_sec;
  __int32_t tv_usec;
};
struct utmpx {
  short ut_type;
  __pid_t ut_pid;
  char ut_line[32];
  char ut_id[4];
  char ut_user[32];
  char ut_host[256];
  struct __exit_status ut_exit;
  __int32_t ut_session;
  struct __anonstruct_ut_tv_27 ut_tv;
  __int32_t ut_addr_v6[4];
  char __glibc_reserved[20];
};
typedef struct utmpx STRUCT_UTMP;
struct tokenbuffer {
  long size;
  char *buffer;
};
typedef struct tokenbuffer token_buffer;
struct quoting_options;
struct quoting_options;
struct quoting_options {
  enum quoting_style style;
  int quote_these_too[255UL / (sizeof(int) * 8UL) + 1UL];
};
struct slotvec {
  size_t size;
  char *val;
};
typedef __off_t off_t;
struct mntent {
  char *mnt_fsname;
  char *mnt_dir;
  char *mnt_type;
  char *mnt_opts;
  int mnt_freq;
  int mnt_passno;
};
struct mount_entry {
  char *me_devname;
  char *me_mountdir;
  char *me_type;
  dev_t me_dev;
  unsigned int me_dummy : 1;
  unsigned int me_remote : 1;
  unsigned int me_type_malloced : 1;
  struct mount_entry *me_next;
};
typedef __mode_t mode_t;
struct mode_change {
  char op;
  char flags;
  mode_t affected;
  mode_t value;
  struct mode_change *next;
};
struct md5_ctx {
  md5_uint32 A;
  md5_uint32 B;
  md5_uint32 C;
  md5_uint32 D;
  md5_uint32 total[2];
  md5_uint32 buflen;
  char buffer[128];
};
struct ptr_list {
  char *dirname_end;
  struct ptr_list *next;
};
struct option {
  char const *name;
  int has_arg;
  int *flag;
  int val;
};
typedef int nl_item;
struct linebuffer {
  size_t size;
  size_t length;
  char *buffer;
};
union __anonunion_id_22 {
  uid_t u;
  gid_t g;
};
struct userid {
  union __anonunion_id_22 id;
  char *name;
  struct userid *next;
};
struct lconv {
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_p_sep_by_space;
  char int_n_cs_precedes;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;
};
struct hash_entry {
  void *data;
  struct hash_entry *next;
};
struct hash_tuning {
  float shrink_threshold;
  float shrink_factor;
  float growth_threshold;
  float growth_factor;
  _Bool is_n_buckets;
};
typedef struct hash_tuning Hash_tuning;
struct hash_table {
  struct hash_entry *bucket;
  struct hash_entry const *bucket_limit;
  size_t n_buckets;
  size_t n_buckets_used;
  size_t n_entries;
  Hash_tuning const *tuning;
  size_t (*hasher)(void const *, size_t);
  _Bool (*comparator)(void const *, void const *);
  void (*data_freer)(void *);
  struct hash_entry *free_entry_list;
};
typedef struct timezone *__restrict __timezone_ptr_t;
struct __anonstruct_textint_22 {
  int value;
  int digits;
};
typedef struct __anonstruct_textint_22 textint;
struct __anonstruct_table_23 {
  char const *name;
  int type;
  int value;
};
typedef struct __anonstruct_table_23 table;
struct __anonstruct_parser_control_25 {
  char const *input;
  int day_ordinal;
  int day_number;
  int local_isdst;
  int time_zone;
  int meridian;
  textint year;
  int month;
  int day;
  int hour;
  int minutes;
  int seconds;
  int rel_year;
  int rel_month;
  int rel_day;
  int rel_hour;
  int rel_minutes;
  int rel_seconds;
  int dates_seen;
  int days_seen;
  int local_zones_seen;
  int rels_seen;
  int times_seen;
  int zones_seen;
  table local_time_zone_table[3];
};
typedef struct __anonstruct_parser_control_25 parser_control;
union YYSTYPE {
  int intval;
  textint textintval;
};
typedef union YYSTYPE YYSTYPE;
union yyalloc {
  short yyss;
  YYSTYPE yyvs;
};
typedef signed char yysigned_char;
typedef unsigned int __u_int;
typedef __u_int u_int;
struct Active_dir {
  dev_t dev;
  ino_t ino;
  FTSENT *fts_ent;
};
struct __anonstruct___fsid_t____2 {
  int __val[2];
};
typedef struct __anonstruct___fsid_t____2 __fsid_t___;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
struct fs_usage {
  int fsu_blocksize;
  uintmax_t fsu_blocks;
  uintmax_t fsu_bfree;
  uintmax_t fsu_bavail;
  int fsu_bavail_top_bit_set;
  uintmax_t fsu_files;
  uintmax_t fsu_ffree;
};
struct statfs {
  __fsword_t f_type;
  __fsword_t f_bsize;
  __fsblkcnt_t f_blocks;
  __fsblkcnt_t f_bfree;
  __fsblkcnt_t f_bavail;
  __fsfilcnt_t f_files;
  __fsfilcnt_t f_ffree;
  __fsid_t___ f_fsid;
  __fsword_t f_namelen;
  __fsword_t f_frsize;
  __fsword_t f_flags;
  __fsword_t f_spare[4];
};
struct exclude;
struct exclude;
struct patopts {
  char const *pattern;
  int options;
};
struct exclude {
  struct patopts *exclude;
  size_t exclude_alloc;
  size_t exclude_count;
};
typedef unsigned int __socklen_t;
typedef unsigned int uint32_t;
typedef uint32_t in_addr_t;
struct in_addr {
  in_addr_t s_addr;
};
struct hostent {
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;
};
enum backup_type { none = 0, simple = 1, numbered_existing = 2, numbered = 3 };
extern __attribute__((__nothrow__)) unsigned short const **(
    __attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     rpmatch)(char const *response);
extern int getchar_unlocked(void);
extern __attribute__((__nothrow__))
uintmax_t(__attribute__((__leaf__)) strtoumax)(char const *__restrict __nptr,
                                               char **__restrict __endptr,
                                               int __base);
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((
    __leaf__)) __assert_fail)(char const *__assertion, char const *__file,
                              unsigned int __line, char const *__function);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strchr)(char const *__s, int __c)
    __attribute__((__pure__));
extern __attribute__((__nothrow__)) int *(
    __attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) unsigned long(__attribute__((
    __nonnull__(1), __leaf__)) strtoul)(char const *__restrict __nptr,
                                        char **__restrict __endptr, int __base);
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base,
                      unsigned long *val, char const *valid_suffixes);
static strtol_error bkm_scale___0(unsigned long *x, int scale_factor) {









}
static strtol_error bkm_scale_by_power___0(unsigned long *x, int base,
                                           int power) {
























}
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base,
                      unsigned long *val, char const *valid_suffixes) {
  char *t_ptr;
  char **p;
  unsigned long tmp;
  strtol_error err;
  char const *q;
  unsigned short const **tmp___0;
  int *tmp___1;
  char *tmp___2;
  int *tmp___3;
  int *tmp___4;
  int base;
  int suffixes;
  strtol_error overflow;
  char *tmp___5;
  char *tmp___6;

  {
    err = (strtol_error)0;
    if (0 <= strtol_base) {
      if (!(strtol_base <= 36)) {
        {




        }
      }
    } else {
      {




      }
    }
    if (ptr) {

    } else {
      p = &t_ptr;
    }
    q = s;
    {
      while (1) {
      while_continue: ;/* CIL Label */;
        { tmp___0 = __ctype_b_loc(); }
        if (!((int const) * (*tmp___0 + (int)((unsigned char)*q)) & 8192)) {
          goto while_break;
        }

      }
    while_break___0: ;/* CIL Label */;
    }
  while_break:;;
    if ((int const) * q == 45) {

    }
    {
      tmp___1 = __errno_location();
      *tmp___1 = 0;
      tmp = strtoul((char const * /* __restrict  */)s,
                    (char ** /* __restrict  */)p, strtol_base);
    }
    if ((unsigned long)*p == (unsigned long)s) {
















    } else {
      { tmp___4 = __errno_location(); }
      if (*tmp___4 != 0) {
        {

        }




      }
    }
    if (!valid_suffixes) {


    }
    if ((int)*(*p) != 0) {
      {



      }




      { tmp___6 = strchr(valid_suffixes, '0'); }







































































    case_98 : { overflow = bkm_scale___0(&tmp, 512); };

    case_66___0 : { overflow = bkm_scale___0(&tmp, 1024); };

    case_99:;


    case_69 : { overflow = bkm_scale_by_power___0(&tmp, base, 6); };

    case_103 : { overflow = bkm_scale_by_power___0(&tmp, base, 3); };

    case_75 : { overflow = bkm_scale_by_power___0(&tmp, base, 1); };

    case_109 : { overflow = bkm_scale_by_power___0(&tmp, base, 2); };

    case_80 : { overflow = bkm_scale_by_power___0(&tmp, base, 5); };

    case_116 : { overflow = bkm_scale_by_power___0(&tmp, base, 4); };

    case_119 : { overflow = bkm_scale___0(&tmp, 2); };

    case_89 : { overflow = bkm_scale_by_power___0(&tmp, base, 8); };

    case_90 : { overflow = bkm_scale_by_power___0(&tmp, base, 7); };

    switch_default:;


    switch_break___0:;





    }
    *val = tmp;
    return (err);
  }
}
extern
    __attribute__((__nothrow__)) long(__attribute__((__nonnull__(1), __leaf__))
                                      strtol)(char const *__restrict __nptr,
                                              char **__restrict __endptr,
                                              int __base);
extern __attribute__((__nothrow__))
intmax_t(__attribute__((__leaf__)) strtoimax)(char const *__restrict __nptr,
                                              char **__restrict __endptr,
                                              int __base);
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1), __leaf__))
    strndup)(char const *__string, size_t __n) __attribute__((__malloc__));
__attribute__((__noreturn__)) void xalloc_die(void);
extern __attribute__((__nothrow__))
size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s)
    __attribute__((__pure__));
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) rpl_free)(void *p);
extern __attribute__((__nothrow__))
ssize_t(__attribute__((__nonnull__(1, 2), __leaf__))
        readlink)(char const *__restrict __path, char *__restrict __buf,
                  size_t __len);
void *xmalloc(size_t n);
extern int nanosleep(struct timespec const *__requested_time,
                     struct timespec *__remaining);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           gettext)(char const *__msgid)
    __attribute__((__format_arg__(1)));
extern void error(int __status, int __errnum, char const *__format, ...);
int volatile exit_failure;
void (*xalloc_fail_func)(void);
char const xalloc_msg_memory_exhausted[17];
void *xrealloc(void *p, size_t n);
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                           malloc)(size_t __size)
    __attribute__((__malloc__));
extern
    __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                        calloc)(size_t __nmemb, size_t __size)
        __attribute__((__malloc__));
extern
    __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__,
                                                       __leaf__))
                                        realloc)(void *__ptr, size_t __size);
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       abort)(void);
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern
    __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1),
                                                       __leaf__))
                                        memset)(void *__s, int __c, size_t __n);
void (*xalloc_fail_func)(void) = (void (*)(void))0;
char const xalloc_msg_memory_exhausted[17] = {
    (char const)'m',   (char const)'e', (char const)'m', (char const)'o',
    (char const)'r',   (char const)'y', (char const)' ', (char const)'e',
    (char const)'x',   (char const)'h', (char const)'a', (char const)'u',
    (char const)'s',   (char const)'t', (char const)'e', (char const)'d',
    (char const)'\000'};
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void) {














}
__inline static void *xnmalloc_inline(size_t n, size_t s) {























}
void *xmalloc(size_t n) {






}
__inline static void *xnrealloc_inline(void *p, size_t n, size_t s) {






















}
void *xrealloc(void *p, size_t n) {






}
extern int gethostname();
__attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                    rpl_getcwd)(char *buf, size_t size);
char *xgetcwd(void);
char *xgetcwd(void) {





















}
char const *quote(char const *name);
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format,
                   ...);
extern int vfprintf(FILE *__restrict __s, char const *__restrict __format,
                    __gnuc_va_list __arg);
extern int putc_unlocked(int __c, FILE *__stream);
extern int fputs_unlocked(char const *__restrict __s,
                          FILE *__restrict __stream);
char const *version_etc_copyright;
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...);
char const *version_etc_copyright =
    "Copyright (C) 2004 Free Software Foundation, Inc.";
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors) {



































































































































































}
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) {









}
extern __attribute__((__nothrow__)) int
snprintf(char *__restrict __s, size_t __maxlen, char const *__restrict __format,
         ...);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     utimes)(char const *__file,
                                             struct timeval const *__tvp);
extern __attribute__((__nothrow__)) int
sprintf(char *__restrict __s, char const *__restrict __format, ...);
extern void endpwent(void);
extern struct passwd *getpwnam(char const *__name);
extern void endgrent(void);
extern struct group *getgrgid(__gid_t __gid);
extern struct group *getgrnam(char const *__name);
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcpy)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strdup)(char const *__s)
    __attribute__((__malloc__));
static char const *E_invalid_user = "invalid user";
static char const *E_invalid_group = "invalid group";
static char const *E_bad_spec = "cannot get the login group of a numeric UID";
static char const *E_cannot_omit_both = "cannot omit both user and group";
extern size_t fwrite(void const *__restrict __ptr, size_t __size, size_t __n,
                     FILE *__restrict __s);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern iconv_t iconv_open(char const *__tocode, char const *__fromcode);
extern size_t iconv(iconv_t __cd, char **__restrict __inbuf,
                    size_t *__restrict __inbytesleft,
                    char **__restrict __outbuf,
                    size_t *__restrict __outbytesleft);
static int initialized;
static int is_utf8;
static iconv_t utf8_to_local;
extern __attribute__((__nothrow__)) struct tm *(__attribute__((__leaf__))
                                                gmtime)(time_t const *__timer);
extern
    __attribute__((__nothrow__)) struct tm *(__attribute__((__leaf__))
                                             localtime)(time_t const *__timer);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           asctime)(struct tm const *__tp);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           ctime)(time_t const *__timer);
char *base_name(char const *name);
size_t base_len(char const *name);
int strip_trailing_slashes(char *path);
int strip_trailing_slashes(char *path) {
  char *base;
  char *tmp;
  char *base_lim;
  size_t tmp___0;
  int had_slash;

  {
    {
      tmp = base_name((char const *)path);
      base = tmp;
      tmp___0 = base_len((char const *)base);
      base_lim = base + tmp___0;
      had_slash = (int)*base_lim;
      *base_lim = (char)'\000';
    }
    return (had_slash);
  }
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        tolower)(int __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        toupper)(int __c);
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) strftime)(char *__restrict __s,
                                           size_t __maxsize,
                                           char const *__restrict __format,
                                           struct tm const *__restrict __tp);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        mbsinit)(mbstate_t const *__ps)
    __attribute__((__pure__));
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) mbrlen)(char const *__restrict __s, size_t __n,
                                         mbstate_t *__restrict __ps);
static mbstate_t const mbstate_zero;
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        __libc_current_sigrtmin)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        __libc_current_sigrtmax)(void);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strncmp)(char const *__s1, char const *__s2, size_t __n)
    __attribute__((__pure__));
static struct numname numname_table[35] = {
    {1,
     {(char const)'H', (char const)'U', (char const)'P', (char const)'\000'}},
    {2,
     {(char const)'I', (char const)'N', (char const)'T', (char const)'\000'}},
    {3,
     {(char const)'Q', (char const)'U', (char const)'I', (char const)'T',
      (char const)'\000'}},
    {4,
     {(char const)'I', (char const)'L', (char const)'L', (char const)'\000'}},
    {5,
     {(char const)'T', (char const)'R', (char const)'A', (char const)'P',
      (char const)'\000'}},
    {6,
     {(char const)'A', (char const)'B', (char const)'R', (char const)'T',
      (char const)'\000'}},
    {8,
     {(char const)'F', (char const)'P', (char const)'E', (char const)'\000'}},
    {9,
     {(char const)'K', (char const)'I', (char const)'L', (char const)'L',
      (char const)'\000'}},
    {7,
     {(char const)'B', (char const)'U', (char const)'S', (char const)'\000'}},
    {11,
     {(char const)'S', (char const)'E', (char const)'G', (char const)'V',
      (char const)'\000'}},
    {13,
     {(char const)'P', (char const)'I', (char const)'P', (char const)'E',
      (char const)'\000'}},
    {14,
     {(char const)'A', (char const)'L', (char const)'R', (char const)'M',
      (char const)'\000'}},
    {15,
     {(char const)'T', (char const)'E', (char const)'R', (char const)'M',
      (char const)'\000'}},
    {10,
     {(char const)'U', (char const)'S', (char const)'R', (char const)'1',
      (char const)'\000'}},
    {12,
     {(char const)'U', (char const)'S', (char const)'R', (char const)'2',
      (char const)'\000'}},
    {17,
     {(char const)'C', (char const)'H', (char const)'L', (char const)'D',
      (char const)'\000'}},
    {23,
     {(char const)'U', (char const)'R', (char const)'G', (char const)'\000'}},
    {19,
     {(char const)'S', (char const)'T', (char const)'O', (char const)'P',
      (char const)'\000'}},
    {20,
     {(char const)'T', (char const)'S', (char const)'T', (char const)'P',
      (char const)'\000'}},
    {18,
     {(char const)'C', (char const)'O', (char const)'N', (char const)'T',
      (char const)'\000'}},
    {21,
     {(char const)'T', (char const)'T', (char const)'I', (char const)'N',
      (char const)'\000'}},
    {22,
     {(char const)'T', (char const)'T', (char const)'O', (char const)'U',
      (char const)'\000'}},
    {31,
     {(char const)'S', (char const)'Y', (char const)'S', (char const)'\000'}},
    {29,
     {(char const)'P', (char const)'O', (char const)'L', (char const)'L',
      (char const)'\000'}},
    {26,
     {(char const)'V', (char const)'T', (char const)'A', (char const)'L',
      (char const)'R', (char const)'M', (char const)'\000'}},
    {27,
     {(char const)'P', (char const)'R', (char const)'O', (char const)'F',
      (char const)'\000'}},
    {24,
     {(char const)'X', (char const)'C', (char const)'P', (char const)'U',
      (char const)'\000'}},
    {25,
     {(char const)'X', (char const)'F', (char const)'S', (char const)'Z',
      (char const)'\000'}},
    {6,
     {(char const)'I', (char const)'O', (char const)'T', (char const)'\000'}},
    {17,
     {(char const)'C', (char const)'L', (char const)'D', (char const)'\000'}},
    {30,
     {(char const)'P', (char const)'W', (char const)'R', (char const)'\000'}},
    {28,
     {(char const)'W', (char const)'I', (char const)'N', (char const)'C',
      (char const)'H', (char const)'\000'}},
    {29, {(char const)'I', (char const)'O', (char const)'\000'}},
    {16,
     {(char const)'S', (char const)'T', (char const)'K', (char const)'F',
      (char const)'L', (char const)'T', (char const)'\000'}},
    {0,
     {(char const)'E', (char const)'X', (char const)'I', (char const)'T',
      (char const)'\000'}}};
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n,
                             FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        feof_unlocked)(FILE *__stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        ferror_unlocked)(FILE *__stream);
static unsigned char const fillbuf[64] = {(unsigned char const)128,
                                          (unsigned char const)0};
extern
    __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                     settimeofday)(struct timeval const *__tv,
                                                   struct timezone const *__tz);
extern
    __attribute__((__nothrow__)) int(__attribute__((__leaf__)) clock_settime)(
        clockid_t __clock_id, struct timespec const *__tp);
extern DIR *(__attribute__((__nonnull__(1))) opendir)(char const *__name);
extern int(__attribute__((__nonnull__(1))) closedir)(DIR *__dirp);
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
extern int close(int __fd);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     chdir)(char const *__path);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fchdir)(int __fd);
extern int(__attribute__((__nonnull__(1))) open)(char const *__file,
                                                 int __oflag, ...);
int save_cwd(struct saved_cwd *cwd);
int restore_cwd(struct saved_cwd const *cwd);
void free_cwd(struct saved_cwd *cwd);
static int have_working_fchdir = 1;
int save_cwd(struct saved_cwd *cwd) {

  {
    cwd->desc = -1;
    cwd->name = (char *)((void *)0);
    if (have_working_fchdir) {
      {
        cwd->desc = open(".", 65536);
      }
      if (cwd->desc < 0) {

      }
    }
    if (!have_working_fchdir) {
      {

      }



    }
    return (0);
  }
}
int restore_cwd(struct saved_cwd const *cwd) {
  int tmp;
  int tmp___0;

  {
    if (0 <= (int)cwd->desc) {
      {
        tmp = fchdir((int)cwd->desc);
      }
      return (tmp < 0);
    } else {
      { tmp___0 = chdir((char const *)cwd->name); }

    }
  }
}
void free_cwd(struct saved_cwd *cwd) {

  {
    if (cwd->desc >= 0) {
      {
        close(cwd->desc);
      }
    }
    if (cwd->name) {
      {

      }
    }
    return;
  }
}
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcmp)(void const *__s1, void const *__s2, size_t __n)
    __attribute__((__pure__));
int same_name(char const *source, char const *dest);
char *dir_name(char const *path);
int same_name(char const *source, char const *dest) {






























































































}
extern ssize_t write(int __fd, void const *__buf, size_t __n);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    lstat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strncpy)(char *__restrict __dest, char const *__restrict __src, size_t __n);
extern void setutxent(void);
extern void endutxent(void);
extern struct utmpx *getutxent(void);
extern int utmpxname(char const *__file);
extern int getc_unlocked(FILE *__stream);
static char const *saved_delim = (char const *)((void *)0);
static char isdelim[256];
char const *const quoting_style_args[8];
enum quoting_style const quoting_style_vals[7];
int set_char_quoting(struct quoting_options *o, char c, int i);
size_t quotearg_buffer(char *buffer, size_t buffersize, char const *arg,
                       size_t argsize, struct quoting_options const *o);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char *quotearg_char(char const *arg, char ch);
char *quotearg_colon(char const *arg);
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __ctype_get_mb_cur_max)(void);
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__))
       mbrtowc)(wchar_t *__restrict __pwc, char const *__restrict __s,
                size_t __n, mbstate_t *__restrict __p);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        iswprint)(wint_t __wc);
char const *const quoting_style_args[8] = {
    (char const * /* const  */) "literal",
    (char const * /* const  */) "shell",
    (char const * /* const  */) "shell-always",
    (char const * /* const  */) "c",
    (char const * /* const  */) "escape",
    (char const * /* const  */) "locale",
    (char const * /* const  */) "clocale",
    (char const * /* const  */)((char const *)0)};
enum quoting_style const quoting_style_vals[7] = {
    (enum quoting_style const)0, (enum quoting_style const)1,
    (enum quoting_style const)2, (enum quoting_style const)3,
    (enum quoting_style const)4, (enum quoting_style const)5,
    (enum quoting_style const)6};
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i) {



















}
static char const *gettext_quote(char const *msgid, enum quoting_style s) {
  char const *translation;
  char *tmp;
  char *__cil_tmp5;

  {
    {
      tmp = gettext(msgid);
      translation = (char const *)tmp;
    }
    if ((unsigned long)translation == (unsigned long)msgid) {
      if ((unsigned int)s == 6U) {

      }
    }
    return (translation);
  }
}
static size_t quotearg_buffer_restyled(char *buffer, size_t buffersize,
                                       char const *arg, size_t argsize,
                                       enum quoting_style quoting_style,
                                       struct quoting_options const *o) {
  size_t i;
  size_t len;
  char const *quote_string;
  size_t quote_string_len;
  int backslash_escapes;
  int unibyte_locale;
  size_t tmp;
  char const *left;
  char const *tmp___0;
  char const *right;
  char const *tmp___1;
  unsigned char c;
  unsigned char esc;
  int tmp___2;
  size_t m;
  int printable;
  unsigned short const **tmp___3;
  mbstate_t mbstate;
  wchar_t w;
  size_t bytes;
  size_t tmp___4;
  int tmp___5;
  int tmp___6;
  size_t ilim;
  int tmp___7;
  size_t tmp___8;
  void *__cil_tmp33;
  char *__cil_tmp34;
  char *__cil_tmp35;
  char *__cil_tmp36;
  char *__cil_tmp37;

  {
    {
      len = (size_t)0;
      quote_string = (char const *)0;
      quote_string_len = (size_t)0;
      backslash_escapes = 0;
      tmp = __ctype_get_mb_cur_max();
      unibyte_locale = tmp == 1UL;
    }
    if ((unsigned int)quoting_style == 3U) {

    }
    if ((unsigned int)quoting_style == 4U) {

    }
    if ((unsigned int)quoting_style == 6U) {

    }
    if ((unsigned int)quoting_style == 5U) {
      goto case_6;
    }




  case_3 : {;









  while_break___25: ;/* CIL Label */;
  }
  while_break:;




  case_4:;


  case_6 : {;
    tmp___0 = gettext_quote("`", quoting_style);
    left = tmp___0;
    tmp___1 = gettext_quote("\'", quoting_style);
    right = tmp___1;
    quote_string = left;
  }
    {
      while (1) {
      while_continue___0: ;/* CIL Label */;

        if (!*quote_string) {
          goto while_break___0;
        }
        {
          while (1) {
          while_continue___1: ;/* CIL Label */;

            if (len < buffersize) {
              *(buffer + len) = (char)*quote_string;
            }
            len++;
            goto while_break___1;
          }
        while_break___27: ;/* CIL Label */;
        }
      while_break___1:;
        quote_string++;
      }
    while_break___26: ;/* CIL Label */;
    }
  while_break___0 : {;
    backslash_escapes = 1;
    quote_string = right;
    quote_string_len = strlen(quote_string);
  }
    goto switch_break;
  case_2 : {;









  while_break___28: ;/* CIL Label */;
  }
  while_break___2:;



  switch_default:;

  switch_break:;
    i = (size_t)0;
    {
      while (1) {
      while_continue___3: ;/* CIL Label */;

        if (argsize == 0xffffffffffffffffUL) {
          tmp___7 = (int const) * (arg + i) == 0;
        } else {

        }
        if (tmp___7) {
          goto while_break___3;
        }
        if (backslash_escapes) {
          if (quote_string_len) {
            if (i + quote_string_len <= argsize) {
              {
                tmp___2 = memcmp((void const *)(arg + i),
                                 (void const *)quote_string, quote_string_len);
              }
              if (tmp___2 == 0) {
                {









                while_break___30: ;/* CIL Label */;
                }
              while_break___4:;;
              }
            }
          }
        }
        c = (unsigned char)*(arg + i);
        if ((int)c == 0) {

        }
        if ((int)c == 63) {

        }
        if ((int)c == 7) {

        }
        if ((int)c == 8) {

        }
        if ((int)c == 12) {

        }
        if ((int)c == 10) {

        }
        if ((int)c == 13) {

        }
        if ((int)c == 9) {

        }
        if ((int)c == 11) {

        }
        if ((int)c == 92) {

        }
        if ((int)c == 126) {

        }
        if ((int)c == 35) {

        }
        if ((int)c == 124) {

        }
        if ((int)c == 96) {

        }
        if ((int)c == 94) {

        }
        if ((int)c == 91) {

        }
        if ((int)c == 62) {

        }
        if ((int)c == 60) {

        }
        if ((int)c == 59) {

        }
        if ((int)c == 42) {

        }
        if ((int)c == 41) {

        }
        if ((int)c == 40) {

        }
        if ((int)c == 38) {

        }
        if ((int)c == 36) {

        }
        if ((int)c == 34) {

        }
        if ((int)c == 33) {

        }
        if ((int)c == 32) {

        }
        if ((int)c == 39) {

        }
        if ((int)c == 125) {

        }
        if ((int)c == 123) {

        }
        if ((int)c == 122) {

        }
        if ((int)c == 121) {

        }
        if ((int)c == 120) {

        }
        if ((int)c == 119) {

        }
        if ((int)c == 118) {

        }
        if ((int)c == 117) {

        }
        if ((int)c == 116) {

        }
        if ((int)c == 115) {

        }
        if ((int)c == 114) {

        }
        if ((int)c == 113) {

        }
        if ((int)c == 112) {

        }
        if ((int)c == 111) {

        }
        if ((int)c == 110) {

        }
        if ((int)c == 109) {

        }
        if ((int)c == 108) {
          goto case_125;
        }
        if ((int)c == 107) {

        }
        if ((int)c == 106) {

        }
        if ((int)c == 105) {
          goto case_125;
        }
        if ((int)c == 104) {

        }
        if ((int)c == 103) {

        }
        if ((int)c == 102) {
          goto case_125;
        }
        if ((int)c == 101) {
          goto case_125;
        }
        if ((int)c == 100) {
          goto case_125;
        }
        if ((int)c == 99) {

        }
        if ((int)c == 98) {

        }
        if ((int)c == 97) {

        }
        if ((int)c == 95) {

        }
        if ((int)c == 93) {

        }
        if ((int)c == 90) {

        }
        if ((int)c == 89) {

        }
        if ((int)c == 88) {

        }
        if ((int)c == 87) {

        }
        if ((int)c == 86) {

        }
        if ((int)c == 85) {

        }
        if ((int)c == 84) {

        }
        if ((int)c == 83) {

        }
        if ((int)c == 82) {

        }
        if ((int)c == 81) {

        }
        if ((int)c == 80) {

        }
        if ((int)c == 79) {

        }
        if ((int)c == 78) {

        }
        if ((int)c == 77) {

        }
        if ((int)c == 76) {

        }
        if ((int)c == 75) {

        }
        if ((int)c == 74) {

        }
        if ((int)c == 73) {

        }
        if ((int)c == 72) {

        }
        if ((int)c == 71) {

        }
        if ((int)c == 70) {

        }
        if ((int)c == 69) {

        }
        if ((int)c == 68) {

        }
        if ((int)c == 67) {

        }
        if ((int)c == 66) {

        }
        if ((int)c == 65) {

        }
        if ((int)c == 61) {

        }
        if ((int)c == 58) {

        }
        if ((int)c == 57) {

        }
        if ((int)c == 56) {

        }
        if ((int)c == 55) {

        }
        if ((int)c == 54) {

        }
        if ((int)c == 53) {

        }
        if ((int)c == 52) {
          goto case_125;
        }
        if ((int)c == 51) {
          goto case_125;
        }
        if ((int)c == 50) {
          goto case_125;
        }
        if ((int)c == 49) {
          goto case_125;
        }
        if ((int)c == 48) {

        }
        if ((int)c == 47) {
          goto case_125;
        }
















      case_0:;











































      case_63:;







      case_1:;

      case_3___0:;













































































      switch_default___0:;

      switch_break___1:;;

      case_7:;


      case_8:;


      case_12:;


      case_10:;


      case_13:;


      case_9:;


      case_11:;


      case_92:;


      c_and_shell_escape:;



      c_escape:;





      case_126:;



      case_124:;




      case_39___0:;







      case_1___0:;

      case_2___0 : {;









      while_break___37: ;/* CIL Label */;
      }
      while_break___11:;;
        {









        while_break___38: ;/* CIL Label */;
        }
      while_break___12:;;
        {









        while_break___39: ;/* CIL Label */;
        }
      while_break___13:;;

      switch_default___1:;

      switch_break___3:;;

      case_125:;
        goto switch_break___0;
      switch_default___2:;








































































        if (1UL < m) {

        } else {
          if (backslash_escapes) {
            if (!printable) {
            _L:;

              {


































































              while_break___42: ;/* CIL Label */;
              }
            while_break___16:;;

            }
          }
        }
      switch_break___0:;;
        if (backslash_escapes) {
          if (!(o->quote_these_too[(unsigned long)c / (sizeof(int) * 8UL)] &
                (1 << (unsigned long)c % (sizeof(int) * 8UL)))) {
            goto store_c;
          }
        } else {

        }
      store_escape : {;









      while_break___47: ;/* CIL Label */;
      }
      while_break___21:;;
      store_c : {;
        while (1) {
        while_continue___22: ;/* CIL Label */;

          if (len < buffersize) {
            *(buffer + len) = (char)c;
          }
          len++;
          goto while_break___22;
        }
      while_break___48: ;/* CIL Label */;
      }
      while_break___22:;
        i++;
      }
    while_break___29: ;/* CIL Label */;
    }
  while_break___3:;;
    if (quote_string) {
      {
        while (1) {
        while_continue___23: ;/* CIL Label */;

          if (!*quote_string) {
            goto while_break___23;
          }
          {
            while (1) {
            while_continue___24: ;/* CIL Label */;

              if (len < buffersize) {
                *(buffer + len) = (char)*quote_string;
              }
              len++;
              goto while_break___24;
            }
          while_break___50: ;/* CIL Label */;
          }
        while_break___24:;
          quote_string++;
        }
      while_break___49: ;/* CIL Label */;
      }
    while_break___23:;;
    }
    if (len < buffersize) {
      *(buffer + len) = (char)'\000';
    }
    return (len);
  use_shell_always_quoting_style : {;


  }

  }
}
size_t quotearg_buffer(char *buffer, size_t buffersize, char const *arg,
                       size_t argsize, struct quoting_options const *o) {
  struct quoting_options const *p;
  struct quoting_options const *tmp;
  int e;
  int *tmp___0;
  size_t r;
  size_t tmp___1;
  int *tmp___2;

  {
    if (o) {
      tmp = o;
    } else {

    }
    {
      p = tmp;
      tmp___0 = __errno_location();
      e = *tmp___0;
      tmp___1 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize,
                                         (enum quoting_style)p->style, p);
      r = tmp___1;
      tmp___2 = __errno_location();
      *tmp___2 = e;
    }
    return (r);
  }
}
static char slot0[256];
static char *quotearg_n_options(int n, char const *arg, size_t argsize,
                                struct quoting_options const *options);
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize,
                                struct quoting_options const *options) {
  int e;
  int *tmp;
  unsigned int n0;
  unsigned int n1;
  int tmp___0;
  void *tmp___1;
  void *tmp___2;
  size_t size;
  char *val;
  size_t qsize;
  size_t tmp___3;
  void *tmp___4;
  int *tmp___5;

  {
    {
      tmp = __errno_location();
      e = *tmp;
      n0 = (unsigned int)n;
    }
    if (n < 0) {
      {

      }
    }
    if (nslots <= n0) {


















      {






      }
    }
    {
      size = (slotvec + n)->size;
      val = (slotvec + n)->val;
      tmp___3 = quotearg_buffer(val, size, arg, argsize, options);
      qsize = tmp___3;
    }
    if (size <= qsize) {







      {




      }
    }
    {
      tmp___5 = __errno_location();
      *tmp___5 = e;
    }
    return (val);
  }
}
static struct quoting_options
quoting_options_from_style(enum quoting_style style) {
  struct quoting_options o;
  void *__cil_tmp3;

  {
    {
      o.style = style;
      memset((void *)(o.quote_these_too), 0, sizeof(o.quote_these_too));
    }
    return (o);
  }
}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {
  struct quoting_options o;
  struct quoting_options tmp;
  char *tmp___0;
  void *__cil_tmp7;
  void *__cil_tmp8;

  {
    {
      tmp = quoting_options_from_style(s);
      o = tmp;
      tmp___0 = quotearg_n_options(n, arg, (size_t)-1,
                                   (struct quoting_options const *)(&o));
    }
    return (tmp___0);
  }
}
char *quotearg_char(char const *arg, char ch) {













}
char *quotearg_colon(char const *arg) {






}
char const *quote_n(int n, char const *name);
char const *quote_n(int n, char const *name) {
  char *tmp;

  {
    { tmp = quotearg_n_style(n, (enum quoting_style)5, name); }
    return ((char const *)tmp);
  }
}
char const *quote(char const *name) {
  char const *tmp;

  {
    { tmp = quote_n(0, name); }
    return (tmp);
  }
}
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           getenv)(char const *__name);
extern __attribute__((__nothrow__))
time_t(__attribute__((__leaf__)) time)(time_t *__timer);
extern __attribute__((__nothrow__)) long(__attribute__((__leaf__))
                                         sysconf)(int __name);
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    mempcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strstr)(char const *__haystack, char const *__needle)
    __attribute__((__pure__));
extern __attribute__((__nothrow__))
FILE *(__attribute__((__leaf__)) setmntent)(char const *__file,
                                            char const *__mode);
extern __attribute__((__nothrow__)) struct mntent *(__attribute__((__leaf__))
                                                    getmntent)(FILE *__stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        endmntent)(FILE *__stream);
struct mode_change *mode_compile(char const *mode_string___0,
                                 unsigned int masked_ops);
mode_t mode_adjust(mode_t oldmode, struct mode_change const *changes);
void mode_free(struct mode_change *changes);
extern __attribute__((__nothrow__))
__mode_t(__attribute__((__leaf__)) umask)(__mode_t __mask);
static struct mode_change *make_node_op_equals(mode_t new_mode) {
  struct mode_change *p;
  void *tmp;

  {
    {
      tmp = malloc(sizeof(struct mode_change));
      p = (struct mode_change *)tmp;
    }
    if ((unsigned long)p == (unsigned long)((void *)0)) {

    }
    p->next = (struct mode_change *)((void *)0);
    p->op = (char)'=';
    p->flags = (char)0;
    p->value = new_mode;
    p->affected = (mode_t)((4032 | (448 >> 3)) | ((448 >> 3) >> 3));
    return (p);
  }
}
static void mode_append_entry(struct mode_change **head,
                              struct mode_change **tail,
                              struct mode_change *e) {
  struct mode_change *tmp;

  {
    if ((unsigned long)*head == (unsigned long)((void *)0)) {
      tmp = e;
      *tail = tmp;
      *head = tmp;
    } else {


    }
    return;
  }
}
struct mode_change *mode_compile(char const *mode_string___0,
                                 unsigned int masked_ops) {
  struct mode_change *head;
  struct mode_change *tail;
  unsigned long octal_value;
  mode_t umask_value;
  struct mode_change *p;
  mode_t mode;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  strtol_error tmp___11;
  mode_t affected_bits;
  mode_t affected_masked;
  unsigned int ops_to_mask;
  int who_specified_p;
  struct mode_change *change;
  void *tmp___12;
  struct mode_change *p___0;
  struct mode_change *tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  char *__cil_tmp33;

  {
    {
      head = (struct mode_change *)((void *)0);
      tmp___11 =
          xstrtoul(mode_string___0, (char **)((void *)0), 8, &octal_value, "");
    }
    if ((unsigned int)tmp___11 == 0U) {
      if (octal_value != (octal_value & 4095UL)) {
        return ((struct mode_change *)0);
      }
      if (256 >> 3 == 32) {
        if (128 >> 3 == 16) {
          if (64 >> 3 == 8) {
            if ((256 >> 3) >> 3 == 4) {
              if ((128 >> 3) >> 3 == 2) {
                if ((64 >> 3) >> 3 == 1) {
                  mode = (mode_t)octal_value;
                } else {

                }
              } else {

              }
            } else {

            }
          } else {

          }
        } else {

        }
      } else {
      _L___3:;





































































      }
      { p = make_node_op_equals(mode); }
      if ((unsigned long)p == (unsigned long)((void *)0)) {

      }
      { mode_append_entry(&head, &tail, p); }
      return (head);
    }
    {



    }
    {















































































































































































































    while_break___2: ;/* CIL Label */;
    }
  while_break:;;



  invalid : { mode_free(head); };

  }
}
mode_t mode_adjust(mode_t oldmode, struct mode_change const *changes) {
  mode_t newmode;
  mode_t value;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;

  {
    newmode = oldmode & (unsigned int)((4032 | (448 >> 3)) | ((448 >> 3) >> 3));
    {
      while (1) {
      while_continue: ;/* CIL Label */;

        if (!changes) {
          goto while_break;
        }
        if ((int const)changes->flags & 2) {
























































        } else {
          value = (mode_t)changes->value;
          if ((int const)changes->flags & 1) {






          }
        }
        if ((int const)changes->op == 61) {
          goto case_61;
        }







      case_61:;
        newmode = (newmode & (unsigned int)(~changes->affected)) | value;
        goto switch_break;
      case_43:;


      case_45:;


      switch_break:;
        changes = (struct mode_change const *)changes->next;
      }
    while_break___0: ;/* CIL Label */;
    }
  while_break:;;
    return (newmode);
  }
}
void mode_free(struct mode_change *changes) {





















}
static unsigned short const __mon_yday[2][13] = {
    {(unsigned short const)0, (unsigned short const)31,
     (unsigned short const)59, (unsigned short const)90,
     (unsigned short const)120, (unsigned short const)151,
     (unsigned short const)181, (unsigned short const)212,
     (unsigned short const)243, (unsigned short const)273,
     (unsigned short const)304, (unsigned short const)334,
     (unsigned short const)365},
    {(unsigned short const)0, (unsigned short const)31,
     (unsigned short const)60, (unsigned short const)91,
     (unsigned short const)121, (unsigned short const)152,
     (unsigned short const)182, (unsigned short const)213,
     (unsigned short const)244, (unsigned short const)274,
     (unsigned short const)305, (unsigned short const)335,
     (unsigned short const)366}};
static time_t localtime_offset;
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcoll)(char const *__s1, char const *__s2) __attribute__((__pure__));
static unsigned char const fillbuf___0[64] = {(unsigned char const)128,
                                              (unsigned char const)0};
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        wcwidth)(wchar_t __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        iswcntrl)(wint_t __wc);
int make_path(char const *argpath, int mode, int parent_mode, uid_t owner,
              gid_t group, int preserve_existing,
              char const *verbose_fmt_string);
int make_dir(char const *dir, char const *dirpath, mode_t mode,
             int *created_dir_p);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     chmod)(char const *__file,
                                            __mode_t __mode);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     mkdir)(char const *__path,
                                            __mode_t __mode);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     chown)(char const *__file, __uid_t __owner,
                                            __gid_t __group);
int make_dir(char const *dir, char const *dirpath, mode_t mode,
             int *created_dir_p) {
  int fail;
  int created_dir;
  int tmp;
  struct stat stats;
  int saved_errno;
  int *tmp___0;
  char const *tmp___1;
  char *tmp___2;
  char const *tmp___3;
  char *tmp___4;
  int tmp___5;
  void *__cil_tmp16;
  char *__cil_tmp17;
  char *__cil_tmp18;

  {
    {
      fail = 0;
      tmp = mkdir(dir, mode);
      created_dir = tmp == 0;
    }
    if (!created_dir) {
      {
        tmp___0 = __errno_location();
        saved_errno = *tmp___0;
        tmp___5 = stat((char const * /* __restrict  */)dir,
                       (struct stat * /* __restrict  */)(&stats));
      }
      if (tmp___5) {
        {
          tmp___1 = quote(dirpath);
          tmp___2 = gettext("cannot create directory %s");
          error(0, saved_errno, (char const *)tmp___2, tmp___1);
          fail = 1;
        }
      } else {
        if (!((stats.st_mode & 61440U) == 16384U)) {
          {
            tmp___3 = quote(dirpath);
            tmp___4 = gettext("%s exists but is not a directory");
            error(0, 0, (char const *)tmp___4, tmp___3);
            fail = 1;
          }
        }
      }
    }
    if (created_dir_p) {
      *created_dir_p = created_dir;
    }
    return (fail);
  }
}
int make_path(char const *argpath, int mode, int parent_mode, uid_t owner,
              gid_t group, int preserve_existing,
              char const *verbose_fmt_string) {
  struct stat stats;
  int retval;
  char *slash;
  int tmp_mode;
  int re_protect;
  struct ptr_list *p;
  struct ptr_list *leading_dirs;
  int do_chdir;
  struct saved_cwd cwd;
  char *basename_dir;
  char *dirpath;
  mode_t oldmask;
  __mode_t tmp;
  size_t tmp___0;
  void *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int newly_created_dir;
  int fail;
  int _saved_errno;
  int *tmp___5;
  char *tmp___6;
  int *tmp___7;
  int *tmp___8;
  int tmp___9;
  char const *tmp___10;
  char const *tmp___11;
  char *tmp___12;
  int *tmp___13;
  int _saved_errno___0;
  int *tmp___14;
  char *tmp___15;
  int *tmp___16;
  int *tmp___17;
  int tmp___18;
  int tmp___19;
  struct ptr_list *new;
  void *tmp___20;
  char const *tmp___21;
  char *tmp___22;
  int *tmp___23;
  int _saved_errno___1;
  int *tmp___24;
  char *tmp___25;
  int *tmp___26;
  int *tmp___27;
  int tmp___28;
  int tmp___29;
  char *tmp___30;
  int _saved_errno___2;
  int *tmp___31;
  char *tmp___32;
  int *tmp___33;
  int *tmp___34;
  int tmp___35;
  int tmp___36;
  char const *tmp___37;
  char const *tmp___38;
  char *tmp___39;
  int *tmp___40;
  int tmp___41;
  char const *tmp___42;
  char *tmp___43;
  int *tmp___44;
  int tmp___45;
  int _saved_errno___3;
  int *tmp___46;
  char *tmp___47;
  int *tmp___48;
  int *tmp___49;
  int tmp___50;
  char const *tmp___51;
  char *tmp___52;
  int *tmp___53;
  int tmp___54;
  char const *dirpath___0;
  char const *tmp___55;
  char *tmp___56;
  char const *tmp___57;
  char *tmp___58;
  int *tmp___59;
  int tmp___60;
  char const *tmp___61;
  char *tmp___62;
  int *tmp___63;
  int tmp___64;
  int tmp___65;
  void *__cil_tmp96;
  char *__cil_tmp97;
  char *__cil_tmp98;
  char *__cil_tmp99;
  char *__cil_tmp100;
  char *__cil_tmp101;
  char *__cil_tmp102;
  char *__cil_tmp103;
  char *__cil_tmp104;
  char *__cil_tmp105;
  char *__cil_tmp106;
  char *__cil_tmp107;
  char *__cil_tmp108;
  char *__cil_tmp109;

  {
    {
      retval = 0;
      tmp___65 = stat((char const * /* __restrict  */)argpath,
                      (struct stat * /* __restrict  */)(&stats));
    }
    if (tmp___65) {
      {
        leading_dirs = (struct ptr_list *)((void *)0);
        tmp = umask((__mode_t)0);
        oldmask = tmp;
        tmp___0 = strlen(argpath);
        tmp___1 = __builtin_alloca(tmp___0 + 1UL);
        dirpath = (char *)tmp___1;
        strcpy((char * /* __restrict  */)dirpath,
               (char const * /* __restrict  */)argpath);
        strip_trailing_slashes(dirpath);
      }
      if ((parent_mode & 192) != 192) {


      } else {
        if (owner != 4294967295U) {

        } else {
          if (group != 4294967295U) {
          _L:;







          } else {
            tmp_mode = parent_mode;
            re_protect = 0;
          }
        }
      }
      { tmp___2 = save_cwd(&cwd); }
      if (tmp___2) {

      } else {
        tmp___3 = 1;
      }
      do_chdir = tmp___3;
      if (do_chdir) {
        if ((int)*dirpath == 47) {
          {

          }



        }
      }
      slash = dirpath;
      {
        while (1) {
        while_continue: ;/* CIL Label */;

          if (!((int)*slash == 47)) {
            goto while_break;
          }

        }
      while_break___12: ;/* CIL Label */;
      }
    while_break:;;
      {
        while (1) {
        while_continue___0: ;/* CIL Label */;
          {
            basename_dir = slash;
            slash = strchr((char const *)slash, '/');
          }
          if ((unsigned long)slash == (unsigned long)((void *)0)) {
            goto while_break___0;
          }
          if (!do_chdir) {

          }
          {
            *slash = (char)'\000';
            fail = make_dir((char const *)basename_dir, (char const *)dirpath,
                            (mode_t)tmp_mode, &newly_created_dir);
          }
          if (fail) {
            {


































            while_break___14: ;/* CIL Label */;
            }
          while_break___1:;;

          }
          if (newly_created_dir) {
            if (verbose_fmt_string) {
              {


              }
            }
            if (owner != 4294967295U) {

            } else {
              if (group != 4294967295U) {
              _L___0 : {;

              }
                if (tmp___19) {
                  {





                  }
                  {



































                  while_break___16: ;/* CIL Label */;
                  }
                while_break___3:;;

                }
              }
            }
            if (re_protect) {
              {





              }
            }
          }
          if (do_chdir) {
            {
              tmp___29 = chdir((char const *)basename_dir);
            }
            if (tmp___29 < 0) {
              {




              }
              {



































              while_break___18: ;/* CIL Label */;
              }
            while_break___5:;;

            }
          }
          tmp___30 = slash;
          slash++;
          *tmp___30 = (char)'/';
          {
            while (1) {
            while_continue___7: ;/* CIL Label */;

              if (!((int)*slash == 47)) {
                goto while_break___7;
              }

            }
          while_break___20: ;/* CIL Label */;
          }
        while_break___7:;;
        }
      while_break___13: ;/* CIL Label */;
      }
    while_break___0:;;
      if (!do_chdir) {

      }
      {
        umask(oldmask);
        tmp___36 = make_dir((char const *)basename_dir, (char const *)dirpath,
                            (mode_t)mode, (int *)((void *)0));
      }
      if (tmp___36) {
        {


































        while_break___21: ;/* CIL Label */;
        }
      while_break___8:;;

      }
      if ((unsigned long)verbose_fmt_string != (unsigned long)((void *)0)) {
        {


        }
      }
      if (owner != 4294967295U) {

      } else {
        if (group != 4294967295U) {
        _L___1 : { tmp___41 = chown((char const *)basename_dir, owner, group); };









        }
      }
      if (mode & ~((448 | (448 >> 3)) | ((448 >> 3) >> 3))) {
        {

        }









      }
      {
        while (1) {
        while_continue___10: ;/* CIL Label */;

          if (do_chdir) {
            {
              tmp___50 = restore_cwd((struct saved_cwd const *)(&cwd));
            }
            if (tmp___50 != 0) {
              {









              }

            }
            { free_cwd(&cwd); }
          }
          goto while_break___10;
        }
      while_break___23: ;/* CIL Label */;
      }
    while_break___10:;
      p = leading_dirs;
      {
        while (1) {
        while_continue___11: ;/* CIL Label */;

          if (!((unsigned long)p != (unsigned long)((void *)0))) {
            goto while_break___11;
          }
          {


          }










        }
      while_break___24: ;/* CIL Label */;
      }
    while_break___11:;;
    } else {
      dirpath___0 = argpath;
      if (!((stats.st_mode & 61440U) == 16384U)) {
        {
          tmp___55 = quote(dirpath___0);
          tmp___56 = gettext("%s exists but is not a directory");
          error(0, 0, (char const *)tmp___56, tmp___55);
        }
        return (1);
      }




























    }
    return (retval);
  }
}
extern struct _IO_FILE *stdout;
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       exit)(int __status);
extern int optind;
extern int opterr;
extern int getopt_long(int ___argc, char *const *___argv,
                       char const *__shortopts, struct option const *__longopts,
                       int *__longind);
static struct option const long_options[3] = {
    {"help", 0, (int *)0, 'h'},
    {"version", 0, (int *)0, 'v'},
    {(char const *)0, 0, (int *)0, 0}};
extern int fclose(FILE *__stream);
extern FILE *fopen(char const *__restrict __filename,
                   char const *__restrict __modes);
extern int fscanf(FILE *__restrict __stream, char const *__restrict __format,
                  ...);
extern int ungetc(int __c, FILE *__stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           nl_langinfo)(nl_item __item);
static char const *volatile charset_aliases;
extern struct passwd *getpwuid(__uid_t __uid);
static struct userid *user_alist;
static struct userid *nouser_alist;
static struct userid *group_alist;
static struct userid *nogroup_alist;
extern __attribute__((__nothrow__)) struct lconv *(__attribute__((__leaf__))
                                                   localeconv)(void);
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memmove)(void *__dest, void const *__src, size_t __n);
static char const power_letter[9] = {
    (char const)0,   (char const)'K', (char const)'M',
    (char const)'G', (char const)'T', (char const)'P',
    (char const)'E', (char const)'Z', (char const)'Y'};
static char const *const block_size_args[3] = {
    (char const * /* const  */) "human-readable",
    (char const * /* const  */) "si",
    (char const * /* const  */)((char const *)0)};
static int const block_size_opts[2] = {(int const)112, (int const)80};
static struct hash_tuning const default_tuning = {
    (float)0.0, (float)1.0, (float)0.8, (float)1.414, (_Bool)0};
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           setlocale)(int __category,
                                                      char const *__locale);
extern void setgrent(void);
extern struct group *getgrent(void);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1), __leaf__))
    gettimeofday)(struct timeval *__restrict __tv, __timezone_ptr_t __tz);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        clock_gettime)(clockid_t __clock_id,
                                                       struct timespec *__tp);
static unsigned char const yytranslate[274] = {
    (unsigned char const)0,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)20,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)21,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)19, (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)2,  (unsigned char const)2,
    (unsigned char const)2,  (unsigned char const)1,  (unsigned char const)2,
    (unsigned char const)3,  (unsigned char const)4,  (unsigned char const)5,
    (unsigned char const)6,  (unsigned char const)7,  (unsigned char const)8,
    (unsigned char const)9,  (unsigned char const)10, (unsigned char const)11,
    (unsigned char const)12, (unsigned char const)13, (unsigned char const)14,
    (unsigned char const)15, (unsigned char const)16, (unsigned char const)17,
    (unsigned char const)18};
static unsigned char const yyr1[56] = {
    (unsigned char const)0,  (unsigned char const)22, (unsigned char const)23,
    (unsigned char const)23, (unsigned char const)24, (unsigned char const)24,
    (unsigned char const)24, (unsigned char const)24, (unsigned char const)24,
    (unsigned char const)24, (unsigned char const)24, (unsigned char const)25,
    (unsigned char const)25, (unsigned char const)25, (unsigned char const)25,
    (unsigned char const)25, (unsigned char const)26, (unsigned char const)26,
    (unsigned char const)27, (unsigned char const)27, (unsigned char const)27,
    (unsigned char const)28, (unsigned char const)28, (unsigned char const)28,
    (unsigned char const)29, (unsigned char const)29, (unsigned char const)29,
    (unsigned char const)29, (unsigned char const)29, (unsigned char const)29,
    (unsigned char const)29, (unsigned char const)29, (unsigned char const)29,
    (unsigned char const)30, (unsigned char const)30, (unsigned char const)31,
    (unsigned char const)31, (unsigned char const)31, (unsigned char const)31,
    (unsigned char const)31, (unsigned char const)31, (unsigned char const)31,
    (unsigned char const)31, (unsigned char const)31, (unsigned char const)31,
    (unsigned char const)31, (unsigned char const)31, (unsigned char const)31,
    (unsigned char const)31, (unsigned char const)31, (unsigned char const)31,
    (unsigned char const)31, (unsigned char const)31, (unsigned char const)32,
    (unsigned char const)33, (unsigned char const)33};
static unsigned char const yyr2[56] = {
    (unsigned char const)0, (unsigned char const)2, (unsigned char const)0,
    (unsigned char const)2, (unsigned char const)1, (unsigned char const)1,
    (unsigned char const)1, (unsigned char const)1, (unsigned char const)1,
    (unsigned char const)1, (unsigned char const)1, (unsigned char const)2,
    (unsigned char const)4, (unsigned char const)4, (unsigned char const)6,
    (unsigned char const)6, (unsigned char const)1, (unsigned char const)2,
    (unsigned char const)1, (unsigned char const)1, (unsigned char const)2,
    (unsigned char const)1, (unsigned char const)2, (unsigned char const)2,
    (unsigned char const)3, (unsigned char const)5, (unsigned char const)3,
    (unsigned char const)3, (unsigned char const)3, (unsigned char const)2,
    (unsigned char const)4, (unsigned char const)2, (unsigned char const)3,
    (unsigned char const)2, (unsigned char const)1, (unsigned char const)2,
    (unsigned char const)2, (unsigned char const)1, (unsigned char const)2,
    (unsigned char const)2, (unsigned char const)1, (unsigned char const)2,
    (unsigned char const)2, (unsigned char const)1, (unsigned char const)2,
    (unsigned char const)2, (unsigned char const)1, (unsigned char const)2,
    (unsigned char const)2, (unsigned char const)1, (unsigned char const)2,
    (unsigned char const)2, (unsigned char const)1, (unsigned char const)1,
    (unsigned char const)0, (unsigned char const)1};
static unsigned char const yydefact[66] = {
    (unsigned char const)2,  (unsigned char const)0,  (unsigned char const)1,
    (unsigned char const)21, (unsigned char const)43, (unsigned char const)19,
    (unsigned char const)46, (unsigned char const)16, (unsigned char const)49,
    (unsigned char const)0,  (unsigned char const)40, (unsigned char const)52,
    (unsigned char const)37, (unsigned char const)18, (unsigned char const)0,
    (unsigned char const)53, (unsigned char const)3,  (unsigned char const)4,
    (unsigned char const)5,  (unsigned char const)6,  (unsigned char const)8,
    (unsigned char const)7,  (unsigned char const)9,  (unsigned char const)34,
    (unsigned char const)10, (unsigned char const)22, (unsigned char const)17,
    (unsigned char const)0,  (unsigned char const)29, (unsigned char const)20,
    (unsigned char const)42, (unsigned char const)45, (unsigned char const)48,
    (unsigned char const)39, (unsigned char const)51, (unsigned char const)36,
    (unsigned char const)23, (unsigned char const)41, (unsigned char const)44,
    (unsigned char const)11, (unsigned char const)47, (unsigned char const)31,
    (unsigned char const)38, (unsigned char const)50, (unsigned char const)35,
    (unsigned char const)0,  (unsigned char const)0,  (unsigned char const)0,
    (unsigned char const)33, (unsigned char const)28, (unsigned char const)0,
    (unsigned char const)27, (unsigned char const)32, (unsigned char const)26,
    (unsigned char const)54, (unsigned char const)24, (unsigned char const)30,
    (unsigned char const)55, (unsigned char const)13, (unsigned char const)0,
    (unsigned char const)12, (unsigned char const)0,  (unsigned char const)54,
    (unsigned char const)25, (unsigned char const)15, (unsigned char const)14};
static yysigned_char const yydefgoto[12] = {
    (yysigned_char const)-1, (yysigned_char const)1,  (yysigned_char const)16,
    (yysigned_char const)17, (yysigned_char const)18, (yysigned_char const)19,
    (yysigned_char const)20, (yysigned_char const)21, (yysigned_char const)22,
    (yysigned_char const)23, (yysigned_char const)24, (yysigned_char const)60};
static yysigned_char const yypact[66] = {
    (yysigned_char const)-17, (yysigned_char const)0,
    (yysigned_char const)-17, (yysigned_char const)1,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)19,
    (yysigned_char const)-17, (yysigned_char const)-16,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)32,
    (yysigned_char const)26,  (yysigned_char const)14,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)27,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-13,
    (yysigned_char const)24,  (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)25,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)29,
    (yysigned_char const)30,  (yysigned_char const)31,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)33,  (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)28,  (yysigned_char const)34,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)35,
    (yysigned_char const)-17, (yysigned_char const)36,
    (yysigned_char const)-7,  (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17};
static yysigned_char const yypgoto[12] = {
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-17,
    (yysigned_char const)-17, (yysigned_char const)-12};
static unsigned char const yytable[56] = {
    (unsigned char const)2,  (unsigned char const)27, (unsigned char const)28,
    (unsigned char const)57, (unsigned char const)49, (unsigned char const)3,
    (unsigned char const)4,  (unsigned char const)5,  (unsigned char const)6,
    (unsigned char const)7,  (unsigned char const)64, (unsigned char const)8,
    (unsigned char const)9,  (unsigned char const)10, (unsigned char const)11,
    (unsigned char const)12, (unsigned char const)13, (unsigned char const)14,
    (unsigned char const)15, (unsigned char const)36, (unsigned char const)37,
    (unsigned char const)25, (unsigned char const)38, (unsigned char const)26,
    (unsigned char const)39, (unsigned char const)40, (unsigned char const)41,
    (unsigned char const)42, (unsigned char const)43, (unsigned char const)44,
    (unsigned char const)48, (unsigned char const)45, (unsigned char const)30,
    (unsigned char const)46, (unsigned char const)31, (unsigned char const)47,
    (unsigned char const)29, (unsigned char const)32, (unsigned char const)57,
    (unsigned char const)33, (unsigned char const)34, (unsigned char const)35,
    (unsigned char const)51, (unsigned char const)52, (unsigned char const)50,
    (unsigned char const)58, (unsigned char const)53, (unsigned char const)59,
    (unsigned char const)54, (unsigned char const)55, (unsigned char const)65,
    (unsigned char const)56, (unsigned char const)0,  (unsigned char const)62,
    (unsigned char const)63, (unsigned char const)61};
static yysigned_char const yycheck[56] = {
    (yysigned_char const)0,  (yysigned_char const)17, (yysigned_char const)18,
    (yysigned_char const)10, (yysigned_char const)17, (yysigned_char const)5,
    (yysigned_char const)6,  (yysigned_char const)7,  (yysigned_char const)8,
    (yysigned_char const)9,  (yysigned_char const)17, (yysigned_char const)11,
    (yysigned_char const)12, (yysigned_char const)13, (yysigned_char const)14,
    (yysigned_char const)15, (yysigned_char const)16, (yysigned_char const)17,
    (yysigned_char const)18, (yysigned_char const)5,  (yysigned_char const)6,
    (yysigned_char const)20, (yysigned_char const)8,  (yysigned_char const)4,
    (yysigned_char const)10, (yysigned_char const)11, (yysigned_char const)12,
    (yysigned_char const)13, (yysigned_char const)14, (yysigned_char const)15,
    (yysigned_char const)3,  (yysigned_char const)17, (yysigned_char const)6,
    (yysigned_char const)19, (yysigned_char const)8,  (yysigned_char const)21,
    (yysigned_char const)4,  (yysigned_char const)11, (yysigned_char const)10,
    (yysigned_char const)13, (yysigned_char const)14, (yysigned_char const)15,
    (yysigned_char const)17, (yysigned_char const)18, (yysigned_char const)20,
    (yysigned_char const)17, (yysigned_char const)17, (yysigned_char const)19,
    (yysigned_char const)18, (yysigned_char const)18, (yysigned_char const)62,
    (yysigned_char const)18, (yysigned_char const)-1, (yysigned_char const)18,
    (yysigned_char const)18, (yysigned_char const)21};
static unsigned char const yystos[66] = {
    (unsigned char const)0,  (unsigned char const)23, (unsigned char const)0,
    (unsigned char const)5,  (unsigned char const)6,  (unsigned char const)7,
    (unsigned char const)8,  (unsigned char const)9,  (unsigned char const)11,
    (unsigned char const)12, (unsigned char const)13, (unsigned char const)14,
    (unsigned char const)15, (unsigned char const)16, (unsigned char const)17,
    (unsigned char const)18, (unsigned char const)24, (unsigned char const)25,
    (unsigned char const)26, (unsigned char const)27, (unsigned char const)28,
    (unsigned char const)29, (unsigned char const)30, (unsigned char const)31,
    (unsigned char const)32, (unsigned char const)20, (unsigned char const)4,
    (unsigned char const)17, (unsigned char const)18, (unsigned char const)4,
    (unsigned char const)6,  (unsigned char const)8,  (unsigned char const)11,
    (unsigned char const)13, (unsigned char const)14, (unsigned char const)15,
    (unsigned char const)5,  (unsigned char const)6,  (unsigned char const)8,
    (unsigned char const)10, (unsigned char const)11, (unsigned char const)12,
    (unsigned char const)13, (unsigned char const)14, (unsigned char const)15,
    (unsigned char const)17, (unsigned char const)19, (unsigned char const)21,
    (unsigned char const)3,  (unsigned char const)17, (unsigned char const)20,
    (unsigned char const)17, (unsigned char const)18, (unsigned char const)17,
    (unsigned char const)18, (unsigned char const)18, (unsigned char const)18,
    (unsigned char const)10, (unsigned char const)17, (unsigned char const)19,
    (unsigned char const)33, (unsigned char const)21, (unsigned char const)18,
    (unsigned char const)18, (unsigned char const)17, (unsigned char const)33};
static table const meridian_table[5] = {{"AM", 265, 0},
                                        {"A.M.", 265, 0},
                                        {"PM", 265, 1},
                                        {"P.M.", 265, 1},
                                        {(char const *)0, 0, 0}};
static table const dst_table[1] = {{"DST", 259, 0}};
static table const month_and_day_table[25] = {
    {"JANUARY", 267, 1},    {"FEBRUARY", 267, 2}, {"MARCH", 267, 3},
    {"APRIL", 267, 4},      {"MAY", 267, 5},      {"JUNE", 267, 6},
    {"JULY", 267, 7},       {"AUGUST", 267, 8},   {"SEPTEMBER", 267, 9},
    {"SEPT", 267, 9},       {"OCTOBER", 267, 10}, {"NOVEMBER", 267, 11},
    {"DECEMBER", 267, 12},  {"SUNDAY", 260, 0},   {"MONDAY", 260, 1},
    {"TUESDAY", 260, 2},    {"TUES", 260, 2},     {"WEDNESDAY", 260, 3},
    {"WEDNES", 260, 3},     {"THURSDAY", 260, 4}, {"THUR", 260, 4},
    {"THURS", 260, 4},      {"FRIDAY", 260, 5},   {"SATURDAY", 260, 6},
    {(char const *)0, 0, 0}};
static table const time_units_table[11] = {
    {"YEAR", 270, 1},   {"MONTH", 268, 1},      {"FORTNIGHT", 261, 14},
    {"WEEK", 261, 7},   {"DAY", 261, 1},        {"HOUR", 263, 1},
    {"MINUTE", 266, 1}, {"MIN", 266, 1},        {"SECOND", 269, 1},
    {"SEC", 269, 1},    {(char const *)0, 0, 0}};
static table const relative_time_table[20] = {
    {"TOMORROW", 261, 1}, {"YESTERDAY", 261, -1}, {"TODAY", 261, 0},
    {"NOW", 261, 0},      {"LAST", 273, -1},      {"THIS", 273, 0},
    {"NEXT", 273, 1},     {"FIRST", 273, 1},      {"THIRD", 273, 3},
    {"FOURTH", 273, 4},   {"FIFTH", 273, 5},      {"SIXTH", 273, 6},
    {"SEVENTH", 273, 7},  {"EIGHTH", 273, 8},     {"NINTH", 273, 9},
    {"TENTH", 273, 10},   {"ELEVENTH", 273, 11},  {"TWELFTH", 273, 12},
    {"AGO", 258, 1},      {(char const *)0, 0, 0}};
static table const time_zone_table[51] = {
    {"GMT", 271, 0},     {"UT", 271, 0},     {"UTC", 271, 0},
    {"WET", 271, 0},     {"WEST", 262, 0},   {"BST", 262, 0},
    {"ART", 271, -180},  {"BRT", 271, -180}, {"BRST", 262, -180},
    {"NST", 271, -210},  {"NDT", 262, -210}, {"AST", 271, -240},
    {"ADT", 262, -240},  {"CLT", 271, -240}, {"CLST", 262, -240},
    {"EST", 271, -300},  {"EDT", 262, -300}, {"CST", 271, -360},
    {"CDT", 262, -360},  {"MST", 271, -420}, {"MDT", 262, -420},
    {"PST", 271, -480},  {"PDT", 262, -480}, {"AKST", 271, -540},
    {"AKDT", 262, -540}, {"HST", 271, -600}, {"HAST", 271, -600},
    {"HADT", 262, -600}, {"SST", 271, -720}, {"WAT", 271, 60},
    {"CET", 271, 60},    {"CEST", 262, 60},  {"MET", 271, 60},
    {"MEZ", 271, 60},    {"MEST", 262, 60},  {"MESZ", 262, 60},
    {"EET", 271, 120},   {"EEST", 262, 120}, {"CAT", 271, 120},
    {"SAST", 271, 120},  {"EAT", 271, 180},  {"MSK", 271, 180},
    {"MSD", 262, 180},   {"IST", 271, 330},  {"SGT", 271, 480},
    {"KST", 271, 540},   {"JST", 271, 540},  {"GST", 271, 600},
    {"NZST", 271, 720},  {"NZDT", 262, 720}, {(char const *)0, 0, 0}};
static table const military_table[26] = {
    {"A", 271, -60},  {"B", 271, -120},       {"C", 271, -180},
    {"D", 271, -240}, {"E", 271, -300},       {"F", 271, -360},
    {"G", 271, -420}, {"H", 271, -480},       {"I", 271, -540},
    {"K", 271, -600}, {"L", 271, -660},       {"M", 271, -720},
    {"N", 271, 60},   {"O", 271, 120},        {"P", 271, 180},
    {"Q", 271, 240},  {"R", 271, 300},        {"S", 271, 360},
    {"T", 271, 420},  {"U", 271, 480},        {"V", 271, 540},
    {"W", 271, 600},  {"X", 271, 660},        {"Y", 271, 720},
    {"Z", 271, 0},    {(char const *)0, 0, 0}};
extern char *getcwd(char *buf, size_t size);
__attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                    rpl_getcwd)(char *buf, size_t size);
char *(__attribute__((__leaf__)) rpl_getcwd)(char *buf, size_t size) {































}
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     fstat)(int __fd, struct stat *__buf);
extern void(__attribute__((__nonnull__(1, 4)))
            qsort)(void *__base, size_t __nmemb, size_t __size,
                   int (*__compar)(void const *, void const *));
extern char *(__attribute__((__nonnull__(1))) strrchr)(char const *__s, int __c)
    __attribute__((__pure__));
extern int(__attribute__((__nonnull__(1))) dirfd)(DIR *__dirp);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    statfs)(char const *__file, struct statfs *__buf);
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__))
                                         free)(void *__ptr);
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) rpl_free)(void *p);
void(__attribute__((__leaf__)) rpl_free)(void *p) {









}
extern __attribute__((__nothrow__))
FILE *(__attribute__((__leaf__)) fdopen)(int __fd, char const *__modes);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fileno)(FILE *__stream);
int volatile exit_failure = (int volatile)1;
extern struct _IO_FILE *stdin;
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcasecmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strncasecmp)(char const *__s1, char const *__s2, size_t __n)
    __attribute__((__pure__));
extern int fnmatch(char const *__pattern, char const *__name, int __flags);
extern int fcntl(int __fd, int __cmd, ...);
size_t dir_len(char const *path);
size_t dir_len(char const *path) {




























}
char *dir_name(char const *path) {

























}
char const diacrit_base[256];
char const diacrit_diac[256];
char const diacrit_base[256] = {
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)'A', (char const)'B', (char const)'C',
    (char const)'D', (char const)'E', (char const)'F', (char const)'G',
    (char const)'H', (char const)'I', (char const)'J', (char const)'K',
    (char const)'L', (char const)'M', (char const)'N', (char const)'O',
    (char const)'P', (char const)'Q', (char const)'R', (char const)'S',
    (char const)'T', (char const)'U', (char const)'V', (char const)'W',
    (char const)'X', (char const)'Y', (char const)'Z', (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)'a', (char const)'b', (char const)'c',
    (char const)'d', (char const)'e', (char const)'f', (char const)'g',
    (char const)'h', (char const)'i', (char const)'j', (char const)'k',
    (char const)'l', (char const)'m', (char const)'n', (char const)'o',
    (char const)'p', (char const)'q', (char const)'r', (char const)'s',
    (char const)'t', (char const)'u', (char const)'v', (char const)'w',
    (char const)'x', (char const)'y', (char const)'z', (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)'A', (char const)'A', (char const)'A', (char const)'A',
    (char const)'A', (char const)'A', (char const)'A', (char const)'C',
    (char const)'E', (char const)'E', (char const)'E', (char const)'E',
    (char const)'I', (char const)'I', (char const)'I', (char const)'I',
    (char const)0,   (char const)'N', (char const)'O', (char const)'O',
    (char const)'O', (char const)'O', (char const)'O', (char const)0,
    (char const)'O', (char const)'U', (char const)'U', (char const)'U',
    (char const)'U', (char const)'Y', (char const)0,   (char const)0,
    (char const)'a', (char const)'a', (char const)'a', (char const)'a',
    (char const)'a', (char const)'a', (char const)'a', (char const)'c',
    (char const)'e', (char const)'e', (char const)'e', (char const)'e',
    (char const)'i', (char const)'i', (char const)'i', (char const)'i',
    (char const)0,   (char const)'n', (char const)'o', (char const)'o',
    (char const)'o', (char const)'o', (char const)'o', (char const)0,
    (char const)'o', (char const)'u', (char const)'u', (char const)'u',
    (char const)'u', (char const)'y', (char const)0,   (char const)'y'};
char const diacrit_diac[256] = {
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)4,
    (char const)0, (char const)3, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)6, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)3, (char const)2, (char const)4,
    (char const)6, (char const)5, (char const)8, (char const)1, (char const)7,
    (char const)3, (char const)2, (char const)4, (char const)5, (char const)3,
    (char const)2, (char const)4, (char const)5, (char const)0, (char const)6,
    (char const)3, (char const)2, (char const)4, (char const)6, (char const)5,
    (char const)0, (char const)9, (char const)3, (char const)2, (char const)4,
    (char const)5, (char const)2, (char const)0, (char const)0, (char const)3,
    (char const)2, (char const)4, (char const)6, (char const)5, (char const)8,
    (char const)1, (char const)7, (char const)3, (char const)2, (char const)4,
    (char const)5, (char const)3, (char const)2, (char const)4, (char const)5,
    (char const)0, (char const)6, (char const)3, (char const)2, (char const)4,
    (char const)6, (char const)5, (char const)0, (char const)9, (char const)3,
    (char const)2, (char const)4, (char const)5, (char const)2, (char const)0,
    (char const)0};
void close_stdout(void);
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __fpending)(FILE *__fp);
static char const *file_name;
void close_stdout(void) {
  int e;
  int tmp___0;
  int tmp___1;
  size_t tmp___2;
  int *tmp___3;
  int tmp___4;
  char const *write_error;
  char *tmp___5;
  char *tmp___6;
  char *__cil_tmp10;

  {
    { tmp___1 = ferror_unlocked(stdout); }
    if (tmp___1) {

    } else {
      tmp___0 = -1;
    }
    e = tmp___0;
    if (e) {
      {
        tmp___2 = __fpending(stdout);
      }
      if (tmp___2 == 0UL) {
        return;
      }
    }
    { tmp___4 = fclose(stdout); }
    if (tmp___4 != 0) {
      {


      }
    }
    if (0 <= e) {
      {


      }








    }
    return;
  }
}
extern struct hostent *gethostbyaddr(void const *__addr, __socklen_t __len,
                                     int __type);
extern struct hostent *gethostbyname(char const *__name);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           inet_ntoa)(struct in_addr __in);
extern __attribute__((__nothrow__)) double(
    __attribute__((__nonnull__(1), __leaf__))
    strtod)(char const *__restrict __nptr, char **__restrict __endptr);
char *base_name(char const *name) {
  char const *base;
  char const *p;

  {
    base = name + 0;
    p = base;
    {
      while (1) {
      while_continue: ;/* CIL Label */;

        if (!*p) {
          goto while_break;
        }
        if ((int const) * p == 47) {
          {
            while (1) {
            while_continue___0: ;/* CIL Label */;
              p++;
              if (!((int const) * p == 47)) {
                goto while_break___0;
              }
            }
          while_break___2: ;/* CIL Label */;
          }
        while_break___0:;;
          if (!*p) {




          }
          base = p;
        }
        p++;
      }
    while_break___1: ;/* CIL Label */;
    }
  while_break:;;
    return ((char *)base);
  }
}
size_t base_len(char const *name) {
  size_t len;

  {
    { len = strlen(name); }
    {
      while (1) {
      while_continue: ;/* CIL Label */;

        if (1UL < len) {
          if (!((int const) * (name + (len - 1UL)) == 47)) {
            goto while_break;
          }
        } else {

        }

      __Cont:;

      }
    while_break___0: ;/* CIL Label */;
    }
  while_break:;;
    return (len);
  }
}
void (*argmatch_die)(void);
char const *simple_backup_suffix;
char const *simple_backup_suffix = "~";
static char const *const backup_args[9] = {
    (char const * /* const  */) "none",
    (char const * /* const  */) "off",
    (char const * /* const  */) "simple",
    (char const * /* const  */) "never",
    (char const * /* const  */) "existing",
    (char const * /* const  */) "nil",
    (char const * /* const  */) "numbered",
    (char const * /* const  */) "t",
    (char const * /* const  */)((char const *)0)};
static enum backup_type const backup_types[8] = {
    (enum backup_type const)0, (enum backup_type const)0,
    (enum backup_type const)1, (enum backup_type const)1,
    (enum backup_type const)2, (enum backup_type const)2,
    (enum backup_type const)3, (enum backup_type const)3};
extern struct _IO_FILE *stderr;
void usage(int status);
extern
    __attribute__((__nothrow__)) long(__attribute__((__nonnull__(1), __leaf__))
                                      pathconf)(char const *__path, int __name);
extern int printf(char const *__restrict __format, ...);
extern char *optarg;
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     atexit)(void (*__func)(void));
extern
    __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                        textdomain)(char const *__domainname);
extern __attribute__((__nothrow__)) char *(__attribute__((
    __leaf__)) bindtextdomain)(char const *__domainname, char const *__dirname);
char *program_name;
static int create_parents;
static struct option const longopts[6] = {
    {"mode", 1, (int *)((void *)0), 'm'},
    {"parents", 0, (int *)((void *)0), 'p'},
    {"verbose", 0, (int *)((void *)0), 'v'},
    {"help", 0, (int *)0, -130},
    {"version", 0, (int *)0, -131},
    {(char const *)((void *)0), 0, (int *)((void *)0), 0}};
void usage(int status) {
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *__cil_tmp10;
  char *__cil_tmp11;
  char *__cil_tmp12;
  char *__cil_tmp13;
  char *__cil_tmp14;
  char *__cil_tmp15;
  char *__cil_tmp16;
  char *__cil_tmp17;

  {
    if (status != 0) {
      {
        tmp = gettext("Try `%s --help\' for more information.\n");
        fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */)((char const *)tmp),
                program_name);
      }
    } else {
      {
        tmp___0 = gettext("Usage: %s [OPTION] DIRECTORY...\n");
        printf((char const * /* __restrict  */)((char const *)tmp___0),
               program_name);
        tmp___1 = gettext(
            "Create the DIRECTORY(ies), if they do not already exist.\n\n");
        fputs_unlocked((char const * /* __restrict  */)((char const *)tmp___1),
                       (FILE * /* __restrict  */) stdout);
        tmp___2 = gettext("Mandatory arguments to long options are mandatory "
                          "for short options too.\n");
        fputs_unlocked((char const * /* __restrict  */)((char const *)tmp___2),
                       (FILE * /* __restrict  */) stdout);
        tmp___3 = gettext(
            "  -m, --mode=MODE   set permission mode (as in chmod), not "
            "rwxrwxrwx - umask\n  -p, --parents     no error if existing, make "
            "parent directories as needed\n  -v, --verbose     print a message "
            "for each created directory\n");
        fputs_unlocked((char const * /* __restrict  */)((char const *)tmp___3),
                       (FILE * /* __restrict  */) stdout);
        tmp___4 = gettext("      --help     display this help and exit\n");
        fputs_unlocked((char const * /* __restrict  */)((char const *)tmp___4),
                       (FILE * /* __restrict  */) stdout);
        tmp___5 =
            gettext("      --version  output version information and exit\n");
        fputs_unlocked((char const * /* __restrict  */)((char const *)tmp___5),
                       (FILE * /* __restrict  */) stdout);
        tmp___6 = gettext("\nReport bugs to <%s>.\n");
        printf((char const * /* __restrict  */)((char const *)tmp___6),
               "bug-coreutils@gnu.org");
      }
    }
    { exit(status); }
  }
}
int main(int argc, char **argv) {
  AFL_INIT_SET0("mkdir");
  mode_t newmode;
  mode_t parent_mode;
  char const *specified_mode;
  char const *verbose_fmt_string;
  int errors;
  int optc;
  char *tmp;
  char *tmp___0;
  mode_t umask_value;
  __mode_t tmp___1;
  struct mode_change *change;
  struct mode_change *tmp___2;
  __mode_t tmp___3;
  char const *tmp___4;
  char *tmp___5;
  int fail;
  char *dir;
  char const *dir___0;
  int dir_created;
  char const *tmp___6;
  char *tmp___7;
  char const *tmp___8;
  char const *tmp___9;
  char *tmp___10;
  int *tmp___11;
  char *__cil_tmp28;
  char *__cil_tmp29;
  char *__cil_tmp30;
  char *__cil_tmp31;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  char *__cil_tmp35;
  char *__cil_tmp36;

  {
    {
      specified_mode = (char const *)((void *)0);
      verbose_fmt_string = (char const *)((void *)0);
      errors = 0;
      program_name = *(argv + 0);
      setlocale(6, "");
      bindtextdomain("coreutils", "/usr/local/share/locale");
      textdomain("coreutils");
      atexit(&close_stdout);
      create_parents = 0;
    }
    {
      while (1) {
      while_continue: ;/* CIL Label */;
        {
          optc = getopt_long(argc, (char *const *)argv, "pm:v", longopts,
                             (int *)((void *)0));
        }
        if (!(optc != -1)) {
          goto while_break;
        }
        if (optc == 0) {

        }
        if (optc == 112) {
          goto case_112;
        }
        if (optc == 109) {
          goto case_109;
        }
        if (optc == 118) {
          goto case_118;
        }
        if (optc == -130) {
          goto case_neg_130;
        }




      case_0:;

      case_112:;
        create_parents = 1;
        goto switch_break;
      case_109:;
        specified_mode = (char const *)optarg;
        goto switch_break;
      case_118 : {;
        tmp = gettext("created directory %s");
        verbose_fmt_string = (char const *)tmp;
      }
        goto switch_break;
      case_neg_130 : { usage(0); };
        goto switch_break;
      case_neg_131 : {;



      }

      switch_default : { usage(1); };
      switch_break:;;
      }
    while_break___1: ;/* CIL Label */;
    }
  while_break:;;
    if (optind == argc) {
      {
        tmp___0 = gettext("too few arguments");
        error(0, 0, (char const *)tmp___0);
        usage(1);
      }
    }
    {
      newmode = (mode_t)((448 | (448 >> 3)) | ((448 >> 3) >> 3));
      tmp___1 = umask((__mode_t)0);
      umask_value = tmp___1;
      umask(umask_value);
      parent_mode = ((newmode & ~umask_value) | 128U) | 64U;
    }
    if (specified_mode) {
      {
        tmp___2 = mode_compile(specified_mode, 0U);
        change = tmp___2;
        tmp___3 = umask((__mode_t)0);
        newmode &= ~tmp___3;
      }
      if ((unsigned long)change == (unsigned long)((struct mode_change *)0)) {
        {
          tmp___4 = quote(specified_mode);
          tmp___5 = gettext("invalid mode %s");
          error(1, 0, (char const *)tmp___5, tmp___4);
        }
      } else {
        if ((unsigned long)change == (unsigned long)((struct mode_change *)1)) {
          {

          }
        }
      }
      { newmode = mode_adjust(newmode, (struct mode_change const *)change); }
    }
    {
      while (1) {
      while_continue___0: ;/* CIL Label */;

        if (!(optind < argc)) {
          goto while_break___0;
        }
        fail = 0;
        if (create_parents) {
          {
            dir = *(argv + optind);
            fail = make_path((char const *)dir, (int)newmode, (int)parent_mode,
                             (uid_t)-1, (gid_t)-1, 1, verbose_fmt_string);
          }
        } else {
          {
            dir___0 = (char const *)*(argv + optind);
            fail = make_dir(dir___0, dir___0, newmode, &dir_created);
          }
          if (!fail) {
            if (!create_parents) {
              if (!dir_created) {
                {




                }
              } else {
                goto _L;
              }
            } else {
            _L:;
              if (verbose_fmt_string) {
                {


                }
              }
            }
          }
          if (fail == 0) {
            if (specified_mode) {
              if (dir_created) {
                {
                  fail = chmod(dir___0, newmode);
                }
                if (fail) {
                  {





                  }
                }
              }
            }
          }
        }
        if (fail) {
          errors = 1;
        }
        optind++;
      }
    while_break___2: ;/* CIL Label */;
    }
  while_break___0 : { exit(errors); };
  }
}
