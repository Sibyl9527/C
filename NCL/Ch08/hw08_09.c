/* Purpose: (1/1) + (1/2) + ... + (1/n) */
/* File Name: hw08_09 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define SUM_REC(x) 1 / x 

int main(void)
{
  int i, n;
  float  sum = 0.0;
  
  puts("Claculate the result of (1/1) + (1/2) + ... + (1/n)");
  puts("Please input n");
  scanf("%d", &n);
  for(i = 1; i <= n; i++) {
    sum += (float)SUM_REC(i);
  }
  printf("The result is %f\n", sum);
  
  system("pause");
  return 0;
}