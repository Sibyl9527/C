/* Purpose: getch */
/* File Name: hw03_10*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  char ch;
  
  printf("Please input a character\n");
  ch = getch();
  printf("\n");
  printf("%The character you enter is %c\n", ch);
  
  return 0;
}