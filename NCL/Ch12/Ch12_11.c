// Purpose: Order by the strings 
// File Name: Ch12_11
// Completion Date: 20210610 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main(void)
{ 
  char String[SIZE][SIZE];
  char *Line[SIZE];
  char *p; // put temp address
  int i; // input loop control
  int j; // ordering loop control
  int k; // ordering loop control
  
  puts("Please input the strings that you want to order by, input q to quit");
  for (i = 0; i < SIZE; i++) { // input strings
	printf("%d: ", i + 1);
	gets(String[i]);
	if (strcmp(String[i], "q") == 0) { // quit
	  break;
	}
	Line[i] = String[i];
  }
  puts("\nOrdering...");
  
  for (j = 0; j < i - 1; j++) { // bubble sort
	for (k = j + 1; k < i; k++) {
      if (strcmp(Line[j], Line[k]) > 0) {
		p = Line[k];
		Line[k] = Line[j];
		Line[j] = p;
	  }
	}
  }
  
  for (j = 0; j < i; j++) { // output result
	printf("%d: %s\n", j + 1, Line[j]);
  }

  system("pause");
  return EXIT_SUCCESS;
}
