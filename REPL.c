#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>

/* static buffer */

int main(int argc, char** argv) {
  puts("Ledward v0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  while(1) {
    char* input = readline(":Ledward>>> ");
    add_history(input);
    printf("Input: %s\n", input);
    free(input);
  }
  return 0;
}
