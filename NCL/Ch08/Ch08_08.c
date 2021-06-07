/* Purpose: Binary linear simultaneous equations */
/* File Name: Ch08_08 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define XX (c * e - f * b) / (a * e - d * b)
#define YY (a * f - d * c) / (a * e - d * b)

int main(void)
{
  float a, b, c, d, e, f, x, y;
  
  puts("Solve the binary linear simultaneous equations as below");
  puts("ax + by = c");
  puts("dx + ey = f");
  puts("Please input the elements of first equation");
  scanf("%f %f %f", &a, &b, &c);
  puts("Please input the elements of second equation");
  scanf("%f %f %f", &d, &e, &f);
  
  do {
	printf("\nThe equation:\n");
	printf("%fx + %fy = %f\n", a, b, c);
	printf("%fx + %fy = %f\n", d, e, f);
	if ((a * e - d * b) == 0) { // To avoid denominator is 0
	  puts("Invalid input, please try again!!");
	}
  } while ((a * e - d * b) == 0);
	  
  puts("Answer:");
  x = XX;
  y = YY;
  printf("x = %5.2f y = %5.2f\n", x, y);
  
  system("pause");
  return 0;
}
