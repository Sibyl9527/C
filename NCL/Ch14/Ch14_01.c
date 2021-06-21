// Purpose: User input ID and password, but only numbers or alphabets are allowed to use (by isalnum)
// File Name: Ch14_01
// Completion Date: 20210618
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char ID[17]; // user ID
  char password[9]; // user password
  unsigned int i; // for loop control
  int flag; // check user's input wether valid or not
  
  do {
	puts("Please set up your ID");
	puts("(16 digits, only allow numbers and alphabets)");
	scanf("%s", ID);
	puts("Please set up your password");
	puts("(9 digits, only allow numbers and alphabets)");
	scanf("%s", password);
	
	flag = 1;
	for (i = 0; i < strlen(ID); i++) { // check ID
	  if (isalnum(ID[i]) == 0) {
		puts("Your ID does not match our rule, please set it up again!");
		flag = 0;
		break;
	  }
	}
	
	for (i = 0; i < strlen(password); i++) { // check password
	  if (isalnum(password[i]) == 0) {
		puts("Your password does not match our rule, please set it up again!");
		flag = 0;
		break;
	  }
	} 
  } while (flag != 1);
  
  printf("Your ID is %s\n", ID);
  printf("Your password is %s\n", password);
  return EXIT_SUCCESS;
}  

 
