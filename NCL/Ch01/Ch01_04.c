/* Ch01_04 �@�L���Ѫ��{��*/
#include <stdio.h>
 int main(void)
 {
	 int sum, difference;
	 int bignumber, smallnumber;
	 sum = 10;
	 difference = 4;
	 bignumber = (sum + difference) / 2;
	 smallnumber = (sum - difference) / 2;
	 
	 printf("�j��: %d\n", bignumber);
	 printf("�p��: %d\n", smallnumber);
	 
	 return 0;
 }