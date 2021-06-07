/* Purpose: f(x,y) = 3x + 2y */
/* File Name: hw08_05 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define f(x,y) 3 * x + 2 * y

int main(void)
{
  float x, y;
  
  puts("Please input x, y");
  scanf("%f %f", &x, &y);
  printf("f(x,y) = 3x + 2y = %f\n", f(x,y));
  
  system("pause");
  return 0;
}