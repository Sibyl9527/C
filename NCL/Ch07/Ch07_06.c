/* Purpose: calculate the stardard weight */
/* File Name: Ch07_06 */
/* Completion Date: 20210528 */
#include <stdio.h>
float stdweight(int, int);

int main(void)
{
  int gender, height;
  float weight;
  
  do
  {
	printf("Gender: (1)Male (2)Female\n");
	scanf("%d", &gender);
  } while (gender != 1 && gender != 2);
	 	 
  printf("Please input your height\n");
  scanf("%d", &height);
  
  weight = stdweight(gender, height);
  
  printf("Your standard weight is %f\n", weight);
  
  return 0;
}

float stdweight(int gender, int height)
{
  float weight;
  if (gender == 1) {
	weight = (height - 80) * 0.7;
  } else {
	weight = (height - 70) * 0.6;
  }
  return weight;
}