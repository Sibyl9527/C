/* Purpose: Put string into array when we didn't set the initial values */
/* File Name: Ch11_05 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{ 
  char name[11];
  
  name[0] = 'J';
  name[1] = 'o';
  name[2] = 'h';
  name[3] = 'n';
  name[4] = ' ';
  name[5] = 'S';
  name[6] = 'm';
  name[7] = 'i';
  name[8] = 't';
  name[9] = 'h';
  name[10] = '\0';
  
  printf("name = %s\n", name);
  
  return 0;
}
