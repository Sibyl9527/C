/* Purpose: Output the memory address of the pointer array of the element */
/* File Name: Ch12_09 */
/* Completion Date: 20210610 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  char *ptr[3] = {"´¼", "¤¯", "«i"};
  int i; //control loop
  
  for (i = 0; i < 3; i++) {
	printf("Address: %p content: %s\n", ptr[i], ptr[i]);
  }  
  puts("");
 
  return EXIT_SUCCESS;
}
