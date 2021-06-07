/* Purpose: calculate the stardard weight */
/* File Name: Ch07_05 */
/* Completion Date: 20210528 */
#include <stdio.h>
void printresult(float);

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
  
  if (gender == 1) {
	weight = (height - 80) * 0.7;
  } else {
	weight = (height - 70) * 0.6;
  }
  
  printresult(weight);
  
  return 0;
}

void printresult(float result)
{
  printf("Your standard weight is %f\n", result);
}