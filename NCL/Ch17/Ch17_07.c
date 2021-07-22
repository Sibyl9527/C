// Purpose: Copy file
// File Name: Ch17_07
// Completion Date: 20210703
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  FILE *streamSource;
  FILE *streamDestination;
  char character;
  
  streamSource = fopen("addressbook.txt", "r");
  streamDestination = fopen("adbook.txt", "w"); // w means create a new one
  
  if (streamSource == NULL || streamDestination == NULL) {
	puts("File opened failed");
	fclose(streamSource);
	fclose(streamDestination);
	return EXIT_FAILURE;
  } else {
	puts("Start copying file.");
	while ((character = fgetc(streamSource)) != EOF) {
	  fputc(character, streamDestination);
	}
	fclose(streamSource);
	fclose(streamDestination);
	puts("Finished!");
  }

  return EXIT_SUCCESS;
}  