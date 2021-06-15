// Purpose: Call by address
// File Name: Ch12_13
// Completion Date: 20210610 
#include <stdio.h>
#include <stdlib.h>

void swap(int*,int*);

int main(void)
{ 
  int a;
  int b;
  a = 5;
  b = 10;
  
  puts("In the main()...");
  printf("Before swap, a = %d, b = %d\n", a, b);
  printf("The address of a is %p\n", &a);
  printf("The address of b is %p\n", &b);
  
  swap(&a, &b);
  
  puts("In the main()...");
  printf("After swap, a = %d, b = %d\n", a, b);
  printf("The address of a is %p\n", &a);
  printf("The address of b is %p\n", &b);
 
  return EXIT_SUCCESS;
}

void swap(int *a, int *b)
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
  
  puts("In the swap()...");
  printf("Swaping, a = %d, b = %d\n", *a, *b);
  printf("The address of a is %p\n", a);
  printf("The address of b is %p\n", b);
}