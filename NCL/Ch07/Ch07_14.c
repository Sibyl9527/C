/* Purpose: Calculate the result of factorial (diff from Ch07_13) */
/* File Name: Ch07_14 */
/* Completion Date: 20210529 */
#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main(void)
{
  int n;
  
  printf("Calculate the result of n factorial, please input n\n");
  scanf("%d", &n);
  printf("%d\n", fact(n));
  
  system("pause");
  return 0;
}

int fact(int n)
{
  int result = 1;
  
  if (n != 0) {
	result = n * fact(n-1);
  }
  return result;
}
