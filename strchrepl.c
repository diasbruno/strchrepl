#include "strchrepl.h"


size_t strnchrepl(char* src,
                  unsigned char target,
                  unsigned char replacement,
                  size_t length) {
  assert(src);
  assert(length > 0);

  char* position = src;
  size_t count = 0;

  while (*position != 0 && length-- > 0) {
    if (*position == target) {
      *position = replacement;
      ++count;
    }
    ++position;
  }

  return count;
}

size_t strchrepl(char* src, unsigned char target, unsigned char replacement) {
  assert(src);
  return strnchrepl(src, target, replacement, strlen(src));
}
