/* Purpose: Unlimited call sub function */
/* File Name: Ch07_12 */
/* Completion Date: 20210529 */
#include <stdio.h>

void func(void);

int main(void)
{
  func();
  
  return 0;
}

void func()
{
  printf("This is an unstopable sub function\n");
  func();
}
