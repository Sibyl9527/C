// Purpose: tydef grade, elements: math, chinese, english.
//          Calculate the avg grade.
// File Name: hw16_07
// Completion Date: 20210630
#include <stdio.h>
#include <stdlib.h>

typedef struct grade
{
  int math;
  int chinese;
  int english;
} GD;

int main(void)
{ 
  GD StdGD = {60, 75, 65};
  
  printf("The avg is %.2f\n", (float)(StdGD.math + StdGD.chinese + StdGD.english) / 3 );
  
  return EXIT_SUCCESS;
}  