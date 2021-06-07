/* Purpose: sub function f(x,y) = x^2 * y + 2x * y + x * y^2, and return result to main */
/* File Name: hw07_06 */
/* Completion Date: 20210530 */
#include <stdio.h>
#include <stdlib.h>
int FofXY(int, int);

int main(void)
{
  int inputX, inputY, result;
  
  printf("Please input two integers x and y for f(x,y) = x^2 * y + 2x * y + x * y^2\n");
  scanf("%d %d", &inputX, &inputY);
  
  result = FofXY(inputX, inputY);
  printf("The result is %d\n", result);
  
  system("pause");
  return 0;
}

int FofXY(int inputX, int inputY)
{
  int result;
  result = inputX * inputX * inputY + 2 * inputX * inputY + inputX * inputY * inputY;
  
  return result;
}

