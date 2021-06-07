/* Purpose: compare two value and return bigger one */
/* File Name: hw07_03 */
/* Completion Date: 20210530 */
#include <stdio.h>
#include <stdlib.h>
float compare(float, float);

int main(void)
{
  float num1, num2, result;
  
  printf("Please input two number\n");
  scanf("%f %f", &num1, &num2);
  
  result = compare(num1, num2);
  printf("%f is the bigger one\n", result);
  
  system("pause");
  return 0;
}

float compare(float num1, float num2)
{
  return num1 > num2 ? num1 : num2;
}

