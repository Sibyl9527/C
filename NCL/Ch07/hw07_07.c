/* Purpose: show result by recuring sub function for 1 + 2 + ... + 100 */
/* File Name: hw07_07 */
/* Completion Date: 20210530 */
#include <stdio.h>
int RecuringAdd(int, int);

int main(void)
{
  int initial = 1, result = 1, final;
  final = RecuringAdd(initial, result);
  printf("Final is %d\n", final);
  
  return 0;
}

int RecuringAdd(int initial, int result)
{
  
  if (initial > 100) {
	  return 100;
  } else {
    return result = initial + RecuringAdd(initial + 1, result);
  }
}

