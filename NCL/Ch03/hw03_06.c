/* Purpose: input two variables, output sum, diff, multiply */
/* File Name: hw03_06*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int x, y;
  
  printf("Please input two integers\n");
  scanf("%d %d", &x, &y);
  printf("The sum is %d\n", x + y);
  printf("The diff is %d\n", x - y);
  printf("The multiply is %d\n", x * y);
  
  return 0;
}