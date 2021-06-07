/* Purpose: accumulate odd number from 1 to 100 */
/* File Name: Ch06_06*/
/* Completion Date: 20210524*/
#include <stdio.h>

int main(void)
{
  int count, sum = 0;
  for (count = 1; count < 100; count += 2) {
	sum += count;
  }
  
  printf("The odd sum from 1 to 100 is %d\n", sum);
  
  return 0;
}