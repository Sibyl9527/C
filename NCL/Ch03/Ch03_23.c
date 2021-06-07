/* Purpose: getch (don't show anything when you input)*/
/* File Name: Ch03_23*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  char character;
  
  printf("Please enter a char\n");
  character = getch();
  printf("\nThe char is %c\n", character);
  
  return 0;
}