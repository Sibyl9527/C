/* Purpose: Two number's GCF */
/* File Name: Ch06_03*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num1, num2;
  int divisor, dividend, remainder;
  
  printf("Please input two integers\n");
  scanf("%d %d", &num1, &num2);
  
  remainder = num1 % num2;
  dividend = num2;
  
  while (remainder != 0) {
    divisor = dividend;
	dividend = remainder;
	remainder = divisor % dividend;
  }
  
  printf("The GCF of %d and %d is %d\n", num1, num2, dividend);
  
  system("pause");
  return 0;
}