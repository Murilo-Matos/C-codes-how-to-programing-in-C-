#include <stdio.h>

int first_class(int array_fi[], int size_fi);
int economic_class(int array_ec[],int size_ec);
int chair_number = 0;


int main(void){
	
	int x;
	int answer = 0;
	int answer_2 = 0;
	int	count_f = 0;
	int count_e = 0;
	int chairs[10] = {0};
	
	for (x = 0; x < 10; x++){
		printf("\nPlease type it 1 to 'first class' ");
		printf("\nPlease type it 2 to 'econimic class'\nWrite here: ");
		scanf("%d", &answer);
		printf("\n");
		
		if(answer == 1){
			count_f = first_class(chairs, 10);
			if(count_f == 0){
				printf("The chairs of first class are full, do you accept be in the economic class?\n");
				printf("If yes, type it 5: ");
				scanf("%d", &answer_2);
				if(answer_2 == 5){
					count_e = economic_class(chairs, 10);	
					if(count_e == 0){
						printf("The chairs of economic class are full too, but the next flight going to be in 3 hours\n");
					}
					else{
						printf("\n-----------------------------------\nyour chair's number: %d\n\nyour class: economic class\n-----------------------------------\n", chair_number);
						chair_number = 0;
					}
				}
				else{
					printf("\nThe next flight going to be in 3 hours\n");
					x-=1;
				}
			}
			else{
				printf("\n-----------------------------------\nyour chair's number: %d\n\nyour class: first class\n-----------------------------------\n", chair_number);
				chair_number = 0;
			}
		}
		else if(answer == 2){
			count_e = economic_class(chairs,10);
			if(count_e == 0){
				printf("The chairs of economic class are full, do you accept be in the first class?\n");
				printf("If yes, type it 5: ");
				scanf("%d", &answer_2);
				if(answer_2 == 5){
					count_f = first_class(chairs, 10);
					if(count_f == 0){
						printf("The chairs of first class are full too, but the next flight going to be in 3 hours\n");
					}
					else{
						printf("\n-----------------------------------\nyour chair's number: %d\n\nyour class: first class\n-----------------------------------\n", chair_number);
						chair_number = 0;
					}	
				}
				else{
					printf("\nThe next flight going to be in 3 hours\n");
					x-=1;
				}
			}
			else{
				printf("\n-----------------------------------\nyour chair's number: %d\n\nyour class: first class\n-----------------------------------\n", chair_number);
				chair_number = 0;
			}
		}
		else{
			printf("\ninvalid answer\n");
		}
	}
	
	printf("\n\nall places were filled, sorry\n");
	
	return 0;
}


int first_class(int array_fi[],int size_fi){
	int y;
	int result = 0;
	
	for(y = 0; y < 5; y++){
		if(array_fi[y] == 0){
			array_fi[y] += 1;
			result++;
			chair_number = y;
			break;
		}
	}
	
	return result;
}

int economic_class(int array_ec[],int size_ec){
	int y;
	int result = 0;
	
	for(y = 5; y < 10; y++){
		if(array_ec[y] == 0){
			array_ec[y] += 1;
			result++;
			chair_number = y;
			break;
		}
	}
	
	return result;
}