/* Purpose: Compare two strings */
/* File Name: Ch11_11 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  char str1[60];
  char str2[60];
  
  puts("Please input the 1st string");
  gets(str1);
  puts("Please input the 2nd string");
  gets(str2);
  
  if (strcmp(str1, str2) == 0) {
	puts("Two strings are same!");
  } else {
	puts("Two strings are different!");
  }
  
  system("pause");
  return 0;
}
