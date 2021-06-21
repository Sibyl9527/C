// Purpose: Delete punctuation from the input string and then output the string
// File Name: hw14_09
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char str[50]; // initial string
  int i; // for loop control
  
  puts("Please input a string:");
  gets(str);
  printf("The string after filtering is ");
  for (i = 0; i < strlen(str); i++) {
	if (ispunct(str[i]) == 0) { // don't output puncuation
	  printf("%c", str[i]);
    }
  }
  puts("");
  
  return EXIT_SUCCESS;
}  