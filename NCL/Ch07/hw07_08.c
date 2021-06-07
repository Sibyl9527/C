/* Purpose: sub function GCF */
/* File Name: hw07_08 */
/* Completion Date: 20210530 */
#include <stdio.h>
int GCF(int, int);

int main(void)
{
  int integer1, integer2; 
  printf("Please input two integers for GCF\n");
  scanf("%d %d", &integer1, &integer2);
  printf("The GCF of %d and %d is %d\n", integer1, integer2, GCF(integer1, integer2));
  
  return 0;
}

int GCF(int integer1, int integer2)
{
  if (integer1 % integer2 == 0) {
	return integer2;
  } else {
	return (GCF(integer2, integer1 % integer2));
  }
}

