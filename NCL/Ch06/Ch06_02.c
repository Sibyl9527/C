/* Purpose: use while loop to add from x to y; x, y input by user */
/* File Name: Ch06_02*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int start, end, sum = 0;
  
  printf("Please input two integers, a start and a end\n");
  scanf("%d %d", &start, &end);
  printf("\nThe result add from %d to %d is ", start, end);
  
  while (start <= end) {
	sum += start;
	start++;
  }
  printf("sum %d\n", sum);
  
  system("pause");
  return 0;
}