/* Purpose: print half number */
/* File Name: Ch07_07 */
/* Completion Date: 20210528 */
#include <stdio.h>
double doublehalf(double);
int inthalf(double);

int main(void)
{
  int i;
  
  printf("Return type is double\n");
  for (i = 0; i < 5; i++) {
	printf("full = %d half = %f\n", i, doublehalf(i));
  }
  
  printf("Return type is int\n");
  for (i = 0; i < 5; i++) {
	printf("full = %d half = %f\n", i, inthalf(i));
  }
  
  return 0;
}

double doublehalf(double s)
{
  return s / 2;
}

int inthalf(double s)
{
  return s / 2;
}