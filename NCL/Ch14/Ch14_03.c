// Purpose: Send message to phone number and chenck the phone number by isdigit
// File Name: Ch14_03
// Completion Date: 20210619
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{ 
  char msg[30]; // input message
  char mobile[11]; // input phone number
  int i; // for loop control
  int flag = 1; // check valid or not
  
  puts("Welcome to send message system");
  puts("Please input your message (max 30 digits)");
  gets(msg);
  
  do {
	puts("Please input phone number");
	scanf("%10s", mobile);
	
	flag = 1;
	for (i = 0; i < 10; i++) { // check all elements from array moilbe are digit
	  if (isdigit(mobile[i]) == 0) {
		puts("The phone number is invalid!");
		flag = 0;
		break;
	  }
	}
  } while (flag == 0);
  
  printf("Your message \"%s\" ", msg);
  printf("already sent to %s\n", mobile);
 
  return EXIT_SUCCESS;
}  

 
