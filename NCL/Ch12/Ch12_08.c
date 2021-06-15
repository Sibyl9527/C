/* Purpose: Copy string by pointer */
/* File Name: Ch12_08 */
/* Completion Date: 20210609 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  char *str1 = "I am a good boy";
  char *str2 = (char *)malloc(sizeof(char) * (strlen(str1)+1));
  
  printf("The first string is %s\n", str1);
  printf("The second string is %s\n", str2);
  
  strcpy(str2, str1); // copy the content from str1 to str2
  printf("%s", "\nCopy the first string to second string\n");
  
  printf("The first string is %s\n", str1);
  printf("The second string is %s\n", str2);

  free(str2);
 
  system("pause"); 
  return EXIT_SUCCESS;
}
