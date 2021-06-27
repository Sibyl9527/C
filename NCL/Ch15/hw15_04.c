// Purpose: Delare a TV struct includes Brand, MonitorSize, Year and Price.
//          Assign 5 initial values for this struct and output.
// File Name: hw15_04
// Completion Date: 20210626
#include <stdio.h>
#include <stdlib.h>
struct TV
{
  char *Brand; // TV brand
  int MonitorSize; // TV size
  int Year; // Manufacture year
  int Price; // TV price
} Inventory[5] = {"Sony", 40, 2021, 25000, // assign initial values
                  "3Birds", 42, 2021, 23000,
				  "Phillip", 38, 2020, 20000,
				  "Sharp", 45, 2019, 24500,
				  "BenQ", 42, 2021, 21000};


int main(void)
{ 
  int i; // for loop control
  
  printf("%-10s%-8s%-8s%-8s\n", "Brand","Size","Year","Price"); // output title
  for (i = 0; i < 5; i++) { // out info from Inventory array
	printf("%-10s%-8d%-8d%-8d\n", Inventory[i].Brand, Inventory[i].MonitorSize, 
	                           Inventory[i].Year, Inventory[i].Price);
  }  
  
  return EXIT_SUCCESS;
}  