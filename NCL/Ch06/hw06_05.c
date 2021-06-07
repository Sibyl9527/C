/* Purpose: show star rectangle by input row and col */
/* File Name: hw06_05 */
/* Completion Date: 20210526 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int row, col, row_count, col_count;
  
  printf("Please input a row and a col, and we will show you a star rectangle\n");
  scanf("%d %d", &row, &col);
  
  for (row_count = 1; row_count <= row; row_count++) {
	for (col_count = 1; col_count <= col; col_count++)
      printf("*");
    printf("\n");
  }

  system("pause");
  return 0;
}