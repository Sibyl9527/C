/* Purpose: GCF */
/* File Name: hw06_01 */
/* Completion Date: 20210526 */
#include <stdio.h>

int main(void)
{
  int a, b, GCF;
  a = 154, b = 256;
  
  if (b)
    while ((a %= b) && (b %= a));
  
  GCF = a + b;
  printf("GCF is %d\n", GCF);
  
  return 0;
}