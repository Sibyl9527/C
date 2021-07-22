// Purpose: Input grade and output slogan by enum, OK = 60, Good = 80, Excellent = 90
// File Name: hw16_02
// Completion Date: 20210629
#include <stdio.h>
#include <stdlib.h>

enum slogan {OK = 60, Good = 80, Excellent = 90} comp_slo;


int main(void)
{ 
  int grade;
  
  puts("Please input your grade:");
  scanf("%d", &grade);
  rewind(stdin);
  
  if (grade >= Excellent) {
	printf("%s!!\n", "Excellent");
  } else if (grade >= Good) {
	printf("%s!!\n", "Good");
  } else if (grade >= OK) {
	printf("%s!!\n", "OK");
  } else {
	puts("I don't know what to say about your grade.");
  }
  return EXIT_SUCCESS;
}  