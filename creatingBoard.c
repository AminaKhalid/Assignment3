#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void createBoard(int boardSize, struct slot **upLeft, struct slot **upRight, struct slot **downLeft, struct slot **downRight)
{

	//The board is represented as a pointer of pointer to slots
	struct slot ** board = malloc(boardSize * sizeof(struct slot *));

	for(int i =0; i< boardSize; i++)
	{
		board[i] = malloc(boardSize * sizeof(struct slot));

		//For each slot it sets up the row and column number
		for(int j=0;j < boardSize; j++)
		{
			board[i][j].row = i;
			board[i][j].column = j;
		}
	}

	//It sets up the adjacent slots for the slots that are not at the borders. These slots have 4 adjacent elements
	for(int i =1; i< boardSize-1; i++)
	{
		for(int j=1;j < boardSize-1; j++)
		{
			board[i][j].up = &board[i-1][j];
			board[i][j].right = &board[i][j+1];
			board[i][j].down = &board[i+1][j];
			board[i][j].left = &board[i][j-1];
		}
	}

	//It sets up the adjacent slots for the slots that are in the first and the last row, except the slots at the edges
	for(int j = 1; j < boardSize -1; j++)
	{
		//It sets up the adjacent slots for the slots that are in the first row.
		board[0][j].right = &board[0][j+1];
		board[0][j].left = &board[0][j-1];
		board[0][j].down = &board[1][j];

		//It sets up the adjacent slots for the slots that are in the last row.
		board[boardSize - 1][j].right = &board[boardSize - 1][j+1];
		board[boardSize -1][j].left = &board[boardSize - 1][j-1];
		board[boardSize - 1][j].up = &board[boardSize - 2][j];
	}

	for(int i = 1; i < boardSize -1; i++){
		//It sets up the adjacent slots for the slots that are in the first column.
		board[i][0].right = &board[i][1];
		board[i][0].up = &board[i-1][0];
		board[i][0].down = &board[i+1][0];

		//It sets up the adjacent slots for the slots that are in the last column.
		board[i][boardSize-1].left = &board[i][boardSize-2];
		board[i][boardSize -1].up = &board[i -1][boardSize-1];
		board[i][boardSize -1].down = &board[i+1][boardSize -1];
	}


	//It sets up the adjacent slots for the slot at position (0,0).
	board[0][0].right = &board[0][1];
	board[0][0].down = &board[1][0];

	//It sets up the adjacent slots for the slot at position (0,boardSize -1).
	board[0][boardSize-1].left = &board[0][boardSize-2];
	board[0][boardSize -1].down = &board[1][boardSize -1];

	//It sets up the adjacent slots for the slot at position (boarSize -1 ,0).
	board[boardSize -1][0].right = &board[boardSize -1][1];
	board[boardSize -1][0].up = &board[boardSize -2][0];

	//It sets up the adjacent slots for the slot at position (boarSize -1 ,boardSize-1).
	board[boardSize - 1][boardSize-1].up = &board[boardSize-2][boardSize-1];
	board[boardSize - 1][boardSize -1].left = &board[boardSize -1][boardSize -2];

	//Assigning pointers to slots at different positions on the board
	*upLeft = &board[0][0];
	*upRight = &board[0][boardSize -1];
	*downLeft = &board[boardSize -1][0];
	*downRight = &board[boardSize -1][boardSize -1];

	
	//Print the board
	for (i = 0; i < boardSize; i++)
	{
		for (j = 0; j < boardSize; j++)
		{
			printf("(%d)(%d) ", Board[i][j].row,Board[i][j].column);
			if (j == boardSize - 1)
				{
					printf("\n");
				}
		}

	}
}

//To randomly assign a location to players
void PlayersonBoard(int boardSize)
{
	srand(time(NULL));
	int randomVal;

	//random row for the players
	for (int i = 0; i < playerno; i++)
	{
		randomVal = rand() % Size;
		players[i].row = randomVal;

	}

	//random column value for the players
	for (int i = 0; i < playerno; i++)
	{
		randomVal = rand() % Size;
		players[i].column = randomVal;
	}

	//Print the players locations
	for (int i = 0; i < playerno; i++)
	{
		printf("Player %d is in location %d, %d\n", i + 1, players[i].row , players[i].column);
	}

}