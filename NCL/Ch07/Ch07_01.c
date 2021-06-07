/* Purpose: Find the maximum number in 8 integers by if-else */
/* File Name: Ch07_01 */
/* Completion Date: 20210528 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int num1, num2, num3, num4, num5, num6, num7, num8;
  int bigger1, bigger2, bigger3, bigger4, secondbig1, secondbig2, biggest;
  
  printf("Please input 8 integers\n");
  scanf("%d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8);
  
  if (num1 > num2) 
	bigger1 = num1;
  else
	bigger1 = num2;

  if (num3 > num4) 
	bigger2 = num3;
  else
	bigger2 = num4;

  if (num5 > num6) 
	bigger3 = num5;
  else
	bigger3 = num6;

  if (num7 > num8) 
	bigger4 = num7;
  else
	bigger4 = num8;

  if (bigger1 > bigger2)
	secondbig1 = bigger1;
  else
	secondbig1 = bigger2;

  if (bigger3 > bigger4)
	secondbig2 = bigger3;
  else
	secondbig2 = bigger4;
  
  if (secondbig1 > secondbig2)
	biggest = secondbig1;
  else
	biggest = secondbig2;

  printf("The biggest one is %d\n", biggest);
  

  system("pause");
  return 0;
}