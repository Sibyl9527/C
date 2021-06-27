// Purpose: Continue hw15_02, three initial values input by user
// File Name: hw15_02
// Completion Date: 20210626
#include <stdio.h>
#include <stdlib.h>
struct Date
{
  int year;
  int month;
  int day;
};
int Chk(int, int);


int main(void)
{  
  struct Date CurrentDay; // Date struct
  int flag; // while loop control
  int check; // check input
  
  do {
	flag = 1;
	check = 1;
	puts("Please input year:");
    check = scanf("%d", &CurrentDay.year);
	flag = Chk(check, flag);
	rewind(stdin);
    puts("Please input month:");
    check = scanf("%d", &CurrentDay.month);
	flag = Chk(check, flag);
	rewind(stdin);
    puts("Please input day:");
    check = scanf("%d", &CurrentDay.day);
	flag = Chk(check, flag);
	rewind(stdin);
	
	if (flag != 0) {
	  if (CurrentDay.year < 0) {
	    flag = 0;
	    puts("Invalid year parameter");	  
	  } else if (CurrentDay.month > 12 || CurrentDay.month < 0){
	    flag = 0;
	    puts("Invalid month parameter");	
	  } else {
	    switch (CurrentDay.month) { // check day for month
		  case 1:
		  case 3:
		  case 5:
		  case 7:
		  case 8:
		  case 10:
		  case 12:
		    if (CurrentDay.day > 31 || CurrentDay.day < 0) {
			  flag = 0;
			  puts("Invalid day parameter");
		    }
		    break;
		  case 4:
		  case 6:
		  case 9:
		  case 11:
		    if (CurrentDay.day > 30 || CurrentDay.day < 0) {
			  flag = 0;
			  puts("Invalid day parameter");
		    }
		    break;
		  case 2:
		    if (CurrentDay.day > 29 || CurrentDay.day < 0) {
			  flag = 0;
			  puts("Invalid day parameter");
	  	    }
	  	    break;		
	    }
	  }
	  if (flag == 0) {
	    puts("Please reinput!");
	  }  
	} else {
	  flag = 0;
	  puts("Invalid parameter, please reinput");
	}
  } while (flag == 0);
  
  printf("Date: %d/%d/%d\n", CurrentDay.year, CurrentDay.month, CurrentDay.day);
  
  return EXIT_SUCCESS;
}  

int Chk(int check, int flag)
{
  if (flag != 0 && check) {
	return 1;
  } else {
	return 0;
  }
}