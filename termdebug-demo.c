#include <stdlib.h>
#include <stdio.h>
#include "termdebug-demo.h"

void say_hello() {
  printf("%s\n", GREETING);
}

int main() {
  say_hello();
  return 0;
}
