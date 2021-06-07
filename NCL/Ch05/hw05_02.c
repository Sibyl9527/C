/* Purpose: calculate triangle and trapezoid */
/* File Name: hw05_02*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int option, area, base, altitude, longbase;
  char *shape;
  
  printf("Which area do you want to calculate? (1) Triangle (2) Trapezoid\n");
  scanf("%d", &option);
  
  switch (option) {
    case 1: //Triangle
	  printf("Please input base and altitude\n");
	  scanf("%d %d", &base, &altitude);
	  area = base * altitude / 2;	  
	  break;
	case 2:  //Trapezoid
	  printf("Please input long base, base and altitude\n");
	  scanf("%d %d %d", &longbase, &base, &altitude);
	  area = (longbase + base) * altitude / 2;
	  break;
	default:
	printf("Please do not input wrong parameter.\n");
  }
  
  if (option == 1 || option == 2) {	
    shape = (option == 1) ? "Triangle" : "Trapezoid";
    printf("The %s area is %d\n", shape, area);  
  }
  
  system ("pause");  
  return 0;
}