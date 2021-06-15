// Purpose: Add item number for input strings
// File Name: Ch12_17
// Completion Date: 20210613 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROW 100
#define COL 10

int main(void)
{ 
  int i; // for COL memory allocate
  int j; // for output list
  char **array = (char**)malloc(ROW * sizeof(char*)); // allocate memory space for ROW
  
  for (i = 0; i < ROW; i++) {
    *(array + i) = (char*)malloc(COL * sizeof(char)); // allocate memory space for COL
  }

  printf("Please input name of goods:(input qq to stop)\n");
  for (i = 0; i < ROW; i++) {
	scanf("%s", *(array + i));
	if (strcmp(*(array + i), "qq") == 0) {
      break;
	}
  }
  puts("\nYour list:");
  for (j = 0; j < i; j++) {
	printf("%d %s\n", j + 1, *(array + j));
  }
  
  free(array); 
  return EXIT_SUCCESS;
}