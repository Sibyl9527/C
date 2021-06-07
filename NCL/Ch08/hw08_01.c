/* Purpose: Square sum */
/* File Name: hw08_01 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define f(x,y) x * x + y * y 

int main(void)
{
  float x, y;
  
  puts("Please input x, y and you will get the result f(x,y) = x^2 + y^2");
  scanf("%f %f", &x, &y);
  printf("The result is %f\n", f(x,y));
  
  system("pause");
  return 0;
}
