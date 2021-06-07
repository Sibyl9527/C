/* Purpose: Set the initial value of the array */
/* File Name: Ch10_01 */
/* Completion Date: 20210603 */
#include <stdio.h>

int main(void)
{
  int number[5] = {2,4,12,6,18};
  int i;
  
  printf("The size of the array is %d byte\n", sizeof(number));
  
  for (i = 0; i < 5; i++) {
	printf("number[%d] is %d\n", i, number[i]);
  }
  
  return 0;
}