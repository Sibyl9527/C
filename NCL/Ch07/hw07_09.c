/* Purpose: Greatest prime factor */
/* File Name: hw07_09 */
/* Completion Date: 20210530 */
#include <stdio.h>
#include <stdlib.h>
int GPF(int, int);

int main(void)
{
  int check, number, IniPrime = 2;
  
  do {
  printf("Please input a number for it's GPF(Greatest prime factor)?\n");
  check = scanf("%d", &number);
  if (check != 1)
	printf("Invalid input!!\n");
  } while (check != 1);
	  
  printf("The GPF of %d is %d\n", number, GPF(number, IniPrime));
  
  system("pause");
  return 0;
}

int GPF(int number, int IniPrime)
{
  if (number % IniPrime == 0) { 
    if (number / IniPrime == 1) {
	  return IniPrime;
	} else {	
	  GPF(number / IniPrime, IniPrime);
	}	  
  } else {
    IniPrime = IniPrime == 2 ? 3 : IniPrime + 2;
	GPF(number, IniPrime);
  }
}