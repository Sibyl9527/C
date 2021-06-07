/* Purpose: Input 5 number and find out which one is the biggest */
/* File Name: Ch10_08 */
/* Completion Date: 20210604 */
#include <stdio.h>
#define SIZE 5

int main(void)
{
  char array[SIZE] = {'s', 'c', 'i', 'o', 'n'};
  int i, j;
  char temp;
  
  printf("Before sorting: ");
  for (i = 0; i < SIZE; i++) {
	printf("%c ", array[i]);
  }
  
  for (i = 0; i < SIZE; i++) {
	for (j = i + 1; j < SIZE; j++) {
      if (array[i] < array[j]) {
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	  }
	}
  }
  
  printf("\nAfter sorting: ");
  for (i = 0; i < SIZE; i++) {
	printf("%c ", array[i]);
  }

  return 0;
}