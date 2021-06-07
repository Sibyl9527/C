/* Purpose: Guess a 6 digits password, and every digit only have 3 chances to try. When you pass, you allow to guess the next one */
/* File Name: hw10_10 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <conio.h>
#define SIZE 6

int main(void)
{ 
  int i, chance = 3;
  char password[SIZE] = {'i','m','9','5','2','7'};
  char guess;
  
  puts("Please guess the password digit by digit (every digit you have three chances to guess)");
  for (i = 0; i < SIZE; i++) {
	  printf("The No.%d digit, please start to guess your %d time\n", i + 1, 4 - chance);
	  guess = getche();
	  puts("");
	  if (guess == password[i]) {
		if (i == 5) {
		  puts("Congrates! You pass!!"); //pass all
		} else { // next digit, so chance reset
		  puts("Great! Let's go to next one!");
		  chance = 3; 
		}
	  } else { //wrong guess, chance - 1 and keep to guess the same digit
		chance--;
		i--;
	  }
	if (chance == 0) {
	  puts("You ran out of chances, sorry!\n");
	  break;
	}
  }

  return 0;
}
