// Purpose: Input User data and output. Requirement: Min memory space.
//          Elements: Company name/User name[20], Company ID/User ID[10], Addr[30], Tel[13], Plan
// File Name: hw16_09
// Completion Date: 20210701
#include <stdio.h>
#include <stdlib.h>

union ShareName
{
  char company_name[20];
  char user_name[20];
};

union ShareID
{
  char company_ID[10];
  char user_ID[10];
};

typedef struct Register
{
  union ShareName name;
  union ShareID ID;
  char Addr[30];
  char Tel[13];
  int Plan;
}Reg;

int main(void)
{ 
  Reg Info;
  int option;
  
  puts("Choose your identity: (1) Company (2) Personal");
  scanf("%d", &option);
  rewind(stdin);
  
  if (option == 1) {
	puts("Please input Company name:");
	scanf("%s", Info.name.company_name);
	rewind(stdin);
	puts("Please input Company ID:");
	scanf("%s", Info.ID.company_ID);
	rewind(stdin);
  } else if (option == 2) {
	puts("Please input User name:");
	scanf("%s", Info.name.user_name);
	rewind(stdin);
	puts("Please input User ID:");
	scanf("%s", Info.ID.user_ID);
  } else {
	puts("Invalid option!!");
	return EXIT_FAILURE;
  }
  
  puts("Please input Address:");
  scanf("%s", Info.Addr);
  rewind(stdin);
  puts("Please input Tel:");
  scanf("%s", Info.Tel);
  rewind(stdin);
  puts("Please input Plan(1-3):");
  scanf("%d", &Info.Plan);
  rewind(stdin);
  
  if (Info.Plan > 3 || Info.Plan < 0) {
	puts("Invalid Plan!");
	return EXIT_FAILURE;
  }
  
  if (option == 1) {
	printf("Company Name:%s, Company ID:%s, Addr:%s, Tel:%s, Plan:%d\n", Info.name.company_name,
	Info.ID.company_ID, Info.Addr, Info.Tel, Info.Plan);
  } else if (option == 2){
	printf("User Name:%s, User ID:%s, Addr:%s, Tel:%s, Plan:%d\n", Info.name.user_name,
	Info.ID.user_ID, Info.Addr, Info.Tel, Info.Plan);
  }
  
  return EXIT_SUCCESS;
}  