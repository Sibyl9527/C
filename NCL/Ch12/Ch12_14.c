// Purpose: Produce 4 digits number by user
// File Name: Ch12_14
// Completion Date: 20210613 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define myrandom() srand((unsigned)time(NULL));

int *generator(int);

int main(void)
{ 
  int *number;
  int i; // for loop control
  int n; // how many 4 digits numbers
  
  printf("%s", "How many 4 digits numbers do you want to produce? ");
  scanf("%d", &n);
  number = generator(n);
  for (i = 0; i < n; i++) {
	if (i % 6 == 0) { // new line every 6 nubmers
	  puts("");
	}
	printf("%04d ", *(number + i));
  }
  
  return EXIT_SUCCESS;
}

int *generator(int n)
{
  int *ptr; // saving numbers
  int i; // for loop control
  
  ptr = (int *)malloc(sizeof(int) * n);
  myrandom();
  for (i = 0; i < n; i++) {
	*(ptr + i) = rand() % 9999;
  }
  return ptr;
}