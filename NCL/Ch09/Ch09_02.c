/* Purpose: Output define string */
/* File Name: Ch09_02 */
/* Completion Date: 20210602 */
#include <stdio.h>
#define ROC "Republic of China"
#define PETS "3 cats and 5 dogs"
#define TIGER "is a fierce monster"

int main(void)
{
  printf("ROC is %s\n", ROC);
  printf("I have %s\n", PETS);
  printf("Tiger %s\n", TIGER);
  
  return 0;
}