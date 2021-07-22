// Purpose: Open file abc.txt for read only, show the content but remove numbers.
//          abc.txt: f0qu994f43jf0f9w93423ffup
// File Name: hw17_02
// Completion Date: 20210711
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{ 
  FILE *stream;
  char ch;
  
  stream = fopen("abc.txt", "r"); // read only stream
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	puts("The content of abc.txt is: ");
	while ((ch = fgetc(stream)) != EOF) {
	  if (isalpha(ch) != 0) {
		printf("%c", ch);
	  }
	}
	puts("");
  }
  puts("File closed successfully!");
  fclose(stream);
  
  return EXIT_SUCCESS;
}  