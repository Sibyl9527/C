/* Purpose: Use gets() to input */
/* File Name: Ch11_07 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{ 
  char string[60];
  
  puts("Please input a string");
  gets(string);
  printf("The string you entered is %s\n", string);
  
  return 0;
}
