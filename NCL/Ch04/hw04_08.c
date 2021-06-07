/* Purpose: Sphere radius */
/* File Name: hw04_08*/
/* Completion Date: 20210520*/
#include <stdio.h>

int main(void)
{
  float radius, pi = 3.14;
  
  printf("Please input radius\n");
  scanf("%f", &radius);
  printf("The volume of the Sphere is %.2f", 4 / 3 * pi * radius * radius * radius);
  
  return 0;
}