/* Purpose: output positive and negtive sign*/
/* File Name: Ch03_10*/
/* Completion Date: 20210509*/
#include <stdio.h>

int main(void)
{
  int n = 74;
  
  printf("Width = 5, positive sign, fill zero: %+05d\n", n);
  printf("Width = 5, positive sign, fill space: %+5d\n", n);
  
  return 0;
}