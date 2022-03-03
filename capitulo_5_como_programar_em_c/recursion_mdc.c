#include <stdio.h>

int mdc(int x, int y);

int main(void){
	
	int x = 0;
	int y = 0;
	
	printf("type it one number in order to know the mdc: ");
	scanf("%d", &x);
	printf("type it other number in order to know the mdc: ");
	scanf("%d", &y);	
	
	printf("The mdc is: %d", mdc(x,y));
	
	return 0;
}


int mdc(x,y){
	if(y == 0){
		return x;
	}
	else{
		return mdc(y, x % y);
	}
}