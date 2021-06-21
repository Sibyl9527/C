// Purpose: Follow Ch13_13, adjust the input from a, b, c, d, e to string "I will be back"
// File Name: hw13_10
// Completion Date: 20210618
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
  char str[] = "I will be back";
  
  puts("Pushing...");
  for (i = 0; i < strlen(str); i++) { // push "I will be back" into the stack
	push(str[i]);
	printf("Push %c ", str[i]);
	dump();
  }
  puts("\nPoping...");
  for (i = 0; i < strlen(str); i++) { // pop "I will be back" out the stack
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
 
