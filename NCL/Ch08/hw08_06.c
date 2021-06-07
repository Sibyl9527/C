/* Purpose: f(x) = 3x + 2 */
/* File Name: hw08_06 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define f(x) 3 * x + 2

int main(void)
{
  float x;
  
  puts("Please input x");
  scanf("%f", &x);
  printf("f(x) = 3x + 2 = %f\n", f(x));
  
  system("pause");
  return 0;
}