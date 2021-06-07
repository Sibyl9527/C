/* Purpose: Weekly salary */
/* File Name: hw04_10*/
/* Completion Date: 20210520*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float hourly_rate;
  
  printf("please enter the hourly rate\n");
  scanf("%f", &hourly_rate);
  printf("You work 48 hour, so your total weekly salary is %.2f\n", (40 * hourly_rate) + (5 * hourly_rate * 1.33) + (3 * hourly_rate * 1.66));
  
  system("pause");  
  return 0;
}