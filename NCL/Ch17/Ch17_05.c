// Purpose: Count the number of words from the file.
// File Name: Ch17_05
// Completion Date: 20210703
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  FILE *stream;
  char string[30];
  int count = 0;
  
  stream = fopen("file.txt", "r");
  
  if (stream == NULL) {
	puts("File opened failed");
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	while (fscanf(stream, "%s", string) != EOF) { // get every string until -1
      printf("%s ", string);
	  count++;
	}
	printf("\nThere are %d words\n", count);
	if (fclose(stream) == EOF) { // check fclose status, EOF define in stdio.h, value = -1
	puts("File closed failed");
    } else {
	puts("File successfully closed!");
    }
  }

  return EXIT_SUCCESS;
}  