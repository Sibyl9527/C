// Purpose: Output the memory address of the pointer array of the element 
//          Check out the address ofthe  different length of the string 
// File Name: Ch12_10
// Completion Date: 20210610 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  char *ptr[3] = {"一府", "二鹿", "三艋舺"};
  int i; //control loop
  
  for (i = 0; i < 3; i++) {
	printf("Address: %p content: %s\n", ptr[i], ptr[i]);
  }  
  puts("");
 
  return EXIT_SUCCESS;
}
