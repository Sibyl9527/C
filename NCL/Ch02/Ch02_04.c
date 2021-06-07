/* 程式目的： 印出各種加上修飾詞型別的長度*/
/* 檔案名稱： Ch02_04*/
/* 完成日期： 20210509*/
#include <Stdio.h>

int main(void)
{
  printf("unsigned short int 的長度: %d\n", sizeof(unsigned short int));
  printf("unsigned long int 的長度: %d\n", sizeof(unsigned long int));
  printf("short int 的長度: %d\n", sizeof(short int));
  printf("long int 的長度: %d\n", sizeof(long int));
	
  return 0;
}