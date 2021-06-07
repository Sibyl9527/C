/* Purpose: Output monthly calender by two-dim array */
/* File Name: hw10_07 */
/* Completion Date: 20210605 */
#include <stdio.h>
#define ROW 5
#define COL 7

int main(void)
{
  int A[ROW][COL] = {30,31,1,2,3,4,5,
                     6,7,8,9,10,11,12,
                     13,14,15,16,17,18,19,
					 20,21,22,23,24,25,26,
					 27,28,29,30,1,2,3};
  int i, j;
  
  puts(" 2021/06");
  puts(" Sun Mon Tus Wed Thu Fri Sat");
  
  for (i = 0; i < ROW; i++) {
	for (j = 0; j < COL; j++) { //Output A
	  printf("%4d", A[i][j]);
	}
	puts("");
  }

  return 0;
}