/* Purpose: Search the substring */
/* File Name: Ch11_18 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char str[] = "I am not a teacher";
  printf("%s\n", strstr(str,"not"));

  return 0;
}
