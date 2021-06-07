/* Purpose: f(a, b, c) = (a+b+c)(a+b+c) */
/* File Name: hw08_07 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define f(a,b,c) (a + b + c) * (a + b + c)

int main(void)
{
  float a, b, c;
  
  puts("Please input a, b, c");
  scanf("%f %f %f", &a, &b, &c);
  printf("f(a,b,c) = (a+b+c)(a+b+c) = %f\n", f(a,b,c));
  
  system("pause");
  return 0;
}