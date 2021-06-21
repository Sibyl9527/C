// Purpose: Calculate factorial
// File Name: Ch13_10
// Completion Date: 20210617
#include <stdio.h>
#include <stdlib.h>
void fact(int);
static int value = 1; // static eternal variable

int main(void)
{ 
  int i;
  int n;
  
  puts("Calculate n!, please input n:");
  scanf("%d", &n);
  for (i = n; i >= 1; i--) {
	fact(i);
  }
  printf("%d! = %d\n", n, value);
 
  return EXIT_SUCCESS;
}  

void fact(int i)
{
  value = value * i;
}

