// Purpose: Output customer's name and amount of consumption
// File Name: Ch15_10
// Completion Date: 20210624
#include <stdio.h>
#include <stdlib.h>
struct customer 
{
  int amount; // amount of consumption
  char name[11]; // customer's name
};
void PrintRecord(struct customer);

int main(void)
{  
  struct customer record;
  
  puts("Please input customer's name:");
  scanf("%s", &record.name);
  puts("Please input customer's amount of consumption:");
  scanf("%d", &record.amount);
  PrintRecord(record);
  
  return EXIT_SUCCESS;
}  

void PrintRecord(struct customer x)
{
  printf("Customer %s spent $%d\n", x.name, x.amount);
}