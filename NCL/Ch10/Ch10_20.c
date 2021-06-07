/* Purpose: check the numbers in array are odd or even by sub function */
/* File Name: Ch10_20 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <stdlib.h>

void even(int[]);
void odd(int[]);

int main(void)
{
  int array[10] = {36,45,64,98,71,
                   46,78,97,20,81};
  even(array);
  odd(array);

  return 0;
}

void even(int array[]) {
  int i;
  
  puts("Evens:");
  for (i = 0; i < 10; i++) {
	if (array[i] % 2 == 0) {
	  printf("%d ", array[i]);
	}
  }
  puts("");
}

void odd(int array[]) {
  int i;
  
  puts("Odds:");
  for (i = 0; i < 10; i++) {
	if (array[i] % 2 != 0) {
	  printf("%d ", array[i]);
	}
  }
  puts("");
}