/* Purpose: Search sub string "me" from string */
/* File Name: hw11_05 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char strA[] = "Long time ago, when I was a student";
  char strB[] = "me";
  
  printf("The strA is \"%s\"\n", strA);
  printf("The strB is \"%s\"\n", strB);
  if (strstr(strA, strB) == 0) {
	puts("Not match!!");
  } else {
	puts("strA have substring strB in it.");
  }
  
  return 0;
}
