/* Purpose: Output string ny pointer */
/* File Name: Ch11_04 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{ 
  char *name = "John Smith";
  
  printf("pointer name size = %d\n", sizeof(name));
  printf("name = %s\n", name);

  return 0;
}
