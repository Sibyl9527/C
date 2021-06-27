// Purpose: Delare a division struct includes divisor, dividend, quotient and remainder.
//          Input divisor and dividend, output quotient and remainder.
// File Name: hw15_05
// Completion Date: 20210626
#include <stdio.h>
#include <stdlib.h>
struct Division
{
  int divisor;
  int dividend;
  int quotient;
  int remainder;
};


int main(void)
{ 
  struct Division calculate;
  puts("Please input divisor:");
  scanf("%d", &calculate.divisor);
  rewind(stdin);
  puts("Please input dividend:");
  scanf("%d", &calculate.dividend);
  calculate.quotient = calculate.dividend / calculate.divisor;
  calculate.remainder = calculate.dividend % calculate.divisor;
  
  printf("Quotient = %d, remainder = %d\n", calculate.quotient, calculate.remainder);
 
  return EXIT_SUCCESS;
}  