// Purpose: Output student's info and grade
// File Name: Ch15_07
// Completion Date: 20210623
#include <stdio.h>
#include <stdlib.h>

struct person 
{
  char name[7]; // student's name
  char addr[7]; // student's address
  int age;  // student's age
  int score[2]; // student's score
}student[4] = {"WANG", "TPC", 18, 80, 90, // set initial values
               "CHEN", "HCT", 17, 70, 60,
			   "LIN", "CHH", 19, 77, 99,
               "TSAI", "NTPC", 17, 87, 68}; 

int main(void)
{  
  int i; // for outer loop control
  int j; // for score loop control
  int sum; // score1 + score2
  
  puts("Name\tAddress\tAge\tGrade1\tGrade2\tAvg"); //output titles
  for (i = 0; i < 4; i++) {
	sum = 0;
	printf("%s\t%s\t%d\t", student[i].name, student[i].addr, student[i].age);
	for (j = 0; j < 2; j++) { // output score
	  printf("%d\t", student[i].score[j]);
	  sum += student[i].score[j];
	}
	printf("%.2f\n", (float)sum/2);
  }
  puts("");
  
  return EXIT_SUCCESS;
}  