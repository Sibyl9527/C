// Purpose: Input three info from user at sub function and then output in the main (struct call by address)
// File Name: Ch15_12
// Completion Date: 20210625
#include <stdio.h>
#include <stdlib.h>
struct person 
{
  char name[11]; // user's name
  char city[10]; // user's city
  int age;  // user's age
};
void ReadData(struct person[]);

int main(void)
{  
  struct person student[3]; // declare array for struct person
  int i; // for loop control
  
  ReadData(student); // call sub function
  
  puts("\nName\tCity\tAge");
  for (i = 0; i < 3;i++) { // output every user's info
	printf("%s\t%s\t%d\n", student[i].name, student[i].city, student[i].age);
  }
  
  return EXIT_SUCCESS;
}  

void ReadData(struct person array[])
{
  int i;
  
  for (i = 0; i < 3; i++) { // input info by user
	printf("Please input No.%d name, city and age (ex: Tom TPE 18)\n", i + 1);
	scanf("%s %s %d", array[i].name, array[i].city, &array[i].age);
  }
}