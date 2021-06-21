// Purpose: Input a car info and verify the info
// File Name: Ch14_11
// Completion Date: 20210620
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void input(char[], char[]); // input info
int check(void); // check input info
char make[10]; // car type info array
char model[10]; // car model info array
char engines[5]; // displacement info array
char tag[6]; // license plate info array

int main(void)
{ 
  char carmake[9] = "Car Type";
  char carmodel[10] = "Car Model";
  char careng[13] = "Displacement";
  char cartag[14] = "License Plate";
  int result;
  
  input(carmake, make);
  input(carmodel, model);
  input(careng, engines);
  input(cartag, tag);
  
  do {
	result = check();
	switch (result) { // if input data invalid, reinput
	  case 1:
        puts("Car Type input error, please input again");
        input(carmake, make);
        break;
	  case 2:
        puts("Car Model input error, please input again");
        input(carmodel, model);
        break;		
	  case 3:
        puts("Displacement input error, please input again");
        input(careng, engines);
        break;
	  case 4:
        puts("License Plate input error, please input again");
        input(cartag, tag);
        break;
	  default:
	    puts("Processing...");
	}
  } while (result != 0);
  
  puts("Your Car Info list below:");
  printf("Car Type: %s\n", make);
  printf("Car Model: %s\n", model);
  printf("Displacement: %s C.C.\n", engines);
  printf("License Plate: %s\n", tag);
  
  return EXIT_SUCCESS;
}  

void input(char car[], char data[])
{
  printf("Please input %s info:\n", car);
  scanf("%s", data);
}

int check(void)
{
  unsigned int i;
  for (i = 0; i < strlen(make); i++) {
	if (isalpha(make[i]) == 0) { // car type only accept alpha
	  return 1;
	}
  }
  
  for (i = 0; i < strlen(model); i++) {
	if (isalnum(model[i]) == 0) { // car model only accept alpha and number
	  return 2;
	}
  }
  
  for (i = 0; i < strlen(engines); i++) {
	if (isdigit(engines[i]) == 0) { // displacement only accept digit
	  return 3;
	}
  }
  
  for (i = 2; i < strlen(tag); i++) {
	if (isalpha(tag[0]) == 0 || isalpha(tag[1]) == 0 || isdigit(tag[i]) == 0) { // follow license plate rule
	  return 4;
	}
  }
  
  return EXIT_SUCCESS;
}