/* Purpose: Calculate the sum of few numbers by dynamic memory allocation */
/* File Name: Ch12_06 */
/* Completion Date: 20210608 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int *num; // Int pointer for numbers
  int sum; // The sum of few numbers
  int i; // loop control variable
  int q; // quantity
  
  printf("%s", "How many numbers do you want to sum up: ");
  scanf("%d", &q);
  
  num = (int*)malloc(sizeof(int) * q); // Allocate memory
  for (i = 0; i < q; i++) { // Save input number
	printf("Please input the no.%d number: ", i + 1);
	scanf("%d", (num + i));
	sum += *(num + i);
  }
  
  printf("The sum is %d\n", sum);
  free(num);
 
  system("pause"); 
  return EXIT_SUCCESS;
}
