// Purpose: enum G = 6, PG = 12, R = 18.
//          User input age and check which rating that user can watch.
// File Name: hw16_06
// Completion Date: 20210630
#include <stdio.h>
#include <stdlib.h>

enum rating {G = 6, PG = 12, R = 18} TVrating;

int main(void)
{ 
  int i; // for loop control
  int age; // input age
  
  puts("Please input your age:");
  scanf("%d", &age);
  rewind(stdin);
  
  if (age >= R) {
	puts("R rating!");
  } else if (age >= PG) {
	puts("PG-13 rating!");
  } else if (age >= G) {
	puts("PG rating!");
  } else if (age >= 0){
	puts("G rating!");
  } else {
	puts("Invalid age!");
  }
  
  return EXIT_SUCCESS;
}  