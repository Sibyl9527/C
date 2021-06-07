/* Purpose: Output an array (elements from a to z) order by desc */
/* File Name: hw10_02 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{
  char array[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                    'n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int i;
  
  for (i = 25; i >= 0; i--) {
	printf("%c ", array[i]);
  }

  return 0;
}

