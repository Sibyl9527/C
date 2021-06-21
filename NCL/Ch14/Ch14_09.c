// Purpose: Check char by ispunct()
// File Name: Ch14_09
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char string[60]; // input string
  int i; // for loop control
  int count = 0; // punctuation count
  
  puts("Please input a string, we will help you to count the number of punctuation in the string");
  gets(string);
  
  for (i = 0; i < strlen(string); i++) {
	if (ispunct(string[i]) != 0) { // check is punctuation or not
	  count++;
	}
  }
  
  printf("The string includes %d punctuation(s)\n", count); 
  
  return EXIT_SUCCESS;
}  

 

 
