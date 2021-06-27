// Purpose: Continue hw15_07, add a function to output menu, and order by price desc.
// File Name: hw15_08
// Completion Date: 20210626
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
  
  puts("Welcome to Shake Shack menu search system, please input a number (1-10 to search, 0 to output menu)");
  do {
	flag = 1;
	check = scanf("%d", &ItemNumber);
	rewind(stdin);
	if (ItemNumber > 10 || ItemNumber < 0 || check == 0) { // check invalid input
	  puts("Invalid item number, please input again!");
	  puts("please input a number (1-10)");
	  flag = 0;
	} else if (ItemNumber == 0) { // output menu and order by desc
	  int i;
	  int j;
	  int TempItem;
      char TempDishName[25];
      float TempPrice;
	  for (i = 0; i < 9; i++) { // bubble sort for desc order
		for (j = i + 1; j < 10; j++) {
		  if (ShakeShack[i].Price < ShakeShack[j].Price) {
			TempItem = ShakeShack[i].Item;
			ShakeShack[i].Item = ShakeShack[j].Item;
			ShakeShack[j].Item = TempItem;
			
			strcpy(TempDishName, ShakeShack[i].DishName);
			strcpy(ShakeShack[i].DishName, ShakeShack[j].DishName);
			strcpy(ShakeShack[j].DishName, TempDishName);
			
			TempPrice = ShakeShack[i].Price;
			ShakeShack[i].Price = ShakeShack[j].Price;
			ShakeShack[j].Price = TempPrice;
		  }
		}
	  }
	  printf("%-8s%-25s%-16s\n", "Item", "Dish Name", "Price");
	  for (i = 0; i < 10; i++) {
		printf("%-8d%-25s%-16.2f\n", ShakeShack[i].Item, ShakeShack[i].DishName, ShakeShack[i].Price);
	  }
	  break;
	} else { // output seraching
      printf("Dish name: %s\t Price: %.2f\n", ShakeShack[ItemNumber - 1].DishName, ShakeShack[ItemNumber - 1].Price);
	  puts("Conitue searching?(y/n)");
	  scanf("%c", &GoNext);
	  rewind(stdin);
	  if (GoNext == 'n' || GoNext == 'N') { // continue?
		break;
	  } else {
		flag = 0;
		puts("please input a number (1-10 to search, 0 to output menu)");
	  }
	}	
  } while (flag == 0);
 
  return EXIT_SUCCESS;
}  