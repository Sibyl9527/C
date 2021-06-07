/* Purpose: Calculate all staff's avg age */
/* File Name: Ch10_04 */
/* Completion Date: 20210604 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
  int age[SIZE];
  int i, sum = 0;
  float avg;
  
  puts("Pleas input staff's age");
  for (i = 0; i < SIZE; i++) {
	printf("Input no.%2d age information:", i + 1);
	scanf("%d", &age[i]);
	sum += age[i];
  }
  avg = (float) sum / SIZE;
  printf("The avg age of all staffs is %.2f\n", avg);
  
  system ("pause");
  return 0;
}