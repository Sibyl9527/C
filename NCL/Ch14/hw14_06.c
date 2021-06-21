// Purpose: Count control sign and mark their position from string
// File Name: hw14_06
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char str[] = "ij32\aojp\v\ndoe\t"; // initial string
  int i; // for loop control
  int concount = 0; // count control sign
  
  printf("%s", "The control sign position are ");
  for (i = 0; i < strlen(str); i++) {
	if (iscntrl(str[i]) != 0) { // check every char by iscntrl
	  printf("%d ", i + 1);
	  concount++;
    }
  }
  printf("\b\n");
  printf("The quantities of control signs: %d\n", concount);
  
  return EXIT_SUCCESS;
}  