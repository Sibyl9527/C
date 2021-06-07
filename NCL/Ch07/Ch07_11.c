/* Purpose: The sum of two integer's nth power */
/* File Name: Ch07_11 */
/* Completion Date: 20210529 */
#include <stdio.h>
#include <stdlib.h>

int Power(int, int);
void PowerSum(int, int, int);

int main(void)
{
  int integer1, integer2;
  
  printf("We will calculate the sum of two integer's power of 2nd to 4th, please input two integers\n");
  scanf("%d %d", &integer1, &integer2);
  
  PowerSum(integer1, integer2, 2);
  PowerSum(integer1, integer2, 3);
  PowerSum(integer1, integer2, 4);
  
  system("pause");
  return 0;
}

void PowerSum(int integer1, int integer2, int n)
{
  int result;
  
  result = Power(integer1, n) + Power(integer2, n);
  printf("The sum of %d and %d's %dth is %d\n", integer1, integer2, n, result);
}

int Power(int value, int n)
{
  int i, w = 1;
  
  for (i = 0; i < n; i++){
    w *= value;
  }
  
  return w;
}