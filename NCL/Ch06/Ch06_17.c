/* Purpose: Output * sign by user input */
/* File Name: Ch06_17 */
/* Completion Date: 20210525 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j, k;
  int n;
  
  do {
	printf("Please input a base (odd number)\n");
	scanf("%d", &n);
  } while (n % 2 == 0);
  
  for (i = 0; i <= n / 2; i++) { // change row
	for (j = n / 2; j > i; j--) { // output space
      printf(" ");
	}
	for(k = 0; k <= 2 * i; k++) { // output * sign
	  printf("*");
	}
	printf("\n");
  }
  
  system("pause");
  return 0;
}