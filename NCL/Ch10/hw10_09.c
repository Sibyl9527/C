/* Purpose: Create a 2-dim array and give values. Find out the max and min by sub function */
/* File Name: hw10_09 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MYRANDOM() srand((unsigned) time(NULL))
#define SIZE 5
void MAX(int array[][SIZE]);
void MIN(int array[][SIZE]);

int main(void)
{ 
  int i, j;
  int a[SIZE][SIZE];
  
  MYRANDOM();
  
  printf("Array a:\n");
  for (i = 0; i < SIZE; i++) {
	for (j = 0; j < SIZE; j++) {
	  a[i][j] = rand();
	  printf("%5d ", a[i][j]);  
	}
    puts("");	
  }
  puts("");
  MAX(a);
  MIN(a);

  return 0;
}

void MAX(int array[][SIZE])
{
  int i, j, result = array[0][0];
  for (i = 0; i < SIZE; i++) {
	for (j = 0; j < SIZE; j++) {
	  if (array[i][j] > result) {
		result = array[i][j];
	  }
	}
  }
  printf("The max element from array is %d\n", result);
}

void MIN(int array[][SIZE])
{
  int i, j, result = array[0][0];
  for (i = 0; i < SIZE; i++) {
	for (j = 0; j < SIZE; j++) {
	  if (array[i][j] < result) {
		result = array[i][j];
	  }
	}
  }
  printf("The min element from array is %d\n", result);
}