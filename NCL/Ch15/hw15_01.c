// Purpose: Delare a struct include year, month and day.
//          Assign initial values as today, then output format "Year/Month/Day".
// File Name: hw15_01
// Completion Date: 20210626
#include <stdio.h>
#include <stdlib.h>
struct Date
{
  int year;
  int month;
  int day;
} CurrentDay = {2021, 06, 26};


int main(void)
{  
  printf("Date: %d/%d/%d\n", CurrentDay.year, CurrentDay.month, CurrentDay.day);
  
  return EXIT_SUCCESS;
}  