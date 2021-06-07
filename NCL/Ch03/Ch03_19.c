/* Purpose: scanf function practice part2*/
/* File Name: Ch03_19*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int number;
  
  printf("Please enter an integer\n");
  scanf("%d", &number);
  printf("The integer you put is %d\n", number);
  
  return 0;
}