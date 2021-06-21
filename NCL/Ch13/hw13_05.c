// Purpose: Declare one external int variable, input by user and calculate it's cube in the sub fuction, then output on main
// File Name: hw13_05
// Completion Date: 20210618
#include <stdio.h>
#include <stdlib.h>
int intvalue; // external int variable for input 
int CalCube(void); // calculate intvalue's cube

int main(void)
{
  int cube;
  int check;
  
  puts("Please input an integer for Cube");
  check = scanf("%d", &intvalue);
  if (check) { // check wether the input is invalid or not
    cube = CalCube();
    printf("The cube is %d\n", cube);
  } else {
	puts("Invalid input!!");
	return EXIT_FAILURE;
  }
  
  return EXIT_SUCCESS;
}

int CalCube(void) 
{
  return intvalue * intvalue * intvalue;
}


 
