// Purpose: Declare two struct DVD and Member.
//          DVD: ID, DVD Name, Lent Date, Return Date
//          Member: Name, Tel, struct DVD.
//          Function: User can create struct Member info, and output all members info
// File Name: hw15_09
// Completion Date: 20210626
#include <stdio.h>
#include <stdlib.h>
struct DVD
{
  int ID;
  char DVD_Name[25];
  char LentDate[15];
  char ReturnDate[15];
};

struct Member
{
  char MemberName[20];
  int Tel;
  struct DVD DVDinfo;
};

int main(void)
{ 
  struct Member MemberInfo[10];
  int i;
  int max = 0;
  int flag; // for do while loop
  char GoNext; // continue or not
  
  puts("Here we go to create members info");
  for (i = 0; i < 10; i++) { // user input max 10
    max = i;
    printf("No.%d info\n", i + 1);
	puts("Please input member name:");
    scanf("%s", MemberInfo[i].MemberName);
    rewind(stdin);
	puts("Please input member Tel:");
    scanf("%d", &MemberInfo[i].Tel);
    rewind(stdin);
	puts("Please input DVD ID:");
    scanf("%d", &MemberInfo[i].DVDinfo.ID);
    rewind(stdin);
	puts("Please input DVD name:");
    scanf("%s", MemberInfo[i].DVDinfo.DVD_Name);
    rewind(stdin);
	puts("Please input lent date:");
    scanf("%s", MemberInfo[i].DVDinfo.LentDate);
    rewind(stdin);
	puts("Please input return date:");
    scanf("%s", MemberInfo[i].DVDinfo.ReturnDate);
    rewind(stdin);
	do {
	  flag = 0;
	  puts("Conitue?(y to continue, n to quit and output all member info)");
	  scanf("%c", &GoNext);
	  rewind(stdin);
	  if (GoNext == 'Y' || GoNext == 'y') {
	    flag = 1;
	  } else if (GoNext == 'N' || GoNext == 'n') {
		flag = 2;
	  }
	} while (flag == 0);
	
	if (flag == 2) {
	  break;
	}
  }
  
  printf("%-16s%-16s%-16s%-16s%-16s%-16s\n", "Name","Tel","ID","DVD name","Lent Date","Return Date");
  for (i = 0; i <= max; i++) {
	printf("%-16s%-16d%-16d%-16s%-16s%-16s\n", MemberInfo[i].MemberName, MemberInfo[i].Tel, MemberInfo[i].DVDinfo.ID,
	                                           MemberInfo[i].DVDinfo.DVD_Name, MemberInfo[i].DVDinfo.LentDate, MemberInfo[i].DVDinfo.ReturnDate);
  }
  
  return EXIT_SUCCESS;
}  