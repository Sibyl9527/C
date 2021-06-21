// Purpose: Record register int spending time
// File Name: Ch13_11
// Completion Date: 20210617
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{ 
  int begin;
  int end;
  int sum = 0;
  register int i;
  register int j;
  
  puts("The result:");
  
  begin = clock();
  for (i = 0; i < 50000; i++) {
	for (j = 0; j < 10000; j++) {
	  sum = sum + 1;
	}
  }
  
  end = clock();
  printf("Time spent %g seconds\n", ((end - begin) / CLK_TCK));
 
  return EXIT_SUCCESS;
}  
