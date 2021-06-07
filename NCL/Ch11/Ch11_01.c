/* Purpose: Output string content and array size */
/* File Name: Ch11_01 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{ 
  char name[] = "John Smith";
  
  printf("name array size = %d\n", sizeof(name));
  printf("name = %s\n", name);

  return 0;
}
