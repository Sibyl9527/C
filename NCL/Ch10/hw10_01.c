/* Purpose: Calculate square sum from 1 to 10 in an array */
/* File Name: hw10_01 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int i, result = 0;
  
  for (i = 0; i < 10; i++) {
	result += array[i] * array[i];
  }
  printf("The square sum from 1 to 10 is %d\n", result);

  return 0;
}

