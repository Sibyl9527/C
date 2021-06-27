// Purpose: Use struct output student's grades, declare two struct variables
// File Name: Ch15_03
// Completion Date: 20210621
#include <stdio.h>
#include <stdlib.h>

struct grade 
{
  int SID; // student ID
  int chinese; // chinese grade
  int math;  // math grade
  int english;  // english grade
}ss1 = {1, 78, 98, 54}, ss2 = {2, 65, 78, 44};

int main(void)
{  
  puts("SID\tChinese\tMath\tEnglish");
  printf("%d\t%d\t%d\t%d\n", ss1.SID, ss1.chinese, ss1.math, ss1.english);
  printf("%d\t%d\t%d\t%d\n", ss2.SID, ss2.chinese, ss2.math, ss2.english);
  
  return EXIT_SUCCESS;
}  