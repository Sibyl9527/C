// Purpose: Double pointer
// File Name: Ch12_15
// Completion Date: 20210613 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int i; // variable
  int *ptr1; // pointer
  int **ptr2; // double pointer
  i = 10;
  
  ptr1 = &i;
  ptr2 = &ptr1;
  
  printf("i      = %d; &i    = %p;\n", i, &i);
  printf("*ptr1  = %d; ptr1  = %p;\n", *ptr1, ptr1);
  printf("**ptr2 = %d; *ptr2 = %p; ptr2= %p;\n", **ptr2, *ptr2, ptr2);
  
  
  return EXIT_SUCCESS;
}