/* Purpose: Input and output string */
/* File Name: Ch11_06 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{ 
  char string[60];
  
  puts("Please input a string");
  scanf("%s", string);
  printf("The string you entered is %s\n", string);
  
  return 0;
}
