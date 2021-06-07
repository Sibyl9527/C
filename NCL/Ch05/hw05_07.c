/* Purpose: singular or double by ? : */
/* File Name: hw05_07*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int number, check;
  
  printf("Please input a number, and we will tell you it is a singular or double\n");
  check = scanf("%d", &number);
  
  if (check == 1) {
    (number % 2 == 1 || number % 2 == -1) ? (printf("The %d is a singular\n", number)) : (printf("The %d is a double\n", number));
  } else {
    printf("Invalid input!\n");
  }
  
  system ("pause");  
  return 0;
}