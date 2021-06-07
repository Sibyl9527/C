/* Purpose: Output the string by inverse order */
/* File Name: Ch11_25 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char str[] = "I am a student";
  int i;
  
  for (i = strlen(str); i >=0; i--) {
	printf("%c", str[i]);
  }
  puts("");
  
  return 0;
}
