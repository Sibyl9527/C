// Purpose: Check input char by iscntrl() ex: ASCII control: enter, ctrl+x, ctrl+c
// File Name: Ch14_05
// Completion Date: 20210619
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{ 
  char character; // input char
  
  puts("Please input a char:");
  scanf("%c", &character);
  if (iscntrl(character) != 0) { // check iscntrl
	puts("This char is ASCII control char.");
  } else {
	puts("This char is not ASCII control char.");
  }
 
  return EXIT_SUCCESS;
}  

 
