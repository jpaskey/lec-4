#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int l = 0;
  int num_chars = 0;
  char lines[20][100];
  char tmpline[100];
  FILE *rj; 
  rj = fopen("rj.txt", "r");
  
  for(l = 0; l < 20; l++) {
    if(fgets(tmpline, 100, rj) == NULL) {
      // reached end of file
      break;
    }
    strcpy(lines[l], tmpline);
  }
  
  printf("Total bytes used: %d\n", sizeof(lines));
  printf("Total characters in strings: %d\n", num_chars);
  return 0;
}
