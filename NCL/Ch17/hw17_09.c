// Purpose: Load student data from Stgradedata.txt, add rank then output to output.txt
// File Name: hw17_09
// Completion Date: 20210711
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ 
  FILE *stream;
  FILE *streamOutput;
  char name[7][10];
  float grade[10];
  int rank[10];
  int item[10];
  int count;
  int i = 0;
  int j;
  char tempname[10];
  float tempgrade;
  int temprank;
  int tempitem;
  
  stream = fopen("Stgradedata.txt", "r"); // read only
  streamOutput = fopen("output.txt", "w");
  
  if (stream == NULL || streamOutput == NULL) {
	puts("File opened failed!");
	fclose(stream);
	fclose(streamOutput);
	return EXIT_FAILURE;
  } else {
	puts("File opened successfully!");
	while (fscanf(stream, "%s %f", name[i], &grade[i]) != EOF) {
	  count = i;
	  item[i] = i;
	  i++;
	}
	for (i = 0; i < count; i++) { // bubble sort for ranking
	  for (j = i + 1; j < count + 1; j++) {
		if (grade[j] > grade[i]) {
		  tempgrade = grade[i];
		  grade[i] = grade[j];
		  grade[j] = tempgrade;
		  
		  strcpy(tempname, name[i]);
		  strcpy(name[i], name[j]);
		  strcpy(name[j], tempname);
		  
		  tempitem = item[i];
		  item[i] = item[j];
		  item[j] = tempitem;
		}
	  }
	}
	
	for (i = 0; i <= count; i++) { // put rank to rank[i]
	  rank[i] = i + 1;
	}
	
	for (i = 0; i < count; i++) { // bubble sort by item (original order)
	  for (j = i + 1; j < count + 1; j++) {
		if (item[i] > item[j]) {
		  tempgrade = grade[i];
		  grade[i] = grade[j];
		  grade[j] = tempgrade;
		  
		  strcpy(tempname, name[i]);
		  strcpy(name[i], name[j]);
		  strcpy(name[j], tempname);
		  
		  tempitem = item[i];
		  item[i] = item[j];
		  item[j] = tempitem;
		  
		  temprank = rank[i];
		  rank[i] = rank[j];
		  rank[j] = temprank;
		}
	  }
	}
	
	for (i = 0; i <= count; i++) { // write to output.txt
	  fprintf(streamOutput, "%s %.2f %d\n", name[i], grade[i], rank[i]);
	}
  }  
  fclose(stream);
  fclose(streamOutput);
  puts("File closed successfully, please check output.txt!");
  
  return EXIT_SUCCESS;
}  