// Purpose: Output student's info
// File Name: Ch15_06
// Completion Date: 20210622
#include <stdio.h>
#include <stdlib.h>

struct person 
{
  char name[7]; // student's name
  char addr[7]; // student's address
  int age;  // student's age
}student[4] = {"WANG", "TPC", 18, // set initial values
               "CHEN", "HCT", 17,
			   "LIN", "CHH", 19,
               "TSAI", "NTPC", 17}; 

int main(void)
{  
  int i;
  
  puts("Name\tAddress\tAge");
  for (i = 0; i < 4; i++) {
	printf("%s\t%s\t%d\n", student[i].name, student[i].addr, student[i].age);
  }
  puts("");
  
  return EXIT_SUCCESS;
}  