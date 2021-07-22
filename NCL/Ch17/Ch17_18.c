// Purpose: Address book search
// File Name: Ch17_18
// Completion Date: 20210707
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct person
{
  char name[15];
  char phonenumber[15];
}data;

int main(void)
{ 
  FILE *stream;
  char target[15];
  char option;
  char flag = 0;
  
  stream = fopen("myaddbook.txt", "r"); // read only stream
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	puts("Please select function (a)List (b)Name search");
	option = getch();
	if (option == 'a' || option == 'A') {
	  while (fscanf(stream, "%s", data.name) != EOF) {
		fscanf(stream, "%s", data.phonenumber);
		printf("%-15s %s\n", data.name, data.phonenumber);
	  }
	} else if (option == 'b' || option == 'B'){
      puts("Please input name to search:");
	  scanf("%s", target);
	  rewind(stdin);
	  while (fscanf(stream, "%s", data.name) != EOF) {
		fscanf(stream, "%s", data.phonenumber);
		if (strcmp(data.name, target) == 0) { // find target
		  flag = 1;
		  break;
		}
	  }
	  if (flag == 1) {
		printf("Search result %s\n", data.phonenumber);
	  } else {
		puts("Nothing matched!");
	  }  
	} else {
	  puts("Invalid selection!");
	}
  }
  fclose(stream);
  
  return EXIT_SUCCESS;
}  