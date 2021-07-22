// Purpose: Output data from addbook.txt
// File Name: Ch17_04
// Completion Date: 20210703
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  FILE *stream;
  int age;
  char name[15];
  char phone[12];
  
  stream = fopen("addbook.txt", "r");
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	printf("%-16s%-16s%-4s\n", "Name", "Phone", "age");
	puts("--------------------------------------");
	while ((fscanf(stream, "%s %s %d", name, phone, &age)) != EOF) {
	  printf("%-16s%-16s%-4d\n", name, phone, age);
	}
	fclose(stream);
  }
  
  return EXIT_SUCCESS;
}  