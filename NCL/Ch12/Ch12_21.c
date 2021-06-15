// Purpose: ID verify
// File Name: Ch12_21
// Completion Date: 20210613
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define ID_SIZE 10

int CheckID(char *);

int main(void)
{ 
  char ID[80]; // input ID save array
  int ret; // check ID invalid or not
  
  printf("%s", "Please input your ID number: ");
  gets(ID);
  
  if (strlen(ID) != ID_SIZE) { // input value not match the rule (10 digits)
	puts("Invalid input, break!");
	return EXIT_FAILURE;
  }
  
  ret = CheckID(ID);
  
  if (ret == 0) {
	puts("ID valid!");
  } else {
	puts("ID invalid!");
  }
  
  return EXIT_SUCCESS;
}

int CheckID(char *ID)
{
  int AtoNum; // deal with the first alphabet
  int solution; // final result
  int ID_Num[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21,  // follow the county table convert A-Z to number
                    22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
					
  AtoNum = ID_Num[*ID - 'A'];
  
  solution = (AtoNum / 10) + (AtoNum % 10) * 9 + (*(ID + 1) - '0') * 8 + // the rule of verifing ID numbers
             (*(ID + 2) - '0') * 7 + (*(ID + 3) - '0') * 6 + (*(ID + 4) - '0') * 5 +
			 (*(ID + 5) - '0') * 4 + (*(ID + 6) - '0') * 3 + (*(ID + 7) - '0') * 2 +
			 (*(ID + 8) - '0');
  solution = solution % 10;
  solution = 10 - solution;
  
  if (solution == (int)(*(ID + 9) - '0')) { // check the remainder whether match the lastest number
	return 0;
  } else {
	return -1;
  }
}