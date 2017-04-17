#ifndef CROSSFIREOPERATIONS_H_
#define CROSSFIREOPERATIONS_H_
#define BOARD_SIZE 7
#include <stdbool.h>

#define BOARD_SIZE 7

//enum type {LEVEL_GROUND, HILL, CITY};

//Global Variables
int playerno;	//Number of players

struct slot *board;
struct players player[6];

//struct for players
struct players
{
	char name[50];
	char type[50];
	int points;
	int smartness;
	int strength;
	int dexterity;
	int magicSkills;
	int luck;
	struct Slot *position;
};

//struct for slots
struct slot
{	struct slot *left;
	struct slot *right;
	struct slot *up;
	struct slot *down;
	int row;
	int column;
	enum type TypeOfSlot;
};



//Function Prototypes
//Board functions
int getBoardSize();
void createBoard(int boardSize, struct slot **upLeft, struct slot **upRight, struct slot **downLeft, struct slot **downRight);
void PlayersonBoard(int boardSize);

//Functions for player data
void PlayerData();

//Action functions
void choice();
void movePlayers(int i, int row, int column);
void playerVal(int i, int row, int column);
void Attack(int i);


#endif 
