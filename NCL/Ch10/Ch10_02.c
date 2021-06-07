/* Purpose: Count the present of the dice's point */
/* File Name: Ch10_02 */
/* Completion Date: 20210603 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MYRANDOM() srand((unsigned) time(NULL))
#define SIZE 6

int main(void)
{
  int dice[SIZE] = {0};
  int i, go, point;
  
  MYRANDOM();
  puts("Please input the time of throughing dice");
  scanf("%d", &go);
  
  for (i = 0; i < go; i++) {
	point = rand() % 6 + 1;
	dice[point - 1]++;
  }
  
  for(i = 0; i < SIZE; i++) {
	printf("The point %d presented %d times.\n", i + 1, dice[i]);
  }
  
  system("pause");
  return 0;
}