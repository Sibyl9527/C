/* Purpose: Remainder */
/* File Name: Ch04_03*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{
  int TotalBall, ball, left;
  TotalBall = 100;
  ball = 7;
  
  left = TotalBall % ball;
  
  printf("Remainder is %d\n", left);
  
  return 0;
}