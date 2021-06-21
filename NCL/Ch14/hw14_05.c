// Purpose: Delete space from the string "I am a good student" and output
// File Name: hw14_05
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char str[] = "I am a good student"; // initial string
  int i; // for loop control
  
  printf("The original string is \"%s\"\n", str);
  printf("%s", "Output string is \"");
  for (i = 0; i < strlen(str); i++) {
	if (isalpha(str[i]) != 0) {
	  printf("%c", str[i]);
    }
  }
  printf("\"\n");
  
  return EXIT_SUCCESS;
}  