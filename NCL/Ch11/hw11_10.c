/* Purpose: Input chinese month name to search and output english month name */
/* File Name: hw11_10 */
/* Completion Date: 20210607 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 12

int main( void )
{ 
  char strary1[SIZE][7] = { "�@��",
                            "�G��",
						    "�T��",
						    "�|��",
						    "����",
						    "����",
						    "�C��",
						    "�K��",
						    "�E��",
						    "�Q��",
						    "�Q�@��",
						    "�Q�G��" };
  char strary2[SIZE][10] = { "January",
                             "Februry",
							 "March",
							 "April",
							 "May",
							 "June",
							 "July",
							 "August",
							 "September",
							 "October",
							 "November",
							 "December" }; 
  char search[30]; // save user input
  int position = 12; // check whether match or not
  int i; // control for loop
  
  puts( "Search the english name of�@��~�Q�G��" );
  puts( "Please input chinese name" );
  scanf( "%s", search );
  
  for ( i = 0; i < SIZE; i++ ) {
	if ( strcmp(search, strary1[i]) == 0 ) {
	  position = i;
	  printf( "The english name of %s is %s\n", search, strary2[i] );
	  break;
	}
  }
  
  if ( position == 12 ) {
	puts( "Your chinese name is not matched" );
  }
  
  system( "pause" );
  return EXIT_SUCCESS;
}
