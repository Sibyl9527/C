/* Purpose: circle area calculation */
/* File Name: Ch04_12*/
/* Completion Date: 20210519*/
#include <stdio.h>

int main(void)
{
  float area, r, pai = 3.14;
  
  printf("Please enter radious\n");
  scanf("%f", &r);
  area = r * r * pai;
  printf("Circle area is %6.2f\n", area);
  2
  return 0;
}