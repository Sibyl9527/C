/* Purpose: guess password three times and show error */
/* File Name: hw06_07 */
/* Completion Date: 20210526 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int password, guess, i;
  password = 9999;
  
  
  printf("Please guess the password XXXX\n");
  
  for (i = 3; i >= 1; i--) {
	scanf ("%d", &guess);
	if (guess == password) {
	  printf("Congrates!!\n");
	} else {
	  printf("You have %d chance to guess\n", i- 1);
	}
  }

  system("pause");
  return 0;
}