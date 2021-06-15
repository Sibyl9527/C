// Purpose: Double pointer accesses strings
// File Name: Ch12_16
// Completion Date: 20210613 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  char *ptrStore[3] = {0};
  char **ptr = &ptrStore[0];
  int n;
  int m;
  char *string1 = "BOOK";
  char *string2 = "FOR";
  char *string3 = "YOU";

  *ptr = string1;
  *(ptr + 1) = string2;
  *(ptr + 2) = string3;

  printf("\n The address of ptr is %p\n", ptr);
  for (n = 0; n < 3; n++) {
	printf("\nThe address of *(ptr + %d) is %p\n", n, *(ptr + n));
	printf("The address of (ptr + %d) save at %p\n", n, ptr + n);
	printf("The value of string1 pointer *(ptr + %d) is %s\n", n, *(ptr + n));
	for (m = 0; *(*(ptr + n) + m) != '\0'; m++) {
      printf("*(*(ptr + %d) + %d) = %c\n", n, m, *(*(ptr + n) + m));
	}	
  } 
  
  return EXIT_SUCCESS;
}