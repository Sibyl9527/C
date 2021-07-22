// Purpose: Count the number of characters from the file.
// File Name: Ch17_02
// Completion Date: 20210703
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{ 
  FILE *stream;
  int num;
  int sum = 0;
  
  stream = fopen("file.txt", "r");
  
  if (stream == NULL) {
	puts("File opened failed");
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	while ((num = fgetc(stream)) != EOF) { // get every character until -1
      if (isalpha(num) != 0) {
		sum += 1;
	  }  
	}
	printf("There are %d characters\n", sum);
	if (fclose(stream) == EOF) { // check fclose status, EOF define in stdio.h, value = -1
	puts("File closed failed");
    } else {
	puts("File successfully closed!");
    }
  }
  
  return EXIT_SUCCESS;
}  