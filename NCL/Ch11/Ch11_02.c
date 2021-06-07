/* Purpose: Output string content (\0) and array size */
/* File Name: Ch11_02 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{ 
  char name[] = "John\0Smith";
  
  printf("name array size = %d\n", sizeof(name));
  printf("name = %s\n", name);

  return 0;
}
