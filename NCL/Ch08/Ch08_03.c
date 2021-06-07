/* Purpose: Temperature exchange */
/* File Name: Ch08_03 */
/* Completion Date: 20210531 */
#include <stdio.h>
#include <stdlib.h>
#define F(C) C * 9 / 5 + 32
#define C(F) (F-32) * 5 / 9

int main(void)
{
  int option;
  float temp;
  
  do {
	puts("Temperature exchange, please select (1)C to F (2) F to C");
	scanf("%d", &option);
	puts("Please input temperature");
	scanf("%f", &temp);
	
	if (option == 1) {
	  printf("%5.2f C = %5.2f F\n", temp, F(temp));
	} else if (option == 2) {
	  printf("%5.2f F = %5.2f C\n", temp, C(temp));
	} else {
	  puts("Invalid input!");
	}
  } while (option != 1 && option != 2);
  
  system("pause");
  return 0;
}