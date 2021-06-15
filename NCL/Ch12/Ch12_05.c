/* Purpose: Pointer +- memory address (we can see that int 4 bytes and char 1 byte) */
/* File Name: Ch12_05 */
/* Completion Date: 20210608 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int *ptri; // Integer pointer
  int i; // for loop control and 
  char *ptrc; // Char pointer
  char c;
  
  ptri = &i;
  ptrc = &c;
  
  for (i = 3; i >= 1; i--) { // move down
	printf("Pointer ptri - %d = %p Pointer ptrc - %d = %p\n",
	       i, 
		   ptri - i, 
		   i, 
		   ptrc - i);
  }
  printf("Pointer ptri = %p Pointer ptrc = %p\n", ptri, ptrc);
  
  for (i = 1; i <= 3; i++) { // move up
	printf("Pointer ptri + %d = %p Pointer ptrc + %d = %p\n",
	       i,
		   ptri + i,
		   i,
		   ptrc + i);
  }
  
  return EXIT_SUCCESS;
}
