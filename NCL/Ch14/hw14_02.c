// Purpose: Count the alphabets and digits from the string
// File Name: hw14_02
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char str[] = "d1p93ub4u190f4u1"; // initial string
  int i; // for loop control
  int alcount = 0; // count alphabet
  int digcount = 0; // count digit
  
  printf("The original string is \"%s\"\n", str);
  for (i = 0; i < strlen(str); i++) {
	if (isalpha(str[i]) != 0) {
	  alcount++;
    } else if (isdigit(str[i]) != 0) {
	  digcount++;
	}
  }
  printf("The alphabets: %d\n", alcount);
  printf("The digits: %d\n", digcount);
  
  return EXIT_SUCCESS;
}  