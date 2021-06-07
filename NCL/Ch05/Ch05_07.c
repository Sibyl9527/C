/* Purpose: Triangle length */
/* File Name: Ch05_07*/
/* Completion Date: 20210522*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j, k;
  
  printf("We will check the three lengths whether can make a triangle or not.\n");
  printf("Please input three length:\n");
  scanf("%d %d %d", &i, &j, &k);
  
  if ((i + j) > k){
    if ((i + k) > j){
	  if ((j + k) > i){
		printf("Yes, these three lengths can make a triangle.\n");
	  } else {
	    printf("No, because %d + %d =< %d\n", j, k, i);
	  }
	} else {
	  printf("No, because %d + %d =< %d\n", i, k, j);
	}	
  } else {
    printf("No, because %d + %d =< %d\n", i, j, k);
  }
  
  system ("pause");  
  return 0;
}