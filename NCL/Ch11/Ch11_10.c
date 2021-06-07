/* Purpose: Partially string copy */
/* File Name: Ch11_10 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  char str1[] = "Cute and Pretty Girl";
  char str2[] = "Lazy Boy";
  int n;
  
  printf("The str1 is %s\n", str1);
  printf("The str2 is %s\n", str2);
  puts("How many chars do you want to copy from str1 to str2?");
  scanf("%d", &n);
  strncpy(str2, str1, n);
  printf("Copy %d chars from str1 to str2 the result:\n", n);
  printf("The str1 is %s\n", str1);
  printf("The str2 is %s\n", str2);
  
  system("pause");
  return 0;
}
