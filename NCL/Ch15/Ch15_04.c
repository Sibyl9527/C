// Purpose: Output student's info and grade
// File Name: Ch15_04
// Completion Date: 20210622
#include <stdio.h>
#include <stdlib.h>

struct student 
{
  char SID[7]; // student ID
  char name[10]; // student name
  int grade[3];  // student grade
};

int main(void)
{  
  int i;
  struct student ss1;
  
  puts("Please input SID:");
  scanf("%s", &ss1.SID);
  puts("Please input student name:");
  scanf("%s", &ss1.name);
  puts("Please input chinese grade:");
  scanf("%d", &ss1.grade[0]);
  puts("Please input math grade:");
  scanf("%d", &ss1.grade[1]);
  puts("Please input english grade:");
  scanf("%d", &ss1.grade[2]);
  
  puts("SID\tName\tChinese\tMath\tEnglish");
  printf("%s\t%s\t", ss1.SID, ss1.name);
  for (i = 0; i < 3; i++) {
	printf("%d\t", ss1.grade[i]);
  }
  puts("");
  
  return EXIT_SUCCESS;
}  