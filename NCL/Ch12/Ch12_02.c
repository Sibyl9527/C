/* Purpose: Calculate different type of opinter's capacity */
/* File Name: Ch12_02 */
/* Completion Date: 20210607 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int *intptr;
  char *charptr;
  float *floatptr;
  double *doubleptr;
  
  puts("The different type of pointer's capacity");
  printf("intptr    = %d bytes\n", sizeof(intptr));
  printf("charptr   = %d bytes\n", sizeof(charptr));
  printf("floatptr  = %d bytes\n", sizeof(floatptr));
  printf("doubleptr = %d bytes\n", sizeof(doubleptr));
  
  return EXIT_SUCCESS;
}
