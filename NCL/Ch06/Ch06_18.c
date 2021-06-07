/* Purpose: Output right triangle by uppercase alphabet */
/* File Name: Ch06_18 */
/* Completion Date: 20210525 */
#include <stdio.h>

int main(void)
{
  int i, j;
  
  for (i = 0; i < 7; i++) {
	for (j = 0; j < i; j++)
	  printf("%c", j + 65);
    printf("\n");
  }
  
  return 0;
}