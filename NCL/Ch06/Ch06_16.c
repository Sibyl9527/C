/* Purpose: 1~100 prime number */
/* File Name: Ch06_16 */
/* Completion Date: 20210525 */
#include <stdio.h>

int main(void)
{
  int i, j, flag, line;
  line = 0;
  
  for (i = 2; i < 100; i++) {
	flag = 0;
	for (j = 2; j < i; j++) {
      if (i % j == 0) {
		flag = 1;
	  }
	}
	if (flag == 0) {
	  printf("%3d ", i);
	  line++;
	  if (line % 5 == 0) {
	    printf("\n");
	  }
	}	
  }
  
  return 0;
}