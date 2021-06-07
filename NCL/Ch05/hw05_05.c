/* Purpose: A B C grades by if else */
/* File Name: hw05_05*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int grades, check;
  
  printf("Please input your grade\n");
  check = scanf("%d", &grades);
  
  if (check == 1) { //check the scanf success to get the number
    if (grades < 0) { //check negative number
	  printf("Invalid input!\n");
	} else if (grades <= 60) {
      printf("C class!\n");
    } else if (grades <= 79) {
  	  printf("B class!\n");
    } else if (grades <= 100) {
	  printf("A class!\n");
    } else {
	  printf("Invalid input!\n");
    }
  } else {
	printf("Invalid input!\n");
  }
  
  system ("pause");  
  return 0;
}