/* Purpose: cube */
/* File Name: Ch08_01 */
/* Completion Date: 20210531 */
#include <stdio.h>
#include <stdlib.h>
#define CUBE x * x * x

int main(void)
{
  int x;
  
  puts("Calculate x's cube, please input x");
  scanf("%d", &x);
  printf("The cube of %d is %d\n", x, CUBE);
  
  system("pause");
  return 0;
}