/* Purpose: Two strings partially cascade */
/* File Name: Ch11_14 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  char str1[30] = "foot";
  char str2[] = "ballet";
  int n;
  
  printf("The str1 is %s\n", str1);
  printf("The str2 is %s\n", str2);
  puts("How many chars do you want to cascade?");
  scanf("%d", &n);
  printf("Cascade the str2 %d chars after str1, the result is \n%s\n", n,strncat(str1, str2, n));
  
  system("pause");
  return 0;
}
