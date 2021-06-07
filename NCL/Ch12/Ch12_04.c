/* Purpose: Calculate the price of the gas */
/* File Name: Ch12_04 */
/* Completion Date: 20210607 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  int price; 
  float liter = 17.62;
  float total;
  void *viptr; // price pointer
  void *vfptr; // liter pointer
  
  viptr = &price;
  vfptr = &liter;
  
  printf("The gas is $%.2f per liter\n", *(float*)vfptr);
  printf("%s", "How many liters do you want? ");
  scanf("%d", (int*)viptr);
  total = (*(int*)viptr) * (*(float*)vfptr);
  printf("The total amount is $%.2f\n", total);
  
  system("pause");
  return EXIT_SUCCESS;
}
