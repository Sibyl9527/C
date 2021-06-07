/* Purpose: Merge two strings and output (two strings input by user) */
/* File Name: Ch11_23 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LINE 30
#define WIDTH 60

int main(void)
{ 
  char strary[LINE][WIDTH];
  int i, flag;
  int lline = 0;
  
  printf("Please input strings in order, ");
  printf("click enter key when one string complete, if you complete all, then input qq\n");
  do {
	gets(strary[lline]);
	flag = strcmp(strary[lline], "qq");
	lline++;
  } while (lline < LINE && flag != 0);
  
  printf("\nOutput:\n");
  for (i = 0; i < lline - 1; i++) {
	if (i%2 == 0) {
	  puts("");
	}
	printf("%s", strary[i]);
  }
  
  system("pause");
  return 0;
}
