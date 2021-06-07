/* Purpose: getchar and putchar practice*/
/* File Name: Ch03_21*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  char character;
  
  printf("Please enter a char\n");
  character = getchar();
  putchar(character);
  
  return 0;
}