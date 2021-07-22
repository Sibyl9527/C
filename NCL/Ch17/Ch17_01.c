// Purpose: Open a file in the same path with this c file.
// File Name: Ch17_01
// Completion Date: 20210703
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  FILE *stream;
  char filename[15];
  
  printf("%s", "Please input the file name that you want to open:");
  scanf("%s", filename);
  
  stream = fopen(filename, "r"); // read only
  if (stream != NULL) {
	printf("File %s open with read only\n", filename);
  } else {
	puts("File opened failed!");
  }
  
  if (fclose(stream) == EOF) { // check fclose status, EOF define in stdio.h, value = -1
	printf("File %s closed failed\n", filename);
  } else {
	printf("File %s successfully closed!\n", filename);
  }
  
  return EXIT_SUCCESS;
}  