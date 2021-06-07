/* Purpose: continue */
/* File Name: Ch06_14*/
/* Completion Date: 20210525*/
#include <stdio.h>

int main(void)
{
  int i;
  
  for (i = 1; i <= 10; i++) {
	if (i == 5)
      continue;
    printf(" %d ", i);
  }
  
  return 0;
}