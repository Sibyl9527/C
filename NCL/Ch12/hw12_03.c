// Purpose: Follow hw12_02, assign the addresses of a, b, c and d to *e, *f, *g and *h
//          Output the contents and addresses of *e, *f, *g and *h
// File Name: hw12_03
// Completion Date: 20210613
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int a;
  int b;
  int c;
  int d;
  int *e;
  int *f;
  int *g;
  int *h;
  
  e = &a;
  f = &b;
  g = &c;
  h = &d;
  
  printf("The address of a is %p\n", e);
  printf("The address of b is %p\n", f);
  printf("The address of c is %p\n", g);
  printf("The address of d is %p\n", h);
  
  printf("The address of a is %d\n", *e);
  printf("The address of b is %d\n", *f);
  printf("The address of c is %d\n", *g);
  printf("The address of d is %d\n", *h);
  
  return EXIT_SUCCESS;
}  
