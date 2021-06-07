/* Purpose: Guess password */
/* File Name: hw09_04 */
/* Completion Date: 20210602 */
#include <stdio.h>
#include <stdlib.h>
#define PWD 9527

int main(void)
{
  int i, guess;
  
  puts("Please guess a four digits password, you have three choices");
  for (i = 1; i <= 3; i++) {
	printf("Guess no.%d: ", i);
	scanf("%d", &guess);
	if (guess == PWD) {
	  puts("Good job!");
	  break;
	} else {
	  puts("Wrong answer!");
	  if (i == 3) {
		puts("You ran out of chances");
	  }
	}     
  }
  
  system("pause");
  return 0;
}