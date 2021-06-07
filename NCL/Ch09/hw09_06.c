/* Purpose: Output number both English and Chinese, and code #ifdef */
/* File Name: hw09_06 */
/* Completion Date: 20210603 */
#include <stdio.h>
#include "number.h"

int main(void)
{
  printf("英文\t中文\n");
  printf("------------\n");
  #ifdef ONE
    printf("ONE\t%s\n", ONE);
  #else
    puts("ONE is not define");
  #endif
  
  #ifdef TWO
  printf("TWO\t%s\n", TWO);
  #else
    puts("TWO is not define");
  #endif
  
  #ifdef THREE
  printf("THREE\t%s\n", THREE);
  #else
    puts("THREE is not define");
  #endif
  
  #ifdef FOUR
  printf("FOUR\t%s\n", FOUR);
  #else
    puts("FOUR is not define");
  #endif
  
  #ifdef FIVE
  printf("FIVE\t%s\n", FIVE);
  #else
    puts("FIVE is not define");
  #endif
  
  #ifdef SIX
  printf("SIX\t%s\n", SIX);
  #else
    puts("SIX is not define");
  #endif
  
  #ifdef SEVEN
  printf("SEVEN\t%s\n", SEVEN);
  #else
    puts("SEVEN is not define");
  #endif
  
  #ifdef EIGHT
  printf("EIGHT\t%s\n", EIGHT);
  #else
    puts("EIGHT is not define");
  #endif
  
  #ifdef NINE
  printf("NINE\t%s\n", NINE);
  #else
    puts("NINE is not define");
  #endif
  
  #ifdef TEN
  printf("TEN\t%s\n", TEN);
  #else
    puts("TEN is not define");
  #endif
   
  return 0;
}