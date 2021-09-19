#include<stdio.h> 

int main(void)
{
	int N;
	int a, b, c , d;
	float A, B, C, D;
	
	printf("type it a number of four digits:");
	scanf("%d", &N);
	
	a = N % 10; 
	b = N % 100;
	b = b / 10;
	c = N % 1000;
	c = c / 100;
	d = N % 10000;
	d = d / 1000;
	
	a = a + 7;
	b = b + 7;
	c = c + 7;
	d = d + 7;
	
	D = a / 10.0;
	C = b / 10.0;
	B = c / 10.0;
	A = d / 10.0;
	
	printf("code: %.2f%.2f%.2f%.2f", A, B, C, D );
	
	return 0;
}

