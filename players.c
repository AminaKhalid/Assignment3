#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//#include "game.h"
//function for getting player number
int userNumberPlayers()
{
	int playerno;
	
	//user input for players and store in playerno
	printf("enter the number of players: (max 6): ");
	scanf("%d", &playerno);
	//if number greater than 6 is entered ask again
	while(playerno>6)
	{
		printf("\n Maximum is 6 players, enter again: ");
		scanf("%d", &playerno);
	}
	return playerno;
}
//function for entering player details(type, name)
void playerInfo()
{
	
	//input name of players and store in players.name
	printf("Enter the name of player %d: ", i+1);
	scanf("%s", players[i].name);
	printf("\n");
	//enter type of player
	for (i = 0; i < p; i++)
	{
		printf("Enter the player type for Player %d:\n", i+1);
		printf("0: HUMAN\n1: OGRE\n2: ELF\n3: WIZARD\n");
		
		scanf("%d", &Type);
	}
	//to store the types in an array
	char Types[][7] = {"Human", "Ogre", "Elf", "Wizard"};
	
	for (i = 0; i < playerno; i++)
	{	//calling the types function
		playerTypes(i);
	}
	
}
//function to print out the player's capapbilities depending on the type
void playerTypes(int p)
{
	srand (time(NULL));
	
	if(players[p].type == 0)
	{	//place human into player's type
		strcpy(player[i].type, "Human");
		//capapbilities for human
		player[p].points = 100;
		player[p].smartness = (1 + rand()) % 49;
		player[p].strength = 1 + rand() % 49;
		player[p].dexterity = 1 + rand() % 49;
		player[p].magicSkills = 1 + rand() % 49;
		player[p].luck = 1 + rand() % 49;
		printf("\nHUMAN: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", player[p].points, player[p].smartness, player[p].strength, player[p].dexterity, player[p].magicSkills, player[p].luck);
	}
	
	else if(players[p].type == 1)
	{	//place ogre into player's type
		strcpy(player[i].type, "Ogre");
		//capapbilities for ogre
		player[p].points = 100;
		player[p].smartness = 1 + rand() % 20;
		player[p].strength = 80 + rand() % 20;
		player[p].dexterity = 80 + rand() %20;
		player[p].magicSkills = 0;
		player[p].luck = 1 + rand() % 30;
		printf("\nOGRE: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", player[p].points, player[p].smartness, player[p].strength, player[p].dexterity, player[p].magicSkills, player[p].luck);
	}
	
	else if (players[p].type == 2)
	{	//place elf into player's type
		strcpy(player[i].type, "Elf");
		//capapbilities for elf
		player[p].points = 100;
		player[p].smartness = (70 + rand()) % 30;
		player[p].strength = 1 + rand() % 50;
		player[p].dexterity = 1 + rand() %100;
		player[p].magicSkills = 50 + rand() %30;
		player[p].luck = 60 + rand() % 40;
		printf("\nELF: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", player[p].points, player[p].smartness, player[p].strength, player[p].dexterity, player[p].magicSkills, player[p].luck);
	}
	
	else if (players[p].type == 3)
	{	//place wizard into player's type
		strcpy(player[i].type, "Wizard");
		//capapbilities for wizard
		player[p].points = 100;
		player[p].smartness = (90 + rand()) % 10;
		player[p].strength = 1 + rand() % 20;
		player[p].dexterity = 1 + rand() %100;
		player[p].magicSkills = 80 + rand() %20;
		player[p].luck = 50 + rand() % 50;
		printf("\nWIZARD: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", player[p].points, player[p].smartness, player[p].strength, player[p].dexterity, player[p].magicSkills, player[p].luck);
		
	}
}