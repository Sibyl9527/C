/* Purpose: add 1 to 100 by for loop */
/* File Name: Ch06_01*/
/* Completion Date: 20210523*/
#include <stdio.h>

int main (void)
{
  int sum, i;
  sum = 0;
  
  for (i = 1; i <= 100; i++) {
    sum +=i;
	printf("The sum is %d now\n", sum);
  }  
  
  return 0;
}