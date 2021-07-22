// Purpose: Read file's content, but skip '>' sign
// File Name: Ch17_14
// Completion Date: 20210704
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  FILE *stream;
  char string[60];
  unsigned int i;
  
  stream = fopen("idiom.txt", "r");
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	while (fgets(string, 60, stream) != NULL) {
	  for (i = 0; i < strlen(string); i++) {
		if (string[i] == '>') { // skip > and go next character
		  fseek(stream, 1, SEEK_CUR);
		} else {
		  printf("%c", string[i]);
		}
	  }
	}
	fclose(stream);
  }
  
  return EXIT_SUCCESS;
}  