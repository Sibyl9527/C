/* Purpose: Exchange the string's uppercase and lowercase */
/* File Name: Ch11_24 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char str[] = "AbcdEFgHijKLmn";
  int i;
  
  printf("The string is \n%s\n", str);
  for (i = 0; i < strlen(str); i++) {
	if (str[i] < 91) { //uppercase
      str[i] = str[i] + 32;
	} else { //lowercase
	  str[i] = str[i] - 32;
	}
  }
  printf("The string after exchange is \n%s\n", str);
  
  return 0;
}
