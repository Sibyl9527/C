/* Purpose: Guess bigger or smaller */
/* File Name: Ch10_18 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int compare(int, int);

int main(void)
{
  int array[5];
  int i, option, result;
  char GoOn;
  srand(time(NULL)); //get rand seed
  
  for (i = 0; i < 5; i++) {
	array[i] = rand() % 14;
	if (array[i] == 7 || array[i] == 0) {
	  i --;
	} else {
	  printf("array[%d] = %d ", i, array[i]);
	}
	puts("");
  }
  i = 0;
  
  do {
	if (i < 5) {
	  printf("Stage %d:\n", i + 1);
	  puts("Please select (1)Bigger than 7 (2)Smaller than 7");
	  scanf("%d", &option);
	  result = compare(option, array[i]);
	  
	  if (result == 1) {
		if (i == 4) {
		  GoOn = 'y';
		} else {
		  puts("Congrates! Do you want to go next stage?(y/n)");
		  GoOn = getche();
		  puts("");
		}
	  } else {
		puts("I'm very sorry, you guessed the wrong answer, challenge failed!");
		GoOn = 'n';
	  }
	  i++;
	} else {
	  puts("Congrates! You passed all stage!");
	  GoOn = 'n';
	} 
  } while (GoOn == 'y');
  
  system("pause");
  return 0;
}

int compare(int option, int number) {
  switch (option) {
	case 1:
	  if (number > 7) {
		printf("The result is %d bigger than 7\n", number);
		return 1;
	  } else {
		printf("The result is %d smaller than 7\n", number);
		return 0;
	  }
	case 2:
	  if (number < 7) {
		printf("The result is %d smaller than 7\n", number);
		return 1;
	  } else {
		printf("The result is %d bigger than 7\n", number);
		return 0;
	  }  
	default:
	  return 0;
  }
}