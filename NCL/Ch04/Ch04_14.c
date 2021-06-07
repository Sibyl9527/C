/* Purpose: check the input an alphabet is an uppercase or a lowercase */
/* File Name: Ch04_14*/
/* Completion Date: 20210519*/
#include <stdio.h>

int main(void)
{
  int uppercase, lowercase;
  char ch;
  
  printf("Please enter an alphabet\n");
  scanf("%c", &ch);
  uppercase = ch > 64 && ch < 91;
  lowercase = ch > 96 && ch < 123;
  
  if (uppercase == 1)
	  printf("You enter an uppercase\n");
  else if (lowercase == 1)
	  printf("You enter a lowercase\n");
  else
	  printf("Your input is not an alphabet!\n");

  return 0;
}