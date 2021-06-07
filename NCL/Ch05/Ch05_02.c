/* Purpose: recongnize singular and double */
/* File Name: Ch05_02*/
/* Completion Date: 20210522*/
#include <stdio.h>

int main(void)
{
  int integer;
  
  printf("Singular or double? Please input a number\n");
  scanf("%d", &integer);
  
  if (integer % 2 == 0)
    printf("The number %d is double.\n", integer);
  else
	printf("The number %d is singular. \n", integer);
	  
  return 0;
}