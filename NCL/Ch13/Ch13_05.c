// Purpose: Calculate the distance of vertical fall .
//          The sample to compare the priority between the local variable and the global variable.
//          It means that do not use the same name of the variable, the result will be different.
// File Name: Ch13_05
// Completion Date: 20210616
#include <stdio.h>
#include <stdlib.h>

float calcg1(void);
float calcg2(void);

float g = 9.8; // gravity 9.8 m/s^2
float t = 5.0; // global variable of time

int main(void)
{ 
  printf("The distance of first vertical fall is %6.2f meters\n", calcg1());
  printf("The distance of second vertical fall is %6.2f meters\n", calcg2());
 
  return EXIT_SUCCESS;
}  

float calcg1(void)
{
  return 0.5 * g * t * t;
}

float calcg2(void)
{
  float t = 10.0; // local variable of time
  return 0.5 * g * t * t;
}

