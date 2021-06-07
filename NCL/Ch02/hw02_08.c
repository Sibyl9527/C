/* Purpose: Show avg. */
/* File Name: hw02_08*/
/* Completion Date: 20210509*/
#include <stdio.h>

int main(void)
{
  int a = 95, b = 74, c = 81;
  float avg;
  
  avg = ((float)a + b + c) / 3;
  printf("Avg is %f.\n", avg);
  
  return 0;
}