/* Purpose: Random library */
/* File Name: Ch09_03 */
/* Completion Date: 20210602 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  
  printf("Please input random seed: ");
  scanf("%d", &i);
  srand(i);
  for (i = 0; i < 10; i++) {
	printf("%5d\n", rand());
  }
  
  system("pause");
  return 0;
}