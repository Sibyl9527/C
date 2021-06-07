/* Purpose: sum 1 to input integer */
/* File Name: hw06_02 */
/* Completion Date: 20210526 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int number, result, counter;
  result = 0;
  
  printf("Please input a positive integer, and we will help you add it from 1 to your number!\n");
  scanf("%d", &number);
  
  for (counter = 1; counter <= number; counter++) {
	result += counter;
  }
  
  printf("The sum is %d\n", result);
  
  system("pause");
  return 0;
}