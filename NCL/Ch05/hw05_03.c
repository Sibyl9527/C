/* Purpose: guess password */
/* File Name: hw05_03*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int password, UserInput;
  password = 5566;
  
  printf("Please input 1000~9999 to guess the password\n");
  scanf("%d", &UserInput);
  
  if (UserInput == password) {
    printf("Congrates! You input the right password\n"); 
  } else {
	printf("Sorry, the password you inputed are wrong!\n");
  }
  
  system ("pause");  
  return 0;
}