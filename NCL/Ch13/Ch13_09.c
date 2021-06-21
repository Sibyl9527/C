// Purpose: Simple ATM - static local variable application
// File Name: Ch13_09
// Completion Date: 20210616
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void withdraw(void);
int money; // money withdraw

int main(void)
{ 
  char option; // check continue or not
  int check;
  do {
	puts("How much money do you want to withdraw?");
	check = scanf("%d", &money);
	if (check) { // check input type
	  withdraw();
	puts("Continue?(y/n)");
	option = getch();
	} else {
	  puts("Invalid input, please input again!");
	  option = 'y';
	  rewind(stdin); // flush the buffer
	}
  } while (option == 'y' || option == 'Y');
 
  return EXIT_SUCCESS;
}  

void withdraw(void)
{
  static int balance = 10000; // static balance
  
  balance = balance - money;
  if (balance >= 0) {
	printf("The account balance is $%d\n", balance);
  } else {
	printf("The account balance is $%d\n", balance);
  }
}

