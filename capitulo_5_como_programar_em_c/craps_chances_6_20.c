#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

static int releases = 0;
int rollDice(void);
int craps(void);

int main(void){
	
	int v = 0;
	int returns = 0;
	int p = 0;
	int x;

	
	srand(time(NULL));
	
	for (x = 0; x < 1000; x++){
		returns = craps();
		if(returns == 1){
			v++;
		}
		else{
			p++;
		}
	}
	
	printf("victories: %d\n\n", v);
	printf("losts: %d\n\n", p);
	printf("realeses: %d\n\n", releases);
	printf("mean of realeses: 3000 to 4000\n\n");
	printf("7 or 11: 22,22 percent of chance\n\n2, 3 or 12: 11,12 percent\n\npoint number: 66,66 percent\n ");
	printf("\nThe chances of win don't be bigger if the game during a lot\n");
	
	return 0;
}

int craps(void){
	
	int sum;
	int myPoint;
	
	enum Status gameStatus;
	
	
	sum = rollDice();
	
	switch(sum){
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
  	    	myPoint = sum;
  	    	//printf("Ponto é %d\n", myPoint);
  	    	break;
	}
	
	while(gameStatus == CONTINUE){
		sum = rollDice();
		
		if(sum == myPoint){
			gameStatus = WON;
		}
		else{
			if(sum == 7){
				gameStatus = LOST;
			}
		}
	}
	
	if(gameStatus == WON){
		//printf("jogador vence\n");
		return 1;
	}
	else{
		//printf("jogador perde\n");
		return 0;
	}
}

int rollDice(void){
	
	int die1;
	int die2;
	int workSum;
	
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;
	releases++;
	
	//printf("jogador rolou %d + %d = %d\n", die1, die2, workSum);
	return workSum;
}