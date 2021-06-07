/* Purpose: Input 5 number and find out which one is the biggest */
/* File Name: Ch10_07 */
/* Completion Date: 20210604 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
  int number[SIZE];
  int max = 0, i;
  
  puts("Please input 5 umber, and we will show you the biggest one");
  for (i = 0; i < SIZE; i++) {
	printf("Please input no.%d number\n", i + 1);
	scanf("%d", &number[i]);
  }
  printf("\nThe 5 values are:\n");
  for (i = 0; i < SIZE; i++) {
	printf("%d ", number[i]);
  }
  puts("");
  
  for (i = 0; i < SIZE; i++) {
	if (number[i] > max) {
      max = number[i];
	}
  }
  
  printf("The biggest one is %d\n", max);
  
  system("pause");
  return 0;
}