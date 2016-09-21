#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tests.h"


#define NUM_TESTS 4
#define STR_LEN 20

void test_clean_newline() {
  char tests[NUM_TESTS][STR_LEN];
  char solutions[NUM_TESTS][STR_LEN];
  int i, j;
  int passed = 1;
  char* ret;
  // Fill strings with As so we can tell if they get overwritten
  for(i=0; i < NUM_TESTS; i++){
    for(j=0; j < STR_LEN; j++) {
      tests[i][j] = 'A';
      solutions[i][j] = 'A';
    }
  }
  // setup test cases and exepcted outputs
  strcpy(tests[0], "testing123\n");
  strcpy(solutions[0],"testing123");
  strcpy(tests[1], "testing123");
  strcpy(solutions[1], "testing123");
  strcpy(tests[2], "");
  strcpy(solutions[2], "");
  strcpy(tests[3], "test");
  strcpy(solutions[3], "test");

  printf("Running tests on clean_newline...\n");

  // basic test
  clean_newline(tests[0]);
  if(strcmp(solutions[0], tests[0]) != 0){
    printf("ERROR in test_clean_newline case 0!\n");
    passed = 0;
   }
  else {
    printf("Passed test_clean_newline case 0.\n");
  }
  
  clean_newline(tests[1]);
  if(strcmp(solutions[1], tests[1]) != 0){
    printf("ERROR in test_clean_newline case 1!\n");
    passed = 0;
   }
  else {
    printf("Passed test_clean_newline case 1.\n");
  }

  clean_newline(tests[2]);
  if(strcmp(solutions[2], tests[2]) != 0
      || tests[2][-1] != 'A') {
    printf("ERROR in test_clean_newline case 2!\n");
    passed = 0;
   }
  else {
    printf("Passed test_clean_newline case 2.\n");
  }
  
  ret = clean_newline(tests[3]);
  if(ret != tests[3]) {
    printf("ERROR in test_clean_newline case 3!\n");
    passed = 0;
   }
  else {
    printf("Passed test_clean_newline case 3.\n");
  }
  
  if(passed != 1) {
    printf("TESTS FAILED\n");
  }
  else {
    printf("TESTS PASSED\n");
  }
  
}