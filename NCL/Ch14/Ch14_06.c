// Purpose: Follow Ch14_02, check the English name. This time we also accept space by isspace()
// File Name: Ch14_06
// Completion Date: 20210619
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char name[20]; // assign input string
  int i; // for loop control
  int flag; // check the array name
  
  do
  {
	puts("Please input your English name:");
	gets(name);
	flag = 1;
	for (i = 0; i < strlen(name); i++) {
      if (isalpha(name[i]) == 0 && isspace(name[i]) == 0) {
		puts("Your name includes non-alpha char, please reinput!");
		flag = 0;
		break;
	  }
	}
  } while (flag != 1);
  
  printf("Your English name is %s", name);
  
  return EXIT_SUCCESS;
}  

 

 
