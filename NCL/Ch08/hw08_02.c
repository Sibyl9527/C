/* Purpose: Circle area */
/* File Name: hw08_02 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
#define C_AREA(r) PI * r * r

int main(void)
{
  float r;
  
  puts("Calculate the circle area, please input the radious");
  scanf("%f", &r);
  printf("The circle area is %f\n", C_AREA(r));
  
  system("pause");
  return 0;
}