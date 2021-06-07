/* Purpose: excahnge money program */
/* File Name: hw07_10 */
/* Completion Date: 20210530 */
#include <stdio.h>
#include <stdlib.h>
int List(void);
void change(int);

int main(void)
{
  int money;
  
  money = List();
  change(money);
  
  system("pause");
  return 0;
}

int List(void) {
  int check, select;
  do {
  printf("How much money do you want to exchange?\n");
  printf("(1)100$(2)200$(1)500$(1)1000$\n");
  check = scanf("%d", &select);
  if (check != 1)
	printf("Invalid input!!\n");
  } while (check != 1);
  
  switch (select) {
    case 1:
	  return 100;
	case 2:
	  return 200;
	case 3:
	  return 500;
	case 4:
	  return 1000;
  } 
}

void change (int money)
{
  int coin, number, remaining, fifty = 0, ten = 0, five = 0, one = 0;
  printf("Which kind of coin do you want to exchange?\n");
  printf("(1)1(2)5(3)10(4)50\n");
  scanf("%d", &coin);
  printf("How many?\n");
  scanf("%d", &number);
  
  switch (coin) {
    case 1:
	  coin = 1;
	  break;
	case 2:
	  coin = 5;
	  break;
	case 3:
	  coin = 10;
	  break;
	case 4:
	  coin = 50;
	  break;
  } 
  
  if (coin * number > money) {
	printf("Are you kidding?\n");
	return;
  } else {
    remaining = money - coin * number;
	fifty = remaining / 50;
	ten = (remaining % 50) / 10;
	five = ((remaining % 50) % 10) / 5;
    one = ((remaining % 50) % 10) % 5;
    
    if (coin == 50)
      fifty += number;
    else if (coin == 10)
      ten += number;
    else if (coin == 5)
      five += number;
    else 
	  one += number;
  }
  
  printf("The coins for you are %d fifty, %d ten, %d five and %d one\n", fifty, ten, five, one);
}