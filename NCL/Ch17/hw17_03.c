// Purpose: Continue hw17_02, separate numbers and alphabets to abcnum.txt and abcaph.txt
// File Name: hw17_03
// Completion Date: 20210711
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{ 
  FILE *stream;
  FILE *streamNum;
  FILE *streamAph;
  char ch;
  
  stream = fopen("abc.txt", "r"); // read only stream
  streamNum = fopen("abcnum.txt", "w"); // write for num
  streamAph = fopen("abcaph.txt", "w"); // write for alphabet
  
  if (stream == NULL || streamNum == NULL || streamAph == NULL) {
	puts("File opened failed!");
	fclose(stream);
	fclose(streamNum);
	fclose(streamAph);
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	while ((ch = fgetc(stream)) != EOF) { // read abc.txt until EOF
	  if (isalpha(ch) != 0) { // if alpha, save to streamAph
		fputc(ch, streamAph);
	  } else if (isalnum(ch) != 0) { // if num, save to streamAph
		fputc(ch, streamNum);
	  }
	}
	puts("");
  }  
  fclose(stream);
  fclose(streamNum);
  fclose(streamAph);
  puts("File closed successfully, please check abcnum.txt and abcaph.txt!");
  
  return EXIT_SUCCESS;
}  