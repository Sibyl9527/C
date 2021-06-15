// Purpose: Use double pointer to output these contents
//          下馬飲君酒，問君何所知，君言不得意，
//          歸臥南山陲，但去莫復聞，白雲無盡時。
// File Name: hw12_09
// Completion Date: 20210615
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  char IniArray[6][12] = {"下馬飲君酒，", "問君何所知，", "君言不得意，",
                          "歸臥南山陲，", "但去莫復聞，", "白雲無盡時。"};
  int i; // for loop outter value
  int j; // for loop inner value
  
  for (i = 0; i < 6; i++) { // output content by pointer
    for (j = 0; j < 12; j++) {
		  printf("%c", *(*(IniArray + i) + j));   
	}
    if (i == 2) {
      puts(""); 
    }  
  } 
  
  return EXIT_SUCCESS;
}  

