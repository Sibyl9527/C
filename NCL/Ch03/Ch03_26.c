/* Purpose: number to char */
/* File Name: Ch03_26*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int i;
  
  printf("Please enter a number between 65 to 122\n");
  scanf("%d", &i);
  printf("The ASCII is %c\n", i);
  
  return 0;
}