// Purpose: Battle game
// File Name: Ch16_10
// Completion Date: 20210628
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define randomize() srand((unsigned) time(NULL))

int AttackMode(int, int, int);
int DefenseMode(int, int, int);

union action // your character will only att or def at the same time
{
  int att;
  int def;
};

typedef struct Hero
{
  union action hact;
  int hblood;
} GOOD;

typedef struct Monster
{
  union action mact;
  int mblood;
} BAD;

int main(void)
{ 
  int option;
  GOOD me;
  BAD you;
  
  me.hblood = 3; // initial blood = 3
  you.mblood = 3;
  randomize();
  do {
	puts("Please select attack method (1) Punch (2) Kick (3) Slash");
	scanf("%d", &me.hact.att); 
	rewind(stdin);
	system("cls");
	you.mact.def = (rand() % 3) + 1; // monster def random 1~3
	you.mblood = AttackMode(me.hact.att, you.mact.def, you.mblood);
	printf("Your blood remaining %d\n", me.hblood);
	printf("Enemy's blood reamining %d\n", you.mblood);
	
	puts("Please select defense method (1) Head down (2) Jump (3) Block");
	scanf("%d", &me.hact.def);
	rewind(stdin);
	system("cls");
	you.mact.att = (rand() % 3) + 1; // monster att random 1~3
	me.hblood = DefenseMode(me.hact.def, you.mact.att, me.hblood);
	printf("Your blood remaining %d\n", me.hblood);
	printf("Enemy's blood reamining %d\n", you.mblood);
  } while (me.hblood != 0 && you.mblood != 0);
  
  if (me.hblood == 0 && you.mblood == 0) {
	puts("Tie!");
  } else if (me.hblood != 0) {
	puts("You win!");
  } else {
	puts("You lose!");
  }
  
  return EXIT_SUCCESS;
}  

int AttackMode(int att, int def, int blood)
{
  if (att != def) {
	puts("Hit!");
	return blood - 1;
  } else {
	puts("Dodge!");
	return blood;
  }
}

int DefenseMode(int def, int att, int blood)
{
  if (att != def) {
	puts("Defense failed!");
	return blood - 1;
  } else {
	puts("Successful defense!");
	return blood;
  }
}