/* Purpose: kg to lb */
/* File Name: hw04_04*/
/* Completion Date: 20210520*/
#include <stdio.h>

int main(void)
{
  float input;
  printf("(Kg to lb) please enter a number\n");
  scanf("%f", &input);
  printf("The %.2f Kg is %.2f lb\n", input, input * 2.2);
  
  return 0;
}