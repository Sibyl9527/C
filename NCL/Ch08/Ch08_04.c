/* Purpose: Calculate BMI and output health condition */
/* File Name: Ch08_04 */
/* Completion Date: 20210531 */
#include <stdio.h>
#include <stdlib.h>
#define BMI(weight, height) weight / (height * height)
#define THIN(BMI) BMI < 20
#define IDEAL(BMI) BMI >= 19 && BMI < 26
#define DANGEROUS(BMI) BMI >=26 && BMI < 30


int main(void)
{
  float kg, cm, b;
  
  do {
	puts("Claculate BMI");
	puts("Please input your weight (kg)");
	scanf("%f", &kg);
	puts("Please input your height (cm)");
	scanf("%f", &cm);
	
	if (kg > 300 || kg < 20) {
	  puts("Invalid weight, please input again!!");
	}
	if (cm >300 || cm < 100) {
	  puts("Invalid height, please input again!!");
	}
  } while (kg > 300 || kg < 20 || cm >300 || cm < 100);
  
  cm = cm / 100;
  b = BMI(kg, cm);
  printf("Your BMI is %5.2f\n\n", b);
  if (THIN(b)) {
	puts("You are too thin!!");
  } else if (IDEAL(b)) {
	puts("You have great phisique!!");
  } else if (DANGEROUS(b)) {
	puts("You are a little chubbier, you know what to do next");
  } else {
	puts("You are so fat, you have to do more and more exercise!");
  }
  
  system("pause");
  return 0;
}