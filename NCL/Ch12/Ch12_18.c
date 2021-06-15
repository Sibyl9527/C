// Purpose: Output arguments
// File Name: Ch12_18
// Completion Date: 20210613 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{ 
  int n;
  for (n = 0; n < argc; n++) {
	printf("argv[%d] = \"%s\"\n", n, argv[n]);
  } 
  
  return EXIT_SUCCESS;
}