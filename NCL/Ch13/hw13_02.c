// Purpose: Declare two int static internal variables and calculate the deviation
// File Name: hw13_02
// Completion Date: 20210617
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  static int num1; // static internal variable num1
  static int num2; // static internal variable num2
  
  num1 = 95;
  num2 = 27;
  
  printf("The deviation of two int number %d - %d = %d\n", num1, num2, num1 - num2);
 
  return EXIT_SUCCESS;
}  
 
