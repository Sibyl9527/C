// Purpose: Count alphabets, spaces and punctuations from string
// File Name: Ch14_13
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char *str = "fi A&*Efw14e E$fEF fHk5+,fV-"; // initial string
  int i; // for loop control
  int upcase = 0; // count uppercase
  int lowcase = 0; // count lowercase
  int punct = 0; // count punctuation
  int space = 0; // count space
  
  printf("String %s\n", str);
  for (i = 0; i < strlen(str); i++) {
	if (isupper(*(str + i)) != 0) {
	  upcase++;
	} else if (islower(*(str + i)) != 0) {
	  lowcase++;
	} else if (ispunct(*(str + i)) != 0) {
	  punct++;
	} else if (isspace(*(str + i)) != 0) {
	  space++;
	}
  }
  
  printf("Uppercase: %d\n", upcase);
  printf("Lowercase: %d\n", lowcase);
  printf("Punctuation: %d\n", punct);
  printf("Space: %d\n", space);
  
  return EXIT_SUCCESS;
}  