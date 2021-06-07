/* Purpose: Compare two strings and show which digit that start to different from */
/* File Name: Ch11_12 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  char str1[60];
  char str2[60];
  int i, length;
  
  puts("Please input the 1st string");
  gets(str1);
  puts("Please input the 2nd string");
  gets(str2);
  
  if (strlen(str1) > strlen(str2)) {
	length = strlen(str1);
  } else {
	length = strlen(str2);
  }
  
  for (i = 1; i < length; i++) {
	if (strncmp(str1, str2, i) != 0) {
	  break;
	}
  }
  
  printf("The two strings start different from N0.%d digit.\n", i);
  
  system("pause");
  return 0;
}
