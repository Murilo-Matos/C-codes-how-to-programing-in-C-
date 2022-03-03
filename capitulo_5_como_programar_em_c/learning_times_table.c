#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int do_question(int arg_1, int arg_2, int type);

int add(int answer,int arg_1, int arg_2);
int sub(int answer,int arg_1, int arg_2);
int mult(int answer,int arg_1, int arg_2);

int main(void){
	int x = 0;
	int y = 0;
	int number = 0;
	int counter = 1;
	int right_values = 0;
	int error = 0;
	int level = 0;
	int type = 0;
	
	srand(time(NULL));
	
	printf("\n1 -> nivel facil\n2 -> nivel dificil\n\nDigite:");
	scanf("%d", &level);
	printf("\n1 -> problemas de adicao\n2 -> problemas de subtracao\n3 -> problemas de multiplicacao\n4 -> mistura dos 3 tipos\n\nDigite:");
	scanf("%d", &type);
	
	if(level == 1){
		x = 1 + rand() % 10;
		y = 1 + rand() % 10;
		number = do_question(x,y,type);		
	}
	else if (level == 2){
		x = 10 + rand() % 100;
		y = 10 + rand() % 100;
		number = do_question(x,y,type);
	}
	else{
		return printf("\nResposta invalida\n");
	}
		
	while(counter <= 10){
		if(number == 1){
			right_values++;
			if(level == 1){
				x = 1 + rand() % 10;
				y = 1 + rand() % 10;				
			}
			else if(level == 2){
				x = 10 + rand() % 100;
				y = 10 + rand() % 100;
			}
			number = do_question(x,y,type);
		 }	
		else{
			error = 1 + rand() % 2;
			switch(error){
				case 1:
					printf("\nErrado. Tente novamente.\n");
					number = do_question(x,y,type);	
					break;
				case 2:
					printf("\nIncorreto. Tente mais uma vez.\n");
					number = do_question(x,y,type);
					break;
					
			}
		}	
		counter++;
	}
	if(right_values < 7){
		printf("\nAmigo, pede ajuda pro teu professor.\n");
	}
	else{
		printf("\nCongratulations!! Tu ta pronto pro next level!\n");
	}
	 
	return 0;
}

int do_question(int arg_1, int arg_2,int type){
	int message = 0; 
	int answer  = 0;
	int result  = 0;
	int randomic = 0;
	
	if(type == 1){	
		answer = add(answer, arg_1, arg_2);
		result = arg_1 + arg_2;
	}
	else if(type == 2){
		answer = sub(answer, arg_1, arg_2);
		result = arg_1 - arg_2;
	}
	else if(type == 3){
		answer = mult(answer, arg_1, arg_2);
		result = arg_1 * arg_2;
	}
	else if(type == 4){
		randomic = 1 + rand() % 3;
		switch(randomic){
			case 1:
				answer = add(answer, arg_1, arg_2);
				result = arg_1 + arg_2;
				break;
			case 2:
				answer = sub(answer, arg_1, arg_2);
				result = arg_1 - arg_2;
				break;
			case 3:
				answer = mult(answer, arg_1, arg_2);
				result = arg_1 * arg_2;
				break;								
		}
	}

	if(result == answer){
		message = 1 + rand()%3;
		switch(message){
			case 1:
				printf("\nMuito bom!\n");
				break;
			case 2:
				printf("\nExcelente!\n");
				break;
			case 3:
				printf("\nBom trabalho!\nContinue assim!\n");
				break;								
		}
	}
	else{
		return 0;
	}
	return 1;
}

int add(int answer,int arg_1, int arg_2){
	printf("\nQuanto vale %d mais %d?\n\n", arg_1, arg_2);
	scanf("%d", &answer);
	return answer;	
}

int sub(int answer,int arg_1, int arg_2){
	printf("\nQuanto vale %d menos %d?\n\n", arg_1, arg_2);
	scanf("%d", &answer);	
	return answer;	
}

int mult(int answer,int arg_1, int arg_2){
	printf("\nQuanto vale %d vezes %d?\n\n", arg_1, arg_2);
	scanf("%d", &answer);
	return answer;		
}