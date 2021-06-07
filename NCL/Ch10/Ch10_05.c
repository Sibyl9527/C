/* Purpose: Calculate square sum from 1 to 10 and save them to the array */
/* File Name: Ch10_05 */
/* Completion Date: 20210604 */
#include <stdio.h>
#define SIZE 10

int main(void)
{
  int number[SIZE];
  int i;
  
  for (i = 0; i < SIZE; i++) {
	number [i] = (i + 1) * (i +	1);
  }
  
  for (i = 0; i < SIZE; i++) {
	printf("number[%d] is %d\n", i, number[i]);
  }
  
  return 0;
}