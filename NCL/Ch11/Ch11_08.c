/* Purpose: String size and memory size */
/* File Name: Ch11_08 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char string1[] = "Money is power";
  
  
  printf("String length %d bytes\n", strlen(string1));
  printf("Memory space %d bytes\n", sizeof(string1));
  
  return 0;
}
