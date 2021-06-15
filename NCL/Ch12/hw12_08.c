// Purpose: Order the array, calculate the sum, or get the max by user for giving a initial array
// File Name: hw12_08
// Completion Date: 20210614
#include <stdio.h>
#include <stdlib.h>

void Order(int*);
void Sum(int*);
void Max(int*);

int main(void)
{ 
  int IniArray[10] = {45, 65, 24, 49, 68, 78, 45, 12, 32, 40};
  int i; // for loop to get three input numbers
  int flag = 0; // check invalid input
  int select; // user input
  
  printf("%s", "The initial array is {");
  for (i = 0; i < 10; i++) { // output all elements
	printf("%d, ", IniArray[i]);
  }
  printf("\b\b}\n Which one do you want to do (1)Order (2)Sum (3)Max?\n");
  do {
    scanf("%d", &select);
    switch (select) {
	  case 1:
	    flag = 1;
	    Order(&IniArray[0]);
	    break;
	  case 2:
	    flag = 1;
		Sum(&IniArray[0]);
	    break;
	  case 3:
	    flag = 1;
		Max(&IniArray[0]);
	    break;
	  default:
	    puts("Invalid input, please input again!(1)Order (2)Sum (3)Max");
    }
  } while (flag != 1);
  
  return EXIT_SUCCESS;
}  

void Order(int *array)
{
  int i; // the outter loop of bubble sort and output loop
  int j; // the inner loop of bubble sort
  int temp; // put temp value when if is true
  
  for (i = 0; i < 9; i++) { // bubble sort for ordering
	for (j = i + 1; j < 10; j++) {
	  if (*(array + i) < *(array + j)) {
	    temp = *(array + i);
		*(array + i) = *(array + j);
		*(array + j) = temp;
	  }
	}
  }
  printf("%s", "The elements after ordering is {");
  for (i = 0; i < 10; i++) { // output ordering result
	printf("%d, ", *(array + i));
  }
  puts("\b\b}");
}

void Sum(int *array)
{
  int SumValue = 0;
  int i; // control for loop value
  
  for (i = 0; i < 10; i++) { // sum all elements
	SumValue += *(array + i);
  }
  printf("The sum is %d\n", SumValue);
  
}

void Max(int *array)
{
  int MaxValue = 0;
  int i; // control for loop value
  
  for (i = 0; i < 10; i++) { // find max from array
	if (*(array + i) > MaxValue) {
      MaxValue = *(array + i);
	}
  }
  printf("The max is %d\n", MaxValue);
  
}