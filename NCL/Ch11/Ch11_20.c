/* Purpose: Insert a string to position 7 at another string */
/* File Name: Ch11_20 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(void)
{ 
  char str[30] = "I am a boy";
  char insertstr[10];
  int strlength, inslength;
  int i, position = 7;
  
  printf("The string is %s\n", str);
  puts("Please input the string that you want to insert:");
  gets(insertstr);
  printf("New string \"%s\" want to insert the position %d\n", insertstr, position);
  strlength = strlen(str);
  inslength = strlen(insertstr);
  
  for (i = strlength; i >= position; i--) {
	str[i + inslength] = str[i];
  }
  for (i = 0; i < inslength; i++) {
	str[position + i] = insertstr[i];
  }
  printf("The string after insert is %s\n", str);

  system("pause");
  return 0;
}
