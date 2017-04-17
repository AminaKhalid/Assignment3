#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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
};

/*struct slots
{
	int type;
	int playernum;
	int player_in_slot;
	int slotType;
};*/

int main(void)
{
	struct players player[6];
	int playerno;
	int i,p;
	int type;

	printf("enter the number of players: (max 6): ");
	scanf("%d", &playerno);

	while(playerno>6)
	{
		printf("\n Maximum is 6 players, enter again: ");
		scanf("%d", &playerno);
	}
	for(i=0; i<playerno;i++)
	{
		printf("Enter the name of player %d: ", i+1);
		scanf("%s", player[i].name);
	}
	
	for (i = 0; i < playerno; i++)
	{
		printf("Enter the player type for Player %d:\n", i+1);
		printf("1: HUMAN\n2: OGRE\n3: ELF\n4: WIZARD\n");
		
		scanf("%d", &type);
		
		if(type == 1)
		{
			strcpy(player[i].type, "Human");
		
			player[i].points = 100;
			player[i].smartness = (1 + rand()) % 49;
			player[i].strength = 1 + rand() % 49;
			player[i].dexterity = 1 + rand() % 49;
			player[i].magicSkills = 1 + rand() % 49;
			player[i].luck = 1 + rand() % 49;
			printf("\nHUMAN: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", player[i].points, player[i].smartness, player[i].strength, player[i].dexterity, player[i].magicSkills, player[i].luck);
		}
		
		else if(type == 2)
	{
		strcpy(player[i].type, "Ogre");
		
		player[i].points = 100;
		player[i].smartness = 1 + rand() % 20;
		player[i].strength = 80 + rand() % 20;
		player[i].dexterity = 80 + rand() %20;
		player[i].magicSkills = 0;
		player[i].luck = 1 + rand() % 30;
		printf("\nOGRE: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", player[i].points, player[i].smartness, player[i].strength, player[i].dexterity, player[i].magicSkills, player[i].luck);
	}
	
	else if (type == 3)
	{
		strcpy(player[i].type, "Elf");
		
		player[i].points = 100;
		player[i].smartness = (70 + rand()) % 30;
		player[i].strength = 1 + rand() % 50;
		player[i].dexterity = 1 + rand() %100;
		player[i].magicSkills = 50 + rand() %30;
		player[i].luck = 60 + rand() % 40;
		printf("\nELF: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", player[i].points, player[i].smartness, player[i].strength, player[i].dexterity, player[i].magicSkills, player[i].luck);
	}
	
	else if (type == 4)
	{
		strcpy(player[i].type, "Wizard");
		
		player[i].points = 100;
		player[i].smartness = (90 + rand()) % 10;
		player[i].strength = 1 + rand() % 20;
		player[i].dexterity = 1 + rand() %100;
		player[i].magicSkills = 80 + rand() %20;
		player[i].luck = 50 + rand() % 50;
		printf("\nWIZARD: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", player[i].points, player[i].smartness, player[i].strength, player[i].dexterity, player[i].magicSkills, player[i].luck);
		
	}
}