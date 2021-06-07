/* Purpose: % + */
/* File Name: hw03_00*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{  
  int int_number = 14;
  float float_number = 1.4;
  
  printf("%04d\n", int_number);
  printf("%+04d\n", int_number);
  printf("%04.2f\n", float_number);
  
  return 0;
}