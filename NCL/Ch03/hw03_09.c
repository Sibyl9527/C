/* Purpose: getche */
/* File Name: hw03_09*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  char ch;
  
  printf("Please input a character\n");
  ch = getche();
  printf("\n");
  printf("%The character you enter is %c\n", ch);
  
  return 0;
}