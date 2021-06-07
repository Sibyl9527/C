/* Purpose: Sum of polynominal */
/* File Name: Ch08_05 */
/* Completion Date: 20210531 */
#include <stdio.h>
#include <stdlib.h>
#define F(x,y) x * x + y * y

int main(void)
{
  int i, n , sum = 0;
  
  puts("Calculate the sum of (1^2 + 2^2) + (2^3 + 3^2 + ... + n^2 + (n+1)^2");
  puts("Please input item n");
  scanf("%d", &n);
  
  for (i = 1; i <= n; i++) {
	sum += F(i, (i+1));
  }
  printf("The sum is %d\n", sum);
  
  system("pause");
  return 0;
}