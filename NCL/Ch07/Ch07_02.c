/* Purpose: Find the maximum number in 8 integers by sub function */
/* File Name: Ch07_02 */
/* Completion Date: 20210528 */
#include <stdio.h>
#include <stdlib.h>

int compare (int, int);

int main(void)
{
  int num1, num2, num3, num4, num5, num6, num7, num8;
  int bigger1, bigger2;
  
  printf("Please input 8 integers\n");
  scanf("%d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8);
  
  bigger1 = compare(compare(num1, num2), compare(num3, num4));
  bigger2 = compare(compare(num5, num6), compare(num7, num8));
  
  printf("The biggest one is %d\n", compare(bigger1, bigger2));
  
  system("pause");
  return 0;
}

int compare (int cnum1, int cnum2)
{
  int bigger;
  
  if (cnum1 > cnum2)
	return cnum1;
  else
	return cnum2;
}