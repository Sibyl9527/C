/* Purpose: Merge "television" and "portion" to "teleport" */
/* File Name: hw11_06 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char strA[] = "television";
  char strB[] = "portion";
  char strC[10];
  char strD[10];
  
  printf("The strA is \"%s\"\n", strA);
  printf("The strB is \"%s\"\n", strB);
  printf("The merge string is \"%s\"\n", strcat(strncpy(strC,strA,4),strncpy(strD,strB,4)));
  
  return 0;
}
