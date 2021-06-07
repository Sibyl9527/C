/* Purpose: Search hotel, room level and price */
/* File Name: Ch09_04 */
/* Completion Date: 20210602 */
#include <stdio.h>
#include <stdlib.h>
#include "Ch09_04.h"

int main(void)
{
  int option, price;
  puts("Please select the room level");
  puts("(1)President(2)High-class(3)Mid-class(4)Low-class");
  scanf("%d", &option);
  
  puts("Your decision is:");
  switch (option) {
	case 1:
	  puts("President room");
	  price = PRESIDENT;
	  break;
	case 2:
	  puts("High-class room");
	  price = HI_CLASS;
	  break;
	case 3:
	  puts("Mid-class room");
	  price = MID_CLASS;
	  break;
	case 4:
	  puts("Low-class room");
	  price = LOW_CLASS;
	  break;
	default:
	  puts("Road");
	  price = 0;
  }
  printf("The price is %d\n", price);
  
  system("pause");
  return 0;
}