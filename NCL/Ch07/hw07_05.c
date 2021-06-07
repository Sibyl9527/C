/* Purpose: sub function f(x) = x^3 + 2x^2 + 1, and return result to main */
/* File Name: hw07_05 */
/* Completion Date: 20210530 */
#include <stdio.h>
#include <stdlib.h>
int FofX(int);

int main(void)
{
  int input, result;
  
  printf("Please input an integer x for f(x) = f(x) = x^3 + 2x^2 + 1\n");
  scanf("%d", &input);
  
  result = FofX(input);
  printf("The result is %d\n", result);
  
  system("pause");
  return 0;
}

int FofX(int input)
{
  int result;
  result = input * input * input + 2 * input * input + 1;
  
  return result;
}

