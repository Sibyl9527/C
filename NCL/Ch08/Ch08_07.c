/* Purpose: Sphere volume */
/* File Name: Ch08_07 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
#define CUBE r * r * r
#define BALL 4.0 / 3.0 * CUBE * PI

int main(void)
{
  float r;
  
  puts("Please input the radious");
  scanf("%f", &r);
  printf("The Sphere volume is %.2f\n", BALL); 
  
  system("pause");
  return 0;
}
