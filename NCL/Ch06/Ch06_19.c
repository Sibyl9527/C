/* Purpose: Factorial */
/* File Name: Ch06_19 */
/* Completion Date: 20210525 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
  int i, number;
  char GoOn = 'y';
  
  do {
	printf("\nFactoral calculation, please input a positive integer\n");
	scanf("%d", &number);
	for (i = number - 1; i >0; i--) {
	  number *= i;
	}
	printf("Answer: %d\n", number);
    printf("Continue? (y/n)\n");
    GoOn = getche();
  } while (GoOn == 'y');
  
  printf("\nThank you for using!\n");
  
  system("pause");
  return 0;
}