/* Ch01_04 毫無註解的程式*/
#include <stdio.h>
 int main(void)
 {
	 int sum, difference;
	 int bignumber, smallnumber;
	 sum = 10;
	 difference = 4;
	 bignumber = (sum + difference) / 2;
	 smallnumber = (sum - difference) / 2;
	 
	 printf("大數: %d\n", bignumber);
	 printf("小數: %d\n", smallnumber);
	 
	 return 0;
 }