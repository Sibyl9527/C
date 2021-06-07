/* Purpose: calculate shopping total amount */
/* File Name: Ch04_02*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{
  int egg = 30, toast = 18, ham = 34, milk = 25, total;
  
  total = egg * 2 + toast * 3 + ham / 2 + milk * 4;
  
  printf("The total amount is %d", total);
  
  return 0;
}