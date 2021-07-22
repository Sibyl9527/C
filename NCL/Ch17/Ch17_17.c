// Purpose: Load data from file, and input data by user, then write back to the file.
// File Name: Ch17_17
// Completion Date: 20210707
#include <stdio.h>
#include <stdlib.h>
#define SIZE 60

int main(void)
{ 
  char str1[SIZE];
  char str2[SIZE];
  FILE *stream1;
  FILE *stream2;
  int i = 0;
  
  stream1 = fopen("item.txt", "r"); // read only stream
  stream2 = fopen("item.txt", "r+"); // read and write stream
  
  if (stream1 == NULL || stream2 == NULL) {
	puts("File opened failed!");
	fclose(stream1);
	fclose(stream2);
	return EXIT_FAILURE;
  } else {
	while (fgets(str1, SIZE, stream1) != NULL) {
	  i++;
	  printf("%s->", str1);
	  gets(str2);
	  fprintf(stream2, "%02d %s  ->  %s\n", i, str1, str2);
	}
  }
  fclose(stream1);
  fclose(stream2);
  
  return EXIT_SUCCESS;
}  