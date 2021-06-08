// ex2.3: ex2.3.c
// a) Define the variables c, thisVariable, q76354 and number to be of type int.
// b) Prompt the user to enter an integer. End your prompting message with a colon (:) fol-
//    lowed by a space and leave the cursor positioned after the space.
// c) Read an integer from the keyboard and store the value entered in integer variable a.
// d) If number is not equal to 7, print "The variable number is not equal to 7."
// e) Print the message "This is a C program." on one line.
// f) Print the message "This is a C program." on two lines so that the first line ends with C.
// g) Print the message "This is a C program." with each word on a separate line.
// h) Print the message "This is a C program." with the words separated by tabs.
#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main( void )
{ 
  int c; // a)
  int thisVariable; // a)
  int q76354; // a)
  int number; // a)
  int a; // c)
  
  printf( "%s", "Please input an integer: " ); // b)
  scanf( "%d", &a); // c)
  puts( "" );
  
  if (a != 7) { // d)
	puts( "The variable number is not equal to 7." );
  }
  
  printf( "%s", "This is a C program." ); // e)
  puts( "" );
  printf( "%s", "This is a C\n program." ); // f)
  puts( "" );
  printf( "%s", "This\nis\na\nC\nprogram." ); // g)
  puts( "" );
  printf( "%s", "This\tis\ta\tC\tprogram." ); // h)
  puts( "" );
  
  system( "pause" );
  return EXIT_SUCCESS;
} // end function main