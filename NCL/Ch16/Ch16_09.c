// Purpose: Output everyday special meal
// File Name: Ch16_09
// Completion Date: 20210628
#include <stdio.h>
#include <stdlib.h>

enum week {Sun, Mon, Tue, Wed, Thu, Fri, Sat} weekday;

int main(void)
{ 
  int i;
  
  puts("What day is today? (0~6 Sun~Sat)");
  scanf("%d", &i);
  rewind(stdin);
  printf("%s", "The special meal is ");
  weekday = i;
  switch (weekday) {
	case Mon:
	  puts("Braised Beef Noodles.");
	  break;
	case Tue:
	  puts("Hot and Sour Dumpling Soup.");
	  break;
	case Wed:
	  puts("Xia Long Bao.");
	  break;
	case Thu:
	  puts("Rice with Fried Chicken Leg.");
	  break;
	case Fri:
	  puts("Marinated Noodles.");
	  break;
	case Sat:
	  puts("Signature Package.");
	  break;
	case Sun:
	  puts("Nothing! We Closed today.");
	  break;
	default:
	  puts("...Invalid input~OK~Bye!!");
  }
  
  return EXIT_SUCCESS;
}  