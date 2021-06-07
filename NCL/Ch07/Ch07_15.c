/* Purpose: Exchange different units from length and weight */
/* File Name: Ch07_15 */
/* Completion Date: 20210529 */
#include <stdio.h>
#include <stdlib.h>
int SelectType(void);
void selectWeightUnit(void);
void selectLengthUnit(void);
float KgToLb(int);
float LbToKg(int);
float MeterToFeet(int);
float FeetToMeter(int);

int main(void)
{
  int select = SelectType();
  
  if (select == 1) {
	SelectWeightUnit();
  } else {
	SelectLengthUnit();
  }
  
  system("pause");
  return 0;
}

int SelectType(void)
{
  int check, type = 3;
  
  while (type > 2 || type <= 0) {
	printf("1. weight\n");
	printf("2. Length\n");
	check = scanf("%d", &type);
	if (check != 1)
		type = 3;
  }
  
  return type;
}

void SelectWeightUnit(void) {
  int WeightType, value;
  
  printf("Please select (1)Kg To Lb (2)Lb To Kg\n");
  scanf("%d", &WeightType);
  printf("Please input a number\n");
  scanf("%d", &value);
  
  switch (WeightType) {
	case 1:
	  printf("The result is %f Lb\n", KgToLb(value));
	  break;
	case 2:
	  printf("The result is %f Kg\n", LbToKg(value));
	  break;
  }
}

void SelectLengthUnit(void) 
{
  int LengthType, value;
  
  printf("Please select (1)Meter to Feet (2)Feet to Meter\n");
  scanf("%d", &LengthType);
  printf("Please input a number\n");
  scanf("%d", &value);
  
  switch (LengthType) {
	case 1:
	  printf("The result is %f Meter\n", MeterToFeet(value));
	  break;
	case 2:
	  printf("The result is %f Feet\n", FeetToMeter(value));
	  break;
  }
}

float KgToLb(int value) 
{
  return value / 0.454;
}

float LbToKg(int value) 
{
  return value * 0.454;
}

float MeterToFeet(int value) 
{
  return value * 0.3048;
}

float FeetToMeter(int value) 
{
  return value / 0.3048;
}