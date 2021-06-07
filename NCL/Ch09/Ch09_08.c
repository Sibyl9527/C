/* Purpose: Output define and not define */
/* File Name: Ch09_08 */
/* Completion Date: 20210602 */
#include <stdio.h>
#define BOOKNAME "Three kindom"
#define AUTHOR "Kun-chung Lo"
#define PUBLISHER "Historical culture book company"

int main(void)
{
  #ifdef BOOKNAME
    puts(BOOKNAME);
  #else
	puts("Unknown!");
  #endif
  
  #ifdef AUTHOR
    puts(AUTHOR);
  #else
	puts("Unknown!");
  #endif
  
  #ifdef PUBLISHER
    puts(PUBLISHER);
  #else
	puts("Unknown!");
  #endif
  
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