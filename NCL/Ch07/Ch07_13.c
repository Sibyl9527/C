/* Purpose: Calculate the result of factorial */
/* File Name: Ch07_13 */
/* Completion Date: 20210529 */
#include <stdio.h>
#include <stdlib.h>

void fact(int, int);

int main(void)
{
  int n;
  
  printf("Calculate the result of n factorial, please input n\n");
  scanf("%d", &n);
  
  fact(n, 1);
  
  system("pause");
  return 0;
}

void fact(int n, int result)
{
  if (n != 0) {
    result *= n;
	printf("%d *", n);
	fact(n - 1, result);
  } else {
	printf("\b =%d\n", result);
  }
}
