/* Purpose: n! */
/* File Name: hw08_10 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define F(n,i) n - i

int main(void)
{
  int count, n, result, i = 1;
  
  
  puts("Claculate the result of n!");
  puts("Please input n");
  scanf("%d", &n);
  result = n;
  for(count = n; count > 1; count--) {
    result *= F(count, i);
  }
  printf("The result is %d\n", result);
  
  system("pause");
  return 0;
}