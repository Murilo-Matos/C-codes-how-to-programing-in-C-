#include <stdio.h>

int multiple(int x,int y);

int main(void){
	int notas[6] = {3,6,7,14,2,4};
	int i = 0;
	int i_2 = 0;
	int value_1 = 0;
	int value_2 = 0;
	
	while(i < 5){
		i_2 = i + 1;
		value_1 = notas[i];
		value_2 = notas[i_2];
		printf("\n%d\n", multiple(value_1, value_2));
		i++;
	}
	
	return 0;
}


int multiple(int x,int y){
	int answer = 0;
	
	if(y % x == 0){
		answer++;
		return answer;
	}
	else{
		return answer;
	}
}