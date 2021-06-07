/* Purpose: Saving machine input coins and output total amount */
/* File Name: hw04_09*/
/* Completion Date: 20210520*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int total, one, five, ten;
  
  printf("How many one coins do you have?\n");
  scanf("%d", &one);
  printf("How many five coins do you have?\n");
  scanf("%d", &five);
  printf("How many ten coins do you have?\n");
  scanf("%d", &ten);
  
  total = one + five * 5 + ten * 10;
  printf("The total amount is %d\n", total);
  
  system("pause");
  
  return 0;
}