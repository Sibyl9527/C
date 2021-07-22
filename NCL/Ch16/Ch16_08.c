// Purpose: 7 digits random number generator
// File Name: Ch16_08
// Completion Date: 20210628
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define randomize() srand((unsigned) time(NULL))
typedef struct lotto
{
  int value;
  int position;
} num;

int main(void)
{ 
  num number[42];
  int i; // outter for loop
  int j; // inner for loop
  int k; // accumulate value for number array
  int x; // how many times
  int temp; // assign temp value for swap
  
  randomize(); // get random seed
  puts("How many times do you want to execute?");
  scanf("%d", &x);
  rewind(stdin);
  
  for (i = 0; i < 42; i++) { // assign initial values for array
	number[i].value = 0;
	number[i].position = i + 1;
  }
  
  for (i = 0; i < x; i++) { // array values ++
	k = rand() % 42;
	number[k].value++;
  }
  
  for (i = 0; i < 41; i++) { // bubble sort desc
	for (j = i + 1; j < 42; j++) {
	  if (number[i].value < number[j].value) { // swap
		temp = number[i].value;
		number[i].value = number[j].value;
		number[j].value = temp;
		
		temp = number[i].position;
		number[i].position = number[j].position;
		number[j].position = temp;
	  }
	}
  }
  
  printf("%s", "Up to seven occurrences");
  for (i = 0; i < 7; i++) { // output top seven
	printf(" %d", number[i].position);
  }
  puts("");

  return EXIT_SUCCESS;
}  