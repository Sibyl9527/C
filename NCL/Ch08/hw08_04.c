/* Purpose: +-x/ by MACRO */
/* File Name: hw08_04 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define ADD x + y
#define SUB x - y
#define MULT x * y
#define DIV	x / y

int main(void)
{
  float x, y;
  
  puts("Please input x, y");
  scanf("%f %f", &x, &y);
  printf("x + y = %f\n x - y = %f\n x * y = %f\n x / y = %f\n", ADD, SUB, MULT, DIV);
  
  system("pause");
  return 0;
}