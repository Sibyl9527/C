/* Purpose: Output all .h file */
/* File Name: Ch09_06 */
/* Completion Date: 20210602 */
#include <stdio.h>
#define DATA 3
#include "name.h"

int main(void)
{
  printf("Name:  %s\n", PNAME);
  printf("Age:   %d\n", AGE);
  printf("Blood: %c\n", BLOODTYPE);
  printf("Job:   %s\n", JOB);
  
  return 0;
}