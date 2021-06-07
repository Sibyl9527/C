/* Purpose: C to F */
/* File Name: hw04_06*/
/* Completion Date: 20210520*/
#include <stdio.h>

int main(void)
{
  float input;
  
  printf("Please input a C\n");
  scanf("%f", &input);
  printf("The C %.2f change to F is %.2f\n", input, input * 1.8 + 32);
  
  return 0;
}