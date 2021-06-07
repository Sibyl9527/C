/* Purpose: Search the license plate number from an array */
/* File Name: Ch10_19 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 5
#define COL 6

int main(void)
{
  char cartag[ROW][COL] = {{'A','A','0','0','0','0'},
                           {'F','F','8','8','8','8'},
						   {'B','B','1','1','1','1'},
						   {'C','C','9','9','9','9'},
						   {'D','D','4','4','4','4'}};
  char search[6];
  int flag = 1, i, j, n;

  puts("Loosing cars search system");  
  puts("Please input license plate number (The first two codes are uppercase, and remaining four codes are numbers)");
  for (n = 0; n < 6; n++) {
	scanf("%c", &search[n]);
  }
  
  for (j = 0; j < 5; j++) {
	flag = 1;
    for (i = 0; i < 6; i++) {
      if (search[i] != cartag[j][i]) {
      flag = 0;
	  break;
	  }	
	}
	if (flag == 1) {
	  break;
	}
  }
  
  if (flag == 1) {
	puts("Data matched! The license plate number you inputed is a loosing car.");
  } else {
	puts("Data not matched!");
  }
  
  system("pause");
  return 0;
}