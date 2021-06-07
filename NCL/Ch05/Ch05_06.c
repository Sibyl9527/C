/* Purpose: Counting the movie tickets */
/* File Name: Ch05_06*/
/* Completion Date: 20210522*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int people, ticket, option;
  
  printf("Which type of movie tickets do you want to buy?\n");
  printf("1. Half fare (110$) 2. Regular fare (220$) 3. Army, Police and Student fare (180$)\n");
  scanf("%d", &option);
  printf("How many?");
  scanf("%d", &people);
  
  switch (option) {
    case 1:
	  ticket = 110;
	  break;
	case 2:
	  ticket = 220;
	  break;
	case 3:
	  ticket = 180;
	  break;
	default:
	  ticket = 220;	  
  }
  
  ticket = (people >= 4) ? (ticket * 0.8 * people) : (ticket * people);
  printf("The total amount is %d $\n", ticket);
  
  system ("pause");  
  return 0;
}