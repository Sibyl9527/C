// Purpose: Count the alphabets from input string
// File Name: Ch14_12
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char string[60]; // input string
  int number[26]; // count alphabets
  unsigned int i; // for loop control
  int count = 0; // which alphabet should be count
  int j = 0; // new line per three alphabet
  
  for (i = 0; i < 26; i++) { // initial every alphabet count to 0
	number[i] = 0;
  }
  
  puts("Please input a English string:");
  gets(string);
  
  for (i = 0; i < strlen(string); i++) {
	if (isupper(string[i]) != 0) { // if uppercase, then count
	  count = (int)string[i] - 65;
	  number[count]++;
	}
	
	if (islower(string[i]) != 0) { // if lowercase, then count
	  count = (int)string[i] - 97;
	  number[count]++;
	}
  }
  
  for (i = 0; i < 26; i++) { // output result
	if (number[i] != 0) {
	  if (j % 3 == 0) {
		puts("");
	  }
	  printf("%c or %c: %d ", i + 65, i + 97, number[i]);
	  j++;
	}
  }
  
  return EXIT_SUCCESS;
}  
