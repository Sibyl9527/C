/* Purpose: Input chinese to search and output english */
/* File Name: Ch11_27 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 7

int main(void)
{ 
  char strary1[SIZE][7] = {"星期一",
                              "星期二",
							  "星期三",
							  "星期四",
							  "星期五",
							  "星期六",
							  "星期日"};
  char strary2[SIZE][10] = {"Monday",
                              "Tuesday",
							  "Wednesday",
							  "Thursday",
							  "Friday",
							  "Saturday",
							  "Sunday"}; 
  char search[60];
  int position = 7, i;
  
  printf("Search the english name of星期一~星期日\n");
  puts("Please input chinese name");
  scanf("%s", search);
  
  for (i = 0; i < SIZE; i++) {
	if (strcmp(search, strary1[i]) == 0) {
	  position = i;
	  printf("The english name of %s is %s\n", search, strary2[i]);
	  break;
	}
  }
  
  if (position == 7) {
	printf("Your chinese name is not matched\n");
  }
  
  system("pause");
  return 0;
}
