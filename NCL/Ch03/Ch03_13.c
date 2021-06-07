/* Purpose: long int and positive sign */
/* File Name: Ch03_13*/
/* Completion Date: 20210509*/
#include <stdio.h>

int main(void)
{
  int digit = 75;
  
  printf("Width = 10, and plus + - sign, and output with long int,\n");
  printf("the value of variable digit is : %+010ld\n", digit);
  
  return 0;
}