// Purpose: Output increasing sequence and decreasing sequence
// File Name: Ch13_12
// Completion Date: 20210617
#include <stdio.h>
#include <stdlib.h>

void inc(void);
void dec(void);
void display(void);
int counter = 0;

int main(void)
{ 
  int i;
  
  puts("Increasing...");
  for (i = 0; i < 5; i++) {
	inc();
	display();
  }
  
  puts("Decreasing...");
  for (i = 0; i < 5; i++) {
	display();
	dec();
  }
 
  return EXIT_SUCCESS;
}  

 void inc(void) 
 {
  counter++;
 }
 
  void dec(void) 
 {
  counter--;
 }
 
  void display(void) 
 {
  printf("Counter = %d\n", counter);
 }
 
 
