/* Purpose: Rectangle area */
/* File Name: hw08_03 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define R_AREA l * w

int main(void)
{
  float l, w;
  
  puts("Calculate the rectangle area, please input the length and width");
  scanf("%f %f", &l, &w);
  printf("The rectangle area is %f\n", R_AREA);
  
  system("pause");
  return 0;
}