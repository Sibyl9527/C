// Purpose: Simulate stack
// File Name: Ch13_13
// Completion Date: 20210617
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 255
char pop(void); // pop char from the stack
void push(char); // push char into the stack
void dump(void); // print the contents of the stack
static char stack[BUFSIZE];
static int sp = 0; // accumulate the stack's elements

int main(void)
{ 
  int i; // for loop variable
  char c; // char for stack
  
  puts("Pushing...");
  for (i = 0; i < 5; i++) { // push 'a' to 'e' into the stack
	push('a' + i);
	printf("Push %c ", 'a' + i );
	dump();
  }
  puts("\nPoping...");
  for (i = 0; i < 5; i++) { // pop 'a' to 'e' out the stack
	c = pop();
	printf("Pop %c ", c);
	dump();
  }
 
  return EXIT_SUCCESS;
}  

void push(char s)
{
  if (sp < BUFSIZE) {
	stack[sp++] = s;
  } else {
	printf("ERROR: stack full\n");
  }
}

char pop(void)
{
  if (sp > 0) {
	return (stack[--sp]);
  } else {
	printf("ERROR: stack empty\n");
  }  
  return EXIT_SUCCESS;
}

void dump(void)
{
  int i;
  
  printf("%s", "The stack content:");
  if (sp > 0) {
	for (i = sp -1; i >= 0; i--) {
	  printf("%c ", stack[i]);
	}
  } else {
	printf("%s", "EMPTY!");
  }
  puts("");
}
 
