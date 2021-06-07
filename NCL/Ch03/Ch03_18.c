/* Purpose: scanf function practice*/
/* File Name: Ch03_18*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int i, j;
  
  printf("Please enter two integers\n");
  scanf("%d %d", &i, &j);
  printf("The integers you put are %d and %d\n", i, j);
  printf("The sum of those two integers is %d\n", i + j);
  
  return 0;
}