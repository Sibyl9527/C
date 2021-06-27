// Purpose: Output student's grade from nested struct
// File Name: Ch15_13
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
}ss1 = {1, "Undertaker", 87, 98, 78};

int main(void)
{  
  printf("ID: %d\n", ss1.ID);
  printf("Name: %s\n", ss1.name);
  printf("Chinese grade: %d\n", ss1.gd.chinese);
  printf("Math grade: %d\n", ss1.gd.math);
  printf("English grade: %d\n", ss1.gd.english);
  
  return EXIT_SUCCESS;
}  