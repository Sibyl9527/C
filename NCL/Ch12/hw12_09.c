// Purpose: Use double pointer to output these contents
//          �U�����g�s�A�ݧg��Ҫ��A�g�����o�N�A
//          �k�׫n�s���A���h���_�D�A�ն��L�ɮɡC
// File Name: hw12_09
// Completion Date: 20210615
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  char IniArray[6][12] = {"�U�����g�s�A", "�ݧg��Ҫ��A", "�g�����o�N�A",
                          "�k�׫n�s���A", "���h���_�D�A", "�ն��L�ɮɡC"};
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

