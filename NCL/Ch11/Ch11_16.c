/* Purpose: Output the name and the age by itoa */
/* File Name: Ch11_16 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  int age;
  char ageunit[] = "·³";
  char data[30];
  char str_age[10];
  
  puts("Please input your name:");
  scanf("%s", data);
  puts("Please input your age:");
  scanf("%d", &age);
  
  itoa(age, str_age, 10);
  strcat(data, str_age);
  strcat(data, ageunit);
  printf("Output information: %s\n", data);
  
  system("pause");
  return 0;
}
