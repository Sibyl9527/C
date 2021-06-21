// Purpose: Count uppercase, lowercase, digit and punctuation from input string
// File Name: hw14_08
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char str[50]; // initial string
  int i; // for loop control
  int uppcount = 0; // count uppercase
  int lowcount = 0; // count lowercase
  int digcount = 0; // count digit
  int punccount = 0; // count punctuation
  
  puts("Please input a string:");
  gets(str);
  for (i = 0; i < strlen(str); i++) {
	if (isupper(str[i]) != 0) { // count uppercase
	  uppcount++;
    } else if (islower(str[i]) != 0) { // count lowercase
	  lowcount++;
	} else if (isdigit(str[i]) != 0) { // count digit
	  digcount++;
	} else if (ispunct(str[i]) != 0) { // count punctuation
	  punccount++;
	}
  }
  printf("Uppercase: %d\nLowercase: %d\nDigit: %d\nPunctuation %d\n", uppcount, lowcount, digcount, punccount);
  
  return EXIT_SUCCESS;
}  