/* Purpose: right triangle by input a number for base */
/* File Name: hw06_06 */
/* Completion Date: 20210526 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int base, check, count, inner_count;
  
  printf("Please input a base, and we will show you a right triangle\n");
  check = scanf("%d", &base);
  
  if (check == 1) {
	if (base < 0)
      printf("Invalid input!\n");
	for (count = 1; count <= base; count++) {
      for (inner_count = count; inner_count >= 1; inner_count--)
        printf("*");
      printf("\n");	
	}
	
  } else {
	printf("Invalid input!!\n");
  }

  system("pause");
  return 0;
}