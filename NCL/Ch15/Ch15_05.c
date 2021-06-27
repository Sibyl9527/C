// Purpose: Output student's info and grade (set initial values for struct student)
// File Name: Ch15_05
// Completion Date: 20210622
#include <stdio.h>
#include <stdlib.h>

struct student 
{
  int SID; // student ID
  char name[10]; // student name
  int grade[3];  // student grade
}ss1 = {1, "Mary", 78, 98, 76}; // set initial values

int main(void)
{  
  int i;
  
  puts("SID\tName\tChinese\tMath\tEnglish");
  printf("%d\t%s\t", ss1.SID, ss1.name);
  for (i = 0; i < 3; i++) {
	printf("%d\t", ss1.grade[i]);
  }
  puts("");
  
  return EXIT_SUCCESS;
}  