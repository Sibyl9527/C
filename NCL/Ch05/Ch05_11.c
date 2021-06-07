/* Purpose: Car equipments optional */
/* File Name: Ch05_11*/
/* Completion Date: 20210523*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
  int cartype, money1, money2, money3, money4, sum;
  char cdplayer, sunroof, autotrans;  
  cartype = money1 = money2 = money3 = money4 = sum = 0;
  
  printf("Which type of car do you want to buy? (1)Sports car (2) Sedan(Lux) (3) Sedan(basic)\n");
  scanf("%d", &cartype);
  printf("CDplayer? (y/n)\n");
  cdplayer = getche();
  printf("\n");
  printf("Sunroof? (y/n)\n");
  sunroof = getche();
  printf("\n");
  printf("Autotrans? (y/n)\n");
  autotrans = getche();
  printf("\n");
  
  switch (cartype) {
    case 1:
	  money1 = 800000;
	  money2 = (cdplayer == 'y' || cdplayer == 'Y') ? 4000 : 0;
	  money3 = (sunroof == 'y' || sunroof == 'Y') ? 5000 : 0;
	  money4 = (autotrans == 'y' || autotrans == 'Y') ? 3000 : 0;
	  break;
	case 2:
	  money1 = 500000;
	  money2 = (cdplayer == 'y' || cdplayer == 'Y') ? 3000 : 0;
	  money3 = (sunroof == 'y' || sunroof == 'Y') ? 2500 : 0;
	  money4 = (autotrans == 'y' || autotrans == 'Y') ? 1500 : 0;
	  break;
	case 3:
	  money1 = 800000;
	  money2 = (cdplayer == 'y' || cdplayer == 'Y') ? 2500 : 0;
	  money3 = (sunroof == 'y' || sunroof == 'Y') ? 2000 : 0;
	  money4 = (autotrans == 'y' || autotrans == 'Y') ? 1000 : 0;
	  break;
	default:
	  printf("Thank you!\n");
  }
  
  sum = money1 + money2 + money3 + money4;
  printf("The total amount of your car is %d\n", sum);

  system ("pause");  
  return 0;
}