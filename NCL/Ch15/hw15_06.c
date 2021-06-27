// Purpose: Delare a employee struct includes ID, Name, HourlyRate, WorkHour and MonthlyIncome.
//          ID, Name, HourlyRate and WorkHour input by user. MonthlyIncome = HourlyRate * WorkHour
//          Maximum 10 employees info.
// File Name: hw15_06
// Completion Date: 20210626
#include <stdio.h>
#include <stdlib.h>
struct employee
{
  int ID;
  char Name[15];
  float HourlyRate;
  float WorkHour;
  float MonthlyIncome;
};


int main(void)
{ 
  struct employee info[10]; // maximum 10
  int i; // for loop control
  int max; // save total for output
  char GoNext; // continue or break
  
  for (i = 0; i < 10; i++) { // input employee info
	max = i + 1;
	printf("No.%d input\n", i + 1);
	puts("Please input ID:");
    scanf("%d", &info[i].ID);
    rewind(stdin);
	puts("Please input Name:");
    scanf("%s", info[i].Name);
    rewind(stdin);
	puts("Please input HourlyRate:");
    scanf("%f", &info[i].HourlyRate);
    rewind(stdin);
	puts("Please input WorkHour:");
    scanf("%f", &info[i].WorkHour);
    rewind(stdin);
	info[i].MonthlyIncome = info[i].HourlyRate * info[i].WorkHour;
	if (i < 10) {
	  puts("Conitue?(y/n)");
	  scanf("%s", &GoNext);
	  rewind(stdin);
	  if (GoNext == 'n' || GoNext == 'N') {
		break;
	  }
	}
  }
  printf("%-8s%-25s%-16s%-16s%-16s%\n", "ID","Name","Hourly Rate","Work Hours","Monthly Income"); // output title
  for (i = 0; i < max; i++) { // out info from Inventory array
	printf("%-8d%-25s%-16.2f%-16.2f%-16.2f\n", info[i].ID, info[i].Name, 
	                                     info[i].HourlyRate, info[i].WorkHour, info[i].MonthlyIncome);
  }  
 
  return EXIT_SUCCESS;
}  