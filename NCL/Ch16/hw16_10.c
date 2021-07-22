// Purpose: Continue hw16_09, enum {A =1, B, C}
// File Name: hw16_10
// Completion Date: 20210701
#include <stdio.h>
#include <stdlib.h>
enum Plan_num {A = 1, B, C} Plan_show;
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
  char Plan;
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
  
  if (Info.Plan > C || Info.Plan < A) {
	puts("Invalid Plan!");
	return EXIT_FAILURE;
  }
  
  if (option == 1) {
	printf("Company Name:%s, Company ID:%s, Addr:%s, Tel:%s, Plan:", Info.name.company_name,
	Info.ID.company_ID, Info.Addr, Info.Tel);
  } else if (option == 2){
	printf("User Name:%s, User ID:%s, Addr:%s, Tel:%s, Plan:", Info.name.user_name,
	Info.ID.user_ID, Info.Addr, Info.Tel);
  }
  switch (Info.Plan) {
	case A:
	  puts("A");
	  break;
	case B:
	  puts("B");
	  break;
	case C:
	  puts("C");
	  break;
  }
  
  return EXIT_SUCCESS;
}  