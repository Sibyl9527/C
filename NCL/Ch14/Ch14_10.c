// Purpose: Check char whether is hex or not by isxdigit()
// File Name: Ch14_10
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char *str = "ihno13we0veA"; // initial string
  unsigned int i; // for loop control
  
  printf("%s", "The ");
  for (i = 0; i < strlen(str); i++) {
	if (isxdigit(*(str + i)) != 0) { // check char whether is hex or not
      printf("%d ", i + 1);
	}
  }
  
  puts("are hex.");
  
  return EXIT_SUCCESS;
}  