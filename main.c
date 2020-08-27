#include <stdio.h>
#include<readline/readline.h>

int main(void) {
  char *name = readline("Enter your name: ");
  printf("Enter your name: \n");
  printf("hello, %s", name);
  return 0;
}