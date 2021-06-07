/* Purpose: Hanoi tower */
/* File Name: Ch07_18 */
/* Completion Date: 20210530 */
#include <stdio.h>
#include <stdlib.h>
void hanoi(int, int, int, int);

int main(void)
{
  int check, count;
  
  do {
  printf("How many plates do you want move for hanoi?\n");
  check = scanf("%d", &count);
  if (check != 1)
	printf("Invalid input!!\n");
  } while (check != 1);
	  
  hanoi(count, 1, 2, 3);
  
  system("pause");
  return 0;
}

void hanoi(int count, int begin, int mid, int dest)
{
  if (count == 1) {
	printf("The No.%d plate will move from No.%d tower to No.%d tower\n", count, begin, dest);
  } else {
	hanoi(count -1, begin, dest, mid);
	printf("The No.%d plate will move from No.%d tower to No.%d tower\n", count, begin, dest);
	hanoi(count -1, mid, begin, dest);
  }
}

