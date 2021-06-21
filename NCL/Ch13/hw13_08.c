// Purpose: Declare static internal int to accumulate integers, input data on main until user input 0, accumulate data on sub function
// File Name: hw13_08
// Completion Date: 20210618
#include <stdio.h>
#include <stdlib.h>
void Accumulate(int); // accumulate user's input

int main(void)
{
  int input; // user input
  int check; // check user input
  
  puts("Please input one number to accumulate the sum, input 0 to stop and show the result:");
  do {
	check = scanf("%d", &input);
	if (check) {
	  Accumulate(input);
	} else {
	  puts("Invalid input, please input again!");
	  rewind(stdin); // clean the buffer
	}
  } while (input != 0);
  
  return EXIT_SUCCESS;
}

void Accumulate(int input)
{
  static int sum = 0; // static int for accumulate value
  
  if (input != 0) {
	sum += input;
  } else {
	printf("The sum is %d\n", sum);
  }
}



 
