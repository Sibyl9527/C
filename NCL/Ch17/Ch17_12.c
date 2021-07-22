// Purpose: Get the position from file by ftell
// File Name: Ch17_12
// Completion Date: 20210704
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  FILE *stream;
  char ch;
  int position;
  
  stream = fopen("file1.txt", "r");
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	position = ftell(stream); // get beginning position
	printf("The beginning position is at %d bytes\n", position);
	
	while ((ch = fgetc(stream)) != EOF) {
	  position = ftell(stream); // continue to get position info
	}
	printf("The end position is at %d bytes\n", position);
	fclose(stream);
  }
  
  return EXIT_SUCCESS;
}  