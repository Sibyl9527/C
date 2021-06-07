/* Purpose: Authorize the data of candidates by if else */
/* File Name: Ch05_04*/
/* Completion Date: 20210522*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
  char man, army, exp;
  
  printf("Male? (y/n)");
  man = getche();
  printf("\n");
  
  if (man == 'y' || man == 'Y') {
    printf("Done minitary service? (y/n)");
	army = getche();
	printf("\n");
	
	if (army == 'y' || army == 'Y') {
	  printf("Congrates! Your qualification is OK!\n");
	}	
	else {
	  printf("We are very sorry about that your are not math the qulification.");
	}
  }
  else {
    printf("Do you have two years experiences? (y/n)");
	exp = getche();
    printf("\n");
	
	  if(exp == 'y' || exp == 'Y') {
	    printf("Congrates! Your qualification is OK!\n");
	  }
	  else {
	  printf("We are very sorry about that your are not math the qulification.\n");
	  }
  }
	 
  system ("pause");  
  return 0;
}