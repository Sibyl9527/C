// Purpose: The fail example for accumulate a number by local variable
// File Name: Ch13_01
// Completion Date: 20210615
#include <stdio.h>
#include <stdlib.h>

void addsum(void);

int main(void)
{ 
  int i;
  
  for (i = 0; i < 3; i++) { // exe 3 times
	addsum();
  }  
 
  return EXIT_SUCCESS;
}  

void addsum(void)
{
  int number = 100;
  
  printf("number = %d\n", number++);
}

