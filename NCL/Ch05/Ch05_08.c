/* Purpose: Control Selection */
/* File Name: Ch05_08*/
/* Completion Date: 20210522*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char option;
  
  printf("F. format\n");
  printf("C. copy\n");
  printf("D. delete\n");
  printf("E. exit\n");
  printf("Please select one:\n");
  scanf("%c", &option);
  
  switch (option) {
    case 'F':
	case 'f':
	  printf("[format...]\n");
	  break;
	case 'C':
	case 'c':
	  printf("[copy...]\n");
	  break;
	case 'D':
	case 'd':
	  printf("[delete...]\n");
	  break;
	case 'E':
	case 'e':
	  printf("[bye-bye!]\n");
	  break;
	default:
	  printf("input error\a\n");
  }
  
  system ("pause");  
  return 0;
}