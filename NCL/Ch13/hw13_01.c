// Purpose: Declare two float internal variables and calculate the sum
// File Name: hw13_01
// Completion Date: 20210617
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  auto float num1; // internal variable num1
  auto float num2; // internal variable num2
  
  num1 = 10.5;
  num2 = 15.2;
  
  printf("The sum of two float number %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
 
  return EXIT_SUCCESS;
}  
 
