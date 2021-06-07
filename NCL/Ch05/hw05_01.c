/* Purpose: input three integers and output the smallest one */
/* File Name: hw05_01*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x, y, z, smallest;
  smallest = 0;
  
  printf("Please input three integers\n");
  scanf("%d %d %d", &x, &y, &z);
  
  if (x > y) {
    if (y > z) {
	  smallest = z;
	} else {
	  smallest = y;
	}
  } else {
    if (x > z) {
	  smallest = z;
	} else {
	  smallest = x;
	}
  }
  
  printf("The original three integers are %d, %d and %d\n", x, y, z);
  printf("The smallest one is %d\n", smallest);
  
  system ("pause");  
  return 0;
}