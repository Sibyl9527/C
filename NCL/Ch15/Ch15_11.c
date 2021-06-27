// Purpose: Input from user at sub function and then output in the main (struct call by address)
// File Name: Ch15_11
// Completion Date: 20210624
#include <stdio.h>
#include <stdlib.h>
struct person 
{
  char name[11]; // user's name
  char city[7]; // user's city
  int age;  // user's age
};
void ReadData(struct person*);

int main(void)
{  
  struct person student;
  ReadData(&student);
  
  puts("");
  printf("Name: %s\n", student.name);
  printf("City: %s\n", student.city);
  printf("Age:  %d\n", student.age);
  
  return EXIT_SUCCESS;
}  

void ReadData(struct person *p)
{
  puts("Please input your name:");
  scanf("%s", p->name);
  puts("Please input your city:");
  scanf("%s", p->city);
  puts("Please input your age:");
  scanf("%d", &p->age);
}