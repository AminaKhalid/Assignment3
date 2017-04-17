//function for moving players
void movePlayers(int i, int row, int column);
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
}