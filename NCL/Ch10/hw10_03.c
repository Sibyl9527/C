/* Purpose: Give the initial values for arrayA and copy arrayA to arrayB */
/* File Name: hw10_03 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{
  int arrayA[8] = {5,5,6,6,9,5,2,7};
  int arrayB[8], i;
  
  puts("ArrayB: ");
  for (i = 0; i < 8; i++) {
	arrayB[i] = arrayA[i];
	printf("%d ", arrayB[i]);
  }
  puts("");
  
  return 0;
}