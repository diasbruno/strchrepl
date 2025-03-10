#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "strchrepl.h"

void test_replace_all_occurences() {
  char* str = strdup("a-b-c");

  size_t count = strchrepl(str, '-', '_');
  printf("%s\n", str);
  assert(count == 2);
  assert(memcmp(str, "a_b_c", 6) == 0);

  free(str);
}

void test_replace_till_length() {
  char* str = strdup("a-b-c");

  size_t count = strnchrepl(str, '-', '_', 3);
  printf("%s\n", str);
  assert(count == 1);
  assert(memcmp(str, "a_b-c", 6) == 0);

  free(str);
}

int main(void) {
  test_replace_all_occurences();
  test_replace_till_length();
  return 0;
}
