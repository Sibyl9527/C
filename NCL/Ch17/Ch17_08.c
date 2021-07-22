// Purpose: Copy file and change first word to Uppercase
// File Name: Ch17_08
// Completion Date: 20210703
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{ 
  FILE *streamSource;
  FILE *streamDestination;
  char string[10];
  
  streamSource = fopen("olddata.txt", "r");
  streamDestination = fopen("newdata.txt", "w"); // w means create a new one
  
  if (streamSource == NULL || streamDestination == NULL) {
	puts("File open failed");
	fclose(streamSource);
	fclose(streamDestination);
	return EXIT_FAILURE;
  } else {
	puts("Start copying file.");
	while (fscanf(streamSource, "%s", string) != EOF) {
	  string[0] = toupper(string[0]); // change word to uppercase
	  fprintf(streamDestination, "%s ", string);
	}
	fclose(streamSource);
	fclose(streamDestination);
	puts("Finished!");
  }

  return EXIT_SUCCESS;
}  