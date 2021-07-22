// Purpose: Edit file's content
// File Name: Ch17_16
// Completion Date: 20210706
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  char time[5];
  char phone[11];
  FILE *stream;
  
  stream = fopen("note.txt", "r+");
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	puts("Edit the minutes from the file");
	printf("%s", "Please input the minutes:");
	gets(time);
	printf("%s", "Please input the new phone number:");
	gets(phone);
	fseek(stream, 16, SEEK_SET);
	fputs(time, stream);
	fseek(stream, 43, SEEK_SET);
	fputs(phone, stream);
  }
  fclose(stream);
  
  return EXIT_SUCCESS;
}  