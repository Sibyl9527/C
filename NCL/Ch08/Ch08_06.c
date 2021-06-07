/* Purpose: Spending time compare between sub function and macro */
/* File Name: Ch08_06 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MACRO(x,y) x * x + y * y

int function(int, int);

int main(void)
{
  float begin, end;
  int i, n , sum = 0;
  
  puts("Calculate the tim e of the sum of (1^2 + 2^2) + (2^3 + 3^2 + ... + n^2 + (n+1)^2");
  puts("Please input item n");
  scanf("%d", &n);
  puts("Test result:");
  
  begin = clock();
  for (i = 1; i <= n; i++) {
	sum += MACRO(i, (i+1));
  }
  end = clock();
  printf("The spending time by MACRO is %g second\n", (end - begin) / CLK_TCK);
  
  begin = clock();
  for (i = 1; i <= n; i++) {
	sum += function(i, (i+1));
  }
  end = clock();
  printf("The spending time is function %g second\n", (end - begin) / CLK_TCK);
  
  system("pause");
  return 0;
}

int function(int x, int y)
{
  return x * x + y * y;
}