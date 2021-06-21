// Purpose: Check char by isgraph() and isprint()
// File Name: Ch14_08
// Completion Date: 20210619
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
  char *str = "ih\no$@\nW we\veA";
  int i;
  
  puts("Through isgraph() checking:");
  printf("%s", "No.");
  for (i = 0; i < strlen(str); i++) {
	if(isgraph(*(str + i)) != 0) {
	  printf("%d ", i + 1);
	}
  }
  puts("are print char.");
  
  puts("Through isprint() checking:");
  printf("%s", "No.");
  for (i = 0; i < strlen(str); i++) {
	if(isprint(*(str + i)) != 0) {
	  printf("%d ", i + 1);
	}
  }
  puts("are print char.");
  
  
  return EXIT_SUCCESS;
}  

 

 
