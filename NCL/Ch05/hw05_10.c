/* Purpose: weekly salary */
/* File Name: hw05_10*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float hours, overtime, basic, salary;
  int check;
  
  printf("Please input your weekly work hours\n");
  check = scanf("%f", &hours);
  
  if (check == 1) {
	if (hours >= 0) {
      if (hours - 40 > 0) { //work overtime
		overtime = hours - 40;
		basic = 40;
	  } else { // normal
	    basic = hours;
		overtime = 0;
	  }
	  salary = basic * 60 + overtime * 60 * 1.33;
	  printf("Your weekly salary is %.2f\n", salary);
    } else {
      printf("Not positive number\n");  
	}
  } else {
	printf("Invalid input!!\n");
  }
  
  system ("pause");  
  return 0;
}