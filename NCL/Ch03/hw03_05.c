/* Purpose: f(x,y,z) = 3x + 2y - z, x,y,z input by user*/
/* File Name: hw03_05*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int x, y, z;
  
  printf("f(x,y,z) = 3x + 2y - z, x,y,z as integer\n");
  printf("please input x\n");
  scanf("%d", &x);
  printf("please input y\n");
  scanf("%d", &y);
  printf("please input z\n");
  scanf("%d", &z);
  printf("The answer is %d \n", 3 * x + 2 * y - z);
  
  return 0;
}