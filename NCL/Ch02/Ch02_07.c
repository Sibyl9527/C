/* 程式目的： 變更有加上const修飾詞的變數值*/
/* 檔案名稱： Ch02_07*/
/* 完成日期： 20210509*/
#include <Stdio.h>

int main(void)
{
  const char i = 5;
  i = 10;
  printf("i = %c", i);

  return 0;
}