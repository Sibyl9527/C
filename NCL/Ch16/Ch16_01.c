// Purpose: Union practice - share same memory space
// File Name: Ch16_01
// Completion Date: 20210627
#include <stdio.h>
#include <stdlib.h>
union data // declare share memory space data
{
  int a;
  char b;
}mydata; 

int main(void)
{ 
  mydata.a = 0x1200;
  printf("mydata.a = %04x\n", mydata.a);
  mydata.b = 0x33;
  printf("mydata.b = %c\n", mydata.b);
  printf("mydata.a = %04x\n", mydata.a);
  
  return EXIT_SUCCESS;
}  