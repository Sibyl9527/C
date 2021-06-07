/* Purpose: Input 5 alphabet and save them to the array */
/* File Name: Ch10_06 */
/* Completion Date: 20210604 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
  int i;
  char letter[SIZE];
  
  puts("Please input 5 alphabet");
  for (i = 0; i < SIZE; i++) {
	letter[i] = getche();
  }
  puts("");
  
  printf("The letters you entered are:");
  for (i = 0; i < SIZE; i++) {
	printf("%c ", letter[i]);
  }
  puts("");
  
  system("pause");
  return 0;
}