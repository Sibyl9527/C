/* Purpose: change data type*/
/* File Name: Ch02_12*/
/* Completion Date: 20210509*/
#include <Stdio.h>

int main(void)
{
  int intnum1 = 7;
  int intnum2 = 3;
  float answer;
  
  answer = intnum1 / intnum2;
  printf("The quotient is %f, if we didn't change the data type.\n", answer);
  
  answer = (float) intnum1 / intnum2; 
  printf("The quotient is %f, when we changed the data type from int to float.\n", answer);

  return 0;
}