/* Purpose: output count sheeps*/
/* File Name: Ch03_05*/
/* Completion Date: 20210509*/
#include <stdio.h>

int main(void)
{
  int n1 = 1, n2 = 2;
  char nx = 'x', nz = 'z';
  
  printf("No.%d sheep...\n", n1);
  printf("No.%d sheep...\n", n2);
  printf("No.%c sheep...\n", nx);
  printf("No.%d%c sheep...\n", n1, nx);
  printf("No.%d%c sheep...\n", n2, nx);
  printf("No.%c%c%c sheep...\n", nx, nx, nx);
  printf("...%c%c%c\n", nz, nz, nz);
  
  return 0;
}