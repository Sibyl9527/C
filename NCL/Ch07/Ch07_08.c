/* Purpose: calculate the circle area */
/* File Name: Ch07_08 */
/* Completion Date: 20210528 */
#include <stdio.h>
#include <stdlib.h>

double area(float r)
{
  return r * r * 3.1415926535;
}

int main(void)
{
  float r;
  
  printf("Please input a radious\n");
  scanf("%f", &r);
  
  printf("The circle area is %f c.m.\n\t", area(r));
  
  system("pause");
  return 0;
}