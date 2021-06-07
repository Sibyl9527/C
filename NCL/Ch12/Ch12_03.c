/* Purpose: Output age, weight and blood type */
/* File Name: Ch12_03 */
/* Completion Date: 20210607 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int *iptr; // int pointer for age
  int age = 18;
  float *fptr; // float pointer for weight
  float weight = 65.05;
  char *cptr; // char pointer for bloodtype
  char bloodtype = 'O';
  
  iptr = &age;
  fptr = &weight;
  cptr = &bloodtype;
  
  printf("Age: %d\n", *iptr);
  printf("Weight: %.2f\n", *fptr);
  printf("Blood type: %c\n", *cptr);
  
  return EXIT_SUCCESS;
}
