// Purpose: Declare two float external variables, one internal variable and output the desc order
// File Name: hw13_03
// Completion Date: 20210617
#include <stdio.h>
#include <stdlib.h>
float num1 = 55;
float num2 = 66;
void Compare(void);

int main(void)
{ 
  Compare();
 
  return EXIT_SUCCESS;
}  

void Compare(void)
{
  float num3 = 64;
  float max;
  float mid;
  float min;
  
  if (num1 > num2) {
	  max = num1;
	  if (num3 > num1) {
		  max = num3;
		  mid = num1;
		  min = num2;
	  } else {
		if (num3 > num2) {
		  mid = num3;
		  min = num2;
		} else {
		  mid = num2;
		  min = num3;
		}
	  }
  } else {
	  max = num2;
	  if (num3 > max) {
		max = num3;
		mid = num2;
		min = num1;
	  } else {
		if (num3 > num1) {
		  mid = num3;
		  min = num1;
		} else {
		  mid = num1;
		  min = num3;
		}
	  }
  }
  
  printf("Max is %.2f, mid is %.2f, min is %.2f\n", max, mid, min);
}
 
