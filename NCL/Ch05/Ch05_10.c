/* Purpose: Input three numbers and arrange desc */
/* File Name: Ch05_10*/
/* Completion Date: 20210522*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j, k;
  int max, mid, min;
  
  printf("Please input three integer\n");
  scanf("%d %d %d", &i, &j, &k);
  
  if (i > j) {
    if (k > i) {
	  max = k;
	  mid = i;
	  min = j;
	} else if (k > j){
      max = i;
	  mid = k;
	  min = j;
	} else {
      max = i;
	  mid = j;
	  min = k;
	}
  } else if (k > j) {
    max = k;
	mid = j;
	min = i;
  } else {
    max = j;
	if (i > k) {
	  mid = i;
	  min = k;
	} else {
	  mid = k;
	  min = i;
	}
  }
  printf("The original i j k is %d, %d and %d\n", i, j, k);
  printf("The result of these three numbers is %d, %d and %d\n", max, mid, min);
  
  system ("pause");  
  return 0;
}