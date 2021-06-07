/* Purpose: Add #define follow hw09_07 */
/* File Name: hw09_08 */
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
  #define DATE "Publish date is unknown!"
	puts(DATE);
  #endif
  
  #ifdef PAGENUMBER
    puts(PAGENUMBER);
  #else
	puts("Page number is unknown!");
  #endif
   
  return 0;
}