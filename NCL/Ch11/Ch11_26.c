/* Purpose: Check the string whether is palindrome or not */
/* File Name: Ch11_26 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100

int main(void)
{ 
  char str[SIZE];
  char letter[SIZE];
  unsigned int i, j = 0, flag = 0;
  
  puts("Check a string whether is palindrome or not, please input a string");
  gets(str);
  
  for (i = 0; i < strlen(str); i++) {
	if (isalpha(str[i]) != 0) {
	  if (str[i] < 'a') {
		str[i] = str[i] + 32;		
	  }
	  letter[j] = str[i];
	  j++;
	}
  }
  
  letter[j] = '\0';
  j = j - 1;
  i = 0;
  while (i <= j) {
	if (letter[i] != letter[j-i]) {
	  flag = 1;
	  break;
	}
	i++;
  }
  
  if (flag == 1) {
	puts("The string is not a palindrome.");
  } else {
	puts("The string is a palindrome.");
  }
  
  system("pause");
  return 0;
}
