// Purpose: Letter convert by pointer
// File Name: Ch12_20
// Completion Date: 20210613
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void letterconvert(char*);

int main(void)
{ 
  char str[] = "AbcdEfgHijKLm";
  char *pstr = str;
  int i; // for loop
  
  printf("The original string is %s\n", pstr);
  for (i = 0; i < strlen(pstr); i++) {
	letterconvert(pstr + i);
  }
  printf("The new string is %s\n", pstr);
  
  return EXIT_SUCCESS;
}

void letterconvert(char *a)
{
  if (*a < 97) { // check the char is uppercase or not
	*a += 32;
  } else {
	*a -= 32;
  }
}