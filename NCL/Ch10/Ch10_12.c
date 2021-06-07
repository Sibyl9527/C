/* Purpose: Sum of two 2-dim array */
/* File Name: Ch10_12 */
/* Completion Date: 20210604 */
#include <stdio.h>
#define ROW 3
#define COL 4

int main(void)
{
  int A[ROW][COL] = {18,44,21,25,
                     21,19,65,41,
                     78,21,33,54};
  int B[ROW][COL] = {65,32,45,74,
                     11,24,10,41,
					 12,45,18,11};
  int C[ROW][COL];
  int i, j;
  
  for (i = 0; i < ROW; i++) {
	for (j = 0; j < COL; j++) { //Output A
	  printf("%3d", A[i][j]);
	}
	if (i == 1) {
      printf("  +  ");
	} else {
	  printf("     ");
	}
	
	for (j = 0; j < COL; j++) { //Output B
	  printf("%3d", B[i][j]);
	}
	if (i == 1) {
      printf("  =  ");
	} else {
	  printf("     ");
	}
	
	for (j = 0; j < COL; j++) { //Show C (sum of A and B)
	  C[i][j] = A[i][j] + B[i][j];
	  printf("%3d", C[i][j]);
	}
	puts("");
  }

  return 0;
}