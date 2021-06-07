/* Purpose: Include data.h, and output the contents like Ch09_08.c */
/* File Name: hw09_07 */
/* Completion Date: 20210603 */
#include <stdio.h>
#include "data.h"

int main(void)
{
  puts(BOOKNAME);
  puts(AUTHOR);
  puts(PUBLISHER);
  
  #ifdef DATE
    puts(DATE);
  #else
	puts("Publish date is unknown!");
  #endif
  
  #ifdef PAGENUMBER
    puts(PAGENUMBER);
  #else
	puts("Page number is unknown!");
  #endif
   
  return 0;
}