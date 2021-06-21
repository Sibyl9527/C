// Purpose: Add from 1 to 100 in the sub function, loop in the sub function is not allowed
// File Name: hw13_06
// Completion Date: 20210618
#include <stdio.h>
#include <stdlib.h>
static int sum = 0; // external int variable for input 
void Accumulate(int); // calculate intvalue's cube

int main(void)
{
  int i;
  
  for (i = 1; i <= 100; i++) {
	Accumulate(i);
  }
  
  printf("The final result add from 1 to 100 is %d\n", sum);
  
  return EXIT_SUCCESS;
}

void Accumulate(int num) 
{
  sum = sum + num;
}


 
