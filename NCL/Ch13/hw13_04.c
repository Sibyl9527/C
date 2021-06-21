// Purpose: Declare two register int variables, calculate the GCF
// File Name: hw13_04
// Completion Date: 20210618
#include <stdio.h>
#include <stdlib.h>

int GCF(register int, register int); // for find the Greatest Common Factor

int main(void)
{
  int num1;
  int num2;
  
  puts("Please input two integers for GCF");
  scanf("%d %d", &num1, &num2);
  
  printf("The GCF of %d and %d is %d\n", num1, num2, GCF(num1, num2));
  
  return EXIT_SUCCESS;
}

int GCF(register int num1, register int num2) 
{
  if (num1 % num2 == 0) {
	  return num2;
  } else {
	  return GCF(num2, num1 % num2);
  }
}


 
