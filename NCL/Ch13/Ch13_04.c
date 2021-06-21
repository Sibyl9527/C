// Purpose: Calculate the total amount of oranges - the sample of extern
// File Name: Ch13_04
// Completion Date: 20210616
#include <stdio.h>
#include <stdlib.h>

float calc(int);

int main(void)
{ 
  extern int orange; // extern global variable in the endline
  int number; // assign for orange quantities
  float rate; // discount
  float total; // total amount
  
  printf("An orange is $%d, discount on bulk purchase, how many oranges do you wnat?\n", orange);
  scanf("%d", &number);
  
  if (number <= 0) { // do nothing if over limit
	puts("Don't fool me!");
	return EXIT_FAILURE;
  } else if (number >= 1000) {
	puts("We can't supply so many quantities, sorry!");
	return EXIT_FAILURE;
  }
  
  rate = calc(number);
  
  total = orange * number * rate;
  printf("%d oranges are $%5.0f\n", number, total);
 
  return EXIT_SUCCESS;
}  

float calc(int num)
{
  if (num > 50) { // 20% discount
	return 0.8;
  } else if (num > 20) { // 10% discount
	return 0.9;
  } else {
	return 1.0;
  }
}

int orange = 10; // galobal variable

