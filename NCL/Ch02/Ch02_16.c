/* Purpose: Exchange variable's number*/
/* File Name: Ch02_16*/
/* Completion Date: 20210509*/
#include <stdio.h>

int main(void)
{
  int a, b, temp;
  
  a = 10, b = 20;
  printf(" The initial a = %d, b = %d\n", a, b);
  
  temp = a;
  a = b;
  b = temp;
  printf("After the number has been exchaged.\n a = %d, b = %d\n", a, b);
  
  return 0;
}

