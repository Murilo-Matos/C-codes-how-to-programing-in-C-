#include<stdio.h>

int pair(int x);

int main(void){
	
	int result;
	int i = 0;
	
	int valores[5] = {2,4,6,3,1};
	
	while(i<5){
		result = pair(valores[i]);
		
		if(result == 1){
			printf("\n%d is pair\n", valores[i]);
		}
		else{
			printf("\n%d is odd\n", valores[i]);
		}
		i++;
	}
	return 0;
}


int pair(int x){
	
	if(x % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}	
}