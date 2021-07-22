// Purpose: Produce 10 random numbers between 1 to 100, order by them and write to the file random.txt.
// File Name: hw17_06
// Completion Date: 20210711
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define myrand() srand((unsigned)time(NULL));

int main(void)
{ 
  FILE *stream;
  int random[10]; // for random numbers
  int i; // for loop control
  int j; // bubble sort inner for loop control
  int temp; // for swap
  char str[10]; // for num to str
  char space = ' ';
  
  stream = fopen("random.txt", "w"); // write to file
  myrand();
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	for (i = 0; i < 10; i++) {
	  random[i] = rand() % 10 + 1;
	}
	for (i = 0; i < 9; i++) { // bubble sort
	  for (j = i + 1; j < 10; j++) {
		if (random[j] > random[i]) { // swap
		  temp = random[i];
		  random[i] = random[j];
		  random[j] = temp;
		}
	  }
	}
	for (i = 0; i < 10; i++) {
	  sprintf(str, "%d", random[i]); // num to str
	  fputs(str, stream);
	  fputc(space, stream);
	}
	puts("");
  }  
  fclose(stream);
  puts("File closed successfully, please check random.txt!");
  
  return EXIT_SUCCESS;
}  