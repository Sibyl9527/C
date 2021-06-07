/* Purpose: goto */
/* File Name: Ch06_15 */
/* Completion Date: 20210525 */
#include <stdio.h>

int main(void)
{
  int i, j, k;
  
  for (i = 0; i < 100; i++) {
	for (j = 0; j < 100; j++) {
	  for (k = 0; k < 100; k++) {
		printf("i = %d, j = %d, k = %d\n", i, j, k);
		goto endloop;
	  }  
	}
  }
  endloop:
  printf("Jump out the for loop\n");
  
  return 0;
}