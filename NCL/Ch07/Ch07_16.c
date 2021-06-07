/* Purpose: Calculate avg grade and output comments */
/* File Name: Ch07_16 */
/* Completion Date: 20210529 */
#include <stdio.h>
#include <stdlib.h>
int input(int);
int sum(int);
float avg(int, int);
void PrintComment(float);

int main(void)
{
  int count, total;
  float average;
  
  printf("Please input the amount of your objects\n");
  scanf("%d", &count);
  total = sum(count);
  average = avg(total, count);
  
  printf("The sum is %d\n", total);
  printf("The avg is %f\n", average);
  printf("Comments: ");
  PrintComment(average);
  
  system("pause");
  return 0;
}

int input(int count)
{
  int score;
  
  printf("Please input No.%d grade: \n", count);
  scanf("%d", &score);
  
  return score;
}

int sum(int count)
{
  int total = 0;
  int no;
  
  for (no = 1; no <= count; no++) {
	total += input(no);
  }
  return total;
}

float avg(int total, int count)
{
  float avg;
  
  avg = (float)total / count;
  
  return avg;
}

void PrintComment(float avg)
{
  if (avg >= 90) {
	printf("Great!\n");
  } else if (avg >= 80) {
	printf("Not bad!\n");
  } else if (avg >= 70) {
	printf("Keep working hard!\n");
  } else {
	printf("You failed to pass the test!\n");
  }
}