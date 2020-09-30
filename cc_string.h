#ifndef CCLIB_STRING_H
#define CCLIB_STRING_H

#include "cfg.h"
#include "cc_defs.h"

#if CCLIB_STRLIB != CC_FEAT_DISABLED

#ifdef __cplusplus
extern "C" {
#endif

CCTY(cc_ssize) cc_memchr(const void *str, int c, CCTY(cc_size) n);

int cc_memcmp(const void *str1, const void *str2, CCTY(cc_size) n);

void cc_memcpy(void *restrict dest,
               const void *restrict from,
               CCTY(cc_size) n);

void cc_memmove(void *dest, const void *from, CCTY(cc_size) n);

CCTY(cc_size) cc_strcat(char *dest, const char *from);

CCTY(cc_size) cc_strncat(char *dest, const char *from, CCTY(cc_size) n);

int cc_strcmp(const char *str1, const char *str2);

int cc_strncmp(const char *str1, const char *str2, CCTY(cc_size) n);

CCTY(cc_size) cc_strcpy(char *dest, const char *from);

CCTY(cc_size) cc_strncpy(char *dest, const char *from, CCTY(cc_size) n);

CCTY(cc_ssize) cc_strchr(const char *str, int c);

CCTY(cc_ssize) cc_strrchr(const char *str, int c);

CCTY(cc_ssize) cc_strstr(const char *str1, const char *str2);

#ifdef __cplusplus
} // extern "C"
#endif

#endif

#endif
