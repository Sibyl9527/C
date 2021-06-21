// Purpose: separate the string by uppercase and lowercase
// File Name: hw14_04
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char str[] = "flewEdWdfipwW"; // initial string
  int i; // for loop control
  int uppcount = 0; // count uppercase
  int lowcount = 0; // count lowercase
  char uppercase[13]; // assign uppercase
  char lowercase[13]; // assign lowercase
  
  printf("The original string is \"%s\"\n", str);
  for (i = 0; i < strlen(str); i++) {
	if (isupper(str[i]) != 0) { // assign uppercase from original string to alpha string
	  uppercase[uppcount] = str[i];
	  uppcount++;
    } else if (islower(str[i]) != 0) { // assign lowercase from original string to lowercase string
	  lowercase[lowcount] = str[i];
	  lowcount++;
	}
  }
  printf("The string of uppercase is %s\n", uppercase);
  printf("The string of lowercase is %s\n", lowercase);
  
  return EXIT_SUCCESS;
}  