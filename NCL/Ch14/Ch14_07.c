// Purpose: Exchange uppercase and lowercase using isupper(), islower() to check the input char
// File Name: Ch14_07
// Completion Date: 20210619
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char string[30]; // input string
  int i; // for loop control
  
  puts("Please input a tring, we will help you to exchange between uppercase and lowercase:");
  gets(string);
  
  puts("Output string:");
  for (i = 0; i < strlen(string); i++) {
	if (isupper(string[i]) != 0) { // exchange uppercase to lowercase
	  printf("%c", string[i] + 32);
	} else if (islower(string[i]) != 0) { // exchange lowercase to uppercase
	  printf("%c", string[i] - 32);
	} else { // output original char
	  printf("%c", string[i]);
	}
  }
  
  return EXIT_SUCCESS;
}  

 

 
