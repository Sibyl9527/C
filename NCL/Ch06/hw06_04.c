/* Purpose: multiple of 5 from 1 to 100 */
/* File Name: hw06_04 */
/* Completion Date: 20210526 */
#include <stdio.h>

int main(void)
{
  int number;
  
  for (number = 1; number <= 100; number++) {
	if (number % 5 == 0)
	  printf("%d ", number);
  }

  return 0;
}