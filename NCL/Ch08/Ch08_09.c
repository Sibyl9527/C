/* Purpose: Exchange rate conversion */
/* File Name: Ch08_09 */
/* Completion Date: 20210601 */
#include <stdio.h>
#include <stdlib.h>
#define NTD 1.0
#define USD 0.02911
#define JPY 3.46317
#define HKD 0.22703
#define GRP 0.01804
#define ECU 0.00733
#define EXCHANGE(currency1, currency2) (NTD / currency1) * currency2

float rate(int);
void currencyname(int);

int main(void)
{
  int amount, curr1, curr2, money;
  
  puts("1.NTD 2.USD 3.JPY");
  puts("4.HKD 5.GRP 6.ECU");
  puts("Exchange rate conversion");
  puts("Please input a number");
  scanf("%d", &curr1);
  puts("Please input the amount");
  scanf("%d", &amount);
  puts("Which kind of currency that you want to exchange");
  scanf("%d", &curr2);
  printf("%d ", amount);
  currencyname(curr1);
  printf(" can exchange to %.2f ", amount * EXCHANGE(rate(curr1), rate(curr2)));
  currencyname(curr2);
  puts("");
  
  system("pause");
  return 0;
}

float rate(int money)
{
  switch (money) {
	case 1: return NTD;
	case 2: return USD;
	case 3: return JPY;
	case 4: return HKD;
	case 5: return GRP;
	case 6: return ECU;
  }
}

void currencyname(int money)
{
  switch (money) {
    case 1:
	  printf("NTD");
	  break;
	case 2:
	  printf("USD");
	  break;
	case 3:
	  printf("JPY");
	  break;
	case 4:
	  printf("HKD");
	  break;
	case 5:
	  printf("GRP");
	  break;
	case 6:
	  printf("ECU");
	  break;
  }
}
