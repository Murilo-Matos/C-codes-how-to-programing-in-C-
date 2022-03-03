#include<stdio.h>

int pot(int number, int ex);

int main(void){
	
	int x = 3;
	int y = 3;
	int result = 0;
	
	result = pot(x,y);
	printf("%d", result);
	
	return 0;
}


int pot(int number, int ex){
	if(ex == 1){
		return number;
	}
	else{
		return number * pot(number, ex-1);
	}
}
