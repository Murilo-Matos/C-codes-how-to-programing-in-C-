#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int craps(int, int);

int rollDice(void);

int main(void){
	
	int saldoBanca = 1000;
	int aposta = 2000;
	
	srand(time(NULL));
	
	while(aposta > saldoBanca){
		printf("A aposta deve ser menor ou igual a 1000\n");
		printf("Digite sua aposta: ");
		scanf("%d", &aposta);
	}
	
	craps(saldoBanca, aposta);
	
	return 0;
}

int craps(int saldoBanca, int aposta){
	
	int sum;
	int myPoint;
	char answer[4];
	char yes[4] = "sim";
	int value = 0;
	int c = 1;
	enum Status gameStatus;
	
	sum = rollDice();
	
	switch(sum){
		
		case 7:
        case 11:
        	gameStatus = WON;
        	saldoBanca += aposta;
        	printf("\nVoce esta ganhando, ta na hora de aproveitar suas fichas! Deseja continuar?");
			printf("\nDigite sim para continuar: ");
			scanf("%s", answer);
			value = strcmp(answer,yes);
			if(value == 0){
				c = craps(saldoBanca, aposta);
				if(c == 0){
					return 0;
				}
			}
			else{
				printf("\nVoce ganhou %d, parabens campeao!!\n", saldoBanca);
				return 0;
			}
        	break;
        case 2:
	    case 3:
	    case 12:
	    	gameStatus = LOST;
	    	saldoBanca -= aposta;
	    	if(saldoBanca <= 0){
				printf("\nEi, voce esta quebrado!!");
			}
			else{
				printf("\nEi, assim voce quebra!!");
			}
			printf("Vamos la, continue tentando!\n");
			printf("\nDigite sim para continuar: ");
			scanf("%s", answer);
			value = strcmp(answer,yes);
			if(value == 0){
				c = craps(saldoBanca, aposta);
				if(c == 0){
					return 0;
				}
			}
			else{
				printf("\nOK, voce ficou com %d, espero que tenha mais sorte na proxima! :)\n", saldoBanca);
				return 0;
			}
	    	break;
	    default:
	    	gameStatus = CONTINUE;
	    	myPoint = sum;
	    	printf("Ponto -> %d\n", myPoint);
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
			printf("\njogador venceu!\n");
  			saldoBanca += aposta;
  			printf("\nVoce esta ganhando, ta na hora de aproveitar suas fichas! Deseja continuar?");
			printf("\nDigite sim para continuar: ");
			scanf("%s", answer);
			value = strcmp(answer,yes);
			if(value == 0){
				c = craps(saldoBanca, aposta);
				if(c == 0){
					return 0;
				}
			  }	
			else{
				printf("\nVoce ganhou %d, parabens campeao!!\n", saldoBanca);
				return 0;
			}
		}
		else{
			printf("\njogador perde :(\n");
  			saldoBanca -= aposta;
   			if(saldoBanca <= 0){
			   	printf("\nEi, voce esta quebrado!!");
			}
			else{
			   	printf("\nEi, assim voce quebra!!");
			}
			printf("\nVamos la, continue tentando!\n");
			printf("\nDigite sim para continuar: ");
			scanf("%s", answer);
			value = strcmp(answer,yes);
			if(value == 0){
				c = craps(saldoBanca, aposta);
				if(c == 0){
					return 0;
				}
			}
			else{
			   	printf("\nOK, voce ficou com %d, espero que tenha mais sorte na proxima! :)\n", saldoBanca);
			   	return 0;
			}
	}
	return 0;
}

int rollDice(void){
	int die1;
	int die2;
	int workSum;
	
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;
	
	printf("Jogador rolou %d + %d = %d\n",die1,die2, workSum);
	return workSum;
}