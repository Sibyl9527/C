/* Purpose: Calculate ranctangle area */
/* File Name: Ch09_05 */
/* Completion Date: 20210602 */
#include <stdio.h>
#include <stdlib.h>
#define length 35
#define width 20
#define area length * width
#if length > width
#define condition 'T'
#else
#define condition 'F'
#endif

int main(void)
{
  if (condition == 'T') {
	printf("Length = %d\n", length);
	printf("Width = %d\n", width);
	printf("The ractangle area is %d * %d = %d\n", length, width, area);
  } else {
	puts("Your length and width define error, please redefine them\n");
  }
  
  system("pause");
  return 0;
}