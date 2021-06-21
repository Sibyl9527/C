// Purpose: Declare array size as a const external int, put values into array and output value in the sub function;
// File Name: hw13_07
// Completion Date: 20210618
#include <stdio.h>
#include <stdlib.h>
const int size = 10; // array size
void Output(int *);

int main(void)
{
  int array[size];
  int i;
  
  for (i = 0; i < 10; i++) { // assign values to array
	array[i] = i;
  }
  
  Output(&array[0]); // output array elements
  
  return EXIT_SUCCESS;
}

void Output(int *array)
{
  int i;
  
  for (i = 0; i < 10; i++) {
	printf("%d ", array[i]);  
  }
  puts("");
}



 
