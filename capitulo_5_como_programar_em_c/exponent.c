#include<stdio.h>

int potenciaInt(int base,int exponent);

int main(void){
	
	int x = 0;
	int y = 0;
	
	printf("type it a base: ");
	scanf("%d", &x);
	printf("\ntype it an exponent: ");
	scanf("%d", &y);
	
	printf("\nresult: %d\n", potenciaInt(x,y));
	
	return 0;
}

int potenciaInt(int base,int exponent){
	
	int i;
	int result = 1;
	
	for (i = 1;i <= exponent; i++){
		result *= base;
	}
	
	return result;
}