/* Purpose: assign different value to variable */
/* File Name: Ch04_07*/
/* Completion Date: 20210511*/
#include <stdio.h>

int main(void)
{
  int i, j;
  i = 10;
  
  j = i + 10;
  i = i + j;
  j = j + 1;
  
  printf(" i is %d\n", i);
  printf(" j is %d \n", j);
  
  return 0;
}