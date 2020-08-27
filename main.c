#include <stdio.h>
#include<readline/readline.h>

int main(void) {
  char *name = readline("Enter your name: ");
  printf("hello, %s!\n", name);
  return 0;
}