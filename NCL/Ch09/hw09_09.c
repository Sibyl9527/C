/* Purpose: Channel select for 5 channels */
/* File Name: hw09_09 */
/* Completion Date: 20210603 */
#include <stdio.h>
#include <stdlib.h>
#define FOX "FOX SPORTS"
#define ESPN "ESPN SPORTS"
#define VL "VL SPORTS"
#define BBC "BBC NEWS"
#define CNN "CNN NEWS"

int main(void)
{
  int select;
  puts("Please input the channel number and we will show you the channel name");
  scanf("%d", &select);
  
  switch (select) {
	case 70:
	  puts(FOX);
	  break;
	case 75:
	  puts(ESPN);
	  break;
	case 82:
	  puts(VL);
	  break;
	case 87:
	  puts(BBC);
	  break;
	case 90:
	  puts(CNN);
	  break;
	default:
	  puts("Undefined channel.");
	  break;
  }
   
  system("pause");
  return 0;
}