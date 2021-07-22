// Purpose: Add line number and space for hw17_03 and write to hw17_03L.txt
// File Name: hw17_04
// Completion Date: 20210711
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{ 
  FILE *stream;
  FILE *streamLine;
  char ch[100];
  int LineNum = 1;
  char Line[10];
  char space = ' ';
  
  stream = fopen("hw17_03.c", "r"); // read only stream
  streamLine = fopen("hw17_03L.txt", "w"); // add line number for original file
  
  if (stream == NULL || streamLine == NULL) {
	puts("File opened failed!");
	fclose(stream);
	fclose(streamLine);
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	while ((fgets(ch, 100, stream)) != NULL) {
	  itoa(LineNum, Line, 10); // change line number int to char
	  fputs(Line, streamLine); // put line number to file first
	  fputc(space, streamLine); // put space
      fputs(ch, streamLine); // put string
	  LineNum++;
	}
	puts("");
  }  
  fclose(stream);
  fclose(streamLine);
  puts("File closed successfully, please check hw17_03L.txt!");
  
  return EXIT_SUCCESS;
}  