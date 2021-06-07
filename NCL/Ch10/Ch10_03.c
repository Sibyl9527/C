/* Purpose: Output avg grade for students */
/* File Name: Ch10_03 */
/* Completion Date: 20210603 */
#include <stdio.h>

int main(void)
{
  float avg[] = {68.02,94.77,97.10,54.25,76.79,
                  41.52,69.33,54.17,74.86,88.55};
  int i;
  
  for (i = 0; i < 10; i++) {
	printf("Seat no.%d chinese grade is %5.2f\n", i, avg[i]);
  }
  
  return 0;
}