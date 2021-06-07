/* Purpose: Output string and char array */
/* File Name: Ch11_03 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{ 
  char name1[] = {'J','o','h','n',' ','S','m','i','t','h','\0'};
  char name2[] = {'M','a','r','y',' ','W','h','i','t','e'};
  
  printf("name1 = %s\n", name1);
  printf("name2 = %s\n", name2);

  return 0;
}
