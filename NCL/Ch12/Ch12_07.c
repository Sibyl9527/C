/* Purpose: Input 5 numbers, save them by pointer and find out the max */
/* File Name: Ch12_07 */
/* Completion Date: 20210609 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void)
{ 
  int *ptr = (int *)malloc(sizeof(int) * MAX); // allocate 5 int memory addresses
  int i; // move pointer
  int maxnum; // save max number
  
  maxnum = 0;
  
  printf("%s", "Please input 5 numbers: ");
  for (i = 0; i < MAX; i++) { //save every input and find max
	scanf("%d", ptr + i);
	if (*(ptr + i) > maxnum) {
	  maxnum = *(ptr + i);
	}
  }
  
  printf("The maximum number is %d\n", maxnum);
  free(ptr); // release memory
 
  system("pause"); 
  return EXIT_SUCCESS;
}
