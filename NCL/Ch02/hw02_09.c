/* Purpose: Exchange a b c. */
/* File Name: hw02_09*/
/* Completion Date: 20210509*/
#include <stdio.h>

int main(void)
{
  int a = 10, b = 20, c = 30;
  int temp;
  
  temp = a;
  a = c;
  c = b;
  b = temp;
  
  printf("a = %d, b = %d, c = %d.\n", a, b, c);
  
  return 0;
}