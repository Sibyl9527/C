// Purpose: typedef struct practice
// File Name: Ch16_05
// Completion Date: 20210628
#include <stdio.h>
#include <stdlib.h>
typedef struct person
{
  char name[10];
  char addr[10];
  int age;
} PRN;

int main(void)
{ 
  PRN student = {"SUBAKI", "Tokyo", 20};
  printf("Mr. %s moved to %s when he was %d.\n", student.name, student.addr, student.age);
  
  return EXIT_SUCCESS;
}  