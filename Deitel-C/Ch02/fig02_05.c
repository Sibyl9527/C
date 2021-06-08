// Fig. 2.5: fig02_05.c
// Addition program.
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  int integer1;
  int integer2;
  
  puts( "Enter first integer" );
  scanf( "%d", &integer1 );
  
  puts( "Enter second integer" );
  scanf( "%d", &integer2 );
  
  int sum;
  sum = integer1 + integer2;
  
  printf( "Sum is %d\n", sum );
  
  system( "pause" );
  return 0;
} // end main