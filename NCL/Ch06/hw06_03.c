/* Purpose: for loop show 1*1 2*2 ... 10*10 */
/* File Name: hw06_03 */
/* Completion Date: 20210526 */
#include <stdio.h>

int main(void)
{
  int number;
  
  for (number = 1; number <= 10; number++) {
	printf("%d * %d = %d\n", number, number, number * number);
  }

  return 0;
}