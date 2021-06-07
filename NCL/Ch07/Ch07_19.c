/* Purpose: Fibonacci sequence */
/* File Name: Ch07_19 */
/* Completion Date: 20210530 */
#include <stdio.h>
#include <stdlib.h>
int fibo(int);

int main(void)
{
  int check, count, value;
  
  do {
  printf("Which item do you want to find from Fibonacci sequence?\n");
  check = scanf("%d", &count);
  if (check != 1 || count <= 0)
	printf("Invalid input!!\n");
  } while (check != 1 || count <= 0);
	  
  value = fibo(count);
  printf("The value of No.%d of sequence is %d\n", count, value);
  
  system("pause");
  return 0;
}

int fibo(int count)
{
  if (count < 3) {
	return 1;
  } else {
	return (fibo(count - 2) + fibo(count - 1));
  }
}

