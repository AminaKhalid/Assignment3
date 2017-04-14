//function for moving players
void movePlayers(int p, int row, int column);
{	
	int option;
	//player is on the top left corner
	if((player[p].row == 0)&&(player[p].column == 0))
	{	
		printf("\nPlayer position: top left\n");
		//the options to move
		printf("Press 1 to move right or press 2 to move down\n");
		scanf("%d", &option);
		
		if (option == 1)
		{
			printf("%s will move right.\n", players[p].Name);
			players[p].column++; //moving column forward
		}
		else if(option == 2)
		{
			printf("%s will move down.\n", players[p].Name);
			players[p].row++; //moving row forward
		}
		modValues(p, row, column) //function to change the player capabilities depending on their choice of movement
	}
	//player is on the top right corner
	else if((player[p].row == 0)&&(player[p].column == boardSize-1))
	{
		printf("\nPlayer position: top right\n");
		//options to move
		printf("Press 3 to move left or press 2 to move down: \n");
		scanf("%d", &option);
		
		if(option == 3)
		{
			printf("%s will move left.\n", players[p].Name);
			players[p].column--; //moving column back
		}
		else if(option == 2)
		{
			printf("%s will move down.\n", players[p].Name);
			players[p].row++; //moving row forward
		}
		
		modValues(p, row, column)
	}
	//player is on the bottom left corner
	else if((player[p].row == boardSize-1)&&(player[p].column == 0))
	{
		printf("\nPlayer position: bottom left\n");
		//moving options
		printf("Press 1 to move right or press 4 to move up: ");
		scanf("%d", &option);
		
		if(option == 1)
		{
			printf("%s will move right.\n", players[p].Name);
			players[p].column++; //moving column forward
		}
		else if(option == 4)
		{
			printf("%s will move up.\n", players[p].Name);
			players[p].row--; //moving row back
		}
		
		modValues(p, row, column)
	}
	//player is on the bottom right corner
	else if((player[p].row == boardSize-1)&&(player[p].column == boardSize-1))
	{
		printf("\nPlayer position: bottom right\n");
		
		printf("press 3 to move left or press 4 to move up: ");
		scanf("%d", &option);
		
		if(option == 3)
		{
			printf("%s will move left.\n", players[p].Name);
			players[p].column--; //moving column back
		}
		else if(option == 4)
		{
			printf("%s will move up.\n", players[Pp].Name);
			players[p].row--; //moving row back
		}
		
		modValues(p, row, column)
	}
	//player is in the one of the top rows (no corners)
	else if(player[p].row == 0)
	{	
		printf("\nPlayer is in the top row.\n");
		
		printf("Press 3 to move left or press 2 to move down or press 1 to move right: ");
		scanf("%d", &option)
		
		if(option == 3)
		{
			printf("%s will move left.\n", players[p].Name);
			players[p].column--; //moving column back
		}
		else if(option == 2)
		{
			printf("%s will move down.\n", players[p].Name);
			players[p].row++; //moving row forward
		}
		else if(option == 1)
		{
			printf("%s will move right.\n", players[p].Name);
			players[p].column++; //moving column forward
		}
		
		modValues(p, row, column)
	}
	//player is on the first column (no corners)
	else if(player[p].column == 0)
	{
		printf("\nPlayer is in the left column\n");
		
		printf("Press 4 to move up or press 2 to move down or press 1 to move right: ");
		scanf("%d", &option);
		
		if(option == 4)
		{
			printf("%s will move up.\n", players[p].Name);
			players[p].row--; //moving row back
		}
		else if(option == 2)
		{
			printf("%s will move down.\n", players[p].Name);
			players[p].row++; //moving row forward
		}
		else if(option == 1)
		{
			printf("%s will move right.\n", players[p].Name);
			players[p].column++; //moving column forward
		}
		
		modValues(p, row, column)
	}
	//player is on one of the bottom rows (no corners)
	else if(player[p].row == boardSize-1)
	{
		printf("\nPlayer is in the bottom row\n");
		
		printf("press 3 to move left or press 4 to move up or press 1 to move right");
		scanf("%d", &option);
		
		if(option == 3)
		{
			printf("%s will move left.\n", players[p].Name);
			players[p].column--; //moving column back
		}
		else if(option == 4)
		{
			printf("%s will move up.\n", players[p].Name);
			players[p].row--; //moving row back
		}
		else if(option == 1)
		{
			printf("%s will move right.\n", players[p].Name);
			players[p].column++; //moving column forward
		}
		
		modValues(p, row, column)
	}
	//player in in one of the last columns (no corners)
	else if(player[p].column == boardSize-1)
	{	
		printf("\nPlayer is in right column.\n");
		
		printf("press 4 to move up or press 3 to move left or press 2 to move down: ");
		scanf("%d", &option);
		
		if(option == 4)
		{
			printf("%s will move up.\n", players[p].Name);
			players[p].row--; //moving row back
		}
		if(option == 3)
		{
			printf("%s will move left.\n", players[p].Name);
			players[Pp].column--; //moving column back
		}
		else if(option == 2)
		{
			printf("%s will move down.\n", players[p].Name);
			players[p].row++; //moving row forward
		}
		
		modValues(p, row, column)
	}
	//player is in the centre of the board
	else if((player[p].row != 0) && (player[p].column != 0) && (player[p].column != 0) (player[p].row != BoardSize - 1))
	{
		printf("\nPlayer position: centre of the board");
		//options to move
		printf("\nPress 1 to move right: ");
		printf("\nPress 2 to move down: ");
		printf("\nPress 3 to move left: ");
		printf("\nPress 4 to move up: ");
		scanf("%d", &option);
		
		if(option == 1)
		{
			printf("%s will move right.\n", players[p].Name);
			players[p].column++; //moving column forward
		}
		else if(option == 2)
		{
			printf("%s will move down.\n", players[p].Name);
			players[p].row++; //moving row forward
		}
		if(option == 3)
		{
			printf("%s will move left.\n", players[p].Name);
			players[p].column--; //moving column back
		}
		else if(option == 4)
		{
			printf("%s will move up.\n", players[p].Name);
			players[p].row--; //moving row back
		}
		
		playerVal(p, row, column)
	}
	
}

void playerVal(int p, int row, int column)
{

	//if the player moves to a Hill slot:
	if(strcmp(board[player[p].row][player[p].column].SlotType, "Hill") == 0)
	{	
		//If Dexterity < 50, then the player loses 10 Strength points
		if (player[p].dexterity < 50 )
		{
			player[p].strength = player[p].strength - 10;
		}

		//If Dexterity >= 60, then the player gains 10 Strength points
		else if (player[p].dexterity >= 60)
		{
			players[p].strength = players[p].strength + 10;
		}
	}
	//if the player moves to a City slot:
	else if(strcmp(board[player[p].row][player[p].column].SlotType, "City") == 0)
	{	
		//If Smartness > 60, then the player gains 10 Magic Skills points
		if (player[p].smartness > 60)
		{
			player[p].magic_skills = player[p].magic_skills + 10;
		}
		
		//If Smartness <=50, then the player loses 10 Dexterity points.
		else if (player[p].smartness <= 50)
		{
			player[p].dexterity = player[p].dexterity - 10;
		}
	}
}