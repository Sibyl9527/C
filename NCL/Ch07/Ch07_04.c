/* Purpose: sum two integers by sub function */
/* File Name: Ch07_04 */
/* Completion Date: 20210528 */
#include <stdio.h>
int add(int, int);

int main(void)
{
  int i = 3, j = 5;
  int sum;
  
  sum = add(i, j);
  printf("The sum of %d and %d is %d\n", i, j, sum);
  
  return 0;
}

int add(int num1, int num2)
{
  int sum;
  
  sum = num1 + num2;
  
  return sum;
}