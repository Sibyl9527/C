/* Purpose: 99 multiplication table */
/* File Name: Ch10_11 */
/* Completion Date: 20210604 */
#include <stdio.h>
#define ROW 9
#define COL 9

int main(void)
{
  int array[ROW][COL];
  int i, j;
  
  for (i = 0; i < ROW; i++) {
	for (j = 0; j < COL; j++) {
	  array[i][j] = (i + 1) * (j + 1);
	  printf("%2d ", array[i][j]);
	}
	puts("");
  }

  return 0;
}