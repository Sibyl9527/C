/* Purpose: cuboid volume */
/* File Name: hw04_07*/
/* Completion Date: 20210520*/
#include <stdio.h>

int main(void)
{
  float length, width, height;
  
  printf("Please input length, width and height\n");
  scanf("%f %f %f", &length, &width, &height);
  printf("The volume of cuboid is %.2f", length * width * height);
  
  return 0;
}