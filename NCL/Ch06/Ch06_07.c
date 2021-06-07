/* Purpose: calculate the sum of (1+2) + (2+4) + ... + (n+2n) */
/* File Name: Ch06_07*/
/* Completion Date: 20210524*/
#include <stdio.h>

int main(void)
{
  int i, j, n, sum = 0;
  
  printf("Calculate the sum of (1+2) + (2+4) + ... + (n+2n)\n");
  printf("Please input n:\n");
  scanf("%d", &n);
  
  for(i = 1, j = 2; i <= n, j <= 2*n; i++, j += 2) {
	sum += i + j;
	printf("(%d + %d) + ", i, j);
  }
  printf("\b\b= %d\n", sum);
  
  return 0;
}