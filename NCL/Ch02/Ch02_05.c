/* 程式目的： 取變數名稱的練習 (變數名稱大小寫會被視為不同)*/
/* 檔案名稱： Ch02_05*/
/* 完成日期： 20210509*/
#include <Stdio.h>

int main(void)
{
  int myage = 10;
  int Myage = 20;
  int MyAge = 30;
  
  printf("myage = %d\n", myage);
  printf("Myage = %d\n", Myage);
  printf("MyAge = %d\n", MyAge);

  return 0;
}