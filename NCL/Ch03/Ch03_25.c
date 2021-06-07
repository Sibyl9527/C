/* Purpose: f(x) = 2x + y */
/* File Name: Ch03_25*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int x, y, answer;
  
  printf("f(x,y) = 2x + y\n");
  printf("Please enter x\n");
  scanf("%d", &x);
  printf("Please enter y\n");
  scanf("%d", &y);
  answer = 2 * x + y;
  printf("The answer is %d\n", answer);
  
  return 0;
}