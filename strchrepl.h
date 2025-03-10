#ifndef _STRCHREPL_
#define _STRCHREPL_ 1

#include <assert.h>
#include <stdbool.h>
#include <string.h>

size_t strchrepl(char* src,
                 unsigned char target,
                 unsigned char replacement);

size_t strnchrepl(char* src,
                  unsigned char target,
                  unsigned char replacement,
                  size_t length);

#endif // _STRCHREPL_
