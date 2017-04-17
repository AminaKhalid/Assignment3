#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "crossfireOperations.h"

//This function returns the board size provided as input by the user
int getBoardSize()
{
	int boardSize;
	printf("Please enter the required size of the board\n");
	//asks the user to enter the desired board size
	scanf("%d", &boardSize);
	return boardSize;
}

void choice()
{
	printf("Press 1 to attack or press 2 to move: ");
	scanf("%d", &option);
	
	if(option == 1)
	{
		//print where the player is currently
		printf("Your current position is [%d, %d] " player[i].position->row, player[i].position->column);
		if (player[i].position->TypeOfSlot == 0)
		{
			printf("Level Ground\n");
		}

		else if (player[i].position->TypeOfSlot == 1)
		{
			printf("Hill\n");
		}

		else if (player[i].position->TypeOfSlot == 2)
		{
			printf("City\n");
		}

		//Run the move function
		movePlayers(i, row, column);
	}
	
	else if(option == 2)
	{
		Attack(i);
	}
}


//function for moving players
void movePlayers(int i, int row, int column)
{	
	int option;
	//player is on the top left corner
	if ((player[i].position->row == 0) && (player[i].position->column == 0))
	{	
		printf("\nPlayer position: top left\n");
		//the options to move
		printf("Press 1 to move right or press 2 to move down\n");
		scanf("%d", &option);

		if (option == 1)
		{
			printf("you will move right.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].right;
			//print new position of player
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 2)
		{
			printf("you will move down.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].down;
			//print new position of player
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		
		newValues(i, row, column); //function to change the player capabilities depending on their choice of movement
	}
	//player is on the top right corner
	else if((player[i].position->row == 0) && (player[i].position->column == boardSize - 1))
	{
		printf("\nPlayer position: top right\n");
		
		printf("Press 3 to move left or press 2 to move down: \n");
		scanf("%d", &option);
		
		if(option == 3)
		{
			printf("you will move left.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].left;
			//print new position of player
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 2)
		{
			printf("you will move down.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].down;
			//print new position of player
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		
		newValues(i, row, column); //function to change the player capabilities depending on their choice of movement
	}
	//player is on the bottom left corner
	else if((player[i].position->row == boardSize - 1) && (player[i].position->column == 0))
	{
		printf("\nPlayer position: bottom left\n");
		
		printf("Press 1 to move right or press 4 to move up: ");
		scanf("%d", &option);
		
		if(option == 1)
		{
			printf("you will move right.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].right;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 4)
		{
			printf("you will move up.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].up;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		
		newValues(i, row, column); //function to change the player capabilities depending on their choice of movement
	}
	//player is on the bottom right corner
	else if((player[i].position->row == boardSize - 1) && (player[i].position->column == boardSize - 1))
	{
		printf("\nPlayer position: bottom right\n");
		
		printf("press 3 to move left or press 4 to move up: ");
		scanf("%d", &option);
		
		if(option == 3)
		{
			printf("you will move left.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].left;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 4)
		{
			printf("you will move up.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].up;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		
		newValues(i, row, column); //function to change the player capabilities depending on their choice of movement
	}
	//player is in the one of the top rows (no corners)
	else if((player[i].position->row == 0) && (player[i].position->column != 0 ))
	{	
		printf("\nPlayer is in the top row.\n");
		
		printf("Press 3 to move left or press 2 to move down or press 1 to move right: ");
		scanf("%d", &option)
		
		if(option == 3)
		{
			printf("you will move left.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].left;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 2)
		{
			printf("you will move down.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].down;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 1)
		{
			printf("you will move right.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].right;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		
		newValues(i, row, column); //function to change the player capabilities depending on their choice of movement
	}
	//player is on the first column (no corners)
	else if((player[i].position->column == 0) && (player[i].position->row != 0))
	{
		printf("\nPlayer is in the left column\n");
		
		printf("Press 4 to move up or press 2 to move down or press 1 to move right: ");
		scanf("%d", &option);
		
		if(option == 4)
		{
			printf("you will move up.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].up;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 2)
		{
			printf("you will move down.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].down;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 1)
		{
			printf("you will move right.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].right;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		
		newValues(i, row, column); //function to change the player capabilities depending on their choice of movement
	}
	//player is on one of the bottom rows (no corners)
	else if((player[i].position->row == boardSize - 1) && (player[i].position->column != 0 ))
	{
		printf("\nPlayer is in the bottom row\n");
		
		printf("press 3 to move left or press 4 to move up or press 1 to move right");
		scanf("%d", &option);
		
		if(option == 3)
		{
			printf("you will move left.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].left;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 4)
		{
			printf("you will move up.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].up;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 1)
		{
			printf("you will move right.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].right;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		
		newValues(i, row, column); //function to change the player capabilities depending on their choice of movement
	}
	//player in in one of the last columns (no corners)
	else if((player[i].position->column = boardSize - 1) && (player[i].position->row != 0 ))
	{	
		printf("\nPlayer is in right column.\n");
		
		printf("press 4 to move up or press 3 to move left or press 2 to move down: ");
		scanf("%d", &option);
		
		if(option == 4)
		{
			printf("you will move up.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].up;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		if(option == 3)
		{
			printf("you will move left.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].left;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 2)
		{
			printf("you will move down.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].down;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		
		newValues(i, row, column); //function to change the player capabilities depending on their choice of movement
	}
	//player is in the centre of the board
	else if((player[i].position->row != 0) && (player[i].position->row != boardSize - 1) && (player[i].position->column != 0) && (player[i].position->column != 0))
	{
		printf("\nPlayer position: centre of the board");
		
		printf("\nPress 1 to move right: ");
		printf("\nPress 2 to move down: ");
		printf("\nPress 3 to move left: ");
		printf("\nPress 4 to move up: ");
		scanf("%d", &option);
		
		if(option == 1)
		{
			printf("you will move right.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].right;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 2)
		{
			printf("you will move down.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].down;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		if(option == 3)
		{
			printf("you will move left.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].left;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		else if(option == 4)
		{
			printf("you will move up.\n");
			//pointers for moving on the board
			player[i].position = board[player[i].position->row][player[i].position->column].up;
			printf("Your new position is [%d, %d] ", player[i].position->row, player[i].position->column);
		}
		
		newValues(i, row, column); //function to change the player capabilities depending on their choice of movement
	}
	
}

void playerVal(int i, int row, int column)
{

	//if the player moves to a Hill slot:
	if (player[i].position->TypeOfSlot == 1)
	{	
		//If Dexterity < 50, then the player loses 10 Strength points
		if (player[i].dexterity < 50 )
		{
			player[i].strength = player[i].strength - 10;
		}

		//If Dexterity >= 60, then the player gains 10 Strength points
		else if (player[i].dexterity >= 60)
		{
			players[i].strength = players[i].strength + 10;
		}
	}
	//if the player moves to a City slot:
	else if (player[i].position->TypeOfSlot == 2)
	{	
		//If Smartness > 60, then the player gains 10 Magic Skills points
		if (player[i].smartness > 60)
		{
			player[i].magic_skills = player[i].magic_skills + 10;
		}
		
		//If Smartness <=50, then the player loses 10 Dexterity points.
		else if (player[i].smartness <= 50)
		{
			player[i].dexterity = player[i].dexterity - 10;
		}
	}
	
	//prints the changed values of the players
									
	printf("\n  %s - %d", player[i].name, player[i].points);
	
	printf("\n smartness: %d\n",player[i].smartness);
	printf("\n strength: %d\n",player[i].strength);
	printf("\n Dexterity: %d\n",player[i].dexterity);
	printf("\n MagicSkills: %d\n",player[i].magicSkills);
	printf("\n luck: %d\n",player[i].luck);
}

void Attack(int i)
{
	bool near_attack = false;
	bool distant_attack = false;
	bool magic_attack = false;
	// using co ordinates to get the distances between the tiles on the board, so as to decide which attack type should be used
	int x1, x2;
	int y1, y2;
	int tilediff;
	int i;
	int Defending_Player;
	int AttackType;
	int near[6];
	int distant[6];
	int magic[6];
	for (i=0;i<=6;i++)
	{
		near[6]=0;
		distant[6]=0;
		magic[6]=0;
	}
	
	x1=players[i].row;
	x2=players[i].column;
	

	for (i=0;i<=Remaining_Players;i++)
	{
		near_attack = false;
		distant_attack = false;
		magic_attack= false;
		
		if(i!=p)
			{
				tilediff=0;
				x2=players[i].row;
				y2=players[i].column;

				tilediff=tilediff+abs(x1-x2);
				tilediff=tilediff+abs(y1-y2);

		if (tilediff==1 || tilediff==0) //near attack
		{
			near_attack=true;
		}
		if (tilediff<5)
		{
			distant_attack=true;
		}
		if (150<(player[i].smartness+player[i].magicSkills))
		{
			magic_attack=true;
		}

		if (near_attack==true || distant_attack==true || magic_attack==true)
		{
				printf("Attack player %d at the tile(%d,%d)", (i+1), (i+1), x1, y1);
					if (near_attack==true)
				{
					near[i]=1;
				}
					if (distant_attack==true)
				{
					distant[i]=1;
				}
					if (magic==true)
				{
					magic[i]=1;
				}
			}
		}
	}
	scanf("%d", &Defending_Player);
	if (near[i]==1)
	{
		printf("1)Near Attack");
	}
	if (distant[i]==1)
	{
		printf("2)Distant Attack");
	}
	if (magic[i]==1)
	{
		printf("3)Magic Attack");
	}
	scanf("%d", &AttackType);

	if (AttackType==1)// Near Attack
	{
		if (player[Defending_Player].strength<=70)
		{
			player[Defending_Player].health = player[Defending_Player].health - (0.5* player[i].strength);
			
		}
		if (player[Defending_Player].strength>70)
		{
			player[i].health = player[i].health - (0.3* player[Defending_Player].strength);
			
		}
	}
	if (AttackType==2)//Distant Attack
	{
		if (player[i].dexterity>player[Defending_Player].dexterity)
		{
			player[Defending_Player].Health = player[Defending_Player].Health - (0.3* player[i].strength);
			
		}
	}
	if (AttackType==3)//Magic Attack
	{
		player[Defending_Player].health = player[Defending_Player].health - (0.5* player[i].magicSkills + 0.2*player[i].smartness);
		
	}
 
}
