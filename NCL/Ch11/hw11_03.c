/* Purpose: Copy strA to strB and output */
/* File Name: hw11_03 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char strA[] = "Hello";
  char strB[] = "World";
  
  printf("The strA is \"%s\"\n", strA);
  printf("The strB is \"%s\"\n", strB);
  printf("The strB after copy is \"%s\"\n", strcpy(strB, strA));
  
  return 0;
}
