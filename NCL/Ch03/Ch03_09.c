/* Purpose: assign width*/
/* File Name: Ch03_09*/
/* Completion Date: 20210509*/
#include <stdio.h>

int main(void)
{
  int n = 74;
  float m = 7.4;
  
  printf("Width = 5, fill space: %5d\n", n);
  printf("Width = 10, fill zero: %010d\n", n);
  printf("Width int 4, dec 2: %7.2f\n", m);
  printf("Width int 4, dec 2, fill zero: %07.2f\n", m);
  
  return 0;
}