void Attack(int p)
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
	
	x1=players[p].row;
	x2=players[p].column;
	

	for (i=0;i<=Remaining_Players;i++)
	{
		near_attack = false;
		distant_attack = false;
		magic_attack= false;
		
		if(i!=p)
			{
				tilediff=0;
				x2=players[p].row;
				y2=players[p].column;

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
		if (150<(players[p].smartness+players[p].magic_skills))
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
		if (players[Defending_Player].strength<=70)
		{
			players[Defending_Player].health = players[Defending_Player].health - (0.5* players[p].strength);
			
		}
		if (players[Defending_Player].strength>70)
		{
			players[p].health = players[p].health - (0.3* players[Defending_Player].strength);
			
		}
	}
	if (AttackType==2)//Distant Attack
	{
		if (players[p].dexterity>players[Defending_Player].dexterity)
		{
			players[Defending_Player].health = players[Defending_Player].health - (0.3* players[p].strength);
			
		}
	}
	if (AttackType==3)//Magic Attack
	{
		players[Defending_Player].health = players[Defending_Player].health - (0.5* players[p].magic_skills + 0.2*players[p].smartness);
		
	}
 
}
