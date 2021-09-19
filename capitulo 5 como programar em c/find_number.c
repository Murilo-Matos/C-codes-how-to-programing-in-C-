#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void number_randomic(int choosed_number);

int main(void){
	
	int x = 0;
	
	srand(time(NULL));
	
	x = 1 + rand() % 1000;
	
	number_randomic(x);

	
	
	return 0;
}

void number_randomic(int choosed_number){
	
	int x = 0;
	int y = 0;
	char answer[4];
	char yes[4] = "sim";
	int value = 0;
	

	printf("\nEu tenho um numero entre 1 e 1000.\n");
	printf("Voce consegue descobrir qual e?\n");
	printf("Digite sua primeira tentativa: ");
	scanf("%d", &y);
	
	if(y != choosed_number){
		int count = 1;
		
		while(y != choosed_number){
			if( y < choosed_number){
				printf("\nMuito baixo! Tente novamente: ");
				scanf("%d", &y);
			}
			else{
				printf("\nMuito alto! Tente novamente: ");
				scanf("%d", &y);
			}
			count++;
		}
		if(count < 9){
			printf("\nOu voce conhece o segredo ou teve sorte!");
		}
		else if(count == 10){
			printf("\nahah! Voce conhece o segredo!");
		}
		else{
			printf("\nVoce deveria se sair melhor!");
		}
		printf("\nExcelente!! Voce descobriu o numero!!\nGostaria de jogar novamente(s ou n)?\n");
		printf("\nDigite sim ou nao: ");
		scanf("%s", answer);
		
		value = strcmp(answer,yes);
		
		if(value == 0){
			x = 1 + rand() % 1000;
  	   		number_randomic(x);
		}
		else{
			printf("\nOK! obrigado por participar :)\n");
		}
	}
	else{
		printf("\nExcelente!! Voce descobriu o numero!!\nGostaria de jogar novamente(s ou n)?\n");
		printf("\nDigite sim ou nao: ");
		scanf("%s", answer);
		
		value = strcmp(answer,yes);
		
		if(value == 0){
			x = 1 + rand() % 1000;
  	   		number_randomic(x);
		}
		else{
			printf("\nOK! obrigado por participar :)\n");
		}
	}	
}