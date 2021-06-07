/* Purpose: Exchange Birthday to Twelve Constellations */
/* File Name: Ch05_09*/
/* Completion Date: 20210522*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int month, day;
  
  printf("Please input your birthday\n");
  printf("Month?\n");
  scanf("%d", &month);
  printf("Date?\n");
  scanf("%d", &day);
  
  if (day < 0) {
    month = 13;
  }
  if (month == 2 && day > 29) {
    month = 13;
  } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
    month = 13;
  } else if (day > 31) {
    month = 13;
  }
  
  switch (month) {
    case 1:
	  if (day < 21) {
	    printf("Capricorn\n");
	  } else {
	    printf("Aquarius\n");
	  }
	  break;
	case 2:
	  if (day < 19) {
	    printf("Aquarius\n");
	  } else {
	    printf("Pisces\n");
	  }
	  break;
	case 3:
	  if (day < 21) {
	    printf("Pisces\n");
	  } else {
	    printf("Aries\n");
	  }
	  break;
	case 4:
	  if (day < 21) {
	    printf("Aries\n");
	  } else {
	    printf("Taurus\n");
	  }
	  break;
	case 5:
	  if (day < 22) {
	    printf("Taurus\n");
	  } else {
	    printf("Gemini\n");
	  }
	  break;
	case 6:
	  if (day < 22) {
	    printf("Gemini\n");
	  } else {
	    printf("Cancer\n");
	  }
	  break;
	case 7:
	  if (day < 23) {
	    printf("Cancer\n");
	  } else {
	    printf("Leo\n");
	  }
	  break;
	case 8:
	  if (day < 23) {
	    printf("Leo\n");
	  } else {
	    printf("Virgo\n");
	  }
	  break;
	case 9:
	  if (day < 23) {
	    printf("Virgo\n");
	  } else {
	    printf("Libra\n");
	  }
	  break;
	case 10:
	  if (day < 24) {
	    printf("Libra\n");
	  } else {
	    printf("Scorpio\n");
	  }
	  break;
	case 11:
	  if (day < 23) {
	    printf("Scorpio\n");
	  } else {
	    printf("Sagittarius\n");
	  }
	  break;
	case 12:
	  if (day < 22) {
	    printf("Sagittarius\n");
	  } else {
	    printf("Capricorn\n");
	  }
	  break;
	default:
	  printf("Are you alien?\n");
  }
  
  system ("pause");  
  return 0;
}