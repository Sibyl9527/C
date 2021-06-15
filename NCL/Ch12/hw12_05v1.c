// Purpose: Output the contents of array[3][5] = {{2, 3, 4, 5, 6}, {7, 8, 9, 10, 11}, {12, 13, 14, 15, 16}} by pointer array
// File Name: hw12_05v1
// Completion Date: 20210613
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int array[3][5] = {{2, 3, 4, 5, 6}, {7, 8, 9, 10, 11}, {12, 13, 14, 15}};
  int i; // for loop value
  int j;
  
  for (i = 0; i < 3; i++) { // output content by pointer
    for (j = 0; j < 5; j++) {
		if (((*(array + i))[j]) == '\0') {
		  break;
		} else {
		  printf("%d ", (*(array + i))[j]);	
		}     
	}
  puts("");
  }
  
  return EXIT_SUCCESS;
}  
