// Purpose: Union practice - pay for cash or credit card
// File Name: Ch16_02
// Completion Date: 20210627
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union paid // declare share memory space paid
{
  char card[17];
  int cash;
}money; 

int main(void)
{ 
  int amount; // assign amounts payable
  int option; // select credit card or cash
  
  puts("Please input amounts payable:");
  scanf("%d", &amount);
  rewind(stdin);
  puts("Pay method:(1) Credit card (2) Cash");
  scanf("%d", &option);
  rewind(stdin);
  
  if (option == 1) {
	puts("Please input your card number:");
	scanf("%s", money.card);
	if (strlen(money.card) != 16) {
	  puts("Invalid card number, cancel transaction.");
	} else {
	  puts("Successful transaction!");
	}
  } else {
	puts("Please input payment amount:");
	scanf("%d", &money.cash);
	if (money.cash < amount) {
	  puts("Insufficient amount, cancel transaction.");
	} else {
	  printf("Successful transaction, $%d for you.", money.cash -amount);
	}
  }
  
  return EXIT_SUCCESS;
}  