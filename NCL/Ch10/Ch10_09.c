/* Purpose: Search data from array and output result */
/* File Name: Ch10_09 */
/* Completion Date: 20210604 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
  int array[SIZE] = {36,45,64,98,71,
                     46,78,97,20,81};
  int i, search;
  
  puts("Please input the number that you want to search");
  scanf("%d", &search);
  for (i = 0; i < SIZE; i++) {
	if (search == array[i]) {
	  break;
	}
  }
  
  if (i < SIZE) {
	printf("The number you want to search is at postion %d\n", i + 1);
  } else {
	puts("Nothing match");
  }

  system("pause");
  return 0;
}