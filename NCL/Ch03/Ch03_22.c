/* Purpose: getche (don't need to click enter)*/
/* File Name: Ch03_22*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  char character;
  
  printf("Please enter a char\n");
  character = getche();
  printf("\nThe char is %c\n", character);
  
  return 0;
}