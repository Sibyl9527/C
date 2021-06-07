/* Purpose: && || */
/* File Name: Ch04_06*/
/* Completion Date: 20210511*/
#include <stdio.h>

int main(void)
{
  int a = 2, b = 2;
  
  printf("a + b > a - b && a + b < a - b the result is %d\n", a + b > a - b && a + b < a - b);
  printf("a + b > a - b || a + b < a - b the result is %d\n", a + b > a - b || a + b < a - b);
  
  return 0;
}