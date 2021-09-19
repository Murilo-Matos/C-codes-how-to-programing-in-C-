#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status{CONTINUE, WON, LOST};

int rollDice(void);

int main(void)
{
	int sum;
	int mypoint;
	
	enum Status gameStatus;
	
	srand(time(NULL));
	
	sum = rollDice();
	
	switch(sum)
	{
		case 7:
		case 11:
			gameStatus = WON;
			break;
		
		case 2:
		case 3:	
		case 12:
			gameStatus = LOST;
			break;
		
		default:
			gameStatus = CONTINUE;
			mypoint = sum;
			printf("ponto é %d\n", mypoint);
			break;			
	}
	
	while(gameStatus == CONTINUE)
	{
		sum = rollDice();
		
		if(sum == mypoint)
		{
			gameStatus = WON;
		}
		
		else 
		{
			if(sum == 7)
			{
				gameStatus = LOST;
			}
		}
	}
	
	if(gameStatus == WON)
	{
		printf("jogador vence\n");
	}
	else
	{
		printf("jogador perde\n");
	}

return 0;
}

int rollDice(void)
{
	int die1;
	int die2;
	int workSum;
	
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;
	
	printf("jogador rolpu %d + %d = %d\n", die1, die2, workSum);
	return workSum;
}


