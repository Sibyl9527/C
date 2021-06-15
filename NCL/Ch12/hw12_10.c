// Purpose: Check whether the input string is palindrome or not
// File Name: hw12_10
// Completion Date: 20210615
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  char input[100]; // save input string
  char *start; // start from array's head
  char *end; // end from array's tail
  int flag = 1; // check palindrome
  
  puts("Please input a string to check whether is palindrome or not:");
  gets(input);
  
  for (start = input, end = input + strlen(input) - 1; start < end; start++, end--) { // compare two value at a time
	if (*start != *end) { // not palindorme
	  flag = 0;
	  break;
	}
  }
  
  if (flag == 0) {
	puts("The string is not palindrome.");
  } else {
	puts("The string is palindorme.");
  }
 
  return EXIT_SUCCESS;
}  

