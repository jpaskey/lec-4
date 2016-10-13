#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tests.h"


char* clean_newline(char* str) {
  if (str[strlen(str)-1]=='\n') {
    str[strlen(str)-1]='\0';
    return str;
  }
  else { //if(str[strlen(str)-1]!='\n') {
    return str;
  }
}

int main(void) {
  char string[100];
  printf("Enter a string: ");
  //test_clean_newline();
  fgets(string, sizeof(string), stdin);
  printf("Original string: \"%s\" \n", string);
  clean_newline(string);
  printf("Cleaned string: \"%s\" \n", string);
  
  return 0;
}
