// Purpose: Output Monday to Sunday's chinese name and english name.
// File Name: Ch16_07
// Completion Date: 20210628
#include <stdio.h>
#include <stdlib.h>
enum week {Mon = 1, Tue, Wed, Thu, Fri, Sat, Sun} weekday;

int main(void)
{ 
  char *ewname[] = {"Monday", "Tuesday", "Wednesday",
                    "Thursday", "Friday", "Saturday",
					"Sunday"};
  char *cwname[] = {"�P���@", "�P���G", "�P���T",
                    "�P���|", "�P����", "�P����",
					"�P����"};
  printf("%-10s%-12s\n", "Chinese", "English");
  for (weekday = Mon; weekday <= Sun; weekday++) {
	printf("%-10s%-12s\n", cwname[weekday - 1], ewname[weekday - 1]);
  }
  
  return EXIT_SUCCESS;
}  