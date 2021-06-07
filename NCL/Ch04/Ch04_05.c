/* Purpose: True/False */
/* File Name: Ch04_05*/
/* Completion Date: 20210510*/
#include <stdio.h>

int main(void)
{
  int FatherAge = 38, ChildAge = 10;
  
  printf("True = 1, False = 0, The Father's age is %d and the child's age is %d\n", FatherAge, ChildAge);
  printf("FatherAge > ChildAge result is %d\n", FatherAge > ChildAge);
  printf("FatherAge < ChildAge result is %d\n", FatherAge < ChildAge);
  printf("FatherAge == ChildAge result is %d\n", FatherAge == ChildAge);
  printf("FatherAge != ChildAge result is %d\n", FatherAge != ChildAge);
  printf("FatherAge >= ChildAge result is %d\n", FatherAge >= ChildAge);
  printf("FatherAge < ChildAge result is %d\n", FatherAge <= ChildAge);  
  
  return 0;
}