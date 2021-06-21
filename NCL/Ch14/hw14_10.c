// Purpose: Input a string and only accept alphabets and spaces.
//          When output this string, the first alphabet is uppercase, the others are lowercase.
// File Name: hw14_10
// Completion Date: 20210621
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char str[50]; // initial string
  int i; // for loop control
  int flag = 1; // do while loop control
  int firstalpha; // first alphabet position
  int lock = 0; // lock = 1 it means that firstalpha is ready
  
  puts("Please input a string (only accept alphabets and spaces):");
  do {
	gets(str);
	for (i = 0; i < strlen(str); i++) {
	  if (isalpha(str[i]) == 0 && isspace(str[i]) == 0) { // invalid input
		flag = 0;
		puts("Your string is invalid, please input again (only accept alphabets and spaces):");
		break;
	  }
	  
	  if (isalpha(str[i]) != 0 && lock == 0) { // first alphabet
	    firstalpha = i;
		lock = 1;
	  }
	}
  } while (flag == 0);
  
  printf("%s", "Output string is \"");
  
  for (i = 0; i < strlen(str); i++) {
	if (isalpha(str[i]) && i == firstalpha) { // first alphabet must be uppercase
	  if (islower(str[i])) {
		printf("%c", str[i] - 32);
	  } else {
		printf("%c", str[i]);
	  }
	} else {
	  if (isupper(str[i]) != 0) { // the others must be lowercase
	    printf("%c", str[i] + 32);
	  } else {
		printf("%c", str[i]);
	  }
	}
  }
  puts("\"");
  
  return EXIT_SUCCESS;
}  