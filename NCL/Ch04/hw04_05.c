/* Purpose: 1/x + 1/(x*x) + 1/(x*x*x) */
/* File Name: hw04_05*/
/* Completion Date: 20210520*/
#include <stdio.h>

int main(void)
{
  float input;
  printf("Please input a number\n");
  scanf("%f", &input);
  printf("The result of 1/x + 1/(x*x) + 1/(x*x*x) is %f\n", 1 / input + 1 / (input * input) + 1 / (input * input * input));
  
  return 0;
}