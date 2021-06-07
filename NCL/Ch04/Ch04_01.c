/* Purpose: calculate income and outcome */
/* File Name: Ch04_01*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{
  int balance, income, outcome;
  
  income = 25000;
  outcome = 3500;
  
  balance = income - outcome;
  printf("The monthly balance is %d", balance);
  
  return 0;
}