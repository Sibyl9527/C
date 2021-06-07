/* Purpose: 3-dim array */
/* File Name: Ch10_13 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{
  int array[2][3][4] = {{{54,65,87,95},{41,18,24,98},{45,33,35,70}},
                        {{23,11,79,64},{97,67,40,37},{52,14,69,30}}};
  int i, j, k;
  
  
  for (i = 0; i < 2; i++) {
	for (j = 0; j < 3; j++) { 
	  for (k = 0; k < 4; k++) {
		printf("array[%d][%d][%d] = %d ", i, j, k, array[i][j][k]);
	  }
	  puts("");
	}
	
  }

  return 0;
}