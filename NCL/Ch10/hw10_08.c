/* Purpose: Random 10 numbers and put them in the array and then run bubble sort sub function to order them by desc */
/* File Name: hw10_08 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MYRANDOM() srand((unsigned) time(NULL))
#define SIZE 10
void bubble(int array[SIZE]);

int main(void)
{ 
  int i;
  int a[SIZE];
  
  MYRANDOM();
  
  printf("The random 10 numbers:\n");
  for (i = 0; i < SIZE; i++) {
	a[i] = rand();
	printf("%d ", a[i]);
  }
  puts("");
  bubble(a);

  return 0;
}

void bubble(int array[SIZE])
{
  int i, j, temp;
  for (i = 0; i < SIZE; i++) {
	for (j = i + 1; j < SIZE; j++) {
	  if (array[j] > array[i]) {
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	  }
	}
  }
  printf("After arranging:\n");
  for (i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }
  puts("");
}