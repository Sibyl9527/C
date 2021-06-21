// Purpose: Declare external int out of main, check the input is +/- and odd/even
// File Name: hw13_09
// Completion Date: 20210618
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  extern int input; // user input
  int check; // check user input
  
  puts("Please input an integer:");
  check = scanf("%d", &input);
  if (check) {
	if (input == 0) {
	  puts("0 is not defined");
	  return EXIT_FAILURE;
	} else if (input > 0) {
      printf("%s", "+ ");
	}  else {
	  printf("%s", "- ");
	} 
	if (input % 2 == 0) {
	  printf("%s", "even\n");
	} else {
	  printf("%s", "odd\n");
	}
  } else {
	puts("Invalid input!");
  }
  
  return EXIT_SUCCESS;
}

int input = 0;



 
