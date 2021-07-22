// Purpose: Register phone number - person or company
// File Name: Ch16_03
// Completion Date: 20210627
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct company
{
  char comp_name[30];
  char comp_ID[9];
  char phone[12];
};

struct person
{
  char name[20];
  char ID[11];
  char phone[12];
};

union service // declare share memory space paid
{
  struct company group;
  struct person one;
}type; 

int main(void)
{ 
  int option;
  
  puts("Welcome to use \"TPC area\" phone number registration system");
  
  do {
	puts("Please select user type: (1) Company (2) Personal");
	scanf("%d", &option);
	rewind(stdin);
	if (option != 1 && option != 2) {
	  puts("Invalid input!");
	}
  } while (option != 1 && option != 2);
  
  if (option == 1) {
	puts("Please input company name:");
	scanf("%s", type.group.comp_name);
	rewind(stdin);
	puts("Please input company ID:");
	scanf("%s", type.group.comp_ID);
	rewind(stdin);
	puts("Please input company phone number:(02-XXXXXXXX)");
	scanf("%s", type.group.phone);
	rewind(stdin);
	
	if (strlen(type.group.comp_ID) != 8 || strlen(type.group.phone) != 11) {
	  puts("Input data error, register failed!");
	} else {
	  puts("Registration success!");
	}	
  } else {
	puts("Please input your name:");
	scanf("%s", type.one.name);
	rewind(stdin);
	puts("Please input your ID:");
	scanf("%s", type.one.ID);
	rewind(stdin);
	puts("Please input your phone:(02-XXXXXXXX)");
	scanf("%s", type.one.phone);
	rewind(stdin);
	
	if (strlen(type.one.ID) != 10 || strlen(type.one.phone) != 11) {
	  puts("Input data error, register failed!");
	} else {
	  puts("Registration success!");
	}
  }
  
  return EXIT_SUCCESS;
}  