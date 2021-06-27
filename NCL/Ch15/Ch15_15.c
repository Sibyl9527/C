// Purpose: Simulate e-clock
// File Name: Ch15_15
// Completion Date: 20210625
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{  
  time_t timep; // get time
  struct tm *p; // strcut tm declare in time.h
  
  while (1) {
	time(&timep); // get time
	p = localtime(&timep); // transfer to tm type
	printf("%d:%d:%d\n", p->tm_hour, p->tm_min, p->tm_sec);
	system("cls"); // clean screen
  }
  
  return EXIT_SUCCESS;
}  