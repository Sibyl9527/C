// Purpose: Output employee's name and id from struct by ptr
// File Name: Ch15_08
// Completion Date: 20210623
#include <stdio.h>
#include <stdlib.h>

struct employee 
{
  int EID;  // employee's id
  char name[12]; // employee's name
}emp = {1, "Undertaker"}; // assign initial values

int main(void)
{  
  struct employee *ptr;
  ptr = &emp;
  
  printf("EID %05d\n", ptr->EID); // output struct element from pointer by ->
  printf("Name %s\n", ptr->name);
  puts("");
  
  printf("EID %05d\n", (*ptr).EID); // output struct element from pointer by (*).
  printf("Name %s\n", (*ptr).name);
  puts("");
  
  return EXIT_SUCCESS;
}  