// Purpose: Delete punctuation from the string "Book, knowledge sotrage, is a useful tool." and output
// File Name: hw14_07
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char str[] = "Book, knowledge sotrage, is a useful tool."; // initial string
  int i; // for loop control
  
  printf("The original string is \"%s\"\n", str);
  printf("%s", "Output string is \"");
  for (i = 0; i < strlen(str); i++) {
	if (isalpha(str[i]) != 0 || isspace(str[i]) != 0) { // only output alphabets and spaces
	  printf("%c", str[i]);
    }
  }
  printf("\"\n");
  
  return EXIT_SUCCESS;
}  