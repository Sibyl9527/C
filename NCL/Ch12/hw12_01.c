// Purpose: Output i = 5 by pointer
// File Name: hw12_01
// Completion Date: 20210613
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int *ptr; // declare a pointer
  int i = 5;
  
  ptr = &i; // assign the address of i to pointer ptr
  printf("The value i by pointer output is %d\n", *ptr);
  
  return EXIT_SUCCESS;
}