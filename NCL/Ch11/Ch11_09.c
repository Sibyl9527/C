/* Purpose: String copy */
/* File Name: Ch11_09 */
/* Completion Date: 20210605 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char str1[] = "Lazy Boy";
  char str2[] = "Cute Girl";
  
  
  printf("The str1 is %s\n", str1);
  printf("The str2 is %s\n\n", str2);
  
  strcpy(str2, str1);
  printf("Copy from str1 to str2 the result:\n");
  printf("The str1 is %s\n", str1);
  printf("The str2 is %s\n\n", str2);
  
  return 0;
}
