/* Purpose: Calculate the product of two arrays */
/* File Name: Ch10_21 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <stdlib.h>
#define COL 3
#define ROW 3

void input(int[][COL]);
void output(int[][COL]);
void cal(int[][COL],int[][COL]);
int i, j, k;

int main(void)
{
  int a[ROW][COL] = {0}, b[ROW][COL] = {0};
  
  puts("Array a:");
  input(a);
  puts("Array b:");
  input(b);
  puts("Array a:");
  output(a);
  puts("Array b:");
  output(b);
  puts("Calculating...");
  cal(a,b);

  system("pause");
  return 0;
}

void input(int matrix[ROW][COL]) 
{
  for (i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++) {
	  printf("Please input the value(ROW,COL)  of (%d,%d):", i + 1, j + 1);
	  scanf("%d", &matrix[i][j]);
	}
  }
}

void output(int matrix[ROW][COL]) 
{
  for (i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++) {
	  printf("%3d ", matrix[i][j]);
	}
	puts("");
  }
}

void cal(int mat1[ROW][COL],int mat2[ROW][COL])
{
  int result[ROW][COL] = {0};
  
  for (i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++) {
		for (k = 0; k < 3; k++) {
		  result[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
  }
  puts("Answer:");
  output(result);
}