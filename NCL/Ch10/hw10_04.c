/* Purpose: Input ten float numbers to the array and calculate the avg by sub function */
/* File Name: hw10_04 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void avg(float [SIZE]);
int i;

int main(void)
{
  float array[SIZE];
  
  puts("Please input 10 float number:");
  for (i = 0; i < SIZE; i++) {
	printf("Please input No.%d float number\n", i + 1);
	scanf("%f", &array[i]);
  }
  puts("");
  avg(array);
  
  system("pause");
  return 0;
}

void avg(float array[SIZE])
{
  float result = 0.0;
  
  puts("The array elements are:");
  for (i = 0; i < SIZE; i++) {
	result += array[i];
	printf("%.2f ", array[i]);
  } 
  puts("");
  printf("The avg is %.2f\n", result / SIZE);
}
