/* Purpose: classify grades by if else */
/* File Name: Ch05_03*/
/* Completion Date: 20210522*/
#include <stdio.h>

int main(void)
{
  int grade;
  
  printf("Classify grades, please input your grade\n");
  scanf("%d", &grade);
  
  if (grade >= 90){
    printf("A class!\n");
  }
  else if (grade >= 80){
	printf("B class!\n");
  }
  else if (grade >= 70){
	printf("C class!\n");
  }
  else if (grade >= 60){
	printf("D class!\n");
  }
  else {
    printf("E class!\n");
  }
	  
  return 0;
}