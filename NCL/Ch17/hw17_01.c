// Purpose: Open file abc.txt for read only, show message no matter success or not.
// File Name: hw17_01
// Completion Date: 20210711
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  FILE *stream;
  
  stream = fopen("abc.txt", "r"); // read only stream
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
  }
  puts("File closed successfully!");
  fclose(stream);
  
  return EXIT_SUCCESS;
}  