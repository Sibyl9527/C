// Purpose: Continue hw14_02, separate the string by alphabet and digit
// File Name: hw14_03
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
  char alpha[16]; // assign alphabet
  char digit[16]; // assign digit
  
  printf("The original string is \"%s\"\n", str);
  for (i = 0; i < strlen(str); i++) {
	if (isalpha(str[i]) != 0) { // assign alphabet from original string to alpha string
	  alpha[alcount] = str[i];
	  alcount++;
    } else if (isdigit(str[i]) != 0) { // assign digit from original string to digit string
	  digit[digcount] = str[i];
	  digcount++;
	}
  }
  printf("The string of alphabet is %s\n", alpha);
  printf("The string of digit is %s\n", digit);
  
  return EXIT_SUCCESS;
}  