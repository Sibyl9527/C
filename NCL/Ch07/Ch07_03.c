/* Purpose: printf by sub function */
/* File Name: Ch07_03 */
/* Completion Date: 20210528 */
#include <stdio.h>

void printwords(void);

int main(void)
{
  printwords();
  return 0;
}

void printwords(void)
{
  printf("Print words by sub function!!\n");
}