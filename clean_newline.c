#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tests.h"


char* clean_newline(char* str) {
  // your code here!
}

int main(void) {
  char string[100];
  printf("Enter a string: ");
  fgets(string, sizeof(string), stdin);
  printf("Original string: \"%s\" \n", string);
  clean_newline(string);
  printf("Cleaned string: \"%s\" \n", string);
  
  return 0;
}
