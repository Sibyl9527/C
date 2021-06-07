/* Purpose: Input strings and rearrange them by bubble sort */
/* File Name: Ch11_28 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXNUM 40
#define MAXLEN 80

int main(void)
{ 
  char name[MAXNUM][MAXLEN];
  char temp[MAXNUM];
  int count = 0;
  int i, j;
  int length;
  
  puts("Please input the string, click enter for completion");
  while (count < MAXNUM) {
	printf("Please input no.%d string:", count + 1);
	gets(name[count]);
	length = strlen(name[count]);
	if (length == 0) {
      break;
	}
	count++;
  }
  
  printf("You toally input %d strings\n", count);
  
  for (i = 0; i < count -1; i++) {
	for (j = i + 1; j < count; j++) {
	  if (strcmp(name[i], name[j]) > 0) {
		strcpy(temp, name[j]);
		strcpy(name[j], name[i]);
		strcpy(name[i], temp);
	  }
	}
  }
  
  puts("");
  puts("The results are:");
  for(i = 0; i < count; i++) {
	printf("The no.%d string is %s\n", i + 1, name[i]);
  }
  
  
  system("pause");
  return 0;
}
