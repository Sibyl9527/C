/* Purpose: Input an integer and save it to a string and then output the string by reverse order */
/* File Name: hw11_09 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  char array[30];
  int i;
  
  puts("Please input a integer");
  scanf("%s", array);
  
  for (i = strlen(array) - 1; i >= 0; i--) {
	printf("%c", array[i]);
  }
  puts("");
  
  system("pause");
  return 0;
}
