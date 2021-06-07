/* Purpose: Check enter \n */
/* File Name: hw05_00*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
  printf("Please press enter key to Access\n");
  if (getche() == '\r' && '\n')
	printf("Access!\n");
  else
    printf("Nothting happen!\n");
  
  system ("pause");  
  return 0;
}