// Purpose: Calculate phurchase total amount.
// File Name: Ch17_20
// Completion Date: 20210707
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  FILE *stream;
  int amount;
  int price;
  int sum = 0;
  char string[60];
  
  stream = fopen("products.txt", "r"); // read only stream
  
  if (stream == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	while (fscanf(stream, "%s", string) != EOF) {
	  fscanf(stream, "%d", &price);
	  printf("%s price: %d Qty: ", string, price);
	  scanf("%d", &amount);
	  rewind(stdin);
	  sum = sum + amount * price;
	}
	printf("The total amount is %d\n", sum);
  }
  fclose(stream);
  
  return EXIT_SUCCESS;
}  