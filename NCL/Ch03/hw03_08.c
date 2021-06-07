/* Purpose: input integer, output octal, hexadecimal */
/* File Name: hw03_08*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int number;
  
  printf("Please input an integer\n");
  scanf("%d", &number);
  printf("%d's octal is %o\n", number, number);
  printf("%d's hexadecimal is %X\n", number, number);
  
  return 0;
}