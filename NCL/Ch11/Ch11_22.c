/* Purpose: 2-dim string array */
/* File Name: Ch11_22 */
/* Completion Date: 20210606 */
#include <stdio.h>

int main(void)
{ 
  char str[4][20] = {"Sun is shinning",
                     "Flower is pretty",
					 "Sugar is sweet",
					 "And so are you"};
  int i;
  
  for (i = 0; i < 4; i++) {
	puts(str[i]);
  }

  return 0;
}
