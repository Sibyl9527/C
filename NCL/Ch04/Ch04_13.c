/* Purpose: Input a number, and the program will output 1, 5, 10 coins for you */
/* File Name: Ch04_13*/
/* Completion Date: 20210519*/
#include <stdio.h>

int main(void)
{
  int money;
  int ten, five, one;
  
  printf("Please enter a number\n");
  scanf("%d", &money);
  ten = money / 10;
  five = (money % 10) / 5;
  one = (money % 10) % 5;
  printf("The changes\n 10 coins = %d\n 5 coins = %d\n 1 coins = %d\n", ten, five, one);

  return 0;
}