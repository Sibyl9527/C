/* Purpose: 1/x + 1/x*x + 1/x*x*x + 1/x's n ; x, n input by user */
/* File Name: hw06_09 */
/* Completion Date: 20210526 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x, n, i, j, x_multi = 1;
  float result = 0;
  
  printf("Please input two variable\n");
  scanf("%d %d", &x, &n);
  
  for (i = 1; i <= n; i++) {
	for (j = 1; j <= i; j++) {
		x_multi *= x;
	}
	result += (float)1 / x_multi;
	x_multi = 1;
  }
  
  printf("The result is %f\n", result);

  system("pause");
  return 0;
}