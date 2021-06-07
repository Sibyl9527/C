/* Purpose: A B C grades by switch case */
/* File Name: hw05_06*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int grades, check;
  
  printf("Please input your grade\n");
  check = scanf("%d", &grades);
  
  if (check == 1) { //check the scanf success to get the number
    switch (grades) {
	  case 0 ... 60:
	    printf("C class!\n");
	    break;
	  case 61 ... 79:
	    printf("B class!\n");
	    break;
	  case 80 ... 100:
	    printf("A class!\n");
	    break;
	  default:
	    printf("Invalid input!\n");
	}
  } else {
	printf("Invalid input!\n");
  }
  
  system ("pause");  
  return 0;
}