/* Purpose: Output variable's memory address */
/* File Name: Ch12_01 */
/* Completion Date: 20210607 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{ 
  int i = 1;
  int j = 2;
  int k = 3;
  int n = 4;
  
  printf( "The memory address of i is %p\n", &i );
  printf( "The memory address of j is %p\n", &j );
  printf( "The memory address of k is %p\n", &k );
  printf( "The memory address of n is %p\n", &n );
  
  return EXIT_SUCCESS;
}
