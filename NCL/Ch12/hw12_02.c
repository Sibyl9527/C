// Purpose: Output the addresses of variables a b c d
// File Name: hw12_02
// Completion Date: 20210613
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int a;
  int b;
  int c;
  int d;
  
  printf("The address of a is %p\n", a);
  printf("The address of b is %p\n", b);
  printf("The address of c is %p\n", c);
  printf("The address of d is %p\n", d);
  
  return EXIT_SUCCESS;
}