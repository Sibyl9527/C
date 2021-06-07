/* Purpose: sub function declare in main function */
/* File Name: Ch07_09 */
/* Completion Date: 20210529 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float c;
  float ctof(float);
  
  printf("Please input the temperature now\n");
  scanf("%f", &c);
  printf("The temperature now is %f C, %f F\n", c, ctof(c));
  
  system("pause");
  return 0;
}

float ctof(float c)
{
  return c * 9 / 5 + 32;
}