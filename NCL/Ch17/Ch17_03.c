// Purpose: Simulate e-dictionary load data from dictionary.txt
// File Name: Ch17_03
// Completion Date: 20210703
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  FILE *stream;
  char string[100];
  char search[100];
  unsigned int length;
  int flag = 0;
  
  stream = fopen("dictionary.txt", "r");
  if (stream == NULL) {
	puts("File opened failed");
	return EXIT_FAILURE;
  } else {
	puts("E-dictionary open!");
	puts("Please input the word that you want to search:");
	scanf("%s", search);
	rewind(stdin);
	length = strlen(search);
	puts("The research result:");
	while (fgets(string, 30, stream) != NULL) { // get string from file
      if (strncmp(string, search, length) == 0) { // compare string if partily equial
		printf("%s", string);
		flag = 1;
	  }
	}
	if (flag == 0) {
	  puts("No match words in the dictionary!"); 
	}
	fclose(stream);
  }
  
  return EXIT_SUCCESS;
}  