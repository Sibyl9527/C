/* Purpose: Search the substring's position */
/* File Name: Ch11_19 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  char str[] = "You can't drink water while it is still not.";
  char target[10];
  int position;
  
  printf("The string is \n%s\n", str);
  puts("Please input the string that you want to search");
  scanf("%s", target);
  
  if (strstr(str, target) == 0) {
	puts("Not match!");
  } else {
	position = strlen(str) - strlen(strstr(str, target)) + 1;
	printf("The position of the string you want to search is from %d\n", position);
  }

  system("pause");
  return 0;
}
