/* Purpose: Calculate G */
/* File Name: Ch08_02 */
/* Completion Date: 20210531 */
#include <stdio.h>
#include <stdlib.h>
#define G 6.672e-11
#define FG G * (mass1 * mass2) / (distance * distance)

int main(void)
{
  float mass1, mass2, distance;
  int flag = 0;
  
  do {
	puts("Please input two item's mass");
	puts("Please input the first mass(kg)");
	scanf("%f", &mass1);
	puts("Please input the second mass(kg)");
	scanf("%f", &mass2);
	puts("Please input the distance between these two items");
	scanf("%f", &distance);
	
	if (mass1 < 0 || mass2 < 0 || distance < 0) {
      puts("Invalid input!");
    } else {
	  printf("Gravity is %3.2e\n", FG);
	  flag = 1;
	} 
  } while (flag != 1);
  
  system("pause");
  return 0;
}