/* Purpose: += *= */
/* File Name: Ch04_08*/
/* Completion Date: 20210511*/
#include <stdio.h>

int main(void)
{
  int a = 23, b = 51;
  
  a += b; /* a = a + b */
  printf("a = %d\n", a);
  
  a *= b;
  printf("b = %d\n", a);
  
  return 0;
}