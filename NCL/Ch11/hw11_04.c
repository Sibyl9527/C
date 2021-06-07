/* Purpose: Cascade strB after strA and output */
/* File Name: hw11_04 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char strA[] = "Hello";
  char strB[] = "World";
  
  printf("The strA is \"%s\"\n", strA);
  printf("The strB is \"%s\"\n", strB);
  printf("The strA after cascade is \"%s\"\n", strcat(strA, strB));
  
  return 0;
}
