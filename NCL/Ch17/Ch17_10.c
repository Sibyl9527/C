// Purpose: Open and close a file through open and close function
// File Name: Ch17_10
// Completion Date: 20210704
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

int main(void)
{ 
  int file;
  
  file = open("Ch17_10.c", O_RDONLY);
  
  if (file != EOF) {
	puts("File opened successfully!");
  } else {
	puts("File opened failed!");
  }
  close(file);

  return EXIT_SUCCESS;
}  