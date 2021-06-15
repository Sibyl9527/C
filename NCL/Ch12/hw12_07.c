// Purpose: Input three grades on main and calculate the sum and avg at sub function then output on main
// File Name: hw12_07
// Completion Date: 20210614
#include <stdio.h>
#include <stdlib.h>

void Sum_Avg(float*);

int main(void)
{ 
  float ArrayGrade[5]; // 0-2 grades, 3 sum, 4 avg
  int i; // for loop to get three input numbers

  puts("Please input three grades:");
  for (i = 0; i < 3; i++) { 
    scanf("%f", &ArrayGrade[i]);

  }

  Sum_Avg(&ArrayGrade[0]);  
  printf("The sum is %.2f\nThe avg is %.2f\n", *(ArrayGrade + 3), *(ArrayGrade + 4));
  
  return EXIT_SUCCESS;
}  

void Sum_Avg(float *grade)
{
  *(grade + 3) = *(grade) + *(grade + 1) + *(grade + 2); // sum
  *(grade + 4) = (*(grade + 3)) / 3; // avg
}