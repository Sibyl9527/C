/* Purpose: float for */
/* File Name: Ch06_08*/
/* Completion Date: 20210524*/
#include <stdio.h>

int main(void)
{
  float sum, count;
  
  for (sum = 0.0, count = 0.1; count < 1.1; sum += count, count += 0.1)
	printf("%.1f + ", count);
  printf("\b\b= %.1f\n", sum);
  
  return 0;
}