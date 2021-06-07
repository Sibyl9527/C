/* Purpose: Calculate the surface area of the cube */
/* File Name: Ch09_07 */
/* Completion Date: 20210602 */
#include <stdio.h>
#include <stdlib.h>
#define CUBE_AREA edge * edge * 6

int main(void)
{
  float edge;
  
  puts("Please input the edge for cube surface area");
  scanf("%f", &edge);
  
  #ifdef CUBE_AREA
    puts("The cube calculate function already define, calculating...");
  #else
	puts("The cube claculate function is not define, defining...");
  #define CUBE_AREA edge * edge * 6
    puts("Define complete, calculating...");
  #endif
  printf("\nThe surface area of the cube by edge %f is %f\n", edge, CUBE_AREA);
  
  system("pause");
  return 0;
}