// Purpose: Counts number of characters in each letter
// File Name: Ch17_19
// Completion Date: 20210707
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
  FILE *stream1;
  FILE *stream2;
  int letter[26] = {0};
  int i;
  char ch;
  
  stream1 = fopen("news.txt", "r"); // read only stream
  stream2 = fopen("count.txt", "w"); // create a new file
  
  if (stream1 == NULL) {
	puts("File opened failed!");
	return EXIT_FAILURE;
  } else {
	puts("Start to count the letters from news.txt");
	while ((ch = fgetc(stream1)) != EOF) {
	  if (ch >= 'A' && ch <= 'Z') {
		i = (int)ch - 65;
		letter[i]++;
	  } else if (ch >= 'a' && ch <= 'z') {
		i = (int)ch -97;
		letter[i]++;
	  }
	}
	for (i = 0; i < 26; i++) {
	  fprintf(stream2, " %c or %c : %d\n", 65 + i, 97 + i, letter[i]);
	}
	puts("Finished, please check count.txt");
  }
  fclose(stream1);
  fclose(stream2);
  
  return EXIT_SUCCESS;
}  