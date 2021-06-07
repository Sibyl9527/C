/* Purpose: Input three grades, sum together by int type and then use itoa merge string output */
/* File Name: hw11_09 */
/* Completion Date: 20210607 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{ 
  char total[30] = "Total is ";
  char IntToStr[10];
  int grade1; // Input grade1
  int grade2; // Input grade2
  int grade3; // Input grade3
  int sum; // The sum of three grades
  
  puts( "Please input three grades (ex: 98 90 59)" );
  scanf( "%d %d %d", &grade1, &grade2, &grade3 );
  
  sum = grade1 + grade2 + grade3;  
  printf( "%s", strcat(total, itoa(sum, IntToStr, 10)) );
  puts( "" );
  
  system("pause");
  return EXIT_SUCCESS;
}
