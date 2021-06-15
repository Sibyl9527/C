// Purpose: Pointer bubble sort
// File Name: Ch12_19
// Completion Date: 20210613
#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main(void)
{ 
  int *array;
  int i; // for assign, bubble sort outter and output loop
  int j; // for bubble sort inner loop
  int n; // items
  
  printf("%s", "How many numbers do you want to order by?");
  scanf("%d", &n);
  array = (int *)malloc(sizeof(int) * n);
  
  printf("Please input %d number:\n", n);
  for (i = 0; i < n; i++) { // assign value to array
	printf("No.%d :", i + 1);
	scanf("%d", array + i);
  }
  for (i = 0; i < n - 1; i++) { // bubble sort
	for (j = i + 1; j < n; j++) {
	  if (*(array + i) > *(array + j)) {
		swap(array + i, array + j); // call swap
	  }
	}
  }
  
  puts("\n The sorting result:");
  for (i = 0; i < n; i++) {
	printf("%d ", *(array + i));
  }
  puts("");
  free(array); 
  
  return EXIT_SUCCESS;
}

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}