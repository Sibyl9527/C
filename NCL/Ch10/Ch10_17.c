/* Purpose: Input monthly incomes and find out the max and min */
/* File Name: Ch10_17 */
/* Completion Date: 20210605 */
#include <stdio.h>

int main(void)
{
  int income[12] = {156548,152074,176325,120159,94876,
                    179541,146587,156472,135587,95443,
					163584,169994};
  int maxmonth, minmonth;
  int max = income[0], min = income[0];
  int i, j, temp;
  
  for (i = 0; i < 12; i++) {
	printf("Month:%02d income $%7d\n", i+1, income[i]);
  }
  
  for (i = 0; i < 12; i++) {
	if(max < income[i]) {
	  max = income[i];
	  maxmonth = i + 1;
	}
	
	if(min > income[i]) {
	  min = income[i];
	  minmonth = i + 1;
	}
  }
  
  printf("The max income is month %02d, $%7d\n", maxmonth, max);
  printf("The min income is month %02d, $%7d\n", minmonth, min);
  
  return 0;
}