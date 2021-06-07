/* Purpose: show result by recuring sub function for 1 + 2 + ... + 100 */
/* File Name: hw07_07_v1 */
/* Completion Date: 20210530 */
#include <stdio.h>
int RecuringAdd(int);

int main(void)
{
  int initial = 100; 
  printf("Final is %d\n", RecuringAdd(initial));
  
  return 0;
}

int RecuringAdd(int initial)
{
  int result = 0;
  if (initial != 0) {
	result = initial + RecuringAdd(initial - 1);
  }
  return result;
}

