/* Purpose: The uppercase changes to the lowercase. */
/* File Name: Ch02_17*/
/* Completion Date: 20210509*/
#include <stdio.h>

int main(void)
{
  char upper_case = 'S', lower_case;
  
  lower_case = upper_case + 32;
  
  printf("'%c' from uppercase changes to the lowercase is '%c'.\n", upper_case, lower_case);
  
  return 0;
}