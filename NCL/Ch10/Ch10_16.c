/* Purpose: Through sub function to make 9x9 table */
/* File Name: Ch10_16 */
/* Completion Date: 20210605 */
#include <stdio.h>
#define SIZE 9
void output(int[][SIZE]);

int main(void)
{
  int array[SIZE][SIZE];
  int i, j;
  
  for (i = 0; i < SIZE; i++) {
	for (j = 0; j < SIZE; j++) {
	  array[i][j] = (i + 1) * (j + 1);
	}
  }
  
  output(array);
  
  return 0;
}

void output(int array[][SIZE])
{
  int i, j;
  
  for (i = 0; i < SIZE; i++) {
	for (j = 0; j < SIZE; j++) {
	  printf("%2d ", array[i][j]);
	}
	puts("");
  }
}