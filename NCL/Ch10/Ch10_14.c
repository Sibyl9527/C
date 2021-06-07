/* Purpose: Classify grade from the array */
/* File Name: Ch10_14 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <Stdlib.h>
void level(int);

int main(void)
{
  int score[5] = {78,85,65,95,81};
  int i;
  
  do {
	puts("You have five grades, which one do you want to search(1-5)?");
	scanf("%d", &i);
  } while (i > 5 || i < 1);

  level(score[i-1]);
  
  system("pause");
  return 0;
}

void level(int num)
{
  char grade;
  if (num >= 90) {
	grade = 'A';
  } else if (num >= 80) {
	grade = 'B';
  } else if (num >= 70) {
	grade = 'C';
  } else if (num >= 60) {
	grade = 'D';
  } else {
	grade = 'F';
  }
  
  printf("%d level %c\n", num, grade);
}