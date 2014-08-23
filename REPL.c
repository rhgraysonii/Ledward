#include <stdio.h>

/* static buffer */

int main(int argc, char** argv) {
  puts("Ledward v0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  while(1) {
    fputs("Ledward>>>", stdout);
    fgets(input, 2048, stdin);
    printf("Input: %s", input)
  }
  return 0;
}
