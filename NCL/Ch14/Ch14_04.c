// Purpose: Check input char by isascii()
// File Name: Ch14_04
// Completion Date: 20210619
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{ 
  char character; // input char
  
  puts("Please input a char:");
  scanf("%c", &character);
  if (isascii(character) != 0) { // check isascii
	puts("This char is ASCII.");
  } else {
	puts("This char is not ASCII.");
  }
 
  return EXIT_SUCCESS;
}  

 
