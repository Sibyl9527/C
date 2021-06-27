// Purpose: Make an address book
// File Name: Ch15_17
// Completion Date: 20210625
#include <stdio.h>
#include <stdlib.h>
struct addrbook
{
  char name[15];
  int areacode;
  int phone;
  char city[10];
  char street[12];
  int number; // house number
} book[3] = {"Undertaker", 02, 529527, "TPC", "Hell road", 100, // assign initial values
             "SmileFox", 02, 525566, "TPC", "Heaven road", 30,
			 "Undertaker", 02, 529478, "TPC", "Earth road", 50};


int main(void)
{  
  int i; // outter for loop control
  
  puts("Name\t\tPhone\t\tAddress");
  for (i = 0; i < 3; i++) { // output addrbook's info
	printf("%s    \t%02d-%d\t%s %s %d\n", book[i].name, book[i].areacode, book[i].phone,
	                                    book[i].city, book[i].street, book[i].number);
  }
  
  return EXIT_SUCCESS;
}  