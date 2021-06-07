/* Purpose: show A-Z and a=z */
/* File Name: hw06_08 */
/* Completion Date: 20210526 */
#include <stdio.h>

int main(void)
{
  int A = 65, Z = 90, a = 97, z = 122, i;
  
  for (i = A; i <= Z; i ++) {
	printf("%c ", i);
  }
  for (i = a; i <= z; i ++) {
	printf("%c ", i);
  }

  return 0;
}