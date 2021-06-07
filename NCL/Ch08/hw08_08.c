/* Purpose: (1+2) + (2+3) + ... + (n+(n+1)) */
/* File Name: hw08_08 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define NPLUSONE(x) x + x + 1

int main(void)
{
  int i, n, sum = 0;
  
  puts("Claculate the result of (1+2) + (2+3) + ... + (n+(n+1))");
  puts("Please input n");
  scanf("%d", &n);
  for(i = 1; i <= n; i++) {
    sum += NPLUSONE(i);
  }
  printf("The result is %d\n", sum);
  
  system("pause");
  return 0;
}