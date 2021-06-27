// Purpose: Use struct output student's grades.
// File Name: Ch15_01
// Completion Date: 20210621
#include <stdio.h>
#include <stdlib.h>

struct grade 
{
  int SID; // student ID
  int chinese; // chinese grade
  int math;  // math grade
  int english;  // english grade
};

int main(void)
{ 
  struct grade ss; // struct variable ss
  puts("Please input SID:");
  scanf("%d", &ss.SID);
  puts("Please input chinese grade:");
  scanf("%d", &ss.chinese);
  puts("Please input math grade:");
  scanf("%d", &ss.math);
  puts("Please input english grade:");
  scanf("%d", &ss.english);
  
  puts("SID\tChinese\tMath\tEnglish");
  printf("%d\t%d\t%d\t%d\n", ss.SID, ss.chinese, ss.math, ss.english);
  
  return EXIT_SUCCESS;
}  