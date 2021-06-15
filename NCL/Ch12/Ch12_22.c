// Purpose: Output arguments practice
// File Name: Ch12_22
// Completion Date: 20210613
#include <stdio.h>
#include <stdlib.h>

void showerror(void);

int main(int argc, char *argv[])
{ 
  if (argc != 2 || argv[1][0] != '/') { // check input arguments
	showerror();
	return 1;
  }
  
  switch (argv[1][1]) { 
	case 'f':
	case 'F':
	  puts("[format...]");
	  break;
	case 'c':
	case 'C':
	  puts("[copy...]");
	  break;
	case 'd':
	case 'D':
	  puts("[delete...]");
	  break;
	default:
	  showerror();
	  return 2;
  }
  
  return EXIT_SUCCESS;
}

void showerror(void)
{
  puts("Usage: Ch12_22 /[f][c][d]");
}