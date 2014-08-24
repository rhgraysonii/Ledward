#include <stdio.h>
#include <stdlib.h>
#include "mpc.h"

#ifdef _WIN32
#include <string.h>
static char buffer[2048]
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* copy = malloc(strlen(buffer) + 1);
  strcpy(copy, buffer);
  copy[strlen(copy) - 1];
  return copy;
}
void add_history(char*, unused) {}
#else
#include <editline/readline.h>
#endif

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
