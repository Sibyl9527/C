/* Purpose: calculate the discount of the goods */
/* File Name: Ch05_01*/
/* Completion Date: 20210521*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int price, discount;
  char option;
  
  printf("Please input the price\n");
  scanf("%d", &price);
  
  printf("Discount Y/N?\n");
  scanf(" %c", &option); /* because %d is above, so we need to put a space before %c, you can refer to scanfCommonTraps.pdf for the explaination*/
  
  if (option == 'Y' || option == 'y'){
    printf("Which percent off do you want, please enter 1 - 9?\n");
	scanf("%d", &discount);
	price = price * discount * 0.1;
  }
  
  printf("Your final price is %d\n", price);
	  
  
  system("pause");  
  return 0;
}