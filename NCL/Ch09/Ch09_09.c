/* Purpose: Rainbow color */
/* File Name: Ch09_09 */
/* Completion Date: 20210602 */
#include <stdio.h>
#include <stdlib.h>
#include "Ch09_09.h"

int main(void)
{
  int casenumber;
  
  puts("Please select number");
  puts("1.RED 2.ORANGE 3.YELLOW 4.GREEN");
  puts("5.BLUE 6.INDIGO 7.VIOLET");
  scanf("%d", &casenumber);
  
  switch (casenumber) {
	case 1:
	  puts(RED);
	  break;
	case 2:
	  puts(ORANGE);
	  break;
	case 3:
	  puts(YELLOW);
	  break;
	case 4:
	  puts(GREEN);
	  break;
	case 5:
	  puts(BLUE);
	  break;
	case 6:
	  puts(INDIGO);
	  break;
	case 7:
	  puts(VIOLET);
	  break;
	default:
	  puts("WC?");
  }
  puts("");
  
  system("pause");
  return 0;
}