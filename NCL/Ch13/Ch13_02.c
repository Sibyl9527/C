// Purpose: Call by address for accumulate number
// File Name: Ch13_02
// Completion Date: 20210615
#include <stdio.h>
#include <stdlib.h>

void addsum(int *);

int main(void)
{ 
  int i;
  int number = 100;
  
  for (i = 0; i < 3; i++) { // exe 3 times
	addsum(&number);
  }  
 
  return EXIT_SUCCESS;
}  

void addsum(int *num)
{
  printf("number = %d\n", (*num)++);
}

