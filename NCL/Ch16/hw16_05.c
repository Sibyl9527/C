// Purpose: enum Jan to Dec, and output month by enum
// File Name: hw16_05
// Completion Date: 20210630
#include <stdio.h>
#include <stdlib.h>

enum month {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec} AbbrMonth;

int main(void)
{ 
  int i; // for loop control
  char *emname[] = {"Janurary", "February", "March", "April",
                    "May", "June", "July", "August", 
					"September", "October", "November", "December"};

  for (i = Jan; i <= Dec; i++) {
	printf("%s\n", emname[i - 1]);
  }
  
  return EXIT_SUCCESS;
}  