/* Purpose: Factorization */
/* File Name: Ch07_17 */
/* Completion Date: 20210529 */
#include <stdio.h>
#include <stdlib.h>
void factor(long, long);

int main(void)
{
  int check;
  long number, div;
  
  do {
  printf("Please input a number for factorization\n");
  check = scanf("%d", &number);
  if (check != 1)
	printf("Invalid input!!\n");
  } while (check != 1);
	  
  printf("%d = ", number);
  factor(number, 2);
  
  system("pause");
  return 0;
}

void factor(long num, long div)
{
  if (num == 1 || div > num) {
	printf("\b \n");
	return;
  } else {
	if (num % div == 0) {
	  printf("%d*", div);
	  factor(num/div, div);
	} else {
	  div = (div == 2 ? 3 : div + 2);
	  factor(num, div);
	}
  }
}

