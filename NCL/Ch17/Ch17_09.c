// Purpose: Load grades from file,calculate the sum and avg then save to new file
// File Name: Ch17_09
// Completion Date: 20210703
#include <stdio.h>
#include <stdlib.h>

struct student
{
  char name[5];
  int chinese;
  int english;
  int math;
  int sum;
  float avg;
};

int main(void)
{ 
  struct student data[5];
  FILE *streamSource;
  FILE *streamDestination;
  int i;
  
  streamSource = fopen("gradedata.txt", "r");
  streamDestination = fopen("gradeoutput.txt", "w"); // w means create a new one
  
  if (streamSource == NULL || streamDestination == NULL) {
	puts("File open failed");
	fclose(streamSource);
	fclose(streamDestination);
	return EXIT_FAILURE;
  } else {
	puts("Start calculating the grades!");
	fprintf(streamDestination, "%-8s%-10s%-10s%-8s%-8s%-8s\n", "Name", "Chinese", "English", "Math", "Sum", "Avg"); // title
	for (i = 0; i < 5; i++) { // loads every student's grades and calculates the sum and avg then save to a new file
	  fscanf(streamSource, "%s %d %d %d", data[i].name, &data[i].chinese, &data[i].english, &data[i].math);
	  data[i].sum = data[i].chinese + data[i].english + data[i].math;
	  data[i].avg = (float)data[i].sum / 3;
	  fprintf(streamDestination, "%-8s%-10d%-10d%-8d%-8d%-8.2f\n", data[i].name, data[i].chinese, data[i].english,
            	                                                data[i].math, data[i].sum, data[i].avg);
	}
	fclose(streamSource);
	fclose(streamDestination);
	puts("Finished, please check the file: gradeoutput.txt!");
  }

  return EXIT_SUCCESS;
}  