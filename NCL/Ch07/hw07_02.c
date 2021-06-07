/* Purpose: Print something by sub function */
/* File Name: hw07_02 */
/* Completion Date: 20210530 */
#include <stdio.h>
#include <stdlib.h>
void print(void);

int main(void)
{
  print();
  
  system("pause");
  return 0;
}

void print(void)
{
  int number, check, count;
  
  do {
    printf("How many time do you want to print?\n");
    check = scanf("%d", &number);
    if (number <= 0) {
	  check = 0;
	  printf("Invalid input!!\n");
    }	  
  } while (check != 1);
  
  for (count = 1; count <= number; count++)
    printf("HELLO C WORLD!!\n");
}

