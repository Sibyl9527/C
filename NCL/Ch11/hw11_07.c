/* Purpose: Input an alphabet string and exchange the uppercase and lowercase */
/* File Name: hw11_07 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{ 
  char strIn[30];
  char strOut[30];
  int i;
  
  puts("Please input a string");
  gets(strIn);
  for (i = 0; i < strlen(strIn); i++) {
    if (isalpha(strIn[i]) != 0) { // only exchange when the char is alpha
	  if (strIn[i] < 'a') {
		strOut[i] = strIn[i] + 32;
	  } else {
		strOut[i] = strIn[i] - 32;
	  }
	} else {
      strOut[i] = strIn[i];
	}
  }
  
  printf("The final string is \n%s\n", strOut);
  
  system("pause");
  return 0;
}
