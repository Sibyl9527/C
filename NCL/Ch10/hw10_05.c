/* Purpose: Refer to Ch10_2, calculate two dices 100 times and show the rate of every point (1 to 12) */
/* File Name: hw10_05 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MYRANDOM() srand((unsigned) time(NULL))
#define SIZE 12

int main(void)
{
  int dice[SIZE] = {0};
  int i, go, point;
  
  MYRANDOM();
  puts("Please input the time of throughing dices");
  scanf("%d", &go);
  
  for (i = 0; i < go; i++) {
	point = (rand() % 6 + 1) + (rand() % 6 + 1); // through two dices
	dice[point - 1]++;
  }
  
  for(i = 0; i < SIZE; i++) {
	printf("The point %d presented %d times and rate = %.2f\n", i + 1, dice[i], (float)dice[i] / go);
  }
  
  system("pause");
  return 0;
}
