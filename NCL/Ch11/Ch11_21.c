/* Purpose: Remove a substring from position 6 */
/* File Name: Ch11_21 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char str[] = "What a funny day!!";
  int position = 6, length = 6;
  int i;
  
  printf("The string is \n%s\n", str);
  i = position + length;
  while (str[position] != '\0' && position < i) {
	position++;
  }
  while ((str[position - length] = str[position]) != '\0') {
	position++;
  }
  printf("The new string is \n%s\n", str);

  return 0;
}
