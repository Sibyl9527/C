/* Purpose: lowercase uppercase exchange */
/* File Name: hw05_08*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
  int type;
  char ch;
  
  printf("Which one do you want, (1) L to U (2) U to L\n");
  scanf("%d", &type);
  rewind(stdin);
  printf("Please input an alphabet\n");
  ch = getche();
  printf("\n");
  
  switch (type) {
    case 1:
	  if (ch >= 97 && ch <= 122) {
		printf("The alphabet now is %c\n", ch - 32);
	  } else {
		printf("Not a lowercase alphabet!\n");
	  }	  
	  break;
	case 2:
	  if (ch >= 65 && ch <= 90) {
		printf("The alphabet now is %c\n", ch + 32);
	  } else {
		printf("Not a uppercase alphabet!\n");
	  }
	  break;
	default:
	  printf("Invalid input!\n");
  }
  
  system ("pause");  
  return 0;
}