// Purpose: Delare a menu struct includes Item, DishName, Price.
//          Assign 10 initial values, and user can input Item to search dish name and price.
// File Name: hw15_07
// Completion Date: 20210626
#include <stdio.h>
#include <stdlib.h>
struct menu
{
  int Item;
  char DishName[25];
  float Price;
}ShakeShack[10] = {1, "ShackBurger", 4.60,
                   2, "Shack Stack", 8.85,
			       3, "Shack-cago Dog", 4.00,
			       4, "Cheese Fries", 3.70,
			       5, "Fair Shake", 5.50,
			       6, "Floats", 4.75,
			       7, "Fountain Soda", 2.25,
			       8, "Fresh Brewed Iced Tea", 1.95,
			       9, "ShackMeister Ale", 5.00,
                   10, "Bag O' Bones", 7.50};

int main(void)
{ 
  int ItemNumber;
  int flag; // for do while loop
  int check; // check input
  char GoNext; // continue or not
  
  puts("Welcome to Shake Shack menu search system, please input a number (1-10)");
  do {
	flag = 1;
	check = scanf("%d", &ItemNumber);
	rewind(stdin);
	if (ItemNumber > 10 || ItemNumber < 0 || check == 0) { // check invalid input
	  puts("Invalid item number, please input again!");
	  puts("please input a number (1-10)");
	  flag = 0;
	} else { // output seraching
      printf("Dish name: %s\t Price: %.2f\n", ShakeShack[ItemNumber - 1].DishName, ShakeShack[ItemNumber - 1].Price);
	  puts("Conitue searching?(y/n)");
	  scanf("%s", &GoNext);
	  rewind(stdin);
	  if (GoNext == 'n' || GoNext == 'N') { // continue?
		break;
	  } else {
		flag = 0;
		puts("please input a number (1-10)");
	  }
	}	
  } while (flag == 0);
 
  return EXIT_SUCCESS;
}  