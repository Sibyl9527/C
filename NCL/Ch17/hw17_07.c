// Purpose: Interest = principal * interest rate * period; Yearly interest rate = Interest / peroid / principal * 100%
//          The user inputs principal, shows the result: Bank name, Interest, Yearly interest rate
// File Name: hw17_07
// Completion Date: 20210711
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  FILE *stream;
  char bank[20];
  float rate;
  int i;
  float principal;
  int period;
  float YearlyInterestRate;
  float interest;
  
  stream = fopen("money.txt", "r"); // read only
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	do {
	  puts("Please input the principal:");
	  scanf("%f", &principal);
	  rewind(stdin);
	  if (principal < 0) {
		puts("The principal must be > 0.");
	  }
	} while (principal < 0);
	do {
	puts("Please input the period(1-12):");
	scanf("%d", &period);
	rewind(stdin);
	  if (period > 12 || period < 0) {
		puts("The period must between 0 to 12.");
	  }
	} while (period > 12 || period < 0);
	
	printf("%-20s%-20s%-20s\n", "Bank Name", "Interest", "Yearly interest rate");
	for (i = 0; i < 60; i++) {
	  printf("%s", "-");
	}
	puts("");
	while (fscanf(stream, "%s %f", bank, &rate) != EOF) {
	  interest = principal * rate * period;
	  YearlyInterestRate = interest / period / principal * 100;
	  printf("%-20s%-20f%-20f\n", bank, interest, YearlyInterestRate);
	}
	puts("");
  }  
  fclose(stream);
  puts("File closed successfully!");
  
  return EXIT_SUCCESS;
}  