// Purpose: The simple calculator, include Ch13_06.h, Ch13_06.c
//          Follow the command to link 2 .c file
//          gcc Ch13_07.c Ch13_06.c -o Ch13_07
//              main      sub          exe name
// File Name: Ch13_07
// Completion Date: 20210616
#include <stdio.h>
#include <stdlib.h>
#include "Ch13_06.h"

float num1;
float num2;
char operation;

int main(void)
{
  puts("Please input the formula:");
  scanf("%f%c%f", &num1, &operation, &num2);
  
  if (operation == '+') { // check which formula will be called
	printf("= %f\n", plus());
  } else if (operation == '-') {
	printf("= %f\n", minus());
  } else if (operation == '*') {
	printf("= %f\n", multiply());
  } else if (operation == '/') {
	printf("= %f\n", division());
  } else {
	puts("Invalid operator input!");
  }
  
  return EXIT_SUCCESS;
}