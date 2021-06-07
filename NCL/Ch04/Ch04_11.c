/* Purpose: C = (F-32) * 5 / 9 */
/* File Name: Ch04_11*/
/* Completion Date: 20210511*/
#include <stdio.h>

int main(void)
{
  float C, F;
  
  printf("Please enter F \n");
  scanf("%f", &F);
  C = (F - 32) * 5 / 9;
  printf("C is %f\n", C);
  
  return 0;
}