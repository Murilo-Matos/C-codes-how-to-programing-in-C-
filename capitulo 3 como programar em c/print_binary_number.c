#include<stdio.h>

int main(void)
{
	int a1, a2, a3, a4, a5;
	int b1, b2, b3, b4, b5;
	int n, soma;
	
	printf("type it a binary number of five digits:");
	scanf("%d", &n);

	
	
	   	a1 = n % 10;
		a2 = n % 100;
		a2 = a2 / 10;
		a3 = n % 1000;
		a3 = a3 / 100;
		a4 = n % 10000;
		a4 = a4 / 1000;
		a5 = n % 10000;
		a5 = a5 % 1000;
		a5 = a5 % 100;
		a5 = a5 % 10;
		
		b1 = a5 * 1;
		b2 = a4 * 2;
		b3 = a3 * 4;
		b4 = a2 * 8;
		b5 = a1 * 16;
		
		soma = b1 + b2 + b3 + b4 + b5;
		printf("this is number: %d", soma);
	
	
	return 0;	
	}