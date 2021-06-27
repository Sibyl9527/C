// Purpose: Order by all goods's price from high to low
// File Name: Ch15_16
// Completion Date: 20210625
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stuff // declare struct elements: name and price
{
  char name[15];
  int price;
};
void swap(struct stuff[], int, int);

int main(void)
{  
  int i; // outter for loop control
  int j; // inner for loop control
  
  struct stuff list[8] = {"Coke", 17, // assign initial values for list
                         "Juice", 15,
						 "Cookie", 5,
						 "Jerky", 25,
						 "boxed meal", 50,
						 "Bottled water", 10,
						 "Chewing gum", 12,
						 "Candy", 3};
						 
  for (i = 0; i < 7; i++) { // bubble sort for high price
    for (j = i + 1; j < 8; j++) {
	  if (list[i].price < list[j].price) {
	    swap(list, i, j);
	  }
	}
  }
  
  for (i = 0; i < 8; i++) { // output result
	printf("%s %d\n", list[i].name, list[i].price);
  }
  
  return EXIT_SUCCESS;
}  

void swap(struct stuff list[], int i, int j)
{
  int temp;
  char str[15];
  
  temp = list[i].price; // swap price
  list[i].price = list[j].price;
  list[j].price = temp;
  
  strcpy(str, list[i].name); // swap name
  strcpy(list[i].name, list[j].name);
  strcpy(list[j].name, str); 
}