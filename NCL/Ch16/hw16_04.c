// Purpose: typedef struct student, elements: name, ID, age.
//          Output tudent's values.
// File Name: hw16_04
// Completion Date: 20210630
#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
  char name[20];
  int ID;
  int age;
} Std;

int main(void)
{ 
  int i; // for loop control
  Std StdInfo[3] = {"Emma", 63194, 11,
                 "Norman", 22194, 11,
				 "Ray", 81194, 11};
  
  printf("%-10s%-9s%-4s\n", "Name", "ID", "Age"); // print titles
  for (i = 0; i < 3; i++) {
	printf("%-10s%-9d%-4d\n", StdInfo[i].name, StdInfo[i].ID, StdInfo[i].age);
  }
  
  return EXIT_SUCCESS;
}  