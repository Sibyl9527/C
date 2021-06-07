/* Purpose: Calculate the interest */
/* File Name: Ch11_17 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  char rate1[] = "1.36% - balance 100,000 up";
  char rate2[] = "1.82% - balance 500,000 up";
  char rate3[] = "2.52% - balance 1,000,000 up";
  char rate4[] = "2.98% - balance 5,000,000 up";
  double rating, interest;
  int balance;
  
  puts("The interest rate base on your balance, please refer as below");
  puts(rate1);
  puts(rate2);
  puts(rate3);
  puts(rate4);
  puts("Please input your balance (unit: 10 thousand)");
  scanf("%d", &balance);
  
  if(balance >= 500) {
	rating = atof(rate4);
  } else if (balance >= 100) {
	rating = atof(rate3);
  } else if (balance >= 50) {
	rating = atof(rate2);
  } else if (balance >= 10) {
	rating = atof(rate1);
  } else {
	puts("Sorry, you need to save more money.");
  }
  
  rating = rating / 100;
  printf("Yearly rate is %f\n", rating);
  interest = balance * rating;
  printf("You can get %.2f interest\n", interest * 10000);

  system("pause");
  return 0;
}
