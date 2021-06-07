/* Purpose: check variable's value */
/* File Name: hw04_00*/
/* Completion Date: 20210520*/
#include <stdio.h>

int main(void)
{
  int x = 0, y = 1;
  
  printf("%d\n", !x && !y);
  printf("%d\n", !x || !y);
  printf("%d\n", x && x && y);
  printf("%d\n", x || y || x);
  

  return 0;
}