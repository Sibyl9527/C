// Purpose: Use struct output student's grades, this time, give the intial variable and values
// File Name: Ch15_02
// Completion Date: 20210621
#include <stdio.h>
#include <stdlib.h>

struct grade 
{
  int SID; // student ID
  int chinese; // chinese grade
  int math;  // math grade
  int english;  // english grade
}ss1 = {1, 78, 98, 54};

int main(void)
{  
  puts("SID\tChinese\tMath\tEnglish");
  printf("%d\t%d\t%d\t%d\n", ss1.SID, ss1.chinese, ss1.math, ss1.english);
  
  return EXIT_SUCCESS;
}  