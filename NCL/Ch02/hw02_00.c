/* Purpose: output a, and see what the %f show. */
/* File Name: hw02_00*/
/* Completion Date: 20210509*/
#include <stdio.h>
int main(void)
{
  float a;
  
  printf("%f\n", a = 15 / 7);
  printf("%f\n", a = 15.0 / 7);
  printf("%f\n", a = 15 / 7.0);
  printf("%f\n", a = 15.0 / 7.0);
  
  
  return 0;
}