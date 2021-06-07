/* Purpose: accumulate */
/* File Name: Ch06_05*/
/* Completion Date: 20210524*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int sum = 0;
  int number;
  
  printf("Accumulate:\n");
  
  do{
	printf("The accumulate now is %d\n", sum);
	printf("Please input the next number\n");
	scanf("%d", &number);
	sum += number;
  } while (number != 0);
  
  printf("You input 0, finish accumulate.\n");
  printf("The final accumulation is %d\n", sum);
  
  system("pause");
  return 0;
}