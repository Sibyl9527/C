// Purpose: Count two bytes words, alphabets, and other characters
// File Name: Ch17_15
// Completion Date: 20210704
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{ 
  FILE *stream;
  char ch;
  int countC = 0; // Chinese
  int countA = 0; // Alphabet
  int countO = 0; // Other
  
  stream = fopen("¶W§N¯º¸Ü.txt", "r");
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	while ((ch = fgetc(stream)) != EOF) {
	  if (isascii(ch) != 0) { // check ascii
		if (isalpha(ch) != 0) { // check alphabet
		  countA++;	
		} else {
	      countO++;
		}
	  } else {
		countC++;
		fseek(stream, 1, SEEK_CUR); // Chinese word is 2 bytes, so skip one to avoid double counting
	  }
	}
  }
  printf("Total %d alphabets\n", countA);
  printf("      %d chinese words\n", countC);
  printf("      %d other characters\n", countO);
  fclose(stream);
  
  return EXIT_SUCCESS;
}  