// Purpose: Continue hw16_07, enum A, B, C, D, E.
//          90up -> A, 80up -> B, 70up -> C, 60up -> D, other E
// File Name: hw16_08
// Completion Date: 20210630
#include <stdio.h>
#include <stdlib.h>
enum class {A = 90, B = 80, C = 70, D = 60, E = 0} GradeClass;
typedef struct grade
{
  int math;
  int chinese;
  int english;
} GD;

int main(void)
{ 
  GD StdGD = {60, 75, 65};
  float avg;
  
  avg = (float)(StdGD.math + StdGD.chinese + StdGD.english) / 3;
  
  printf("The avg is %.2f\n",  avg);
  if (avg >= A) {
	puts("A!");
  } else if (avg >= B) {
	puts("B!");
  } else if (avg >= C) {
	puts("C!");
  } else if (avg >= D){
	puts("D!");
  } else if (avg >= 0){
	puts("E!");
  } else {
	puts("Invalid avg!");
  } 
  
  return EXIT_SUCCESS;
}  