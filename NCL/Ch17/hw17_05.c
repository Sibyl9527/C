// Purpose: Read hw17_03L.txt, remove line number and save to hw17_03.txt
// File Name: hw17_05
// Completion Date: 20210711
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{ 
  FILE *stream;
  FILE *streamRVLine;
  char string[100];
  int flag;
  int i;
  
  stream = fopen("hw17_03L.txt", "r"); // read only stream
  streamRVLine = fopen("hw17_03.txt", "w"); // add line number for original file
  
  if (stream == NULL || streamRVLine == NULL) {
	puts("File opened failed!");
	fclose(stream);
	fclose(streamRVLine);
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	while (fgets(string, 100, stream) != NULL) {
	  flag = 0;
	  for (i = 0; i < strlen(string); i++) {
		if (string[i] == ' ' && flag == 0) { // skip everything until meet first space
          flag = 1;
		  continue; // skip first space
		}
		if (flag == 1) {
		  fputc(string[i], streamRVLine);	
		}
	  }
	}
	puts("");
  }  
  fclose(stream);
  fclose(streamRVLine);
  puts("File closed successfully, please check hw17_03.txt!");
  
  return EXIT_SUCCESS;
}  