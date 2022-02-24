#include "argv-fuzz-inl.h";
typedef unsigned long size_t;
typedef long ptrdiff_t;
typedef unsigned long __ino_t;
typedef long __off_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef long __off64_t;
typedef long __ssize_t;
struct _IO_FILE;
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
typedef __ssize_t ssize_t;
enum quoting_style {
  literal_quoting_style = 0,
  shell_quoting_style = 1,
  shell_always_quoting_style = 2,
  c_quoting_style = 3,
  c_maybe_quoting_style = 4,
  escape_quoting_style = 5,
  locale_quoting_style = 6,
  clocale_quoting_style = 7,
  custom_quoting_style = 8
};
struct allocator;
struct allocator;
struct allocator;
struct allocator {
  void *(*allocate)(size_t);
  void *(*reallocate)(void *, size_t);
  void (*free)(void *);
  void (*die)(size_t);
};
struct option {
  char const *name;
  int has_arg;
  int *flag;
  int val;
};
typedef long intmax_t;
typedef long __time_t;
typedef long __syscall_slong_t;
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef unsigned int __gid_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
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
typedef int wchar_t;
typedef int nl_item;
typedef unsigned int wint_t;
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
typedef __time_t time_t;
union __anonunion___value_23 {
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_22 {
  int __count;
  union __anonunion___value_23 __value;
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
typedef __mbstate_t mbstate_t;
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
typedef int __clockid_t;
typedef __clockid_t clockid_t;
struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
typedef unsigned long reg_syntax_t;
typedef __off_t off_t;
typedef struct timezone *__restrict __timezone_ptr_t;
struct quoting_options;
struct quoting_options;
struct quoting_options;
struct quoting_options {
  enum quoting_style style;
  int flags;
  unsigned int quote_these_too[255UL / (sizeof(int) * 8UL) + 1UL];
  char const *left_quote;
  char const *right_quote;
};
struct slotvec {
  size_t size;
  char *val;
};
typedef long long_time_t;
struct __anonstruct_textint_27 {
  _Bool negative;
  long value;
  size_t digits;
};
typedef struct __anonstruct_textint_27 textint;
struct __anonstruct_table_28 {
  char const *name;
  int type;
  int value;
};
typedef struct __anonstruct_table_28 table;
struct __anonstruct_relative_time_31 {
  long year;
  long month;
  long day;
  long hour;
  long minutes;
  long_time_t seconds;
  long ns;
};
typedef struct __anonstruct_relative_time_31 relative_time;
struct __anonstruct_parser_control_32 {
  char const *input;
  long day_ordinal;
  int day_number;
  int local_isdst;
  long time_zone;
  int meridian;
  textint year;
  long month;
  long day;
  long hour;
  long minutes;
  struct timespec seconds;
  relative_time rel;
  _Bool timespec_seen;
  _Bool rels_seen;
  size_t dates_seen;
  size_t days_seen;
  size_t local_zones_seen;
  size_t dsts_seen;
  size_t times_seen;
  size_t zones_seen;
  table local_time_zone_table[3];
};
typedef struct __anonstruct_parser_control_32 parser_control;
union YYSTYPE;
union YYSTYPE;
union YYSTYPE;
union YYSTYPE {
  long intval;
  textint textintval;
  struct timespec timespec;
  relative_time rel;
};
typedef union YYSTYPE YYSTYPE;
typedef unsigned char yytype_uint8;
typedef signed char yytype_int8;
typedef short yytype_int16;
union yyalloc {
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};
enum Time_spec {
  TIME_SPEC_DATE = 0,
  TIME_SPEC_SECONDS = 1,
  TIME_SPEC_NS = 2,
  TIME_SPEC_HOURS = 3,
  TIME_SPEC_MINUTES = 4
};
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
int c_tolower(int c) __attribute__((__const__));
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));

_Bool c_isalpha(int c) __attribute__((__const__));
_Bool c_isspace(int c) __attribute__((__const__));
int c_toupper(int c) __attribute__((__const__));
_Bool c_isalpha(int c) __attribute__((__const__));
_Bool c_isalpha(int c) {
  int tmp;

  {
    if ((c & -33) >= 65) {

      tmp = 1;

    } else {
      tmp = 0;
    }
    return ((_Bool)tmp);
  }
}
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c) {
  int tmp;

  {
    if (c == 32) {
      tmp = 1;
    } else {

      if (c == 10) {
        tmp = 1;
      } else {

        tmp = 0;
      }
    }
    return ((_Bool)tmp);
  }
}
int c_tolower(int c) __attribute__((__const__));

int c_toupper(int c) __attribute__((__const__));
int c_toupper(int c) {
  int tmp;

  {
    if (c >= 97) {

      tmp = (c - 97) + 65;

    } else {
      tmp = c;
    }
    return (tmp);
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
char *last_component(char const *name) __attribute__((__pure__));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
__attribute__((__noreturn__)) void xalloc_die(void);
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
__inline void *xnmalloc(size_t n, size_t s)
    __attribute__((__malloc__, __alloc_size__(1, 2)));
__inline void *xnmalloc(size_t n, size_t s)
    __attribute__((__malloc__, __alloc_size__(1, 2)));

char *xcharalloc(size_t n) {
  void *tmp;

  void *tmp___1;

  {
    {
      tmp = xmalloc(n);
      tmp___1 = tmp;
    }

    return ((char *)tmp___1);
  }
}
extern __attribute__((__nothrow__))
size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s)
    __attribute__((__pure__));
char *last_component(char const *name) __attribute__((__pure__));
char *last_component(char const *name) {
  char const *base;
  char const *p;
  _Bool saw_slash;

  {

    {

      { saw_slash = (_Bool)1; }

      p++;
    };
    return ((char *)base);
  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                           malloc)(size_t __size)
    __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__))
                                         free)(void *__ptr);

ptrdiff_t __xargmatch_internal(char const *context, char const *arg,
                               char const *const *arglist, char const *vallist,
                               size_t valsize, void (*exit_fn)(void));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern __attribute__((__nothrow__)) int *(
    __attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           getenv)(char const *__name);
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcmp)(void const *__s1, void const *__s2, size_t __n)
    __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcpy)(char *__restrict __dest, char const *__restrict __src);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop

ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize)
    __attribute__((__pure__));
void argmatch_invalid(char const *context, char const *value,
                      ptrdiff_t problem);
void argmatch_valid(char const *const *arglist, char const *vallist,
                    size_t valsize);
extern struct _IO_FILE *stderr;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format,
                   ...);
extern int putc_unlocked(int __c, FILE *__stream);
extern int fputs_unlocked(char const *__restrict __s,
                          FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strncmp)(char const *__s1, char const *__s2, size_t __n)
    __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           gettext)(char const *__msgid)
    __attribute__((__format_arg__(1)));
extern void error(int __status, int __errnum, char const *__format, ...);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char const *quote_n(int n, char const *arg);
char const *quote(char const *arg);
__attribute__((__noreturn__)) void usage(int status);
static void __argmatch_die(void) {}
void (*argmatch_die)(void) = &__argmatch_die;
ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize)
    __attribute__((__pure__));
ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize) {
  size_t i;
  size_t arglen;

  int tmp___1;

  {

    arglen = strlen(arg);
    i = (size_t)0;
    while (1) {

      tmp___1 = strncmp((char const *)*(arglist + i), arg, arglen);
      if (!tmp___1) {

        return ((ptrdiff_t)i);
      }
      i++;
    };
  }
}
void argmatch_invalid(char const *context, char const *value,
                      ptrdiff_t problem) {
  char const *format;
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char const *tmp___2;
  char *tmp___3;

  {
    if (problem == -1L) {
      tmp = gettext("invalid argument %s for %s");
      tmp___1 = tmp;
    } else {
      tmp___0 = gettext("ambiguous argument %s for %s");
      tmp___1 = tmp___0;
    }
    format = (char const *)tmp___1;
    tmp___2 = quote_n(1, context);
    tmp___3 = quotearg_n_style(0, (enum quoting_style)6, value);
    error(0, 0, format, tmp___3, tmp___2);
    return;
  }
}
void argmatch_valid(char const *const *arglist, char const *vallist,
                    size_t valsize) {
  size_t i;
  char const *last_val;
  char *tmp;
  char const *tmp___0;
  char const *tmp___1;
  int tmp___2;

  {
    last_val = (char const *)((void *)0);
    tmp = gettext("Valid arguments are:");
    fputs_unlocked((char const *)tmp, stderr);
    i = (size_t)0;
    while (1) {

      if (!*(arglist + i)) {
        goto while_break;
      }
      if (i == 0UL) {
        tmp___0 = quote((char const *)*(arglist + i));
        fprintf(stderr, "\n  - %s", tmp___0);
        last_val = vallist + valsize * i;
      } else {
        tmp___2 = memcmp((void const *)last_val,
                         (void const *)(vallist + valsize * i), valsize);
        if (tmp___2) {
          tmp___0 = quote((char const *)*(arglist + i));
          fprintf(stderr, "\n  - %s", tmp___0);
          last_val = vallist + valsize * i;
        } else {
          tmp___1 = quote((char const *)*(arglist + i));
          fprintf(stderr, ", %s", tmp___1);
        }
      }
      i++;
    }
  while_break:
    putc_unlocked('\n', stderr);
    return;
  }
}
ptrdiff_t __xargmatch_internal(char const *context, char const *arg,
                               char const *const *arglist, char const *vallist,
                               size_t valsize, void (*exit_fn)(void)) {
  ptrdiff_t res;
  ptrdiff_t tmp;

  {
    tmp = argmatch(arg, arglist, vallist, valsize);
    res = tmp;
    if (res >= 0L) {
      return (res);
    }
    argmatch_invalid(context, arg, res);
    argmatch_valid(arglist, vallist, valsize);
    (*exit_fn)();
    return ((ptrdiff_t)-1);
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop

extern
    __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__,
                                                       __leaf__))
                                        realloc)(void *__ptr, size_t __size);

extern struct _IO_FILE *stdin;
extern __ssize_t getline(char **__restrict __lineptr, size_t *__restrict __n,
                         FILE *__restrict __stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern __attribute__((__nothrow__)) unsigned short const **(
    __attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strchr)(char const *__s, int __c)
    __attribute__((__pure__));
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       abort)(void);
int volatile exit_failure;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern struct _IO_FILE *stdout;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
void *xmemdup(void const *p, size_t s)
    __attribute__((__malloc__, __alloc_size__(2)));
extern
    __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1),
                                                       __leaf__))
                                        memset)(void *__s, int __c, size_t __n);
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xmalloc(size_t n) {
  void *p;
  void *tmp;

  {
    tmp = malloc(n);
    p = tmp;

    return (p);
  }
}
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
void *xrealloc(void *p, size_t n) { return (p); }
void *xmemdup(void const *p, size_t s)
    __attribute__((__malloc__, __alloc_size__(2)));

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void) {
  char *tmp;

  {
    tmp = gettext("memory exhausted");
    error((int)exit_failure, 0, "%s", tmp);
    abort();
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     atexit)(void (*__func)(void));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern size_t fwrite(void const *__restrict __ptr, size_t __size, size_t __n,
                     FILE *__restrict __s);
extern int printf(char const *__restrict __format, ...);
char const version_etc_copyright[47];
void version_etc_arn(FILE *stream, char const *command_name,
                     char const *package, char const *version,
                     char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc_arn(FILE *stream, char const *command_name,
                     char const *package, char const *version,
                     char const *const *authors, size_t n_authors) {
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *tmp___9;
  char *tmp___10;

  {
    if (command_name) {
      fprintf(stream, "%s (%s) %s\n", command_name, package, version);
    } else {
      fprintf(stream, "%s %s\n", package, version);
    }
    tmp = gettext("(C)");
    fprintf(stream, version_etc_copyright, tmp, 2013);
    tmp___0 =
        gettext("\nLicense GPLv3+: GNU GPL version 3 or later "
                "<http://gnu.org/licenses/gpl.html>.\nThis is free software: "
                "you are free to change and redistribute it.\nThere is NO "
                "WARRANTY, to the extent permitted by law.\n\n");
    fputs_unlocked((char const *)tmp___0, stream);
    if (n_authors == 0UL) {
      goto case_0;
    }
    if (n_authors == 1UL) {
      goto case_1;
    }
    if (n_authors == 2UL) {
      goto case_2;
    }
    if (n_authors == 3UL) {
      goto case_3;
    }
    if (n_authors == 4UL) {
      goto case_4;
    }
    if (n_authors == 5UL) {
      goto case_5;
    }
    if (n_authors == 6UL) {
      goto case_6;
    }
    if (n_authors == 7UL) {
      goto case_7;
    }
    if (n_authors == 8UL) {
      goto case_8;
    }
    if (n_authors == 9UL) {
      goto case_9;
    }
    goto switch_default;
  case_0:
    abort();
  case_1:
    tmp___1 = gettext("Written by %s.\n");
    fprintf(stream, (char const *)tmp___1, *(authors + 0));
    goto switch_break;
  case_2:
    tmp___2 = gettext("Written by %s and %s.\n");
    fprintf(stream, (char const *)tmp___2, *(authors + 0), *(authors + 1));
    goto switch_break;
  case_3:
    tmp___3 = gettext("Written by %s, %s, and %s.\n");
    fprintf(stream, (char const *)tmp___3, *(authors + 0), *(authors + 1),
            *(authors + 2));
    goto switch_break;
  case_4:
    tmp___4 = gettext("Written by %s, %s, %s,\nand %s.\n");
    fprintf(stream, (char const *)tmp___4, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3));
    goto switch_break;
  case_5:
    tmp___5 = gettext("Written by %s, %s, %s,\n%s, and %s.\n");
    fprintf(stream, (char const *)tmp___5, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4));
    goto switch_break;
  case_6:
    tmp___6 = gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
    fprintf(stream, (char const *)tmp___6, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5));
    goto switch_break;
  case_7:
    tmp___7 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
    fprintf(stream, (char const *)tmp___7, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5),
            *(authors + 6));
    goto switch_break;
  case_8:
    tmp___8 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    fprintf(stream, (char const *)tmp___8, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5),
            *(authors + 6), *(authors + 7));
    goto switch_break;
  case_9:
    tmp___9 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
    fprintf(stream, (char const *)tmp___9, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5),
            *(authors + 6), *(authors + 7), *(authors + 8));
    goto switch_break;
  switch_default:
    tmp___10 = gettext(
        "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
    fprintf(stream, (char const *)tmp___10, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5),
            *(authors + 6), *(authors + 7), *(authors + 8));
    goto switch_break;
  switch_break:;
    return;
  }
}

void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) {}

extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           nl_langinfo)(nl_item __item);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
struct timespec get_stat_mtime(struct stat const *st) {

  return ((struct timespec)st->st_mtim);
}
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stat)(char const *__restrict __file, struct stat *__restrict __buf);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
void gettime(struct timespec *ts);
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
char const *locale_charset(void);
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __ctype_get_mb_cur_max)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        mbsinit)(mbstate_t const *__ps)
    __attribute__((__pure__));
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__))
       mbrtowc)(wchar_t *__restrict __pwc, char const *__restrict __s,
                size_t __n, mbstate_t *__restrict __p);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"

#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int(__attribute__((__nonnull__(1))) open)(char const *__file,
                                                 int __oflag, ...);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__))
time_t(__attribute__((__leaf__)) mktime)(struct tm *__tp);
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) strftime)(char *__restrict __s,
                                           size_t __maxsize,
                                           char const *__restrict __format,
                                           struct tm const *__restrict __tp);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        tolower)(int __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        toupper)(int __c);

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int close(int __fd);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int
sprintf(char *__restrict __s, char const *__restrict __format, ...);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        ferror_unlocked)(FILE *__stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__leaf__)) clock_settime)(
        clockid_t __clock_id, struct timespec const *__tp);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
int settime(struct timespec const *ts);
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                     settimeofday)(struct timeval const *__tv,
                                                   struct timezone const *__tz);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int settime(struct timespec const *ts) {
  int r;
  int tmp;
  int *tmp___0;
  struct timeval tv;
  int tmp___1;

  {
    tmp = clock_settime(0, ts);
    r = tmp;
    if (r == 0) {
      return (r);
    } else {
      tmp___0 = __errno_location();
      if (*tmp___0 == 1) {
        return (r);
      }
    }
    tv.tv_sec = (__time_t)ts->tv_sec;
    tv.tv_usec = (__suseconds_t)(ts->tv_nsec / 1000L);
    tmp___1 =
        settimeofday((struct timeval const *)(&tv), (struct timezone const *)0);
    return (tmp___1);
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__noreturn__)) void _exit(int __status);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#pragma GCC diagnostic ignored "-Wtype-limits"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern int getc_unlocked(FILE *__stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern FILE *fopen(char const *__restrict __filename,
                   char const *__restrict __modes);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fileno)(FILE *__stream);
int(__attribute__((__nonnull__(1))) rpl_fclose)(FILE *fp);
char *quotearg_colon(char const *arg);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1), __leaf__))
    gettimeofday)(struct timeval *__restrict __tv, __timezone_ptr_t __tz);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"

int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);

char const *quote_n_mem(int n, char const *arg, size_t argsize);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        iswprint)(wint_t __wc);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop

static char const *gettext_quote(char const *msgid, enum quoting_style s) {

  char const *tmp___4;

  {

    { tmp___4 = "\""; }

    return (tmp___4);
  }
}
static size_t
quotearg_buffer_restyled(char *buffer, size_t buffersize, char const *arg,
                         size_t argsize, enum quoting_style quoting_style,
                         int flags, unsigned int const *quote_these_too,
                         char const *left_quote, char const *right_quote) {
  size_t i;
  size_t len;
  char const *quote_string;
  size_t quote_string_len;
  _Bool backslash_escapes;
  _Bool unibyte_locale;
  size_t tmp;
  _Bool elide_outer_quotes;
  unsigned char c;
  unsigned char esc;
  _Bool is_right_quote;
  int tmp___0;
  int tmp___1;
  size_t m;
  _Bool printable;
  unsigned short const **tmp___2;
  mbstate_t mbstate;
  wchar_t w;
  size_t bytes;
  size_t tmp___3;
  size_t j;
  int tmp___4;
  int tmp___5;
  size_t ilim;
  int tmp___6;
  size_t tmp___7;

  {
    len = (size_t)0;
    quote_string = (char const *)0;
    quote_string_len = (size_t)0;
    backslash_escapes = (_Bool)0;
    tmp = __ctype_get_mb_cur_max();
    unibyte_locale = (_Bool)(tmp == 1UL);
    elide_outer_quotes = (_Bool)((flags & 2) != 0);
    if ((unsigned int)quoting_style == 4U) {
      goto case_4;
    }
    if ((unsigned int)quoting_style == 3U) {
      goto case_3;
    }
    if ((unsigned int)quoting_style == 5U) {
      goto case_5;
    }
    if ((unsigned int)quoting_style == 6U) {
      goto case_6;
    }
    if ((unsigned int)quoting_style == 7U) {
      goto case_6;
    }
    if ((unsigned int)quoting_style == 8U) {
      goto case_6;
    }
    if ((unsigned int)quoting_style == 1U) {
      goto case_1;
    }
    if ((unsigned int)quoting_style == 2U) {
      goto case_2;
    }
    if ((unsigned int)quoting_style == 0U) {
      goto case_0;
    }
    goto switch_default;
  case_4:
    quoting_style = (enum quoting_style)3;
    elide_outer_quotes = (_Bool)1;
  case_3:
    if (!elide_outer_quotes) {
      while (1) {

        if (len < buffersize) {
          *(buffer + len) = (char)'\"';
        }
        len++;
        goto while_break;
      }
    while_break:;
    }
    backslash_escapes = (_Bool)1;
    quote_string = "\"";
    quote_string_len = (size_t)1;
    goto switch_break;
  case_5:
    backslash_escapes = (_Bool)1;
    elide_outer_quotes = (_Bool)0;
    goto switch_break;
  case_6:
    if ((unsigned int)quoting_style != 8U) {
      left_quote = gettext_quote("`", quoting_style);
      right_quote = gettext_quote("\'", quoting_style);
    }
    if (!elide_outer_quotes) {
      quote_string = left_quote;
      while (1) {

        if (!*quote_string) {
          goto while_break___0;
        }
        while (1) {

          if (len < buffersize) {
            *(buffer + len) = (char)*quote_string;
          }
          len++;
          goto while_break___1;
        }
      while_break___1:
        quote_string++;
      }
    while_break___0:;
    }
    backslash_escapes = (_Bool)1;
    quote_string = right_quote;
    quote_string_len = strlen(quote_string);
    goto switch_break;
  case_1:
    quoting_style = (enum quoting_style)2;
    elide_outer_quotes = (_Bool)1;
  case_2:
    if (!elide_outer_quotes) {
      while (1) {

        if (len < buffersize) {
          *(buffer + len) = (char)'\'';
        }
        len++;
        goto while_break___2;
      }
    while_break___2:;
    }
    quote_string = "\'";
    quote_string_len = (size_t)1;
    goto switch_break;
  case_0:
    elide_outer_quotes = (_Bool)0;
    goto switch_break;
  switch_default:
    abort();
  switch_break:
    i = (size_t)0;
    while (1) {

      if (argsize == 0xffffffffffffffffUL) {
        tmp___6 = (int const) * (arg + i) == 0;
      } else {
        tmp___6 = i == argsize;
      }
      if (tmp___6) {
        goto while_break___3;
      }
      is_right_quote = (_Bool)0;
      if (backslash_escapes) {
        if (quote_string_len) {
          if (i + quote_string_len <= argsize) {
            tmp___0 = memcmp((void const *)(arg + i),
                             (void const *)quote_string, quote_string_len);
            if (tmp___0 == 0) {
              if (elide_outer_quotes) {
                goto force_outer_quoting_style;
              }
              is_right_quote = (_Bool)1;
            }
          }
        }
      }
      c = (unsigned char)*(arg + i);
      if ((int)c == 0) {
        goto case_0___0;
      }
      if ((int)c == 63) {
        goto case_63;
      }
      if ((int)c == 7) {
        goto case_7___0;
      }
      if ((int)c == 8) {
        goto case_8___0;
      }
      if ((int)c == 12) {
        goto case_12;
      }
      if ((int)c == 10) {
        goto case_10;
      }
      if ((int)c == 13) {
        goto case_13;
      }
      if ((int)c == 9) {
        goto case_9;
      }
      if ((int)c == 11) {
        goto case_11;
      }
      if ((int)c == 92) {
        goto case_92;
      }
      if ((int)c == 123) {
        goto case_123;
      }
      if ((int)c == 125) {
        goto case_123;
      }
      if ((int)c == 35) {
        goto case_35;
      }
      if ((int)c == 126) {
        goto case_35;
      }
      if ((int)c == 32) {
        goto case_32;
      }
      if ((int)c == 33) {
        goto case_32;
      }
      if ((int)c == 34) {
        goto case_32;
      }
      if ((int)c == 36) {
        goto case_32;
      }
      if ((int)c == 38) {
        goto case_32;
      }
      if ((int)c == 40) {
        goto case_32;
      }
      if ((int)c == 41) {
        goto case_32;
      }
      if ((int)c == 42) {
        goto case_32;
      }
      if ((int)c == 59) {
        goto case_32;
      }
      if ((int)c == 60) {
        goto case_32;
      }
      if ((int)c == 61) {
        goto case_32;
      }
      if ((int)c == 62) {
        goto case_32;
      }
      if ((int)c == 91) {
        goto case_32;
      }
      if ((int)c == 94) {
        goto case_32;
      }
      if ((int)c == 96) {
        goto case_32;
      }
      if ((int)c == 124) {
        goto case_32;
      }
      if ((int)c == 39) {
        goto case_39___0;
      }
      if ((int)c == 37) {
        goto case_37;
      }
      if ((int)c == 43) {
        goto case_37;
      }
      if ((int)c == 44) {
        goto case_37;
      }
      if ((int)c == 45) {
        goto case_37;
      }
      if ((int)c == 46) {
        goto case_37;
      }
      if ((int)c == 47) {
        goto case_37;
      }
      if ((int)c == 48) {
        goto case_37;
      }
      if ((int)c == 49) {
        goto case_37;
      }
      if ((int)c == 50) {
        goto case_37;
      }
      if ((int)c == 51) {
        goto case_37;
      }
      if ((int)c == 52) {
        goto case_37;
      }
      if ((int)c == 53) {
        goto case_37;
      }
      if ((int)c == 54) {
        goto case_37;
      }
      if ((int)c == 55) {
        goto case_37;
      }
      if ((int)c == 56) {
        goto case_37;
      }
      if ((int)c == 57) {
        goto case_37;
      }
      if ((int)c == 58) {
        goto case_37;
      }
      if ((int)c == 65) {
        goto case_37;
      }
      if ((int)c == 66) {
        goto case_37;
      }
      if ((int)c == 67) {
        goto case_37;
      }
      if ((int)c == 68) {
        goto case_37;
      }
      if ((int)c == 69) {
        goto case_37;
      }
      if ((int)c == 70) {
        goto case_37;
      }
      if ((int)c == 71) {
        goto case_37;
      }
      if ((int)c == 72) {
        goto case_37;
      }
      if ((int)c == 73) {
        goto case_37;
      }
      if ((int)c == 74) {
        goto case_37;
      }
      if ((int)c == 75) {
        goto case_37;
      }
      if ((int)c == 76) {
        goto case_37;
      }
      if ((int)c == 77) {
        goto case_37;
      }
      if ((int)c == 78) {
        goto case_37;
      }
      if ((int)c == 79) {
        goto case_37;
      }
      if ((int)c == 80) {
        goto case_37;
      }
      if ((int)c == 81) {
        goto case_37;
      }
      if ((int)c == 82) {
        goto case_37;
      }
      if ((int)c == 83) {
        goto case_37;
      }
      if ((int)c == 84) {
        goto case_37;
      }
      if ((int)c == 85) {
        goto case_37;
      }
      if ((int)c == 86) {
        goto case_37;
      }
      if ((int)c == 87) {
        goto case_37;
      }
      if ((int)c == 88) {
        goto case_37;
      }
      if ((int)c == 89) {
        goto case_37;
      }
      if ((int)c == 90) {
        goto case_37;
      }
      if ((int)c == 93) {
        goto case_37;
      }
      if ((int)c == 95) {
        goto case_37;
      }
      if ((int)c == 97) {
        goto case_37;
      }
      if ((int)c == 98) {
        goto case_37;
      }
      if ((int)c == 99) {
        goto case_37;
      }
      if ((int)c == 100) {
        goto case_37;
      }
      if ((int)c == 101) {
        goto case_37;
      }
      if ((int)c == 102) {
        goto case_37;
      }
      if ((int)c == 103) {
        goto case_37;
      }
      if ((int)c == 104) {
        goto case_37;
      }
      if ((int)c == 105) {
        goto case_37;
      }
      if ((int)c == 106) {
        goto case_37;
      }
      if ((int)c == 107) {
        goto case_37;
      }
      if ((int)c == 108) {
        goto case_37;
      }
      if ((int)c == 109) {
        goto case_37;
      }
      if ((int)c == 110) {
        goto case_37;
      }
      if ((int)c == 111) {
        goto case_37;
      }
      if ((int)c == 112) {
        goto case_37;
      }
      if ((int)c == 113) {
        goto case_37;
      }
      if ((int)c == 114) {
        goto case_37;
      }
      if ((int)c == 115) {
        goto case_37;
      }
      if ((int)c == 116) {
        goto case_37;
      }
      if ((int)c == 117) {
        goto case_37;
      }
      if ((int)c == 118) {
        goto case_37;
      }
      if ((int)c == 119) {
        goto case_37;
      }
      if ((int)c == 120) {
        goto case_37;
      }
      if ((int)c == 121) {
        goto case_37;
      }
      if ((int)c == 122) {
        goto case_37;
      }
      goto switch_default___2;
    case_0___0:
      if (backslash_escapes) {
        if (elide_outer_quotes) {
          goto force_outer_quoting_style;
        }
        while (1) {

          if (len < buffersize) {
            *(buffer + len) = (char)'\\';
          }
          len++;
          goto while_break___4;
        }
      while_break___4:;
        if (i + 1UL < argsize) {
          if (48 <= (int)*(arg + (i + 1UL))) {
            if ((int const) * (arg + (i + 1UL)) <= 57) {
              while (1) {

                if (len < buffersize) {
                  *(buffer + len) = (char)'0';
                }
                len++;
                goto while_break___5;
              }
            while_break___5:;
              while (1) {

                if (len < buffersize) {
                  *(buffer + len) = (char)'0';
                }
                len++;
                goto while_break___6;
              }
            while_break___6:;
            }
          }
        }
        c = (unsigned char)'0';
      } else {
        if (flags & 1) {
          goto __Cont;
        }
      }
      goto switch_break___0;
    case_63:
      if ((unsigned int)quoting_style == 2U) {
        goto case_2___0;
      }
      if ((unsigned int)quoting_style == 3U) {
        goto case_3___0;
      }
      goto switch_default___1;
    case_2___0:
      if (elide_outer_quotes) {
        goto force_outer_quoting_style;
      }
      goto switch_break___1;
    case_3___0:
      if (flags & 4) {
        if (i + 2UL < argsize) {
          if ((int const) * (arg + (i + 1UL)) == 63) {
            if ((int const) * (arg + (i + 2UL)) == 33) {
              goto case_33;
            }
            if ((int const) * (arg + (i + 2UL)) == 39) {
              goto case_33;
            }
            if ((int const) * (arg + (i + 2UL)) == 40) {
              goto case_33;
            }
            if ((int const) * (arg + (i + 2UL)) == 41) {
              goto case_33;
            }
            if ((int const) * (arg + (i + 2UL)) == 45) {
              goto case_33;
            }
            if ((int const) * (arg + (i + 2UL)) == 47) {
              goto case_33;
            }
            if ((int const) * (arg + (i + 2UL)) == 60) {
              goto case_33;
            }
            if ((int const) * (arg + (i + 2UL)) == 61) {
              goto case_33;
            }
            if ((int const) * (arg + (i + 2UL)) == 62) {
              goto case_33;
            }
            goto switch_default___0;
          case_33:
            if (elide_outer_quotes) {
              goto force_outer_quoting_style;
            }
            c = (unsigned char)*(arg + (i + 2UL));
            i += 2UL;
            while (1) {

              if (len < buffersize) {
                *(buffer + len) = (char)'?';
              }
              len++;
              goto while_break___7;
            }
          while_break___7:;
            while (1) {

              if (len < buffersize) {
                *(buffer + len) = (char)'\"';
              }
              len++;
              goto while_break___8;
            }
          while_break___8:;
            while (1) {

              if (len < buffersize) {
                *(buffer + len) = (char)'\"';
              }
              len++;
              goto while_break___9;
            }
          while_break___9:;
            while (1) {

              if (len < buffersize) {
                *(buffer + len) = (char)'?';
              }
              len++;
              goto while_break___10;
            }
          while_break___10:;
            goto switch_break___2;
          switch_default___0:
            goto switch_break___2;
          switch_break___2:;
          }
        }
      }
      goto switch_break___1;
    switch_default___1:
      goto switch_break___1;
    switch_break___1:;
      goto switch_break___0;
    case_7___0:
      esc = (unsigned char)'a';
      goto c_escape;
    case_8___0:
      esc = (unsigned char)'b';
      goto c_escape;
    case_12:
      esc = (unsigned char)'f';
      goto c_escape;
    case_10:
      esc = (unsigned char)'n';
      goto c_and_shell_escape;
    case_13:
      esc = (unsigned char)'r';
      goto c_and_shell_escape;
    case_9:
      esc = (unsigned char)'t';
      goto c_and_shell_escape;
    case_11:
      esc = (unsigned char)'v';
      goto c_escape;
    case_92:
      esc = c;
      if (backslash_escapes) {
        if (elide_outer_quotes) {
          if (quote_string_len) {
            goto store_c;
          }
        }
      }
    c_and_shell_escape:
      if ((unsigned int)quoting_style == 2U) {
        if (elide_outer_quotes) {
          goto force_outer_quoting_style;
        }
      }
    c_escape:
      if (backslash_escapes) {
        c = esc;
        goto store_escape;
      }
      goto switch_break___0;
    case_123:
      if (argsize == 0xffffffffffffffffUL) {
        tmp___1 = (int const) * (arg + 1) == 0;
      } else {
        tmp___1 = argsize == 1UL;
      }
      if (!tmp___1) {
        goto switch_break___0;
      }
    case_35:
      if (i != 0UL) {
        goto switch_break___0;
      }
    case_32:
      if ((unsigned int)quoting_style == 2U) {
        if (elide_outer_quotes) {
          goto force_outer_quoting_style;
        }
      }
      goto switch_break___0;
    case_39___0:
      if ((unsigned int)quoting_style == 2U) {
        if (elide_outer_quotes) {
          goto force_outer_quoting_style;
        }
        while (1) {

          if (len < buffersize) {
            *(buffer + len) = (char)'\'';
          }
          len++;
          goto while_break___11;
        }
      while_break___11:;
        while (1) {

          if (len < buffersize) {
            *(buffer + len) = (char)'\\';
          }
          len++;
          goto while_break___12;
        }
      while_break___12:;
        while (1) {

          if (len < buffersize) {
            *(buffer + len) = (char)'\'';
          }
          len++;
          goto while_break___13;
        }
      while_break___13:;
      }
      goto switch_break___0;
    case_37:
      goto switch_break___0;
    switch_default___2:
      if (unibyte_locale) {
        m = (size_t)1;
        tmp___2 = __ctype_b_loc();
        printable = (_Bool)(((int const) * (*tmp___2 + (int)c) & 16384) != 0);
      } else {
        memset((void *)(&mbstate), 0, sizeof(mbstate));
        m = (size_t)0;
        printable = (_Bool)1;
        if (argsize == 0xffffffffffffffffUL) {
          argsize = strlen(arg);
        }
        while (1) {
          tmp___3 = mbrtowc(&w, arg + (i + m), argsize - (i + m), &mbstate);
          bytes = tmp___3;
          if (bytes == 0UL) {
            goto while_break___14;
          } else {
            if (bytes == 0xffffffffffffffffUL) {
              printable = (_Bool)0;
              goto while_break___14;
            } else {
              if (bytes == 0xfffffffffffffffeUL) {
                printable = (_Bool)0;
                while (1) {

                  if (i + m < argsize) {
                    if (!*(arg + (i + m))) {
                      goto while_break___15;
                    }
                  } else {
                    goto while_break___15;
                  }
                  m++;
                }
              while_break___15:;
                goto while_break___14;
              } else {
                if (elide_outer_quotes) {
                  if ((unsigned int)quoting_style == 2U) {
                    j = (size_t)1;
                    while (1) {

                      if (!(j < bytes)) {
                        goto while_break___16;
                      }
                      if ((int const) * (arg + ((i + m) + j)) == 91) {
                        goto case_91___0;
                      }
                      if ((int const) * (arg + ((i + m) + j)) == 92) {
                        goto case_91___0;
                      }
                      if ((int const) * (arg + ((i + m) + j)) == 94) {
                        goto case_91___0;
                      }
                      if ((int const) * (arg + ((i + m) + j)) == 96) {
                        goto case_91___0;
                      }
                      if ((int const) * (arg + ((i + m) + j)) == 124) {
                        goto case_91___0;
                      }
                      goto switch_default___3;
                    case_91___0:
                      goto force_outer_quoting_style;
                    switch_default___3:
                      goto switch_break___3;
                    switch_break___3:
                      j++;
                    }
                  while_break___16:;
                  }
                }
                tmp___4 = iswprint((wint_t)w);
                if (!tmp___4) {
                  printable = (_Bool)0;
                }
                m += bytes;
              }
            }
          }
          tmp___5 = mbsinit((mbstate_t const *)(&mbstate));
          if (tmp___5) {
            goto while_break___14;
          }
        }
      while_break___14:;
      }
      if (1UL < m) {
        goto _L___0;
      } else {
        if (backslash_escapes) {
          if (!printable) {
          _L___0:
            ilim = i + m;
            while (1) {

              if (backslash_escapes) {
                if (!printable) {
                  if (elide_outer_quotes) {
                    goto force_outer_quoting_style;
                  }
                  while (1) {

                    if (len < buffersize) {
                      *(buffer + len) = (char)'\\';
                    }
                    len++;
                    goto while_break___18;
                  }
                while_break___18:;
                  while (1) {

                    if (len < buffersize) {
                      *(buffer + len) = (char)(48 + ((int)c >> 6));
                    }
                    len++;
                    goto while_break___19;
                  }
                while_break___19:;
                  while (1) {

                    if (len < buffersize) {
                      *(buffer + len) = (char)(48 + (((int)c >> 3) & 7));
                    }
                    len++;
                    goto while_break___20;
                  }
                while_break___20:
                  c = (unsigned char)(48 + ((int)c & 7));
                } else {
                  goto _L;
                }
              } else {
              _L:
                if (is_right_quote) {
                  while (1) {

                    if (len < buffersize) {
                      *(buffer + len) = (char)'\\';
                    }
                    len++;
                    goto while_break___21;
                  }
                while_break___21:
                  is_right_quote = (_Bool)0;
                }
              }
              if (ilim <= i + 1UL) {
                goto while_break___17;
              }
              while (1) {

                if (len < buffersize) {
                  *(buffer + len) = (char)c;
                }
                len++;
                goto while_break___22;
              }
            while_break___22:
              i++;
              c = (unsigned char)*(arg + i);
            }
          while_break___17:;
            goto store_c;
          }
        }
      }
    switch_break___0:;
      if (backslash_escapes) {
        goto _L___3;
      } else {
        if (elide_outer_quotes) {
        _L___3:
          if (quote_these_too) {
            if (!(*(quote_these_too + (unsigned long)c / (sizeof(int) * 8UL)) &
                  (unsigned int const)(1 << (unsigned long)c %
                                                (sizeof(int) * 8UL)))) {
              goto _L___2;
            }
          } else {
            goto _L___2;
          }
        } else {
        _L___2:
          if (!is_right_quote) {
            goto store_c;
          }
        }
      }
    store_escape:
      if (elide_outer_quotes) {
        goto force_outer_quoting_style;
      }
      while (1) {

        if (len < buffersize) {
          *(buffer + len) = (char)'\\';
        }
        len++;
        goto while_break___23;
      }
    while_break___23:;
    store_c:
      while (1) {

        if (len < buffersize) {
          *(buffer + len) = (char)c;
        }
        len++;
        goto while_break___24;
      }
    while_break___24:;
    __Cont:
      i++;
    }
  while_break___3:;
    if (len == 0UL) {
      if ((unsigned int)quoting_style == 2U) {
        if (elide_outer_quotes) {
          goto force_outer_quoting_style;
        }
      }
    }
    if (quote_string) {
      if (!elide_outer_quotes) {
        while (1) {

          if (!*quote_string) {
            goto while_break___25;
          }
          while (1) {

            if (len < buffersize) {
              *(buffer + len) = (char)*quote_string;
            }
            len++;
            goto while_break___26;
          }
        while_break___26:
          quote_string++;
        }
      while_break___25:;
      }
    }
    if (len < buffersize) {
      *(buffer + len) = (char)'\000';
    }
    return (len);
  force_outer_quoting_style:
    tmp___7 = quotearg_buffer_restyled(
        buffer, buffersize, arg, argsize, quoting_style, flags & -3,
        (unsigned int const *)((void *)0), left_quote, right_quote);
    return (tmp___7);
  }
}
static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize,
                                struct quoting_options const *options) {
  int e;
  int *tmp;
  unsigned int n0;
  struct slotvec *sv;
  size_t n1;
  _Bool preallocated;
  int tmp___0;
  struct slotvec *tmp___1;
  size_t size;
  char *val;
  int flags;
  size_t qsize;
  size_t tmp___2;
  int *tmp___3;

  {
    tmp = __errno_location();
    e = *tmp;
    n0 = (unsigned int)n;
    sv = slotvec;
    if (n < 0) {
      abort();
    }
    if (nslots <= n0) {
      n1 = (size_t)(n0 + 1U);
      preallocated = (_Bool)((unsigned long)sv == (unsigned long)(&slotvec0));
      if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
        tmp___0 = -1;
      } else {
        tmp___0 = -2;
      }
      if ((size_t)tmp___0 / sizeof(*sv) < n1) {
        xalloc_die();
      }
      if (preallocated) {
        tmp___1 = (struct slotvec *)((void *)0);
      } else {
        tmp___1 = sv;
      }
      sv = (struct slotvec *)xrealloc((void *)tmp___1, n1 * sizeof(*sv));
      slotvec = sv;
      if (preallocated) {
        *sv = slotvec0;
      }
      memset((void *)(sv + nslots), 0, (n1 - (size_t)nslots) * sizeof(*sv));
      nslots = (unsigned int)n1;
    }
    size = (sv + n)->size;
    val = (sv + n)->val;
    flags = (int)(options->flags | 1);
    tmp___2 = quotearg_buffer_restyled(
        val, size, arg, argsize, (enum quoting_style)options->style, flags,
        (unsigned int const *)(options->quote_these_too),
        (char const *)options->left_quote, (char const *)options->right_quote);
    qsize = tmp___2;
    if (size <= qsize) {
      size = qsize + 1UL;
      (sv + n)->size = size;
      if ((unsigned long)val != (unsigned long)(slot0)) {
        free((void *)val);
      }
      val = xcharalloc(size);
      (sv + n)->val = val;
      quotearg_buffer_restyled(val, size, arg, argsize,
                               (enum quoting_style)options->style, flags,
                               (unsigned int const *)(options->quote_these_too),
                               (char const *)options->left_quote,
                               (char const *)options->right_quote);
    }
    tmp___3 = __errno_location();
    *tmp___3 = e;
    return (val);
  }
}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {
  struct quoting_options o;

  char *tmp___0;

  {

    tmp___0 = quotearg_n_options(n, arg, (size_t)-1,
                                 (struct quoting_options const *)(&o));
    return (tmp___0);
  }
}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch) {
  struct quoting_options options;
  char *tmp;

  {

    tmp = quotearg_n_options(0, arg, argsize,
                             (struct quoting_options const *)(&options));
    return (tmp);
  }
}
char *quotearg_char(char const *arg, char ch) {
  char *tmp;

  {
    tmp = quotearg_char_mem(arg, (size_t)-1, ch);
    return (tmp);
  }
}
char *quotearg_colon(char const *arg) {
  char *tmp;

  {
    tmp = quotearg_char(arg, (char)':');
    return (tmp);
  }
}
struct quoting_options quote_quoting_options = {(enum quoting_style)6,
                                                0,
                                                {0U},
                                                (char const *)((void *)0),
                                                (char const *)((void *)0)};
char const *quote_n_mem(int n, char const *arg, size_t argsize) {
  char const *tmp;

  {
    tmp = (char const *)quotearg_n_options(
        n, arg, argsize,
        (struct quoting_options const *)(&quote_quoting_options));
    return (tmp);
  }
}
char const *quote_n(int n, char const *arg) {
  char const *tmp;

  {
    tmp = quote_n_mem(n, arg, (size_t)-1);
    return (tmp);
  }
}
char const *quote(char const *arg) {
  char const *tmp;

  {
    tmp = quote_n(0, arg);
    return (tmp);
  }
}
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"

void set_program_name(char const *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strrchr)(char const *__s, int __c)
    __attribute__((__pure__));
char const *program_name = (char const *)((void *)0);
void set_program_name(char const *argv0) {
  char const *slash;
  char const *base;
  int tmp;
  int tmp___0;

  {
    if ((unsigned long)argv0 == (unsigned long)((void *)0)) {
      fputs("A NULL argv[0] was passed through an exec system call.\n", stderr);
      abort();
    }
    slash = (char const *)strrchr(argv0, '/');
    if ((unsigned long)slash != (unsigned long)((void *)0)) {
      base = slash + 1;
    } else {
      base = argv0;
    }
    if (base - argv0 >= 7L) {
      tmp___0 = strncmp(base - 7, "/.libs/", (size_t)7);
      if (tmp___0 == 0) {
        argv0 = base;
        tmp = strncmp(base, "lt-", (size_t)3);
        if (tmp == 0) {
          argv0 = base + 3;
          program_invocation_short_name = (char *)argv0;
        }
      }
    }
    program_name = argv0;
    program_invocation_name = (char *)argv0;
    return;
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__))
time_t(__attribute__((__leaf__)) time)(time_t *__timer);
extern
    __attribute__((__nothrow__)) struct tm *(__attribute__((__leaf__))
                                             localtime)(time_t const *__timer);
_Bool posixtime(time_t *p, char const *s, unsigned int syntax_bits);
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stpcpy)(char *__restrict __dest, char const *__restrict __src);

_Bool posixtime(time_t *p, char const *s, unsigned int syntax_bits) {

  return ((_Bool)0);
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
_Bool parse_datetime(struct timespec *result, char const *p,
                     struct timespec const *now);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     setenv)(char const *__name,
                                             char const *__value,
                                             int __replace);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     unsetenv)(char const *__name);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) abs)(int __x)
    __attribute__((__const__));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
static unsigned char to_uchar___0(char ch) { return ((unsigned char)ch); }
static int yylex(union YYSTYPE *lvalp, parser_control *pc);
static int yyerror(parser_control const *pc __attribute__((__unused__)),
                   char const *s __attribute__((__unused__)));
static long time_zone_hhmm(parser_control *pc, textint s, long mm);
static void digits_to_date_time(parser_control *pc, textint text_int) {

  if (4UL < text_int.digits) {

    pc->day = text_int.value % 100L;
    pc->month = (text_int.value / 100L) % 100L;
    pc->year.value = text_int.value / 10000L;
    pc->year.digits = text_int.digits - 4UL;
  } else {
  }
}
static void apply_relative_time(parser_control *pc, relative_time rel,
                                int factor) {

  pc->rel.ns += (long)factor * rel.ns;
  pc->rel.seconds += (long_time_t)factor * rel.seconds;
  pc->rel.minutes += (long)factor * rel.minutes;
  pc->rel.hour += (long)factor * rel.hour;
  pc->rel.day += (long)factor * rel.day;
  pc->rel.month += (long)factor * rel.month;
  pc->rel.year += (long)factor * rel.year;
}
static void set_hhmmss(parser_control *pc, long hour, long minutes, time_t sec,
                       long nsec) {

  pc->hour = hour;
  pc->minutes = minutes;
  pc->seconds.tv_sec = sec;
  pc->seconds.tv_nsec = nsec;
}
static yytype_uint8 const yytranslate[278] = {
    (yytype_uint8 const)0,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)26,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)27,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)25, (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)23, (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)24, (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)1,  (yytype_uint8 const)2,
    (yytype_uint8 const)3,  (yytype_uint8 const)4,  (yytype_uint8 const)5,
    (yytype_uint8 const)6,  (yytype_uint8 const)7,  (yytype_uint8 const)8,
    (yytype_uint8 const)9,  (yytype_uint8 const)10, (yytype_uint8 const)11,
    (yytype_uint8 const)12, (yytype_uint8 const)13, (yytype_uint8 const)14,
    (yytype_uint8 const)15, (yytype_uint8 const)16, (yytype_uint8 const)17,
    (yytype_uint8 const)18, (yytype_uint8 const)19, (yytype_uint8 const)20,
    (yytype_uint8 const)21, (yytype_uint8 const)22};
static yytype_uint8 const yyr1[92] = {
    (yytype_uint8 const)0,  (yytype_uint8 const)28, (yytype_uint8 const)29,
    (yytype_uint8 const)29, (yytype_uint8 const)30, (yytype_uint8 const)31,
    (yytype_uint8 const)31, (yytype_uint8 const)32, (yytype_uint8 const)32,
    (yytype_uint8 const)32, (yytype_uint8 const)32, (yytype_uint8 const)32,
    (yytype_uint8 const)32, (yytype_uint8 const)32, (yytype_uint8 const)32,
    (yytype_uint8 const)32, (yytype_uint8 const)33, (yytype_uint8 const)34,
    (yytype_uint8 const)35, (yytype_uint8 const)35, (yytype_uint8 const)35,
    (yytype_uint8 const)35, (yytype_uint8 const)36, (yytype_uint8 const)36,
    (yytype_uint8 const)36, (yytype_uint8 const)37, (yytype_uint8 const)37,
    (yytype_uint8 const)38, (yytype_uint8 const)39, (yytype_uint8 const)39,
    (yytype_uint8 const)40, (yytype_uint8 const)40, (yytype_uint8 const)40,
    (yytype_uint8 const)40, (yytype_uint8 const)40, (yytype_uint8 const)40,
    (yytype_uint8 const)40, (yytype_uint8 const)41, (yytype_uint8 const)41,
    (yytype_uint8 const)41, (yytype_uint8 const)41, (yytype_uint8 const)42,
    (yytype_uint8 const)42, (yytype_uint8 const)42, (yytype_uint8 const)42,
    (yytype_uint8 const)42, (yytype_uint8 const)42, (yytype_uint8 const)42,
    (yytype_uint8 const)42, (yytype_uint8 const)42, (yytype_uint8 const)43,
    (yytype_uint8 const)44, (yytype_uint8 const)44, (yytype_uint8 const)44,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)46, (yytype_uint8 const)46, (yytype_uint8 const)46,
    (yytype_uint8 const)46, (yytype_uint8 const)46, (yytype_uint8 const)46,
    (yytype_uint8 const)47, (yytype_uint8 const)48, (yytype_uint8 const)48,
    (yytype_uint8 const)49, (yytype_uint8 const)49, (yytype_uint8 const)50,
    (yytype_uint8 const)50, (yytype_uint8 const)51, (yytype_uint8 const)52,
    (yytype_uint8 const)53, (yytype_uint8 const)53};
static yytype_uint8 const yyr2[92] = {
    (yytype_uint8 const)0, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)2, (yytype_uint8 const)0,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)3,
    (yytype_uint8 const)2, (yytype_uint8 const)4, (yytype_uint8 const)6,
    (yytype_uint8 const)1, (yytype_uint8 const)2, (yytype_uint8 const)4,
    (yytype_uint8 const)6, (yytype_uint8 const)0, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)2,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)2,
    (yytype_uint8 const)2, (yytype_uint8 const)3, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)2,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)3,
    (yytype_uint8 const)5, (yytype_uint8 const)3, (yytype_uint8 const)3,
    (yytype_uint8 const)2, (yytype_uint8 const)4, (yytype_uint8 const)2,
    (yytype_uint8 const)3, (yytype_uint8 const)1, (yytype_uint8 const)3,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)2,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)2,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)2,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)2,
    (yytype_uint8 const)0, (yytype_uint8 const)2};
static yytype_uint8 const yydefact[114] = {
    (yytype_uint8 const)5,  (yytype_uint8 const)0,  (yytype_uint8 const)0,
    (yytype_uint8 const)2,  (yytype_uint8 const)3,  (yytype_uint8 const)85,
    (yytype_uint8 const)87, (yytype_uint8 const)84, (yytype_uint8 const)86,
    (yytype_uint8 const)4,  (yytype_uint8 const)82, (yytype_uint8 const)83,
    (yytype_uint8 const)1,  (yytype_uint8 const)56, (yytype_uint8 const)59,
    (yytype_uint8 const)65, (yytype_uint8 const)68, (yytype_uint8 const)73,
    (yytype_uint8 const)62, (yytype_uint8 const)81, (yytype_uint8 const)37,
    (yytype_uint8 const)35, (yytype_uint8 const)28, (yytype_uint8 const)0,
    (yytype_uint8 const)0,  (yytype_uint8 const)30, (yytype_uint8 const)0,
    (yytype_uint8 const)88, (yytype_uint8 const)0,  (yytype_uint8 const)0,
    (yytype_uint8 const)31, (yytype_uint8 const)6,  (yytype_uint8 const)7,
    (yytype_uint8 const)16, (yytype_uint8 const)8,  (yytype_uint8 const)21,
    (yytype_uint8 const)9,  (yytype_uint8 const)10, (yytype_uint8 const)12,
    (yytype_uint8 const)11, (yytype_uint8 const)49, (yytype_uint8 const)13,
    (yytype_uint8 const)52, (yytype_uint8 const)74, (yytype_uint8 const)53,
    (yytype_uint8 const)14, (yytype_uint8 const)15, (yytype_uint8 const)38,
    (yytype_uint8 const)29, (yytype_uint8 const)0,  (yytype_uint8 const)45,
    (yytype_uint8 const)54, (yytype_uint8 const)57, (yytype_uint8 const)63,
    (yytype_uint8 const)66, (yytype_uint8 const)69, (yytype_uint8 const)60,
    (yytype_uint8 const)39, (yytype_uint8 const)36, (yytype_uint8 const)90,
    (yytype_uint8 const)32, (yytype_uint8 const)75, (yytype_uint8 const)76,
    (yytype_uint8 const)78, (yytype_uint8 const)79, (yytype_uint8 const)80,
    (yytype_uint8 const)77, (yytype_uint8 const)55, (yytype_uint8 const)58,
    (yytype_uint8 const)64, (yytype_uint8 const)67, (yytype_uint8 const)70,
    (yytype_uint8 const)61, (yytype_uint8 const)40, (yytype_uint8 const)18,
    (yytype_uint8 const)47, (yytype_uint8 const)90, (yytype_uint8 const)0,
    (yytype_uint8 const)0,  (yytype_uint8 const)22, (yytype_uint8 const)89,
    (yytype_uint8 const)71, (yytype_uint8 const)72, (yytype_uint8 const)33,
    (yytype_uint8 const)0,  (yytype_uint8 const)51, (yytype_uint8 const)44,
    (yytype_uint8 const)0,  (yytype_uint8 const)0,  (yytype_uint8 const)34,
    (yytype_uint8 const)43, (yytype_uint8 const)48, (yytype_uint8 const)50,
    (yytype_uint8 const)27, (yytype_uint8 const)25, (yytype_uint8 const)41,
    (yytype_uint8 const)0,  (yytype_uint8 const)17, (yytype_uint8 const)46,
    (yytype_uint8 const)91, (yytype_uint8 const)19, (yytype_uint8 const)90,
    (yytype_uint8 const)0,  (yytype_uint8 const)23, (yytype_uint8 const)26,
    (yytype_uint8 const)0,  (yytype_uint8 const)0,  (yytype_uint8 const)25,
    (yytype_uint8 const)42, (yytype_uint8 const)25, (yytype_uint8 const)20,
    (yytype_uint8 const)24, (yytype_uint8 const)0,  (yytype_uint8 const)25};
static yytype_int8 const yydefgoto[26] = {
    (yytype_int8 const)-1,  (yytype_int8 const)2,   (yytype_int8 const)3,
    (yytype_int8 const)4,   (yytype_int8 const)31,  (yytype_int8 const)32,
    (yytype_int8 const)33,  (yytype_int8 const)34,  (yytype_int8 const)35,
    (yytype_int8 const)103, (yytype_int8 const)104, (yytype_int8 const)36,
    (yytype_int8 const)37,  (yytype_int8 const)38,  (yytype_int8 const)39,
    (yytype_int8 const)40,  (yytype_int8 const)41,  (yytype_int8 const)42,
    (yytype_int8 const)43,  (yytype_int8 const)44,  (yytype_int8 const)9,
    (yytype_int8 const)10,  (yytype_int8 const)11,  (yytype_int8 const)45,
    (yytype_int8 const)46,  (yytype_int8 const)93};
static yytype_int8 const yypact[114] = {
    (yytype_int8 const)38,  (yytype_int8 const)27,  (yytype_int8 const)77,
    (yytype_int8 const)-93, (yytype_int8 const)46,  (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)62,
    (yytype_int8 const)-93, (yytype_int8 const)82,  (yytype_int8 const)-3,
    (yytype_int8 const)66,  (yytype_int8 const)3,   (yytype_int8 const)74,
    (yytype_int8 const)-4,  (yytype_int8 const)83,  (yytype_int8 const)84,
    (yytype_int8 const)75,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)71,  (yytype_int8 const)-93,
    (yytype_int8 const)93,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)78,  (yytype_int8 const)72,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)25,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)21,  (yytype_int8 const)19,  (yytype_int8 const)79,
    (yytype_int8 const)80,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)81,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)85,  (yytype_int8 const)86,  (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-6,  (yytype_int8 const)76,
    (yytype_int8 const)17,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)87,
    (yytype_int8 const)69,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)88,  (yytype_int8 const)89,  (yytype_int8 const)-1,
    (yytype_int8 const)-93, (yytype_int8 const)18,  (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)69,  (yytype_int8 const)91};
static yytype_int8 const yypgoto[26] = {
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)20,
    (yytype_int8 const)-68, (yytype_int8 const)-27, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)60,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-92, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)43};
static yytype_uint8 const yytable[113] = {
    (yytype_uint8 const)79,  (yytype_uint8 const)67,  (yytype_uint8 const)68,
    (yytype_uint8 const)69,  (yytype_uint8 const)70,  (yytype_uint8 const)71,
    (yytype_uint8 const)72,  (yytype_uint8 const)58,  (yytype_uint8 const)73,
    (yytype_uint8 const)100, (yytype_uint8 const)107, (yytype_uint8 const)74,
    (yytype_uint8 const)75,  (yytype_uint8 const)101, (yytype_uint8 const)110,
    (yytype_uint8 const)76,  (yytype_uint8 const)49,  (yytype_uint8 const)50,
    (yytype_uint8 const)101, (yytype_uint8 const)102, (yytype_uint8 const)113,
    (yytype_uint8 const)77,  (yytype_uint8 const)59,  (yytype_uint8 const)78,
    (yytype_uint8 const)61,  (yytype_uint8 const)62,  (yytype_uint8 const)63,
    (yytype_uint8 const)64,  (yytype_uint8 const)65,  (yytype_uint8 const)66,
    (yytype_uint8 const)61,  (yytype_uint8 const)62,  (yytype_uint8 const)63,
    (yytype_uint8 const)64,  (yytype_uint8 const)65,  (yytype_uint8 const)66,
    (yytype_uint8 const)101, (yytype_uint8 const)101, (yytype_uint8 const)92,
    (yytype_uint8 const)111, (yytype_uint8 const)90,  (yytype_uint8 const)91,
    (yytype_uint8 const)106, (yytype_uint8 const)112, (yytype_uint8 const)88,
    (yytype_uint8 const)111, (yytype_uint8 const)5,   (yytype_uint8 const)6,
    (yytype_uint8 const)7,   (yytype_uint8 const)8,   (yytype_uint8 const)88,
    (yytype_uint8 const)13,  (yytype_uint8 const)14,  (yytype_uint8 const)15,
    (yytype_uint8 const)16,  (yytype_uint8 const)17,  (yytype_uint8 const)18,
    (yytype_uint8 const)19,  (yytype_uint8 const)20,  (yytype_uint8 const)21,
    (yytype_uint8 const)22,  (yytype_uint8 const)1,   (yytype_uint8 const)23,
    (yytype_uint8 const)24,  (yytype_uint8 const)25,  (yytype_uint8 const)26,
    (yytype_uint8 const)27,  (yytype_uint8 const)28,  (yytype_uint8 const)29,
    (yytype_uint8 const)79,  (yytype_uint8 const)30,  (yytype_uint8 const)51,
    (yytype_uint8 const)52,  (yytype_uint8 const)53,  (yytype_uint8 const)54,
    (yytype_uint8 const)55,  (yytype_uint8 const)56,  (yytype_uint8 const)12,
    (yytype_uint8 const)57,  (yytype_uint8 const)61,  (yytype_uint8 const)62,
    (yytype_uint8 const)63,  (yytype_uint8 const)64,  (yytype_uint8 const)65,
    (yytype_uint8 const)66,  (yytype_uint8 const)60,  (yytype_uint8 const)48,
    (yytype_uint8 const)80,  (yytype_uint8 const)47,  (yytype_uint8 const)6,
    (yytype_uint8 const)83,  (yytype_uint8 const)8,   (yytype_uint8 const)81,
    (yytype_uint8 const)82,  (yytype_uint8 const)26,  (yytype_uint8 const)84,
    (yytype_uint8 const)85,  (yytype_uint8 const)86,  (yytype_uint8 const)87,
    (yytype_uint8 const)94,  (yytype_uint8 const)95,  (yytype_uint8 const)96,
    (yytype_uint8 const)89,  (yytype_uint8 const)105, (yytype_uint8 const)97,
    (yytype_uint8 const)98,  (yytype_uint8 const)99,  (yytype_uint8 const)0,
    (yytype_uint8 const)108, (yytype_uint8 const)109, (yytype_uint8 const)101,
    (yytype_uint8 const)0,   (yytype_uint8 const)88};
static yytype_int8 const yycheck[113] = {
    (yytype_int8 const)27,  (yytype_int8 const)5,   (yytype_int8 const)6,
    (yytype_int8 const)7,   (yytype_int8 const)8,   (yytype_int8 const)9,
    (yytype_int8 const)10,  (yytype_int8 const)4,   (yytype_int8 const)12,
    (yytype_int8 const)15,  (yytype_int8 const)102, (yytype_int8 const)15,
    (yytype_int8 const)16,  (yytype_int8 const)19,  (yytype_int8 const)15,
    (yytype_int8 const)19,  (yytype_int8 const)19,  (yytype_int8 const)20,
    (yytype_int8 const)19,  (yytype_int8 const)25,  (yytype_int8 const)112,
    (yytype_int8 const)25,  (yytype_int8 const)19,  (yytype_int8 const)27,
    (yytype_int8 const)5,   (yytype_int8 const)6,   (yytype_int8 const)7,
    (yytype_int8 const)8,   (yytype_int8 const)9,   (yytype_int8 const)10,
    (yytype_int8 const)5,   (yytype_int8 const)6,   (yytype_int8 const)7,
    (yytype_int8 const)8,   (yytype_int8 const)9,   (yytype_int8 const)10,
    (yytype_int8 const)19,  (yytype_int8 const)19,  (yytype_int8 const)19,
    (yytype_int8 const)107, (yytype_int8 const)19,  (yytype_int8 const)20,
    (yytype_int8 const)25,  (yytype_int8 const)25,  (yytype_int8 const)25,
    (yytype_int8 const)113, (yytype_int8 const)19,  (yytype_int8 const)20,
    (yytype_int8 const)21,  (yytype_int8 const)22,  (yytype_int8 const)25,
    (yytype_int8 const)5,   (yytype_int8 const)6,   (yytype_int8 const)7,
    (yytype_int8 const)8,   (yytype_int8 const)9,   (yytype_int8 const)10,
    (yytype_int8 const)11,  (yytype_int8 const)12,  (yytype_int8 const)13,
    (yytype_int8 const)14,  (yytype_int8 const)23,  (yytype_int8 const)16,
    (yytype_int8 const)17,  (yytype_int8 const)18,  (yytype_int8 const)19,
    (yytype_int8 const)20,  (yytype_int8 const)21,  (yytype_int8 const)22,
    (yytype_int8 const)96,  (yytype_int8 const)24,  (yytype_int8 const)5,
    (yytype_int8 const)6,   (yytype_int8 const)7,   (yytype_int8 const)8,
    (yytype_int8 const)9,   (yytype_int8 const)10,  (yytype_int8 const)0,
    (yytype_int8 const)12,  (yytype_int8 const)5,   (yytype_int8 const)6,
    (yytype_int8 const)7,   (yytype_int8 const)8,   (yytype_int8 const)9,
    (yytype_int8 const)10,  (yytype_int8 const)25,  (yytype_int8 const)4,
    (yytype_int8 const)27,  (yytype_int8 const)26,  (yytype_int8 const)20,
    (yytype_int8 const)30,  (yytype_int8 const)22,  (yytype_int8 const)9,
    (yytype_int8 const)9,   (yytype_int8 const)19,  (yytype_int8 const)24,
    (yytype_int8 const)3,   (yytype_int8 const)19,  (yytype_int8 const)26,
    (yytype_int8 const)20,  (yytype_int8 const)20,  (yytype_int8 const)20,
    (yytype_int8 const)59,  (yytype_int8 const)27,  (yytype_int8 const)84,
    (yytype_int8 const)20,  (yytype_int8 const)20,  (yytype_int8 const)-1,
    (yytype_int8 const)20,  (yytype_int8 const)20,  (yytype_int8 const)19,
    (yytype_int8 const)-1,  (yytype_int8 const)25};
static yytype_uint8 const yystos[114] = {
    (yytype_uint8 const)0,  (yytype_uint8 const)23, (yytype_uint8 const)29,
    (yytype_uint8 const)30, (yytype_uint8 const)31, (yytype_uint8 const)19,
    (yytype_uint8 const)20, (yytype_uint8 const)21, (yytype_uint8 const)22,
    (yytype_uint8 const)48, (yytype_uint8 const)49, (yytype_uint8 const)50,
    (yytype_uint8 const)0,  (yytype_uint8 const)5,  (yytype_uint8 const)6,
    (yytype_uint8 const)7,  (yytype_uint8 const)8,  (yytype_uint8 const)9,
    (yytype_uint8 const)10, (yytype_uint8 const)11, (yytype_uint8 const)12,
    (yytype_uint8 const)13, (yytype_uint8 const)14, (yytype_uint8 const)16,
    (yytype_uint8 const)17, (yytype_uint8 const)18, (yytype_uint8 const)19,
    (yytype_uint8 const)20, (yytype_uint8 const)21, (yytype_uint8 const)22,
    (yytype_uint8 const)24, (yytype_uint8 const)32, (yytype_uint8 const)33,
    (yytype_uint8 const)34, (yytype_uint8 const)35, (yytype_uint8 const)36,
    (yytype_uint8 const)39, (yytype_uint8 const)40, (yytype_uint8 const)41,
    (yytype_uint8 const)42, (yytype_uint8 const)43, (yytype_uint8 const)44,
    (yytype_uint8 const)45, (yytype_uint8 const)46, (yytype_uint8 const)47,
    (yytype_uint8 const)51, (yytype_uint8 const)52, (yytype_uint8 const)26,
    (yytype_uint8 const)4,  (yytype_uint8 const)19, (yytype_uint8 const)20,
    (yytype_uint8 const)5,  (yytype_uint8 const)6,  (yytype_uint8 const)7,
    (yytype_uint8 const)8,  (yytype_uint8 const)9,  (yytype_uint8 const)10,
    (yytype_uint8 const)12, (yytype_uint8 const)4,  (yytype_uint8 const)19,
    (yytype_uint8 const)46, (yytype_uint8 const)5,  (yytype_uint8 const)6,
    (yytype_uint8 const)7,  (yytype_uint8 const)8,  (yytype_uint8 const)9,
    (yytype_uint8 const)10, (yytype_uint8 const)5,  (yytype_uint8 const)6,
    (yytype_uint8 const)7,  (yytype_uint8 const)8,  (yytype_uint8 const)9,
    (yytype_uint8 const)10, (yytype_uint8 const)12, (yytype_uint8 const)15,
    (yytype_uint8 const)16, (yytype_uint8 const)19, (yytype_uint8 const)25,
    (yytype_uint8 const)27, (yytype_uint8 const)38, (yytype_uint8 const)46,
    (yytype_uint8 const)9,  (yytype_uint8 const)9,  (yytype_uint8 const)46,
    (yytype_uint8 const)24, (yytype_uint8 const)3,  (yytype_uint8 const)19,
    (yytype_uint8 const)26, (yytype_uint8 const)25, (yytype_uint8 const)53,
    (yytype_uint8 const)19, (yytype_uint8 const)20, (yytype_uint8 const)19,
    (yytype_uint8 const)53, (yytype_uint8 const)20, (yytype_uint8 const)20,
    (yytype_uint8 const)20, (yytype_uint8 const)36, (yytype_uint8 const)20,
    (yytype_uint8 const)20, (yytype_uint8 const)15, (yytype_uint8 const)19,
    (yytype_uint8 const)25, (yytype_uint8 const)37, (yytype_uint8 const)38,
    (yytype_uint8 const)27, (yytype_uint8 const)25, (yytype_uint8 const)50,
    (yytype_uint8 const)20, (yytype_uint8 const)20, (yytype_uint8 const)15,
    (yytype_uint8 const)37, (yytype_uint8 const)25, (yytype_uint8 const)50};
static void yydestruct(char const *yymsg, int yytype, YYSTYPE *yyvaluep,
                       parser_control *pc) {}
int yyparse(parser_control *pc);
int yyparse(parser_control *pc) {
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
  int yystate;
  int yyerrstatus;
  yytype_int16 yyssa[20];
  yytype_int16 *yyss;
  yytype_int16 *yyssp;
  YYSTYPE yyvsa[20];
  YYSTYPE *yyvs;
  YYSTYPE *yyvsp;
  unsigned long yystacksize;
  int yyn;
  int yyresult;
  int yytoken;
  YYSTYPE yyval;
  int yylen;
  unsigned long yysize;
  yytype_int16 *yyss1;
  union yyalloc *yyptr;
  union yyalloc *tmp;
  unsigned long yynewbytes;
  unsigned long yynewbytes___0;
  long tmp___0;
  relative_time __constr_expr_13;
  relative_time __constr_expr_14;
  relative_time __constr_expr_15;
  relative_time __constr_expr_16;
  relative_time __constr_expr_17;
  relative_time __constr_expr_18;
  relative_time __constr_expr_19;
  relative_time __constr_expr_20;
  relative_time __constr_expr_21;
  relative_time __constr_expr_22;
  relative_time __constr_expr_23;
  relative_time __constr_expr_24;
  relative_time __constr_expr_25;
  relative_time __constr_expr_26;
  relative_time __constr_expr_27;
  relative_time __constr_expr_28;
  relative_time __constr_expr_29;
  relative_time __constr_expr_30;
  relative_time __constr_expr_31;
  relative_time __constr_expr_32;
  relative_time __constr_expr_33;
  relative_time __constr_expr_34;
  relative_time __constr_expr_35;
  relative_time __constr_expr_36;
  relative_time __constr_expr_37;
  relative_time __constr_expr_38;
  relative_time __constr_expr_39;

  {
    yylen = 0;
    yytoken = 0;
    yyss = yyssa;
    yyvs = yyvsa;
    yystacksize = 20UL;
    yystate = 0;
    yyerrstatus = 0;
    yynerrs = 0;
    yychar = -2;
    yyssp = yyss;
    yyvsp = yyvs;
    goto yysetstate;
  yynewstate:
    yyssp++;
  yysetstate:
    *yyssp = (yytype_int16)yystate;
    if ((unsigned long)((yyss + yystacksize) - 1) <= (unsigned long)yyssp) {
      yysize = (unsigned long)((yyssp - yyss) + 1L);
      if (20UL <= yystacksize) {
        goto yyexhaustedlab;
      }
      yystacksize *= 2UL;
      if (20UL < yystacksize) {
        yystacksize = 20UL;
      }
      yyss1 = yyss;
      tmp = (union yyalloc *)malloc(
          yystacksize * (sizeof(yytype_int16) + sizeof(YYSTYPE)) +
          (sizeof(union yyalloc) - 1UL));
      yyptr = tmp;
      if (!yyptr) {
        goto yyexhaustedlab;
      }
      while (1) {
        __builtin_memcpy((void *)(&yyptr->yyss_alloc), (void const *)yyss,
                         yysize * sizeof(*yyss));
        yyss = &yyptr->yyss_alloc;
        yynewbytes =
            yystacksize * sizeof(*yyss) + (sizeof(union yyalloc) - 1UL);
        yyptr += yynewbytes / sizeof(*yyptr);
        goto while_break;
      }
    while_break:;
      while (1) {
        __builtin_memcpy((void *)(&yyptr->yyvs_alloc), (void const *)yyvs,
                         yysize * sizeof(*yyvs));
        yyvs = &yyptr->yyvs_alloc;
        yynewbytes___0 =
            yystacksize * sizeof(*yyvs) + (sizeof(union yyalloc) - 1UL);
        yyptr += yynewbytes___0 / sizeof(*yyptr);
        goto while_break___0;
      }
    while_break___0:;
      if ((unsigned long)yyss1 != (unsigned long)(yyssa)) {
        free((void *)yyss1);
      }
      yyssp = (yyss + yysize) - 1;
      yyvsp = (yyvs + yysize) - 1;
      if ((unsigned long)((yyss + yystacksize) - 1) <= (unsigned long)yyssp) {
        goto yyabortlab;
      }
    }
    if (yystate == 12) {
      goto yyacceptlab;
    }
    goto yybackup;
  yybackup:
    yyn = (int)yypact[yystate];
    if (yyn == -93) {
      goto yydefault;
    }
    if (yychar == -2) {
      yychar = yylex(&yylval, pc);
    }
    if (yychar <= 0) {
      yytoken = 0;
      yychar = yytoken;
    } else {
      if ((unsigned int)yychar <= 277U) {
        yytoken = (int)yytranslate[yychar];
      } else {
        yytoken = 2;
      }
    }
    yyn += yytoken;
    if (yyn < 0) {
      goto yydefault;
    } else {
      if (112 < yyn) {
        goto yydefault;
      } else {
        if ((int const)yycheck[yyn] != (int const)yytoken) {
          goto yydefault;
        }
      }
    }
    yyn = (int)yytable[yyn];
    if (yyn <= 0) {
      if (yyn == 0) {
        goto yyerrlab;
      } else {
        if (yyn == -1) {
          goto yyerrlab;
        }
      }
      yyn = -yyn;
      goto yyreduce;
    }
    if (yyerrstatus) {
      yyerrstatus--;
    }
    yychar = -2;
    yystate = yyn;
    yyvsp++;
    *yyvsp = yylval;
    goto yynewstate;
  yydefault:
    yyn = (int)yydefact[yystate];
    if (yyn == 0) {
      goto yyerrlab;
    }
    goto yyreduce;
  yyreduce:
    yylen = (int)yyr2[yyn];
    yyval = *(yyvsp + (1 - yylen));
    if (yyn == 4) {
      goto case_4;
    }
    if (yyn == 7) {
      goto case_7;
    }
    if (yyn == 8) {
      goto case_8;
    }
    if (yyn == 9) {
      goto case_9;
    }
    if (yyn == 10) {
      goto case_10;
    }
    if (yyn == 11) {
      goto case_11;
    }
    if (yyn == 12) {
      goto case_12;
    }
    if (yyn == 18) {
      goto case_18;
    }
    if (yyn == 19) {
      goto case_19;
    }
    if (yyn == 20) {
      goto case_20;
    }
    if (yyn == 22) {
      goto case_22;
    }
    if (yyn == 23) {
      goto case_23;
    }
    if (yyn == 24) {
      goto case_24;
    }
    if (yyn == 27) {
      goto case_27;
    }
    if (yyn == 28) {
      goto case_28;
    }
    if (yyn == 29) {
      goto case_29;
    }
    if (yyn == 30) {
      goto case_30;
    }
    if (yyn == 31) {
      goto case_31;
    }
    if (yyn == 32) {
      goto case_32;
    }
    if (yyn == 33) {
      goto case_33;
    }
    if (yyn == 34) {
      goto case_34;
    }
    if (yyn == 35) {
      goto case_35;
    }
    if (yyn == 36) {
      goto case_36;
    }
    if (yyn == 37) {
      goto case_37;
    }
    if (yyn == 38) {
      goto case_38;
    }
    if (yyn == 39) {
      goto case_39;
    }
    if (yyn == 40) {
      goto case_40;
    }
    if (yyn == 41) {
      goto case_41;
    }
    if (yyn == 42) {
      goto case_42;
    }
    if (yyn == 43) {
      goto case_43;
    }
    if (yyn == 44) {
      goto case_44;
    }
    if (yyn == 45) {
      goto case_45;
    }
    if (yyn == 46) {
      goto case_46;
    }
    if (yyn == 47) {
      goto case_47;
    }
    if (yyn == 48) {
      goto case_48;
    }
    if (yyn == 50) {
      goto case_50;
    }
    if (yyn == 51) {
      goto case_51;
    }
    if (yyn == 52) {
      goto case_52;
    }
    if (yyn == 53) {
      goto case_53;
    }
    if (yyn == 54) {
      goto case_54;
    }
    if (yyn == 55) {
      goto case_55;
    }
    if (yyn == 56) {
      goto case_56;
    }
    if (yyn == 57) {
      goto case_57;
    }
    if (yyn == 58) {
      goto case_58;
    }
    if (yyn == 59) {
      goto case_59;
    }
    if (yyn == 60) {
      goto case_60;
    }
    if (yyn == 61) {
      goto case_61;
    }
    if (yyn == 62) {
      goto case_62;
    }
    if (yyn == 63) {
      goto case_63;
    }
    if (yyn == 64) {
      goto case_64;
    }
    if (yyn == 65) {
      goto case_65;
    }
    if (yyn == 66) {
      goto case_66;
    }
    if (yyn == 67) {
      goto case_67;
    }
    if (yyn == 68) {
      goto case_68;
    }
    if (yyn == 69) {
      goto case_69;
    }
    if (yyn == 70) {
      goto case_70;
    }
    if (yyn == 71) {
      goto case_71;
    }
    if (yyn == 72) {
      goto case_72;
    }
    if (yyn == 73) {
      goto case_73;
    }
    if (yyn == 75) {
      goto case_75;
    }
    if (yyn == 76) {
      goto case_76;
    }
    if (yyn == 77) {
      goto case_77;
    }
    if (yyn == 78) {
      goto case_78;
    }
    if (yyn == 79) {
      goto case_79;
    }
    if (yyn == 80) {
      goto case_80;
    }
    if (yyn == 81) {
      goto case_81;
    }
    if (yyn == 85) {
      goto case_85;
    }
    if (yyn == 87) {
      goto case_87;
    }
    if (yyn == 88) {
      goto case_88;
    }
    if (yyn == 89) {
      goto case_89;
    }
    if (yyn == 90) {
      goto case_90;
    }
    if (yyn == 91) {
      goto case_91;
    }
    goto switch_default;
  case_4:
    pc->seconds = (yyvsp + 0)->timespec;
    pc->timespec_seen = (_Bool)1;
    goto switch_break;
  case_7:
    (pc->times_seen)++;
    (pc->dates_seen)++;
    goto switch_break;
  case_8:
    (pc->times_seen)++;
    goto switch_break;
  case_9:
    (pc->local_zones_seen)++;
    goto switch_break;
  case_10:
    (pc->zones_seen)++;
    goto switch_break;
  case_11:
    (pc->dates_seen)++;
    goto switch_break;
  case_12:
    (pc->days_seen)++;
    goto switch_break;
  case_18:
    set_hhmmss(pc, (yyvsp + -1)->textintval.value, 0L, (time_t)0, 0L);
    pc->meridian = (int)(yyvsp + 0)->intval;
    goto switch_break;
  case_19:
    set_hhmmss(pc, (yyvsp + -3)->textintval.value,
               (yyvsp + -1)->textintval.value, (time_t)0, 0L);
    pc->meridian = (int)(yyvsp + 0)->intval;
    goto switch_break;
  case_20:
    set_hhmmss(pc, (yyvsp + -5)->textintval.value,
               (yyvsp + -3)->textintval.value, (yyvsp + -1)->timespec.tv_sec,
               (yyvsp + -1)->timespec.tv_nsec);
    pc->meridian = (int)(yyvsp + 0)->intval;
    goto switch_break;
  case_22:
    set_hhmmss(pc, (yyvsp + -1)->textintval.value, 0L, (time_t)0, 0L);
    pc->meridian = 2;
    goto switch_break;
  case_23:
    set_hhmmss(pc, (yyvsp + -3)->textintval.value,
               (yyvsp + -1)->textintval.value, (time_t)0, 0L);
    pc->meridian = 2;
    goto switch_break;
  case_24:
    set_hhmmss(pc, (yyvsp + -5)->textintval.value,
               (yyvsp + -3)->textintval.value, (yyvsp + -1)->timespec.tv_sec,
               (yyvsp + -1)->timespec.tv_nsec);
    pc->meridian = 2;
    goto switch_break;
  case_27:
    (pc->zones_seen)++;
    pc->time_zone =
        time_zone_hhmm(pc, (yyvsp + -1)->textintval, (yyvsp + 0)->intval);
    goto switch_break;
  case_28:
    pc->local_isdst = (int)(yyvsp + 0)->intval;
    pc->dsts_seen += (size_t)(0L < (yyvsp + 0)->intval);
    goto switch_break;
  case_29:
    pc->local_isdst = 1;
    pc->dsts_seen += (size_t)((0L < (yyvsp + -1)->intval) + 1);
    goto switch_break;
  case_30:
    pc->time_zone = (yyvsp + 0)->intval;
    goto switch_break;
  case_31:
    pc->time_zone = 420L;
    goto switch_break;
  case_32:
    pc->time_zone = (yyvsp + -1)->intval;
    apply_relative_time(pc, (yyvsp + 0)->rel, 1);
    goto switch_break;
  case_33:
    pc->time_zone = 420L;
    apply_relative_time(pc, (yyvsp + 0)->rel, 1);
    goto switch_break;
  case_34:
    tmp___0 = time_zone_hhmm(pc, (yyvsp + -1)->textintval, (yyvsp + 0)->intval);
    pc->time_zone = (yyvsp + -2)->intval + tmp___0;
    goto switch_break;
  case_35:
    pc->time_zone = (yyvsp + 0)->intval + 60L;
    goto switch_break;
  case_36:
    pc->time_zone = (yyvsp + -1)->intval + 60L;
    goto switch_break;
  case_37:
    pc->day_ordinal = 0L;
    pc->day_number = (int)(yyvsp + 0)->intval;
    goto switch_break;
  case_38:
    pc->day_ordinal = 0L;
    pc->day_number = (int)(yyvsp + -1)->intval;
    goto switch_break;
  case_39:
    pc->day_ordinal = (yyvsp + -1)->intval;
    pc->day_number = (int)(yyvsp + 0)->intval;
    goto switch_break;
  case_40:
    pc->day_ordinal = (yyvsp + -1)->textintval.value;
    pc->day_number = (int)(yyvsp + 0)->intval;
    goto switch_break;
  case_41:
    pc->month = (yyvsp + -2)->textintval.value;
    pc->day = (yyvsp + 0)->textintval.value;
    goto switch_break;
  case_42:
    if (4UL <= (yyvsp + -4)->textintval.digits) {
      pc->year = (yyvsp + -4)->textintval;
      pc->month = (yyvsp + -2)->textintval.value;
      pc->day = (yyvsp + 0)->textintval.value;
    } else {
      pc->month = (yyvsp + -4)->textintval.value;
      pc->day = (yyvsp + -2)->textintval.value;
      pc->year = (yyvsp + 0)->textintval;
    }
    goto switch_break;
  case_43:
    pc->day = (yyvsp + -2)->textintval.value;
    pc->month = (yyvsp + -1)->intval;
    pc->year.value = -(yyvsp + 0)->textintval.value;
    pc->year.digits = (yyvsp + 0)->textintval.digits;
    goto switch_break;
  case_44:
    pc->month = (yyvsp + -2)->intval;
    pc->day = -(yyvsp + -1)->textintval.value;
    pc->year.value = -(yyvsp + 0)->textintval.value;
    pc->year.digits = (yyvsp + 0)->textintval.digits;
    goto switch_break;
  case_45:
    pc->month = (yyvsp + -1)->intval;
    pc->day = (yyvsp + 0)->textintval.value;
    goto switch_break;
  case_46:
    pc->month = (yyvsp + -3)->intval;
    pc->day = (yyvsp + -2)->textintval.value;
    pc->year = (yyvsp + 0)->textintval;
    goto switch_break;
  case_47:
    pc->day = (yyvsp + -1)->textintval.value;
    pc->month = (yyvsp + 0)->intval;
    goto switch_break;
  case_48:
    pc->day = (yyvsp + -2)->textintval.value;
    pc->month = (yyvsp + -1)->intval;
    pc->year = (yyvsp + 0)->textintval;
    goto switch_break;
  case_50:
    pc->year = (yyvsp + -2)->textintval;
    pc->month = -(yyvsp + -1)->textintval.value;
    pc->day = -(yyvsp + 0)->textintval.value;
    goto switch_break;
  case_51:
    apply_relative_time(pc, (yyvsp + -1)->rel, (int)(yyvsp + 0)->intval);
    goto switch_break;
  case_52:
    apply_relative_time(pc, (yyvsp + 0)->rel, 1);
    goto switch_break;
  case_53:
    apply_relative_time(pc, (yyvsp + 0)->rel, 1);
    goto switch_break;
  case_54:
    __constr_expr_13.year = 0L;
    __constr_expr_13.month = 0L;
    __constr_expr_13.day = 0L;
    __constr_expr_13.hour = 0L;
    __constr_expr_13.minutes = 0L;
    __constr_expr_13.seconds = (long_time_t)0;
    __constr_expr_13.ns = 0L;
    yyval.rel = __constr_expr_13;
    yyval.rel.year = (yyvsp + -1)->intval;
    goto switch_break;
  case_55:
    __constr_expr_14.year = 0L;
    __constr_expr_14.month = 0L;
    __constr_expr_14.day = 0L;
    __constr_expr_14.hour = 0L;
    __constr_expr_14.minutes = 0L;
    __constr_expr_14.seconds = (long_time_t)0;
    __constr_expr_14.ns = 0L;
    yyval.rel = __constr_expr_14;
    yyval.rel.year = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_56:
    __constr_expr_15.year = 0L;
    __constr_expr_15.month = 0L;
    __constr_expr_15.day = 0L;
    __constr_expr_15.hour = 0L;
    __constr_expr_15.minutes = 0L;
    __constr_expr_15.seconds = (long_time_t)0;
    __constr_expr_15.ns = 0L;
    yyval.rel = __constr_expr_15;
    yyval.rel.year = 1L;
    goto switch_break;
  case_57:
    __constr_expr_16.year = 0L;
    __constr_expr_16.month = 0L;
    __constr_expr_16.day = 0L;
    __constr_expr_16.hour = 0L;
    __constr_expr_16.minutes = 0L;
    __constr_expr_16.seconds = (long_time_t)0;
    __constr_expr_16.ns = 0L;
    yyval.rel = __constr_expr_16;
    yyval.rel.month = (yyvsp + -1)->intval;
    goto switch_break;
  case_58:
    __constr_expr_17.year = 0L;
    __constr_expr_17.month = 0L;
    __constr_expr_17.day = 0L;
    __constr_expr_17.hour = 0L;
    __constr_expr_17.minutes = 0L;
    __constr_expr_17.seconds = (long_time_t)0;
    __constr_expr_17.ns = 0L;
    yyval.rel = __constr_expr_17;
    yyval.rel.month = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_59:
    __constr_expr_18.year = 0L;
    __constr_expr_18.month = 0L;
    __constr_expr_18.day = 0L;
    __constr_expr_18.hour = 0L;
    __constr_expr_18.minutes = 0L;
    __constr_expr_18.seconds = (long_time_t)0;
    __constr_expr_18.ns = 0L;
    yyval.rel = __constr_expr_18;
    yyval.rel.month = 1L;
    goto switch_break;
  case_60:
    __constr_expr_19.year = 0L;
    __constr_expr_19.month = 0L;
    __constr_expr_19.day = 0L;
    __constr_expr_19.hour = 0L;
    __constr_expr_19.minutes = 0L;
    __constr_expr_19.seconds = (long_time_t)0;
    __constr_expr_19.ns = 0L;
    yyval.rel = __constr_expr_19;
    yyval.rel.day = (yyvsp + -1)->intval * (yyvsp + 0)->intval;
    goto switch_break;
  case_61:
    __constr_expr_20.year = 0L;
    __constr_expr_20.month = 0L;
    __constr_expr_20.day = 0L;
    __constr_expr_20.hour = 0L;
    __constr_expr_20.minutes = 0L;
    __constr_expr_20.seconds = (long_time_t)0;
    __constr_expr_20.ns = 0L;
    yyval.rel = __constr_expr_20;
    yyval.rel.day = (yyvsp + -1)->textintval.value * (yyvsp + 0)->intval;
    goto switch_break;
  case_62:
    __constr_expr_21.year = 0L;
    __constr_expr_21.month = 0L;
    __constr_expr_21.day = 0L;
    __constr_expr_21.hour = 0L;
    __constr_expr_21.minutes = 0L;
    __constr_expr_21.seconds = (long_time_t)0;
    __constr_expr_21.ns = 0L;
    yyval.rel = __constr_expr_21;
    yyval.rel.day = (yyvsp + 0)->intval;
    goto switch_break;
  case_63:
    __constr_expr_22.year = 0L;
    __constr_expr_22.month = 0L;
    __constr_expr_22.day = 0L;
    __constr_expr_22.hour = 0L;
    __constr_expr_22.minutes = 0L;
    __constr_expr_22.seconds = (long_time_t)0;
    __constr_expr_22.ns = 0L;
    yyval.rel = __constr_expr_22;
    yyval.rel.hour = (yyvsp + -1)->intval;
    goto switch_break;
  case_64:
    __constr_expr_23.year = 0L;
    __constr_expr_23.month = 0L;
    __constr_expr_23.day = 0L;
    __constr_expr_23.hour = 0L;
    __constr_expr_23.minutes = 0L;
    __constr_expr_23.seconds = (long_time_t)0;
    __constr_expr_23.ns = 0L;
    yyval.rel = __constr_expr_23;
    yyval.rel.hour = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_65:
    __constr_expr_24.year = 0L;
    __constr_expr_24.month = 0L;
    __constr_expr_24.day = 0L;
    __constr_expr_24.hour = 0L;
    __constr_expr_24.minutes = 0L;
    __constr_expr_24.seconds = (long_time_t)0;
    __constr_expr_24.ns = 0L;
    yyval.rel = __constr_expr_24;
    yyval.rel.hour = 1L;
    goto switch_break;
  case_66:
    __constr_expr_25.year = 0L;
    __constr_expr_25.month = 0L;
    __constr_expr_25.day = 0L;
    __constr_expr_25.hour = 0L;
    __constr_expr_25.minutes = 0L;
    __constr_expr_25.seconds = (long_time_t)0;
    __constr_expr_25.ns = 0L;
    yyval.rel = __constr_expr_25;
    yyval.rel.minutes = (yyvsp + -1)->intval;
    goto switch_break;
  case_67:
    __constr_expr_26.year = 0L;
    __constr_expr_26.month = 0L;
    __constr_expr_26.day = 0L;
    __constr_expr_26.hour = 0L;
    __constr_expr_26.minutes = 0L;
    __constr_expr_26.seconds = (long_time_t)0;
    __constr_expr_26.ns = 0L;
    yyval.rel = __constr_expr_26;
    yyval.rel.minutes = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_68:
    __constr_expr_27.year = 0L;
    __constr_expr_27.month = 0L;
    __constr_expr_27.day = 0L;
    __constr_expr_27.hour = 0L;
    __constr_expr_27.minutes = 0L;
    __constr_expr_27.seconds = (long_time_t)0;
    __constr_expr_27.ns = 0L;
    yyval.rel = __constr_expr_27;
    yyval.rel.minutes = 1L;
    goto switch_break;
  case_69:
    __constr_expr_28.year = 0L;
    __constr_expr_28.month = 0L;
    __constr_expr_28.day = 0L;
    __constr_expr_28.hour = 0L;
    __constr_expr_28.minutes = 0L;
    __constr_expr_28.seconds = (long_time_t)0;
    __constr_expr_28.ns = 0L;
    yyval.rel = __constr_expr_28;
    yyval.rel.seconds = (yyvsp + -1)->intval;
    goto switch_break;
  case_70:
    __constr_expr_29.year = 0L;
    __constr_expr_29.month = 0L;
    __constr_expr_29.day = 0L;
    __constr_expr_29.hour = 0L;
    __constr_expr_29.minutes = 0L;
    __constr_expr_29.seconds = (long_time_t)0;
    __constr_expr_29.ns = 0L;
    yyval.rel = __constr_expr_29;
    yyval.rel.seconds = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_71:
    __constr_expr_30.year = 0L;
    __constr_expr_30.month = 0L;
    __constr_expr_30.day = 0L;
    __constr_expr_30.hour = 0L;
    __constr_expr_30.minutes = 0L;
    __constr_expr_30.seconds = (long_time_t)0;
    __constr_expr_30.ns = 0L;
    yyval.rel = __constr_expr_30;
    yyval.rel.seconds = (yyvsp + -1)->timespec.tv_sec;
    yyval.rel.ns = (yyvsp + -1)->timespec.tv_nsec;
    goto switch_break;
  case_72:
    __constr_expr_31.year = 0L;
    __constr_expr_31.month = 0L;
    __constr_expr_31.day = 0L;
    __constr_expr_31.hour = 0L;
    __constr_expr_31.minutes = 0L;
    __constr_expr_31.seconds = (long_time_t)0;
    __constr_expr_31.ns = 0L;
    yyval.rel = __constr_expr_31;
    yyval.rel.seconds = (yyvsp + -1)->timespec.tv_sec;
    yyval.rel.ns = (yyvsp + -1)->timespec.tv_nsec;
    goto switch_break;
  case_73:
    __constr_expr_32.year = 0L;
    __constr_expr_32.month = 0L;
    __constr_expr_32.day = 0L;
    __constr_expr_32.hour = 0L;
    __constr_expr_32.minutes = 0L;
    __constr_expr_32.seconds = (long_time_t)0;
    __constr_expr_32.ns = 0L;
    yyval.rel = __constr_expr_32;
    yyval.rel.seconds = (long_time_t)1;
    goto switch_break;
  case_75:
    __constr_expr_33.year = 0L;
    __constr_expr_33.month = 0L;
    __constr_expr_33.day = 0L;
    __constr_expr_33.hour = 0L;
    __constr_expr_33.minutes = 0L;
    __constr_expr_33.seconds = (long_time_t)0;
    __constr_expr_33.ns = 0L;
    yyval.rel = __constr_expr_33;
    yyval.rel.year = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_76:
    __constr_expr_34.year = 0L;
    __constr_expr_34.month = 0L;
    __constr_expr_34.day = 0L;
    __constr_expr_34.hour = 0L;
    __constr_expr_34.minutes = 0L;
    __constr_expr_34.seconds = (long_time_t)0;
    __constr_expr_34.ns = 0L;
    yyval.rel = __constr_expr_34;
    yyval.rel.month = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_77:
    __constr_expr_35.year = 0L;
    __constr_expr_35.month = 0L;
    __constr_expr_35.day = 0L;
    __constr_expr_35.hour = 0L;
    __constr_expr_35.minutes = 0L;
    __constr_expr_35.seconds = (long_time_t)0;
    __constr_expr_35.ns = 0L;
    yyval.rel = __constr_expr_35;
    yyval.rel.day = (yyvsp + -1)->textintval.value * (yyvsp + 0)->intval;
    goto switch_break;
  case_78:
    __constr_expr_36.year = 0L;
    __constr_expr_36.month = 0L;
    __constr_expr_36.day = 0L;
    __constr_expr_36.hour = 0L;
    __constr_expr_36.minutes = 0L;
    __constr_expr_36.seconds = (long_time_t)0;
    __constr_expr_36.ns = 0L;
    yyval.rel = __constr_expr_36;
    yyval.rel.hour = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_79:
    __constr_expr_37.year = 0L;
    __constr_expr_37.month = 0L;
    __constr_expr_37.day = 0L;
    __constr_expr_37.hour = 0L;
    __constr_expr_37.minutes = 0L;
    __constr_expr_37.seconds = (long_time_t)0;
    __constr_expr_37.ns = 0L;
    yyval.rel = __constr_expr_37;
    yyval.rel.minutes = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_80:
    __constr_expr_38.year = 0L;
    __constr_expr_38.month = 0L;
    __constr_expr_38.day = 0L;
    __constr_expr_38.hour = 0L;
    __constr_expr_38.minutes = 0L;
    __constr_expr_38.seconds = (long_time_t)0;
    __constr_expr_38.ns = 0L;
    yyval.rel = __constr_expr_38;
    yyval.rel.seconds = (yyvsp + -1)->textintval.value;
    goto switch_break;
  case_81:
    __constr_expr_39.year = 0L;
    __constr_expr_39.month = 0L;
    __constr_expr_39.day = 0L;
    __constr_expr_39.hour = 0L;
    __constr_expr_39.minutes = 0L;
    __constr_expr_39.seconds = (long_time_t)0;
    __constr_expr_39.ns = 0L;
    yyval.rel = __constr_expr_39;
    yyval.rel.day = (yyvsp + 0)->intval;
    goto switch_break;
  case_85:
    yyval.timespec.tv_sec = (yyvsp + 0)->textintval.value;
    yyval.timespec.tv_nsec = (__syscall_slong_t)0;
    goto switch_break;
  case_87:
    yyval.timespec.tv_sec = (yyvsp + 0)->textintval.value;
    yyval.timespec.tv_nsec = (__syscall_slong_t)0;
    goto switch_break;
  case_88:
    digits_to_date_time(pc, (yyvsp + 0)->textintval);
    goto switch_break;
  case_89:
    digits_to_date_time(pc, (yyvsp + -1)->textintval);
    apply_relative_time(pc, (yyvsp + 0)->rel, 1);
    goto switch_break;
  case_90:
    yyval.intval = -1L;
    goto switch_break;
  case_91:
    yyval.intval = (yyvsp + 0)->textintval.value;
    goto switch_break;
  switch_default:
    goto switch_break;
  switch_break:
    yyvsp -= yylen;
    yyssp -= yylen;
    yylen = 0;
    yyvsp++;
    *yyvsp = yyval;
    yyn = (int)yyr1[yyn];
    yystate = (int)((int const)yypgoto[yyn - 28] + (int const) * yyssp);
    if (0 <= yystate) {
      if (yystate <= 112) {
        if ((int const)yycheck[yystate] == (int const) * yyssp) {
          yystate = (int)yytable[yystate];
        } else {
          yystate = (int)yydefgoto[yyn - 28];
        }
      } else {
        yystate = (int)yydefgoto[yyn - 28];
      }
    } else {
      yystate = (int)yydefgoto[yyn - 28];
    }
    goto yynewstate;
  yyerrlab:
    if (!yyerrstatus) {
      yynerrs++;
      yyerror((parser_control const *)pc, "syntax error");
    }
    if (yyerrstatus == 3) {
      if (yychar <= 0) {
        if (yychar == 0) {
          goto yyabortlab;
        }
      } else {
        yydestruct("Error: discarding", yytoken, &yylval, pc);
        yychar = -2;
      }
    }
    goto yyerrlab1;
    yyvsp -= yylen;
    yyssp -= yylen;
    yylen = 0;
    yystate = (int)*yyssp;
    goto yyerrlab1;
  yyerrlab1:
    yyerrstatus = 3;
    while (1) {
      yyn = (int)yypact[yystate];
      if (yyn != -93) {
        yyn++;
        if (0 <= yyn) {
          if (yyn <= 112) {
            if ((int const)yycheck[yyn] == 1) {
              yyn = (int)yytable[yyn];
              if (0 < yyn) {
                goto while_break___1;
              }
            }
          }
        }
      }
      if ((unsigned long)yyssp == (unsigned long)yyss) {
        goto yyabortlab;
      }
      yydestruct("Error: popping", (int)yystos[yystate], yyvsp, pc);
      yyvsp--;
      yyssp--;
      yystate = (int)*yyssp;
    }
  while_break___1:
    yyvsp++;
    *yyvsp = yylval;
    yystate = yyn;
    goto yynewstate;
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;
  yyabortlab:
    yyresult = 1;
    goto yyreturn;
  yyexhaustedlab:
    yyerror((parser_control const *)pc, "memory exhausted");
    yyresult = 2;
  yyreturn:
    if (yychar != -2) {
      yydestruct("Cleanup: discarding lookahead", yytoken, &yylval, pc);
    }
    yyvsp -= yylen;
    yyssp -= yylen;
    while (1) {

      if (!((unsigned long)yyssp != (unsigned long)yyss)) {
        goto while_break___2;
      }
      yydestruct("Cleanup: popping", (int)yystos[*yyssp], yyvsp, pc);
      yyvsp--;
      yyssp--;
    }
  while_break___2:;
    if ((unsigned long)yyss != (unsigned long)(yyssa)) {
      free((void *)yyss);
    }
    return (yyresult);
  }
}
static table const meridian_table[5] = {{"AM", 270, 0},
                                        {"A.M.", 270, 0},
                                        {"PM", 270, 1},
                                        {"P.M.", 270, 1},
                                        {(char const *)((void *)0), 0, 0}};

static table const month_and_day_table[25] = {
    {"JANUARY", 271, 1},
    {"FEBRUARY", 271, 2},
    {"MARCH", 271, 3},
    {"APRIL", 271, 4},
    {"MAY", 271, 5},
    {"JUNE", 271, 6},
    {"JULY", 271, 7},
    {"AUGUST", 271, 8},
    {"SEPTEMBER", 271, 9},
    {"SEPT", 271, 9},
    {"OCTOBER", 271, 10},
    {"NOVEMBER", 271, 11},
    {"DECEMBER", 271, 12},
    {"SUNDAY", 267, 0},
    {"MONDAY", 267, 1},
    {"TUESDAY", 267, 2},
    {"TUES", 267, 2},
    {"WEDNESDAY", 267, 3},
    {"WEDNES", 267, 3},
    {"THURSDAY", 267, 4},
    {"THUR", 267, 4},
    {"THURS", 267, 4},
    {"FRIDAY", 267, 5},
    {"SATURDAY", 267, 6},
    {(char const *)((void *)0), 0, 0}};
static table const time_units_table[11] = {{"YEAR", 260, 1},
                                           {"MONTH", 261, 1},
                                           {"FORTNIGHT", 265, 14},
                                           {"WEEK", 265, 7},
                                           {"DAY", 265, 1},
                                           {"HOUR", 262, 1},
                                           {"MINUTE", 263, 1},
                                           {"MIN", 263, 1},
                                           {"SECOND", 264, 1},
                                           {"SEC", 264, 1},
                                           {(char const *)((void *)0), 0, 0}};
static table const relative_time_table[21] = {
    {"TOMORROW", 266, 1},
    {"YESTERDAY", 266, -1},
    {"TODAY", 266, 0},
    {"NOW", 266, 0},
    {"LAST", 272, -1},
    {"THIS", 272, 0},
    {"NEXT", 272, 1},
    {"FIRST", 272, 1},
    {"THIRD", 272, 3},
    {"FOURTH", 272, 4},
    {"FIFTH", 272, 5},
    {"SIXTH", 272, 6},
    {"SEVENTH", 272, 7},
    {"EIGHTH", 272, 8},
    {"NINTH", 272, 9},
    {"TENTH", 272, 10},
    {"ELEVENTH", 272, 11},
    {"TWELFTH", 272, 12},
    {"AGO", 258, -1},
    {"HENCE", 258, 1},
    {(char const *)((void *)0), 0, 0}};

static long time_zone_hhmm(parser_control *pc, textint s, long mm) {
  long n_minutes;

  {

    { n_minutes = (s.value / 100L) * 60L + s.value % 100L; }

    return (n_minutes);
  }
}
static int to_hour(long hours, int meridian) {
  long tmp;

  {

    { tmp = hours; }

    return ((int)tmp);
  }
}
static long to_year(textint textyear) {
  long year___1;
  int tmp;

  {
    year___1 = textyear.value;

    {
      if (textyear.digits == 2UL) {
        {
          tmp = 2000;
        }

        year___1 += (long)tmp;
      }
    }
    return (year___1);
  }
}
static table const *__attribute__((__pure__))
lookup_zone(parser_control const *pc, char const *name) {
  table const *tp;

  int tmp___0;

  {

    tp = (table const *)(pc->local_time_zone_table);
    {

      tmp___0 = strcmp(name, (char const *)tp->name);
      if (tmp___0 == 0) {
        return (tp);
      }
    }

    return ((table const *)((void *)0));
  }
}
static table const *lookup_word(parser_control const *pc, char *word___0) {
  char *p;

  size_t wordlen;
  table const *tp;

  _Bool abbrev;
  unsigned char ch;

  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;

  int tmp___5;
  int tmp___6;
  int tmp___7;

  {
    p = word___0;
    while (1) {

      if (!*p) {
        goto while_break;
      }
      ch = (unsigned char)*p;
      *p = (char)c_toupper((int)ch);
      p++;
    }
  while_break:
    tp = meridian_table;

    wordlen = strlen((char const *)word___0);
    if (wordlen == 3UL) {
      tmp___0 = 1;
    } else {

      tmp___0 = 0;
    }
    abbrev = (_Bool)tmp___0;
    tp = month_and_day_table;
    while (1) {

      if (!tp->name) {
        goto while_break___1;
      }
      if (abbrev) {
        tmp___1 =
            strncmp((char const *)word___0, (char const *)tp->name, (size_t)3);
        tmp___3 = tmp___1;
      } else {
        tmp___2 = strcmp((char const *)word___0, (char const *)tp->name);
        tmp___3 = tmp___2;
      }
      if (tmp___3 == 0) {
        return (tp);
      }
      tp++;
    }
  while_break___1:
    tp = (table const *)lookup_zone(pc, (char const *)word___0);
    if (tp) {
      return (tp);
    }

    tp = time_units_table;
    while (1) {

      if (!tp->name) {
        goto while_break___2;
      }
      tmp___5 = strcmp((char const *)word___0, (char const *)tp->name);
      if (tmp___5 == 0) {
        return (tp);
      }
      tp++;
    }
  while_break___2:;
    if ((int)*(word___0 + (wordlen - 1UL)) == 83) {
      *(word___0 + (wordlen - 1UL)) = (char)'\000';
      tp = time_units_table;
      while (1) {

        if (!tp->name) {
          goto while_break___3;
        }
        tmp___6 = strcmp((char const *)word___0, (char const *)tp->name);
        if (tmp___6 == 0) {
          return (tp);
        }
        tp++;
      }
    while_break___3:
      *(word___0 + (wordlen - 1UL)) = (char)'S';
    }
    tp = relative_time_table;
    while (1) {

      tmp___7 = strcmp((char const *)word___0, (char const *)tp->name);
      if (tmp___7 == 0) {
        return (tp);
      }
      tp++;
    };
  }
}
static int yylex(union YYSTYPE *lvalp, parser_control *pc) {
  unsigned char c;

  _Bool tmp;
  char const *p;
  int sign;
  unsigned long value;

  unsigned long value1;
  time_t s;
  int ns;
  int digits;

  char const *tmp___1;
  char const *tmp___2;
  int tmp___3;
  int tmp___4;
  char buff[20];
  char *p___0;
  table const *tp;
  char *tmp___5;
  _Bool tmp___6;
  _Bool tmp___7;
  char const *tmp___8;
  int tmp___9;

  {

    while (1) {
      c = (unsigned char)*(pc->input);
      tmp = c_isspace((int)c);
      if (!tmp) {
        goto while_break___0;
      }
      (pc->input)++;
    }
  while_break___0:;
    if ((unsigned int)c - 48U <= 9U) {
      goto _L___2;
    } else {
      if ((int)c == 45) {
        goto _L___2;
      } else {
        if ((int)c == 43) {
        _L___2:
          if ((int)c == 45) {
            goto _L;
          } else {
            if ((int)c == 43) {
            _L:
              if ((int)c == 45) {
                sign = -1;
              } else {
                sign = 1;
              }
              {

                (pc->input)++;
                c = (unsigned char)*(pc->input);
              };

            } else {
              sign = 0;
            }
          }
          p = pc->input;
          value = 0UL;
          while (1) {
            value1 = value + (unsigned long)((int)c - 48);

            value = value1;
            p++;
            c = (unsigned char)*p;
            if (!((unsigned int)c - 48U <= 9U)) {
              goto while_break___2;
            }

            value *= 10UL;
          }
        while_break___2:;
          if ((int)c == 46) {
            goto _L___1;
          } else {
            if ((int)c == 44) {
            _L___1 : {

              { s = (time_t)value; }

              p++;
              tmp___1 = p;
              p++;
              ns = (int)((int const) * tmp___1 - 48);
              digits = 2;
              while (1) {

                if (!(digits <= 9)) {
                  goto while_break___3;
                }
                ns *= 10;
                if ((unsigned int)*p - 48U <= 9U) {
                  tmp___2 = p;
                  p++;
                  ns += (int)((int const) * tmp___2 - 48);
                }
                digits++;
              }
            while_break___3:;

              lvalp->timespec.tv_sec = s;
              lvalp->timespec.tv_nsec = (__syscall_slong_t)ns;
              pc->input = p;

              { tmp___3 = 277; }
              return (tmp___3);
            }

            } else {

              if (sign < 0) {
                lvalp->textintval.value = (long)(-value);

              } else {
                lvalp->textintval.value = (long)value;
              }
              lvalp->textintval.digits = (size_t)(p - pc->input);
              pc->input = p;
              if (sign) {
                tmp___4 = 274;
              } else {
                tmp___4 = 275;
              }
              return (tmp___4);
            }
          }
        }
      }
    }
    tmp___7 = c_isalpha((int)c);
    if (tmp___7) {
      p___0 = buff;
      while (1) {

        {
          tmp___5 = p___0;
          p___0++;
          *tmp___5 = (char)c;
        }
        (pc->input)++;
        c = (unsigned char)*(pc->input);
        tmp___6 = c_isalpha((int)c);
        if (!tmp___6) {

          goto while_break___6;
        }
      }
    while_break___6:
      *p___0 = (char)'\000';
      tp = lookup_word((parser_control const *)pc, buff);

      lvalp->intval = (long)tp->value;
      return ((int)tp->type);
    }
    {
      tmp___8 = pc->input;
      (pc->input)++;
      tmp___9 = (int)to_uchar___0((char)*tmp___8);
      return (tmp___9);
    }

    ;
  }
}
static int yyerror(parser_control const *pc __attribute__((__unused__)),
                   char const *s __attribute__((__unused__))) {

  return (0);
}
static _Bool mktime_ok(struct tm const *tm0, struct tm const *tm1, time_t t) {

  return (
      (_Bool)(!((((((tm0->tm_sec ^ tm1->tm_sec) | (tm0->tm_min ^ tm1->tm_min)) |
                   (tm0->tm_hour ^ tm1->tm_hour)) |
                  (tm0->tm_mday ^ tm1->tm_mday)) |
                 (tm0->tm_mon ^ tm1->tm_mon)) |
                (tm0->tm_year ^ tm1->tm_year))));
}
static char *get_tz(char *tzbuf) {
  char *tz;
  char *tmp;

  {
    tmp = getenv("TZ");
    tz = tmp;

    return (tz);
  }
}
_Bool parse_datetime(struct timespec *result, char const *p,
                     struct timespec const *now) {
  time_t Start;
  long Start_ns;
  struct tm const *tmp;
  struct tm tm;
  struct tm tm0;
  parser_control pc;
  struct timespec gettime_buffer;
  unsigned char c;
  _Bool tz_was_altered;
  char *tz0;
  char tz0buf[100];
  _Bool ok;
  _Bool tmp___0;
  char const *tzbase;
  size_t tzsize;
  char const *s;
  char *z;
  char *tz1;
  char tz1buf[100];
  _Bool large_tz;
  _Bool setenv_ok;
  void *tmp___1;
  char *tmp___2;
  int tmp___3;
  int tmp___4;
  relative_time __constr_expr_40;
  int quarter;
  time_t probe;
  struct tm const *probe_tm;
  struct tm const *tmp___5;
  int tmp___6;
  int tmp___7;
  long tmp___8;
  long time_zone;
  long abs_time_zone;
  long tmp___9;
  long abs_time_zone_hour;
  int abs_time_zone_min;
  char tz1buf___0[sizeof("XXX+0:00") + (sizeof(pc.time_zone) * 8UL) / 3UL];
  int tmp___10;
  _Bool tmp___11;
  _Bool tmp___12;
  int tmp___13;
  int year___1;
  int month;
  int day;
  long delta;
  time_t t1;
  long sum_ns;
  long normalized_ns;
  time_t t0;
  long d1;
  time_t t1___0;
  long d2;
  time_t t2;
  long_time_t d3;
  long_time_t t3;
  long d4;
  long_time_t t4;
  time_t t5;
  int tmp___14;
  int tmp___15;
  int tmp___16;

  {
    tz_was_altered = (_Bool)0;
    tz0 = (char *)((void *)0);
    ok = (_Bool)1;
    if (!now) {
      gettime(&gettime_buffer);
      now = (struct timespec const *)(&gettime_buffer);
    }
    Start = (time_t)now->tv_sec;
    Start_ns = (long)now->tv_nsec;
    tmp = (struct tm const *)localtime(&now->tv_sec);
    if (!tmp) {
      return ((_Bool)0);
    }
    while (1) {
      c = (unsigned char)*p;
      tmp___0 = c_isspace((int)c);
      if (!tmp___0) {
        goto while_break;
      }
      p++;
    }
  while_break:
    tmp___4 = strncmp(p, "TZ=\"", (size_t)4);
    if (tmp___4 == 0) {
      tzbase = p + 4;
      tzsize = (size_t)1;
      s = tzbase;
      while (1) {

        if (!*s) {
          goto while_break___0;
        }
        if ((int const) * s == 92) {
          s++;
          if (!((int const) * s == 92)) {
            if (!((int const) * s == 34)) {
              goto while_break___0;
            }
          }
        } else {
          if ((int const) * s == 34) {
            large_tz = (_Bool)(100UL < tzsize);
            free((void *)tz0);
            tz0 = get_tz(tz0buf);
            if (large_tz) {
              tmp___1 = xmalloc(tzsize);
              tz1 = (char *)tmp___1;
            } else {
              tz1 = tz1buf;
            }
            z = tz1;
            s = tzbase;
            while (1) {

              if (!((int const) * s != 34)) {
                goto while_break___1;
              }
              tmp___2 = z;
              z++;
              s += (int const) * s == 92;
              *tmp___2 = (char)*s;
              s++;
            }
          while_break___1:
            *z = (char)'\000';
            tmp___3 = setenv("TZ", (char const *)tz1, 1);
            setenv_ok = (_Bool)(tmp___3 == 0);
            if (large_tz) {
              free((void *)tz1);
            }
            if (!setenv_ok) {
              goto fail;
            }
            tz_was_altered = (_Bool)1;
            p = s + 1;
          }
        }
        s++;
        tzsize++;
      }
    while_break___0:;
    }
    if ((int const) * p == 0) {
      p = "0";
    }
    pc.input = p;
    pc.year.value = (long)tmp->tm_year;
    pc.year.value += 1900L;
    pc.year.digits = (size_t)0;
    pc.month = (long)(tmp->tm_mon + 1);
    pc.day = (long)tmp->tm_mday;
    pc.hour = (long)tmp->tm_hour;
    pc.minutes = (long)tmp->tm_min;
    pc.seconds.tv_sec = (__time_t)tmp->tm_sec;
    pc.seconds.tv_nsec = Start_ns;
    tm.tm_isdst = (int)tmp->tm_isdst;
    pc.meridian = 2;
    __constr_expr_40.year = 0L;
    __constr_expr_40.month = 0L;
    __constr_expr_40.day = 0L;
    __constr_expr_40.hour = 0L;
    __constr_expr_40.minutes = 0L;
    __constr_expr_40.seconds = (long_time_t)0;
    __constr_expr_40.ns = 0L;
    pc.rel = __constr_expr_40;
    pc.timespec_seen = (_Bool)0;
    pc.rels_seen = (_Bool)0;
    pc.dates_seen = (size_t)0;
    pc.days_seen = (size_t)0;
    pc.times_seen = (size_t)0;
    pc.local_zones_seen = (size_t)0;
    pc.dsts_seen = (size_t)0;
    pc.zones_seen = (size_t)0;
    pc.local_time_zone_table[0].name = (char const *)tmp->tm_zone;
    pc.local_time_zone_table[0].type = 269;
    pc.local_time_zone_table[0].value = (int)tmp->tm_isdst;
    pc.local_time_zone_table[1].name = (char const *)((void *)0);
    quarter = 1;
    while (1) {

      if (!(quarter <= 3)) {
        goto while_break___2;
      }
      probe = Start + (time_t)(quarter * 7776000);
      tmp___5 = (struct tm const *)localtime((time_t const *)(&probe));
      probe_tm = tmp___5;
      if (probe_tm) {
        if (probe_tm->tm_zone) {
          if (probe_tm->tm_isdst !=
              (int const)pc.local_time_zone_table[0].value) {
            pc.local_time_zone_table[1].name = (char const *)probe_tm->tm_zone;
            pc.local_time_zone_table[1].type = 269;
            pc.local_time_zone_table[1].value = (int)probe_tm->tm_isdst;
            pc.local_time_zone_table[2].name = (char const *)((void *)0);
            goto while_break___2;
          }
        }
      }
      quarter++;
    }
  while_break___2:;
    if (pc.local_time_zone_table[0].name) {
      if (pc.local_time_zone_table[1].name) {
        tmp___6 = strcmp(pc.local_time_zone_table[0].name,
                         pc.local_time_zone_table[1].name);
        if (!tmp___6) {
          pc.local_time_zone_table[0].value = -1;
          pc.local_time_zone_table[1].name = (char const *)((void *)0);
        }
      }
    }
    tmp___7 = yyparse(&pc);
    if (tmp___7 != 0) {
      goto fail;
    }
    if (pc.timespec_seen) {
      *result = pc.seconds;
    } else {
      if (1UL <
          ((((pc.times_seen | pc.dates_seen) | pc.days_seen) | pc.dsts_seen) |
           (pc.local_zones_seen + pc.zones_seen))) {
        goto fail;
      }
      tmp___8 = to_year(pc.year);
      tm.tm_year = (int)(tmp___8 - 1900L);
      tm.tm_mon = (int)(pc.month - 1L);
      tm.tm_mday = (int)pc.day;
      if (pc.times_seen) {
        goto _L;
      } else {
        if (pc.rels_seen) {
          if (!pc.dates_seen) {
            if (!pc.days_seen) {
            _L:
              tm.tm_hour = to_hour(pc.hour, pc.meridian);
              if (tm.tm_hour < 0) {
                goto fail;
              }
              tm.tm_min = (int)pc.minutes;
              tm.tm_sec = (int)pc.seconds.tv_sec;
            } else {
              tm.tm_sec = 0;
              tm.tm_min = tm.tm_sec;
              tm.tm_hour = tm.tm_min;
              pc.seconds.tv_nsec = (__syscall_slong_t)0;
            }
          } else {
            tm.tm_sec = 0;
            tm.tm_min = tm.tm_sec;
            tm.tm_hour = tm.tm_min;
            pc.seconds.tv_nsec = (__syscall_slong_t)0;
          }
        } else {
          tm.tm_sec = 0;
          tm.tm_min = tm.tm_sec;
          tm.tm_hour = tm.tm_min;
          pc.seconds.tv_nsec = (__syscall_slong_t)0;
        }
      }
      if ((pc.dates_seen | pc.days_seen) | pc.times_seen) {
        tm.tm_isdst = -1;
      }
      if (pc.local_zones_seen) {
        tm.tm_isdst = pc.local_isdst;
      }
      tm0 = tm;
      Start = mktime(&tm);
      tmp___12 =
          mktime_ok((struct tm const *)(&tm0), (struct tm const *)(&tm), Start);
      if (!tmp___12) {
        if (!pc.zones_seen) {
          goto fail;
        } else {
          time_zone = pc.time_zone;
          if (time_zone < 0L) {
            tmp___9 = -time_zone;
          } else {
            tmp___9 = time_zone;
          }
          abs_time_zone = tmp___9;
          abs_time_zone_hour = abs_time_zone / 60L;
          abs_time_zone_min = (int)(abs_time_zone % 60L);
          if (!tz_was_altered) {
            tz0 = get_tz(tz0buf);
          }
          sprintf(tz1buf___0, "XXX%s%ld:%02d", "-" + (time_zone < 0L),
                  abs_time_zone_hour, abs_time_zone_min);
          tmp___10 = setenv("TZ", (char const *)(tz1buf___0), 1);
          if (tmp___10 != 0) {
            goto fail;
          }
          tz_was_altered = (_Bool)1;
          tm = tm0;
          Start = mktime(&tm);
          tmp___11 = mktime_ok((struct tm const *)(&tm0),
                               (struct tm const *)(&tm), Start);
          if (!tmp___11) {
            goto fail;
          }
        }
      }
      if (pc.days_seen) {
        if (!pc.dates_seen) {
          if (0L < pc.day_ordinal) {
            if (tm.tm_wday != pc.day_number) {
              tmp___13 = 1;
            } else {
              tmp___13 = 0;
            }
          } else {
            tmp___13 = 0;
          }
          tm.tm_mday = (int)((long)tm.tm_mday +
                             ((long)(((pc.day_number - tm.tm_wday) + 7) % 7) +
                              7L * (pc.day_ordinal - (long)tmp___13)));
          tm.tm_isdst = -1;
          Start = mktime(&tm);
          if (Start == -1L) {
            goto fail;
          }
        }
      }
      if ((pc.rel.year | pc.rel.month) | pc.rel.day) {
        year___1 = (int)((long)tm.tm_year + pc.rel.year);
        month = (int)((long)tm.tm_mon + pc.rel.month);
        day = (int)((long)tm.tm_mday + pc.rel.day);
        if ((((year___1 < tm.tm_year) ^ (pc.rel.year < 0L)) |
             ((month < tm.tm_mon) ^ (pc.rel.month < 0L))) |
            ((day < tm.tm_mday) ^ (pc.rel.day < 0L))) {
          goto fail;
        }
        tm.tm_year = year___1;
        tm.tm_mon = month;
        tm.tm_mday = day;
        tm.tm_hour = tm0.tm_hour;
        tm.tm_min = tm0.tm_min;
        tm.tm_sec = tm0.tm_sec;
        tm.tm_isdst = tm0.tm_isdst;
        Start = mktime(&tm);
        if (Start == -1L) {
          goto fail;
        }
      }
      if (pc.zones_seen) {
        delta = pc.time_zone * 60L;
        delta -= tm.tm_gmtoff;
        t1 = Start - delta;
        if ((Start < t1) != (delta < 0L)) {
          goto fail;
        }
        Start = t1;
      }
      sum_ns = pc.seconds.tv_nsec + pc.rel.ns;
      normalized_ns = (sum_ns % 1000000000L + 1000000000L) % 1000000000L;
      t0 = Start;
      d1 = 3600L * pc.rel.hour;
      t1___0 = t0 + d1;
      d2 = 60L * pc.rel.minutes;
      t2 = t1___0 + d2;
      d3 = pc.rel.seconds;
      t3 = t2 + d3;
      d4 = (sum_ns - normalized_ns) / 1000000000L;
      t4 = t3 + d4;
      t5 = t4;
      if (((((((d1 / 3600L ^ pc.rel.hour) | (d2 / 60L ^ pc.rel.minutes)) |
              (long)((t1___0 < t0) ^ (d1 < 0L))) |
             (long)((t2 < t1___0) ^ (d2 < 0L))) |
            (long)((t3 < t2) ^ (d3 < 0L))) |
           (long)((t4 < t3) ^ (d4 < 0L))) |
          (long)(t5 != t4)) {
        goto fail;
      }
      result->tv_sec = t5;
      result->tv_nsec = normalized_ns;
    }
    goto done;
  fail:
    ok = (_Bool)0;
  done:
    if (tz_was_altered) {
      if (tz0) {
        tmp___14 = setenv("TZ", (char const *)tz0, 1);
        tmp___16 = tmp___14;
      } else {
        tmp___15 = unsetenv("TZ");
        tmp___16 = tmp___15;
      }
      ok = (_Bool)((int)ok & (tmp___16 == 0));
    }
    if ((unsigned long)tz0 != (unsigned long)(tz0buf)) {
      free((void *)tz0);
    }
    return (ok);
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       exit)(int __status);
extern int optind;
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) getopt_long)(
    int ___argc, char *const *___argv, char const *__shortopts,
    struct option const *__longopts, int *__longind);
#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
extern __attribute__((__nothrow__))
FILE *(__attribute__((__leaf__)) fdopen)(int __fd, char const *__modes);
extern int fscanf(FILE *__restrict __stream, char const *__restrict __format,
                  ...);
extern int ungetc(int __c, FILE *__stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
char *(__attribute__((__warn_unused_result__)) imaxtostr)(intmax_t i,
                                                          char *buf___1);
char *(__attribute__((__warn_unused_result__)) imaxtostr)(intmax_t i,
                                                          char *buf___1) {
  char *p;

  {

    { *p = (char)'-'; }

    return (p);
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           setlocale)(int __category,
                                                      char const *__locale);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        clock_gettime)(clockid_t __clock_id,
                                                       struct timespec *__tp);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
void gettime(struct timespec *ts) {
  int tmp;

  { tmp = clock_gettime(0, ts); }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int(__attribute__((__nonnull__(1))) rpl_fseeko)(FILE *fp, off_t offset,
                                                int whence);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern __attribute__((__nothrow__))
__off_t(__attribute__((__leaf__)) lseek)(int __fd, __off_t __offset,
                                         int __whence);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int fputc(int __c, FILE *__stream);
size_t fprintftime(FILE *s, char const *format, struct tm const *tp, int ut,
                   int ns);

static void fwrite_uppcase(FILE *fp, char const *src, size_t len) {
  int tmp;
  size_t tmp___0;

  {
    while (1) {
      tmp___0 = len;
      len--;
      if (!(tmp___0 > 0UL)) {
        goto while_break;
      }
      tmp = toupper((int)((unsigned char)*src));
      fputc(tmp, fp);
      src++;
    }
  while_break:;
  }
}
static size_t strftime_case____0(_Bool upcase, FILE *s, char const *format,
                                 struct tm const *tp, int ut, int ns) {

  size_t i;
  FILE *p;
  char const *f;
  int pad;

  int digits;
  int number_value;
  unsigned int u_number_value;
  _Bool negative_number;
  _Bool always_output_a_sign;
  int tz_colon_mask;

  char sign_char;
  char *bufp;
  char buf___1[3UL + (((sizeof(time_t) * 8UL - 1UL) * 146UL) / 485UL + 2UL)];
  int width;

  _Bool to_uppcase;
  size_t colons;

  int format_char;

  char ufmt[5];
  char *u;
  char ubuf[1024];
  size_t len___0;
  char *tmp___7;
  char *tmp___8;

  char *tmp___10;
  size_t _n___2;

  int tmp___14;

  int padding;
  size_t _i___9;

  size_t _i___14;

  size_t _n___7;

  struct tm ltm;
  time_t t;
  int d;
  int tmp___27;

  int diff;
  int hour_diff;
  int min_diff;

  {

    i = (size_t)0;
    p = s;

    f = format;
    while (1) {

      if (!((int const) * f != 0)) {
        goto while_break;
      }
      pad = 0;
      digits = 0;
      width = -1;

      to_uppcase = upcase;

      if ((int const) * f != 37) {
        {

          fputc((int)*f, p);
        };
        goto __Cont;
      }
      {
      while_continue___5:
        f++;
        if ((int const) * f == 95) {
          goto case_95;
        }

        if ((int const) * f == 94) {
          goto case_94;
        }

        goto switch_default;
      case_95:
        pad = (int)*f;

      case_94:
        to_uppcase = (_Bool)1;
        goto while_continue___5;

      switch_default:
        goto switch_break;
      switch_break:;
      };
      if ((unsigned int)*f - 48U <= 9U) {
        width = 0;
        while (1) {

          {

            width *= 10;
            width += (int)((int const) * f - 48);
          }
          f++;
          if (!((unsigned int)*f - 48U <= 9U)) {
            goto while_break___6;
          }
        }
      while_break___6:;
      }

      format_char = (int)*f;

      if (format_char == 100) {
        goto case_100;
      }

      if (format_char == 78) {
        goto case_78;
      }

      if (format_char == 115) {
        goto case_115;
      }

      if (format_char == 89) {
        goto case_89;
      }

      if (format_char == 58) {
        goto case_58;
      }

      u = ufmt;
      tmp___7 = u;
      u++;
      *tmp___7 = (char)' ';
      tmp___8 = u;
      u++;
      *tmp___8 = (char)'%';

      tmp___10 = u;
      u++;
      *tmp___10 = (char)format_char;
      *u = (char)'\000';
      len___0 = strftime(ubuf, sizeof(ubuf), (char const *)(ufmt), tp);
      {
        {
          _n___2 = len___0 - 1UL;

          {

            {

              if (to_uppcase) {
                fwrite_uppcase(p, (char const *)(ubuf + 1), _n___2);
              } else {
                fwrite((void const *)(ubuf + 1), _n___2, (size_t)1, p);
              }
            };
          }
        };
      }
      goto switch_break___1;

    case_100 : {}
      digits = 2;
      number_value = (int)tp->tm_mday;
      goto do_number;

    do_tz_offset:
      always_output_a_sign = (_Bool)1;
      goto do_number_body;

    do_number:
      negative_number = (_Bool)(number_value < 0);
      u_number_value = (unsigned int)number_value;
    do_signed_number:
      always_output_a_sign = (_Bool)0;
      tz_colon_mask = 0;
    do_number_body : {}
      bufp = buf___1 + sizeof(buf___1) / sizeof(buf___1[0]);

      while (1) {

        if (tz_colon_mask & 1) {
          bufp--;
          *bufp = (char)':';
        }
        tz_colon_mask >>= 1;
        bufp--;
        *bufp = (char)(u_number_value % 10U + 48U);
        u_number_value /= 10U;
        if (!(u_number_value != 0U)) {
          if (!(tz_colon_mask != 0)) {
            goto while_break___23;
          }
        }
      }
    while_break___23:;
    do_number_sign_and_padding:
      if (digits < width) {
        digits = width;
      }
      if (negative_number) {
        sign_char = (char)'-';
      } else {
        if (always_output_a_sign) {
          tmp___14 = '+';
        } else {
          tmp___14 = 0;
        }
        sign_char = (char)tmp___14;
      }

      {
        padding =
            (int)(((long)digits -
                   ((buf___1 + sizeof(buf___1) / sizeof(buf___1[0])) - bufp)) -
                  (long)(!(!sign_char)));
        if (padding > 0) {
          if (pad == 95) {

            {
              {
                _i___9 = (size_t)0;
                while (1) {

                  if (!(_i___9 < (size_t)padding)) {
                    goto while_break___30;
                  }
                  fputc(' ', p);
                  _i___9++;
                }
              while_break___30:;
              };
            }

            if (sign_char) {
              {

                fputc((int)sign_char, p);
              };
            }
          } else {

            if (sign_char) {
              {

                fputc((int)sign_char, p);
              };
            }
            {
              {
                _i___14 = (size_t)0;
                while (1) {

                  if (!(_i___14 < (size_t)padding)) {
                    goto while_break___42;
                  }
                  fputc('0', p);
                  _i___14++;
                }
              while_break___42:;
              };
            }
          }
        } else {
        }
      }
      {
        _n___7 =
            (size_t)((buf___1 + sizeof(buf___1) / sizeof(buf___1[0])) - bufp);

        {

          { fwrite_uppcase(p, (char const *)bufp, _n___7); };
        }
      };
      goto switch_break___1;

    case_78 : {}
      number_value = ns;

      goto do_number;
    case_115:
      ltm = (struct tm) * tp;
      t = mktime(&ltm);
      bufp = buf___1 + sizeof(buf___1) / sizeof(buf___1[0]);
      negative_number = (_Bool)(t < 0L);
      while (1) {
        d = (int)(t % 10L);
        t /= 10L;
        bufp--;
        if (negative_number) {
          tmp___27 = -d;
        } else {
          tmp___27 = d;
        }
        *bufp = (char)(tmp___27 + 48);
        if (!(t != 0L)) {
          goto while_break___60;
        }
      }
    while_break___60:
      digits = 1;
      always_output_a_sign = (_Bool)0;
      goto do_number_sign_and_padding;

    case_89 : {}

      negative_number = (_Bool)(tp->tm_year < -1900);
      u_number_value = (unsigned int)tp->tm_year + 1900U;
      goto do_signed_number;

      ;

    case_58:
      colons = (size_t)1;

      f += colons;

      diff = (int)tp->tm_gmtoff;
      hour_diff = (diff / 60) / 60;
      min_diff = (diff / 60) % 60;

      digits = 6;
      negative_number = (_Bool)(diff < 0);
      tz_colon_mask = 4;
      u_number_value = (unsigned int)(hour_diff * 100 + min_diff);
      goto do_tz_offset;

    switch_break___1:;
    __Cont:
      f++;
    }
  while_break:;
    return (i);
  }
}
size_t fprintftime(FILE *s, char const *format, struct tm const *tp, int ut,
                   int ns) {
  size_t tmp;

  {
    tmp = strftime_case____0((_Bool)0, s, format, tp, ut, ns);
    return (tmp);
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int fflush(FILE *__stream);
int rpl_fflush(FILE *stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        __freading)(FILE *__fp);

int rpl_fflush(FILE *stream) {

  int tmp___1;

  {

    tmp___1 = fflush(stream);
    return (tmp___1);
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int fclose(FILE *__stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int(__attribute__((__nonnull__(1))) rpl_fclose)(FILE *fp) {
  int saved_errno;
  int fd;
  int result;
  int tmp;
  int *tmp___0;
  int tmp___1;
  int tmp___2;
  __off_t tmp___3;
  int tmp___4;
  int *tmp___5;

  {
    saved_errno = 0;
    result = 0;
    fd = fileno(fp);
    if (fd < 0) {
      tmp = fclose(fp);
      return (tmp);
    }
    tmp___1 = __freading(fp);
    if (tmp___1 != 0) {
      tmp___2 = fileno(fp);
      tmp___3 = lseek(tmp___2, (__off_t)0, 1);
      if (tmp___3 != -1L) {
      _L:
        tmp___4 = rpl_fflush(fp);
        if (tmp___4) {
          tmp___0 = __errno_location();
          saved_errno = *tmp___0;
        }
      }
    } else {
      goto _L;
    }
    result = fclose(fp);
    if (saved_errno != 0) {
      tmp___5 = __errno_location();
      *tmp___5 = saved_errno;
      result = -1;
    }
    return (result);
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
int volatile exit_failure = (int volatile)1;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
void close_stdout(void);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int close_stream(FILE *stream);
static char const *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void) {
  char const *write_error;
  char const *tmp;
  char *tmp___0;
  int *tmp___1;
  int *tmp___2;
  int tmp___3;
  int *tmp___4;
  int tmp___5;

  {
    tmp___3 = close_stream(stdout);
    if (tmp___3 != 0) {
      if (ignore_EPIPE) {
        tmp___4 = __errno_location();
        if (!(*tmp___4 == 32)) {
          goto _L;
        }
      } else {
      _L:
        tmp = (char const *)gettext("write error");
        write_error = tmp;
        if (file_name) {
          tmp___0 = quotearg_colon(file_name);
          tmp___1 = __errno_location();
          error(0, *tmp___1, "%s: %s", tmp___0, write_error);
        } else {
          tmp___2 = __errno_location();
          error(0, *tmp___2, "%s", write_error);
        }
        _exit((int)exit_failure);
      }
    }
    tmp___5 = close_stream(stderr);
    if (tmp___5 != 0) {
      _exit((int)exit_failure);
    }
    return;
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __fpending)(FILE *__fp);
int close_stream(FILE *stream) {
  _Bool some_pending;
  size_t tmp;
  _Bool prev_fail;
  int tmp___0;
  _Bool fclose_fail;
  int tmp___1;
  int *tmp___2;
  int *tmp___3;

  {
    tmp = __fpending(stream);
    some_pending = (_Bool)(tmp != 0UL);
    tmp___0 = ferror_unlocked(stream);
    prev_fail = (_Bool)(tmp___0 != 0);
    tmp___1 = rpl_fclose(stream);
    fclose_fail = (_Bool)(tmp___1 != 0);
    if (prev_fail) {
      goto _L___0;
    } else {
      if (fclose_fail) {
        if (some_pending) {
          goto _L___0;
        } else {
          tmp___3 = __errno_location();
          if (*tmp___3 != 9) {
          _L___0:
            if (!fclose_fail) {
              tmp___2 = __errno_location();
              *tmp___2 = 0;
            }
            return (-1);
          }
        }
      }
    }
    return (0);
  }
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
char const *Version = "8.21";
extern int fputc_unlocked(int __c, FILE *__stream);
extern char *optarg;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     putenv)(char *__string);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                        textdomain)(char const *__domainname);
extern __attribute__((__nothrow__)) char *(__attribute__((
    __leaf__)) bindtextdomain)(char const *__domainname, char const *__dirname);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
__inline static void emit_mandatory_arg_note(void) {}
__inline static void emit_ancillary_info(void) {
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char const *lc_messages;
  char const *tmp___3;
  char *tmp___4;
  char *tmp___5;
  int tmp___6;
  char *tmp___7;
  char *tmp___8;

  {
    tmp = last_component(program_name);
    tmp___0 = gettext("\nReport %s bugs to %s\n");
    printf((char const *)tmp___0, tmp, "bug-coreutils@gnu.org");
    tmp___1 = gettext("%s home page: <%s>\n");
    printf((char const *)tmp___1, "GNU coreutils",
           "http://www.gnu.org/software/coreutils/");
    tmp___2 = gettext(
        "General help using GNU software: <http://www.gnu.org/gethelp/>\n");
    fputs_unlocked((char const *)tmp___2, stdout);
    tmp___3 = (char const *)setlocale(5, (char const *)((void *)0));
    lc_messages = tmp___3;
    if (lc_messages) {
      tmp___6 = strncmp(lc_messages, "en_", sizeof("en_") - 1UL);
      if (tmp___6) {
        tmp___4 = last_component(program_name);
        tmp___5 = gettext("Report %s translation bugs to "
                          "<http://translationproject.org/team/>\n");
        printf((char const *)tmp___5, tmp___4);
      }
    }
    tmp___7 = last_component(program_name);
    tmp___8 = gettext(
        "For complete documentation, run: info coreutils \'%s invocation\'\n");
    printf((char const *)tmp___8, tmp___7);
    return;
  }
}
__inline static void emit_try_help(void) {
  char *tmp;

  {
    tmp = gettext("Try \'%s --help\' for more information.\n");
    fprintf(stderr, (char const *)tmp, program_name);
    return;
  }
}
__inline static char *timetostr(time_t t, char *buf___1) {
  char *tmp;

  {
    tmp = imaxtostr(t, buf___1);
    return (tmp);
  }
}
__inline static char *bad_cast(char const *s) { return ((char *)s); }
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
static _Bool show_date(char const *format, struct timespec when);
static char const *const time_spec_string[6] = {
    "hours", "minutes", "date", "seconds", "ns", (char const *)((void *)0)};
static enum Time_spec const time_spec[5] = {
    (enum Time_spec const)3, (enum Time_spec const)4, (enum Time_spec const)0,
    (enum Time_spec const)1, (enum Time_spec const)2};
static char const rfc_2822_format[25] = {
    (char const)'%',   (char const)'a', (char const)',', (char const)' ',
    (char const)'%',   (char const)'d', (char const)' ', (char const)'%',
    (char const)'b',   (char const)' ', (char const)'%', (char const)'Y',
    (char const)' ',   (char const)'%', (char const)'H', (char const)':',
    (char const)'%',   (char const)'M', (char const)':', (char const)'%',
    (char const)'S',   (char const)' ', (char const)'%', (char const)'z',
    (char const)'\000'};
static char const short_options[14] = {
    (char const)'d', (char const)':',   (char const)'f', (char const)':',
    (char const)'I', (char const)':',   (char const)':', (char const)'r',
    (char const)':', (char const)'R',   (char const)'s', (char const)':',
    (char const)'u', (char const)'\000'};
static struct option const long_options___1[14] = {
    {"date", 1, (int *)((void *)0), 'd'},
    {"file", 1, (int *)((void *)0), 'f'},
    {"iso-8601", 2, (int *)((void *)0), 'I'},
    {"reference", 1, (int *)((void *)0), 'r'},
    {"rfc-822", 0, (int *)((void *)0), 'R'},
    {"rfc-2822", 0, (int *)((void *)0), 'R'},
    {"rfc-3339", 1, (int *)((void *)0), 128},
    {"set", 1, (int *)((void *)0), 's'},
    {"uct", 0, (int *)((void *)0), 'u'},
    {"utc", 0, (int *)((void *)0), 'u'},
    {"universal", 0, (int *)((void *)0), 'u'},
    {"help", 0, (int *)((void *)0), -130},
    {"version", 0, (int *)((void *)0), -131},
    {(char const *)((void *)0), 0, (int *)((void *)0), 0}};
__attribute__((__noreturn__)) void usage(int status);
void usage(int status) {
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *tmp___9;
  char *tmp___10;
  char *tmp___11;
  char *tmp___12;
  char *tmp___13;
  char *tmp___14;
  char *tmp___15;
  char *tmp___16;
  char *tmp___17;
  char *tmp___18;
  char *tmp___19;

  {
    if (status != 0) {
      emit_try_help();
    } else {
      tmp = gettext("Usage: %s [OPTION]... [+FORMAT]\n  or:  %s "
                    "[-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]\n");
      printf((char const *)tmp, program_name, program_name);
      tmp___0 = gettext("Display the current time in the given FORMAT, or set "
                        "the system date.\n");
      fputs_unlocked((char const *)tmp___0, stdout);
      emit_mandatory_arg_note();
      tmp___1 = gettext(
          "  -d, --date=STRING         display time described by STRING, not "
          "\'now\'\n  -f, --file=DATEFILE       like --date once for each line "
          "of DATEFILE\n  -I[TIMESPEC], --iso-8601[=TIMESPEC]  output "
          "date/time in ISO 8601 format.\n                            "
          "TIMESPEC=\'date\' for date only (the default),\n                    "
          "        \'hours\', \'minutes\', \'seconds\', or \'ns\' for date\n   "
          "                         and time to the indicated precision.\n");
      fputs_unlocked((char const *)tmp___1, stdout);
      tmp___2 =
          gettext("  -r, --reference=FILE      display the last modification "
                  "time of FILE\n  -R, --rfc-2822            output date and "
                  "time in RFC 2822 format.\n                            "
                  "Example: Mon, 07 Aug 2006 12:34:56 -0600\n");
      fputs_unlocked((char const *)tmp___2, stdout);
      tmp___3 = gettext(
          "      --rfc-3339=TIMESPEC   output date and time in RFC 3339 "
          "format.\n                            TIMESPEC=\'date\', "
          "\'seconds\', or \'ns\' for\n                            date and "
          "time to the indicated precision.\n                            Date "
          "and time components are separated by\n                            a "
          "single space: 2006-08-07 12:34:56-06:00\n  -s, --set=STRING         "
          " set time described by STRING\n  -u, --utc, --universal    print or "
          "set Coordinated Universal Time\n");
      fputs_unlocked((char const *)tmp___3, stdout);
      tmp___4 = gettext("      --help     display this help and exit\n");
      fputs_unlocked((char const *)tmp___4, stdout);
      tmp___5 =
          gettext("      --version  output version information and exit\n");
      fputs_unlocked((char const *)tmp___5, stdout);
      tmp___6 = gettext("\nFORMAT controls the output.  Interpreted sequences "
                        "are:\n\n  %%   a literal %\n  %a   locale\'s "
                        "abbreviated weekday name (e.g., Sun)\n");
      fputs_unlocked((char const *)tmp___6, stdout);
      tmp___7 =
          gettext("  %A   locale\'s full weekday name (e.g., Sunday)\n  %b   "
                  "locale\'s abbreviated month name (e.g., Jan)\n  %B   "
                  "locale\'s full month name (e.g., January)\n  %c   locale\'s "
                  "date and time (e.g., Thu Mar  3 23:05:25 2005)\n");
      fputs_unlocked((char const *)tmp___7, stdout);
      tmp___8 =
          gettext("  %C   century; like %Y, except omit last two digits (e.g., "
                  "20)\n  %d   day of month (e.g., 01)\n  %D   date; same as "
                  "%m/%d/%y\n  %e   day of month, space padded; same as %_d\n");
      fputs_unlocked((char const *)tmp___8, stdout);
      tmp___9 =
          gettext("  %F   full date; same as %Y-%m-%d\n  %g   last two digits "
                  "of year of ISO week number (see %G)\n  %G   year of ISO "
                  "week number (see %V); normally useful only with %V\n");
      fputs_unlocked((char const *)tmp___9, stdout);
      tmp___10 = gettext("  %h   same as %b\n  %H   hour (00..23)\n  %I   hour "
                         "(01..12)\n  %j   day of year (001..366)\n");
      fputs_unlocked((char const *)tmp___10, stdout);
      tmp___11 = gettext("  %k   hour, space padded ( 0..23); same as %_H\n  "
                         "%l   hour, space padded ( 1..12); same as %_I\n  %m  "
                         " month (01..12)\n  %M   minute (00..59)\n");
      fputs_unlocked((char const *)tmp___11, stdout);
      tmp___12 = gettext(
          "  %n   a newline\n  %N   nanoseconds (000000000..999999999)\n  %p   "
          "locale\'s equivalent of either AM or PM; blank if not known\n  %P   "
          "like %p, but lower case\n  %r   locale\'s 12-hour clock time (e.g., "
          "11:11:04 PM)\n  %R   24-hour hour and minute; same as %H:%M\n  %s   "
          "seconds since 1970-01-01 00:00:00 UTC\n");
      fputs_unlocked((char const *)tmp___12, stdout);
      tmp___13 =
          gettext("  %S   second (00..60)\n  %t   a tab\n  %T   time; same as "
                  "%H:%M:%S\n  %u   day of week (1..7); 1 is Monday\n");
      fputs_unlocked((char const *)tmp___13, stdout);
      tmp___14 = gettext(
          "  %U   week number of year, with Sunday as first day of week "
          "(00..53)\n  %V   ISO week number, with Monday as first day of week "
          "(01..53)\n  %w   day of week (0..6); 0 is Sunday\n  %W   week "
          "number of year, with Monday as first day of week (00..53)\n");
      fputs_unlocked((char const *)tmp___14, stdout);
      tmp___15 =
          gettext("  %x   locale\'s date representation (e.g., 12/31/99)\n  %X "
                  "  locale\'s time representation (e.g., 23:13:48)\n  %y   "
                  "last two digits of year (00..99)\n  %Y   year\n");
      fputs_unlocked((char const *)tmp___15, stdout);
      tmp___16 =
          gettext("  %z   +hhmm numeric time zone (e.g., -0400)\n  %:z  +hh:mm "
                  "numeric time zone (e.g., -04:00)\n  %::z  +hh:mm:ss numeric "
                  "time zone (e.g., -04:00:00)\n  %:::z  numeric time zone "
                  "with : to necessary precision (e.g., -04, +05:30)\n  %Z   "
                  "alphabetic time zone abbreviation (e.g., EDT)\n\nBy "
                  "default, date pads numeric fields with zeroes.\n");
      fputs_unlocked((char const *)tmp___16, stdout);
      tmp___17 =
          gettext("The following optional flags may follow \'%\':\n\n  -  "
                  "(hyphen) do not pad the field\n  _  (underscore) pad with "
                  "spaces\n  0  (zero) pad with zeros\n  ^  use upper case if "
                  "possible\n  #  use opposite case if possible\n");
      fputs_unlocked((char const *)tmp___17, stdout);
      tmp___18 = gettext(
          "\nAfter any flags comes an optional field width, as a decimal "
          "number;\nthen an optional modifier, which is either\nE to use the "
          "locale\'s alternate representations if available, or\nO to use the "
          "locale\'s alternate numeric symbols if available.\n");
      fputs_unlocked((char const *)tmp___18, stdout);
      tmp___19 = gettext(
          "\nExamples:\nConvert seconds since the epoch (1970-01-01 UTC) to a "
          "date\n  $ date --date=\'@2147483647\'\n\nShow the time on the west "
          "coast of the US (use tzselect(1) to find TZ)\n  $ "
          "TZ=\'America/Los_Angeles\' date\n\nShow the local time for 9AM next "
          "Friday on the west coast of the US\n  $ date "
          "--date=\'TZ=\"America/Los_Angeles\" 09:00 next Fri\'\n");
      fputs_unlocked((char const *)tmp___19, stdout);
      emit_ancillary_info();
    }
    exit(status);
  }
}
static _Bool batch_convert(char const *input_filename, char const *format) {
  _Bool ok;
  FILE *in_stream;
  char *line;
  size_t buflen;
  struct timespec when;
  char const *tmp;
  int *tmp___0;
  int tmp___1;
  ssize_t line_length;
  ssize_t tmp___2;
  char const *tmp___3;
  char *tmp___4;
  _Bool tmp___5;
  _Bool tmp___6;
  char const *tmp___7;
  int *tmp___8;
  int tmp___9;

  {
    tmp___1 = strcmp(input_filename, "-");
    if (tmp___1 == 0) {
      input_filename = (char const *)gettext("standard input");
      in_stream = stdin;
    } else {
      in_stream = fopen(input_filename, "r");
      if ((unsigned long)in_stream == (unsigned long)((void *)0)) {
        tmp = quote(input_filename);
        tmp___0 = __errno_location();
        error(1, *tmp___0, "%s", tmp);
      }
    }
    line = (char *)((void *)0);
    buflen = (size_t)0;
    ok = (_Bool)1;
    while (1) {
      tmp___2 = getline(&line, &buflen, in_stream);
      line_length = tmp___2;
      if (line_length < 0L) {
        goto while_break;
      }
      tmp___6 = parse_datetime(&when, (char const *)line,
                               (struct timespec const *)((void *)0));
      if (tmp___6) {
        tmp___5 = show_date(format, when);
        ok = (_Bool)((int)ok & (int)tmp___5);
      } else {
        if ((int)*(line + (line_length - 1L)) == 10) {
          *(line + (line_length - 1L)) = (char)'\000';
        }
        tmp___3 = quote((char const *)line);
        tmp___4 = gettext("invalid date %s");
        error(0, 0, (char const *)tmp___4, tmp___3);
        ok = (_Bool)0;
      }
    }
  while_break:
    tmp___9 = rpl_fclose(in_stream);
    if (tmp___9 == -1) {
      tmp___7 = quote(input_filename);
      tmp___8 = __errno_location();
      error(1, *tmp___8, "%s", tmp___7);
    }
    free((void *)line);
    return (ok);
  }
}
int main(int argc, char **argv);
static char const rfc_3339_format[3][32] = {
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'\000'},
    {(char const)'%',   (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m',   (char const)'-', (char const)'%', (char const)'d',
     (char const)' ',   (char const)'%', (char const)'H', (char const)':',
     (char const)'%',   (char const)'M', (char const)':', (char const)'%',
     (char const)'S',   (char const)'%', (char const)':', (char const)'z',
     (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)' ', (char const)'%', (char const)'H', (char const)':',
     (char const)'%', (char const)'M', (char const)':', (char const)'%',
     (char const)'S', (char const)'.', (char const)'%', (char const)'N',
     (char const)'%', (char const)':', (char const)'z', (char const)'\000'}};
static char const iso_8601_format[5][32] = {
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'T', (char const)'%', (char const)'H', (char const)':',
     (char const)'%', (char const)'M', (char const)':', (char const)'%',
     (char const)'S', (char const)'%', (char const)'z', (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-',   (char const)'%',
     (char const)'m', (char const)'-', (char const)'%',   (char const)'d',
     (char const)'T', (char const)'%', (char const)'H',   (char const)':',
     (char const)'%', (char const)'M', (char const)':',   (char const)'%',
     (char const)'S', (char const)',', (char const)'%',   (char const)'N',
     (char const)'%', (char const)'z', (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'T', (char const)'%', (char const)'H', (char const)'%',
     (char const)'z', (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'T', (char const)'%', (char const)'H', (char const)':',
     (char const)'%', (char const)'M', (char const)'%', (char const)'z',
     (char const)'\000'}};
int main(int argc, char **argv) {
  AFL_INIT_SET0("date");
  int optc;
  char const *datestr;
  char const *set_datestr;
  struct timespec when;
  _Bool set_date;
  char const *format;
  char *batch_file;
  char *reference;
  struct stat refstats;
  _Bool ok;
  int option_specified_date;
  char const *new_format;
  enum Time_spec i;
  ptrdiff_t tmp;
  enum Time_spec i___0;
  ptrdiff_t tmp___0;
  unsigned int tmp___1;
  char *tmp___2;
  int tmp___3;
  char *tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  char *tmp___8;
  char *tmp___9;
  char const *tmp___10;
  char *tmp___11;
  char *tmp___12;
  int tmp___13;
  char const *tmp___14;
  char *tmp___15;
  _Bool valid_date;
  int *tmp___16;
  int tmp___17;
  char const *tmp___18;
  char *tmp___19;
  char *tmp___20;
  int *tmp___21;
  int tmp___22;
  _Bool tmp___23;
  int tmp___24;

  {
    datestr = (char const *)((void *)0);
    set_datestr = (char const *)((void *)0);
    set_date = (_Bool)0;
    format = (char const *)((void *)0);
    batch_file = (char *)((void *)0);
    reference = (char *)((void *)0);
    set_program_name((char const *)*(argv + 0));
    setlocale(6, "");
    bindtextdomain("coreutils", "/usr/local/share/locale");
    textdomain("coreutils");
    atexit(&close_stdout);
    while (1) {
      optc = getopt_long(argc, (char *const *)argv, short_options,
                         long_options___1, (int *)((void *)0));
      if (!(optc != -1)) {
        goto while_break;
      }
      new_format = (char const *)((void *)0);
      if (optc == 100) {
        goto case_100;
      }
      if (optc == 102) {
        goto case_102;
      }
      if (optc == 128) {
        goto case_128;
      }
      if (optc == 73) {
        goto case_73;
      }
      if (optc == 114) {
        goto case_114;
      }
      if (optc == 82) {
        goto case_82;
      }
      if (optc == 115) {
        goto case_115;
      }
      if (optc == 117) {
        goto case_117;
      }
      if (optc == -130) {
        goto case_neg_130;
      }
      if (optc == -131) {
        goto case_neg_131;
      }
      goto switch_default;
    case_100:
      datestr = (char const *)optarg;
      goto switch_break;
    case_102:
      batch_file = optarg;
      goto switch_break;
    case_128:
      tmp = __xargmatch_internal("--rfc-3339", (char const *)optarg,
                                 time_spec_string + 2,
                                 (char const *)(time_spec + 2),
                                 sizeof(*(time_spec + 2)), argmatch_die);
      i = (enum Time_spec) * ((time_spec + 2) + tmp);
      new_format = rfc_3339_format[i];
      goto switch_break;
    case_73:
      if (optarg) {
        tmp___0 = __xargmatch_internal(
            "--iso-8601", (char const *)optarg, time_spec_string,
            (char const *)(time_spec), sizeof(time_spec[0]), argmatch_die);
        tmp___1 = (unsigned int)time_spec[tmp___0];
      } else {
        tmp___1 = 0U;
      }
      i___0 = (enum Time_spec)tmp___1;
      new_format = iso_8601_format[i___0];
      goto switch_break;
    case_114:
      reference = optarg;
      goto switch_break;
    case_82:
      new_format = rfc_2822_format;
      goto switch_break;
    case_115:
      set_datestr = (char const *)optarg;
      set_date = (_Bool)1;
      goto switch_break;
    case_117:
      tmp___2 = bad_cast("TZ=UTC0");
      tmp___3 = putenv(tmp___2);
      if (tmp___3 != 0) {
        xalloc_die();
      }
      goto switch_break;
    case_neg_130:
      usage(0);
      goto switch_break;
    case_neg_131:
      version_etc(stdout, "date", "GNU coreutils", Version, "David MacKenzie",
                  (char *)((void *)0));
      exit(0);
      goto switch_break;
    switch_default:
      usage(1);
    switch_break:;
      if (new_format) {
        if (format) {
          tmp___4 = gettext("multiple output formats specified");
          error(1, 0, (char const *)tmp___4);
        }
        format = new_format;
      }
    }
  while_break:;
    if (datestr) {
      tmp___5 = 1;
    } else {
      tmp___5 = 0;
    }
    if (batch_file) {
      tmp___6 = 1;
    } else {
      tmp___6 = 0;
    }
    if (reference) {
      tmp___7 = 1;
    } else {
      tmp___7 = 0;
    }
    option_specified_date = (tmp___5 + tmp___6) + tmp___7;
    if (option_specified_date > 1) {
      tmp___8 = gettext(
          "the options to specify dates for printing are mutually exclusive");
      error(0, 0, (char const *)tmp___8);
      usage(1);
    }
    if (set_date) {
      if (option_specified_date) {
        tmp___9 = gettext(
            "the options to print and set the time may not be used together");
        error(0, 0, (char const *)tmp___9);
        usage(1);
      }
    }
    if (optind < argc) {
      if (optind + 1 < argc) {
        tmp___10 = quote((char const *)*(argv + (optind + 1)));
        tmp___11 = gettext("extra operand %s");
        error(0, 0, (char const *)tmp___11, tmp___10);
        usage(1);
      }
      if ((int)*(*(argv + optind) + 0) == 43) {
        if (format) {
          tmp___12 = gettext("multiple output formats specified");
          error(1, 0, (char const *)tmp___12);
        }
        tmp___13 = optind;
        optind++;
        format = (char const *)(*(argv + tmp___13) + 1);
      } else {
        if (set_date) {
          tmp___14 = quote((char const *)*(argv + optind));
          tmp___15 =
              gettext("the argument %s lacks a leading \'+\';\nwhen using an "
                      "option to specify date(s), any non-option\nargument "
                      "must be a format string beginning with \'+\'");
          error(0, 0, (char const *)tmp___15, tmp___14);
          usage(1);
        } else {
          if (option_specified_date) {
            tmp___14 = quote((char const *)*(argv + optind));
            tmp___15 =
                gettext("the argument %s lacks a leading \'+\';\nwhen using an "
                        "option to specify date(s), any non-option\nargument "
                        "must be a format string beginning with \'+\'");
            error(0, 0, (char const *)tmp___15, tmp___14);
            usage(1);
          }
        }
      }
    }
    if (!format) {
      format = (char const *)nl_langinfo(131180);
      if (!*format) {
        format = "%a %b %e %H:%M:%S %Z %Y";
      }
    }
    if ((unsigned long)batch_file != (unsigned long)((void *)0)) {
      ok = batch_convert((char const *)batch_file, format);
    } else {
      valid_date = (_Bool)1;
      ok = (_Bool)1;
      if (!option_specified_date) {
        if (!set_date) {
          if (optind < argc) {
            set_date = (_Bool)1;
            datestr = (char const *)*(argv + optind);
            valid_date = posixtime(&when.tv_sec, datestr, 14U);
            when.tv_nsec = (__syscall_slong_t)0;
          } else {
            gettime(&when);
          }
        } else {
          goto _L;
        }
      } else {
      _L:
        if ((unsigned long)reference != (unsigned long)((void *)0)) {
          tmp___17 = stat((char const *)reference, &refstats);
          if (tmp___17 != 0) {
            tmp___16 = __errno_location();
            error(1, *tmp___16, "%s", reference);
          }
          when = get_stat_mtime((struct stat const *)(&refstats));
        } else {
          if (set_datestr) {
            datestr = set_datestr;
          }
          valid_date = parse_datetime(&when, datestr,
                                      (struct timespec const *)((void *)0));
        }
      }
      if (!valid_date) {
        tmp___18 = quote(datestr);
        tmp___19 = gettext("invalid date %s");
        error(1, 0, (char const *)tmp___19, tmp___18);
      }
      if (set_date) {
        tmp___22 = settime((struct timespec const *)(&when));
        if (tmp___22 != 0) {
          tmp___20 = gettext("cannot set date");
          tmp___21 = __errno_location();
          error(0, *tmp___21, (char const *)tmp___20);
          ok = (_Bool)0;
        }
      }
      tmp___23 = show_date(format, when);
      ok = (_Bool)((int)ok & (int)tmp___23);
    }
    if (ok) {
      tmp___24 = 0;
    } else {
      tmp___24 = 1;
    }
    exit(tmp___24);
  }
}
static _Bool show_date(char const *format, struct timespec when) {
  struct tm *tm;
  char
      buf___1[(((sizeof(intmax_t) * 8UL - 1UL) * 146UL + 484UL) / 485UL + 1UL) +
              1UL];
  char *tmp;
  char *tmp___0;

  {
    tm = localtime((time_t const *)(&when.tv_sec));
    if (!tm) {
      tmp = timetostr(when.tv_sec, buf___1);
      tmp___0 = gettext("time %s is out of range");
      error(0, 0, (char const *)tmp___0, tmp);
      return ((_Bool)0);
    }
    if ((unsigned long)format == (unsigned long)(rfc_2822_format)) {
      setlocale(2, "C");
    }
    fprintftime(stdout, format, (struct tm const *)tm, 0, (int)when.tv_nsec);
    fputc_unlocked('\n', stdout);
    if ((unsigned long)format == (unsigned long)(rfc_2822_format)) {
      setlocale(2, "");
    }
    return ((_Bool)1);
  }
}