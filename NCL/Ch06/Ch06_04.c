/* Purpose: count execute loop time */
/* File Name: Ch06_04*/
/* Completion Date: 20210524*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
  int count = 0;
  char option;
  
  do
  {
	count++;
	printf("\nThe loop already execute %d time\n", count);
	printf("continue? (y/n)");
	option = getche();
  } while (option == 'y');
  printf("\nThe loop total execute %d time\n", count);
  
  system("pause");
  return 0;
}