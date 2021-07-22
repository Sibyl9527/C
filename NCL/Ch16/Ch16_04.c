// Purpose: typedef practice
// File Name: Ch16_04
// Completion Date: 20210628
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  typedef char *STRING1;
  typedef char STRING2[90];
  STRING1 theory1 = "Rainbow is a kind of light reflectional action.";
  STRING2 theory2 = "Thermometer is one of the principle that thermal expansion and constraction.";
  
  printf("%s\n", theory1);
  printf("%s\n", theory2);
  
  return EXIT_SUCCESS;
}  