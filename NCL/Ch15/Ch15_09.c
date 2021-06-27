// Purpose: Output data from user input in sub function by struct
// File Name: Ch15_09
// Completion Date: 20210623
#include <stdio.h>
#include <stdlib.h>
struct person 
{
  char name[11]; // student's name
  char addr[10]; // student's address
  int age;  // student's age
};
void printdata(struct person);

int main(void)
{  
  struct person mydata = {"Undertaker", "TPC", 18}; // declare struct and assign initial values
  printdata(mydata);
  
  return EXIT_SUCCESS;
}  

void printdata(struct person data)
{
  printf("Name: %s\n", data.name);
  printf("Addr: %s\n", data.addr);
  printf("Age:  %d\n", data.age);
}