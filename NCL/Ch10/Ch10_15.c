/* Purpose: Through sub function to find a maximum number from an array */
/* File Name: Ch10_15 */
/* Completion Date: 20210605 */
#include <stdio.h>
int maximum(int []);

int main(void)
{
  int number[8] = {15,86,72,65,46,44,66,33};
  
  printf("The maximum number from the array is %d\n", maximum(number));
  
  return 0;
}

int maximum(int number[])
{
  int MAX = 0, i;
  
  for (i = 0; i < 8; i++) {
	if (number[i] > MAX) {
	  MAX = number[i];
	}
  }
  return MAX;
}