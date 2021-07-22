// Purpose: Add new data to addressbook
// File Name: Ch17_06
// Completion Date: 20210703
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{ 
  FILE *stream;
  char name[15];
  char phone[12];
  char choice;
  
  stream = fopen("addressbook.txt", "a"); // a means save data following the original file
  
  if (stream == NULL) {
	puts("File opened failed");
	return EXIT_FAILURE;
  } else {
	do {
	  puts("Please input user's name");
	  scanf("%s", name);
	  rewind(stdin);
	  puts("Please input user's phone number");
	  scanf("%s", phone);
	  rewind(stdin);
	  fprintf(stream, "%-16s%-16s\n", name, phone);
	  puts("Data saved, next?(y/n)");
	  choice = getch();
	} while (choice == 'y' || choice == 'Y');
	fclose(stream);
  }

  return EXIT_SUCCESS;
}  