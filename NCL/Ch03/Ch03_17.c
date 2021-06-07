/* Purpose: putchar practice */
/* File Name: Ch03_17*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int n = 100;
  
  putchar(n);
  printf("\n");  
  putchar(100);
  printf("\n"); 
  putchar('\n');
  putchar('n');
  
  return 0;
}