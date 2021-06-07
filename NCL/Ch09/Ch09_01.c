/* Purpose: Output science constants */
/* File Name: Ch09_01 */
/* Completion Date: 20210602 */
#include <stdio.h>
#define PI 3.14159
#define LIGHT 299792.458
#define G 6.672e-11

int main(void)
{
  printf("PI = %2.5f\n", PI);
  printf("Light speed = %6.3f\n", LIGHT);
  printf("Gravity = %2.3e\n", G);
  
  return 0;
}