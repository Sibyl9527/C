/* Purpose: Two strings cascade */
/* File Name: Ch11_13 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char str1[30] = "BIRTH";
  char str2[] = "DAY";
  
  printf("The str1 is %s\n", str1);
  printf("The str2 is %s\n", str2);
  printf("Cascade the str2 after str1, the result is \n%s\n", strcat(str1, str2));
  
  return 0;
}
