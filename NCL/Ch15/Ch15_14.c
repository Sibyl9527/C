// Purpose: Example for nested struct: Calculate grades
// File Name: Ch15_14
// Completion Date: 20210625
#include <stdio.h>
#include <stdlib.h>
struct grade
{
  int chinese; // student's chinese grade
  int math; // student's math grade
  int english; // student's english grade
};
struct student 
{
  int ID; // student's ID
  char name[11]; // student's name
  struct grade gd;  // grade struct
  int sum; // the sum of three grades
  float avg; // the avg of three grades
} ss[3] = {1, "Undertaker", 87, 98, 78, 0, 0,
           2, "SmileFox", 97, 68, 78, 0, 0,
		   3, "SnowWoman", 80, 78, 98, 0, 0};

int main(void)
{  
  int i; // for loop control
  
  puts("ID\tName\t\tChinese\tMath\tEnglish\tSum\tAvg");
  puts("--------------------------------------------------------------");
  
  for (i = 0; i < 3; i++) {
	printf("%2d\t", ss[i].ID);
	printf("%s     \t", ss[i].name);
	printf("%d\t", ss[i].gd.chinese);
	printf("%d\t", ss[i].gd.math);
	printf("%d\t", ss[i].gd.english);
	ss[i].sum = ss[i].gd.chinese + ss[i].gd.math + ss[i].gd.english;
	ss[i].avg = (float)ss[i].sum / 3;
	printf("%d\t", ss[i].sum);
	printf("%.2f\n", ss[i].avg);
  }
  
  return EXIT_SUCCESS;
}  