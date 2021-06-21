// Purpose: Global varibales practice - simple calculator
// File Name: Ch13_03
// Completion Date: 20210615
#include <stdio.h>
#include <stdlib.h>
float plus(void);
float minus(void);
float multiply(void);
float division(void);
float num1, num2;
char operation;

int main(void)
{ 
  puts("Please input formula:");
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

float plus(void)
{
  return num1 + num2;
}

float minus(void)
{
  return num1 - num2;
}

float multiply(void)
{
  return num1 * num2;
}

float division(void)
{
  return num1 / num2;
}