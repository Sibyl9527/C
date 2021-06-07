/* Purpose: Use atoi exchange vids to R.O.C. year */
/* File Name: Ch11_15 */
/* Completion Date: 20210606 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  char date[11];
  char month[3];
  char days[3];
  int roc;
  
  puts("Please enter the date(ex:2021/06/06)");
  scanf("%10s", date);
  roc = atoi(date) - 1911;
  month[0] = date[5];
  month[1] = date[6];
  month[2] = '\0';
  days[0] = date[8];
  days[1] = date[9];
  days[2] = '\0';
  printf("R.O.C. Year:%d Month:%d Day:%d\n", roc, atoi(month), atoi(days));
  
  system("pause");
  return 0;
}
