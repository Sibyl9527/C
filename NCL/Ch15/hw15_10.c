// Purpose: Nested struct practice
//                         - Car - Vehicle, Train
//          Transportation - Ship - Steamship, Sailboat
//                         - Airplane - Helicopter, Jet
// File Name: hw15_10
// Completion Date: 20210627
#include <stdio.h>
#include <stdlib.h>
struct Car
{
  char Vehicle[20];
  char Train[20];
};

struct Ship
{
  char Steamship[20];
  char Sailboat[20];
};

struct Airplane
{
  char Helicopter[20];
  char Jet[20];
};

struct Transportation
{
  struct Car AllCar;
  struct Ship AllShip;
  struct Airplane AllAirplane;
} Trans[2] = {"RA4","Shinkansen", "35 MFKM", "Nash 26", "AH MK1", "B737Max",
              "CR-V","T.C. Ltd Exp", "38 MFM", "C&C 30 MK 1", "AH-64", "A330Neo"};

int main(void)
{ 
  int i;
  
  printf("%-16s%-16s%-16s%-16s%-16s%-16s\n", "Vehicle","Train","Steamship","Sailboat","Helicopter","Jet");
  for (i = 0; i < 2; i++) {
	printf("%-16s%-16s%-16s%-16s%-16s%-16s\n", Trans[i].AllCar.Vehicle, Trans[i].AllCar.Train, Trans[i].AllShip.Steamship,
	                                   Trans[i].AllShip.Sailboat, Trans[i].AllAirplane.Helicopter, Trans[i].AllAirplane.Jet);
  }
  
  return EXIT_SUCCESS;
}  