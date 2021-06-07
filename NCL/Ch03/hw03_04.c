/* Purpose: f(x) = 3x + 2, x input by user*/
/* File Name: hw03_04*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int x;
  
  printf("f(x) = 3x + 2, x as integer\n");
  printf("please input x\n");
  scanf("%d", &x);
  printf("The answer is %d \n", 3 * x + 2);
  
  return 0;
}