/* Purpose: Output data from two dimentional array */
/* File Name: Ch10_10 */
/* Completion Date: 20210604 */
#include <stdio.h>
#define ROW 5
#define COL 4

int main(void)
{
  int array[ROW][COL] = {54,65,87,95,
                         41,18,24,98,
						 45,33,35,70,
						 23,11,79,64,
						 97,67,40,37};
  int i, j;
  
  for (i = 0; i < ROW; i++) {
	for (j = 0; j < COL; j++) {
	  printf("a[%d][%d] = %d", i, j, array[i][j]);
	}
	puts("");
  }

  return 0;
}