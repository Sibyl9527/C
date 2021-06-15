// Purpose: Output the contents of array[5] = {2, 3, 4, 5, 6} by pointer
// File Name: hw12_04
// Completion Date: 20210613
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int array[5] = {2, 3, 4, 5, 6};
  int *ptr;
  int i; // for loop value
  
  ptr = array; // assign array address to ptr
  
  for (i = 0; i < 5; i++) { // output content by pointer
	printf("*(ptr + %d) = %d\n", i, *(ptr + i));
  }
  
  return EXIT_SUCCESS;
}  
