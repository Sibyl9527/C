/* Purpose: find 7's multiply and print by main function */
/* File Name: hw07_04 */
/* Completion Date: 20210530 */
#include <stdio.h>
_Bool seven_mult(int);

int main(void)
{
  int count;
  _Bool check;
  
  for (count = 1; count <= 100; count++) {
	check = 0;
	check = seven_mult(count);
	if (check)
	  printf("%d ", count);
  }
  
  return 0;
}

_Bool seven_mult(int count)
{
  if (count % 7 == 0)
    return 1;
  else
	return 0;
}

