// Purpose: Swap back and front words from stringdata1.txt and write in stringdata2.txt
// File Name: hw17_10
// Completion Date: 20210722
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  FILE *stream;
  FILE *streamOutput;
  char front[10];
  char back[10];
  
  stream = fopen("stringdata1.txt", "r"); // read only
  streamOutput = fopen("stringdata2.txt", "w");
  
  if (stream == NULL || streamOutput == NULL) {
	puts("File opened failed!");
	fclose(stream);
	fclose(streamOutput);
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	while (fscanf(stream, "%s %s", front, back) != EOF) {
      fprintf(streamOutput, "%s %s\n", back, front);
	}	
  }  
  fclose(stream);
  fclose(streamOutput);
  puts("File closed successfully, please check stringdata2.txt!");
  
  return EXIT_SUCCESS;
}  