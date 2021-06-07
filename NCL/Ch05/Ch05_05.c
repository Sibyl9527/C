/* Purpose: Search area code by switch case */
/* File Name: Ch05_05*/
/* Completion Date: 20210522*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int areacode;
  
  printf("Please input the area code that you want to search:\n");
  scanf("%d", &areacode);
  
  switch (areacode)
  {
    case 2: 
	  printf("Taipei, New Taipei and Keelong city\n");
	  break;
	case 3: 
	  printf("Taoyuan, Shintsu, Ilan and Hualian city\n");
	  break;
	case 37: 
	  printf("Miouli county\n");
	  break;
	case 4: 
	  printf("Taichung City\n");
	  break;
	case 49: 
	  printf("Nantou City\n");
	  break;
	case 5: 
	  printf("Yunlin, Chiayi City\n");
	  break;
	case 6: 
	  printf("Tainan and Punhu City\n");
	  break;
	case 7: 
	  printf("Kaoshong City\n");
	  break;
	case 8: 
	  printf("Pindon City\n");
	  break;
	case 89: 
	  printf("Taidon City\n");
	  break;
	case 823: 
	  printf("Kinmon City\n");
	  break;
	case 826: 
	  printf("Wuchiu\n");
	  break;
	case 827: 
	  printf("Tonsa and Sanchiu\n");
	  break;
	case 836: 
	  printf("Machu\n");
	  break;
	default: 
	  printf("No area number that were inputed by you.\n");
	  break;
	  
  }
	 
  system ("pause");  
  return 0;
}