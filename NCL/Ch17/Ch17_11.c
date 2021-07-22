// Purpose: Copy file through read write function
// File Name: Ch17_11
// Completion Date: 20210704
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#define SIZE 512

int main(void)
{ 
  int FileSource;
  int FileDestination;
  int ReadBytes;
  int buffer[SIZE];
  
  FileSource = open("file1.txt", O_RDONLY);
  FileDestination = open("file2.txt", O_WRONLY); // WRONLY the file2 must exist 
  
  if (FileSource == EOF || FileDestination == EOF) {
	puts("File opened failed!");
	close(FileSource);
    close(FileDestination);
	return EXIT_FAILURE;
  } else {
	puts("Start to copy the content from file1 to file2.");
	while (eof(FileSource) != 1) { // 1 means finished
	  ReadBytes = read(FileSource, buffer, SIZE);
	  write(FileDestination, buffer, ReadBytes);
	}
  }
  puts("Finished!");
  close(FileSource);
  close(FileDestination);
  
  return EXIT_SUCCESS;
}  