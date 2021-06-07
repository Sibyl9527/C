/* Purpose: 9X9 */
/* File Name: Ch06_09*/
/* Completion Date: 20210524*/
#include <stdio.h>

int main(void)
{
  int i, j;
  
  for (i = 1; i < 10; i++) {
	for (j = 1; j < 10; j++) {
      printf(" %d * %d = %2d", i, j, i*j);
	}
	printf("\n");
  }
  
  return 0;
}