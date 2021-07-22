// Purpose: typedef date, elements: year, month, day.
//          Output today.
// File Name: hw16_03
// Completion Date: 20210630
#include <stdio.h>
#include <stdlib.h>

typedef struct date
{
  int year;
  int month;
  int day;
} DT;

int main(void)
{ 
  DT today = {2021, 06, 30};
  
  printf("Today is %d/%d/%d\n", today.year, today.month, today.day);
  
  return EXIT_SUCCESS;
}  