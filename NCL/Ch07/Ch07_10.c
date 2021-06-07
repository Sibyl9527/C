/* Purpose: multi sub function practice */
/* File Name: Ch07_10 */
/* Completion Date: 20210529 */
#include <stdio.h>

void func1(void);
void func2(void);
void func3(void);

int main(void)
{
  func1();
  func2();
  func2();
  func3();
  
  return 0;
}

void func1()
{
  printf("This is function 1\n");
}

void func2()
{
  printf("This is function 2\n");
}

void func3()
{
  printf("This is function 3\n");
}