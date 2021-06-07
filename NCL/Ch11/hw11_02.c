/* Purpose: Output "Hello World!!" by string and reverse order */
/* File Name: hw11_02 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char str[] = "Hello World!!";
  int i;
  
  for (i = strlen(str) - 1; i >= 0; i--) {
	printf("%c", str[i]);
  }
  
  return 0;
}
