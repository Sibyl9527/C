/* Purpose: Shopping */
/* File Name: Ch07_20 */
/* Completion Date: 20210530 */
#include <stdio.h>
#include <stdlib.h>
int list(void);
void change(int);

int main(void)
{
  int pay, money, price;
  int flag = 0;
	  
  while (flag == 0) {
	price = list();
	printf("Please input the money you want to pay or 0 to stop the program.\n");
	scanf("%d", &pay);
	
	if (pay == 0) {
	  printf("Thank you for your patronage!\n");
	  return 0;
	} else if (pay >= price) {
	  money = pay - price;
	  flag = 1;
	} else {
	  printf("Your money is not enough to pay the book!\n");
	}
  }
  
  change(money);
  
  system("pause");
  return 0;
}

int list(void)
{
  int count;
  
  while (1) {
	printf("Book list:\n");
	printf("1.West touring 290$\n");
	printf("2.Red building dream 250$\n");
	printf("3.Water tiger book 280$\n");
	printf("4.Three kindom story 230$\n");
	printf("5.Old disable people touring 220$\n");
	printf("Please select 1 to 5\n");
	scanf("%d", &count);
	
	if (count > 5 || count < 1) {
      printf("Non!!\n");
	} else {
	  switch (count) {
	    case 1:
		  return 290;
		case 2:
		  return 250;
		case 3:
		  return 280;
		case 4:
		  return 230;
		case 5:
		  return 220;
	  }
	}
  }
}

void change(int money)
{
  int ten, five, one;
  
  ten = (money - money % 10);
  five = (money - ten) - ((money - ten) % 5);
  one = (money - ten) % 5;
  
  printf("The change is %d$\n", money);
  printf("Ten dollar %d, five dollar %d and one dollar %d\n", ten / 10, five / 5, one);
}

