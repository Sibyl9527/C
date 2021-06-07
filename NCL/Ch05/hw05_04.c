/* Purpose: phone bill */
/* File Name: hw05_04*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int minutes;
  float discount, total;
  discount = 1; // not discount if < 600 minutes
  
  printf("Please input your monthly total call time by minutes\n");
  scanf("%d", &minutes);
  
  if (minutes > 1200) {
    discount = 0.79;
  } else if (minutes > 600) {
    discount = 0.9;
  }
  total = minutes * 0.5 * discount;
  printf("The phone bill is %.2f$\n", total);
  
  system ("pause");  
  return 0;
}