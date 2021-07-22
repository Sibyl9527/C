// Purpose: C -> F or F -> C
// File Name: hw16_01
// Completion Date: 20210629
#include <stdio.h>
#include <stdlib.h>

union temperature // temperature share the same memory space
{
  float C;
  float F;
};


int main(void)
{ 
  int option; // user choose C or F
  union temperature exchange;
  
  puts("Please select (1) C -> F (2) F -> C");
  scanf("%d", &option);
  rewind(stdin);
  if (option == 1) {
	puts("Please input the temperature:");
	scanf("%f", &exchange.F);
	rewind(stdin);
	exchange.F = exchange.F * 9 / 5 + 32;
	printf("The F is %.2f\n", exchange.F);
  } else if (option == 2) {
	puts("Please input the temperature:");
	scanf("%f", &exchange.C);
	rewind(stdin);
	exchange.C = (exchange.C - 32) * 5 / 9;
	printf("The C is %.2f\n", exchange.C);
  } else {
	puts("Invalid input!!");
  }
  
  return EXIT_SUCCESS;
}  