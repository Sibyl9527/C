/* Purpose: standard weight */
/* File Name: hw05_09*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int gender, height;
  float weight;
  
  printf("This is a standard weight calculation program, please select your gender 1. Male 2. Female\n");
  scanf("%d", &gender);
  rewind(stdin);
  printf("Please input your height\n");
  scanf("%d", &height);
  
  switch (gender) {
    case 1:
	  weight = (height - 80) * 0.7;  
	  break;
	case 2:
	  weight = (height - 70) * 0.6;  
	  break;
	default:
	  printf("Invalid input!\n");
  }
  
  printf("The standard of your height is %.2f\n", weight);
  
  system ("pause");  
  return 0;
}