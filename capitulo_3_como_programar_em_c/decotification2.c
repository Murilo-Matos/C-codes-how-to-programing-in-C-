#include<stdio.h> 

int main(void)
{
	float a, b, c, d;
	float A, B, C, D;
	int a1, b2, c3, d4;
	
	printf("type it the first codification number:");
	scanf("%f", &a);
	printf("type it the second number:");
	scanf("%f", &b);
	printf("type it the third codification number:");
	scanf("%f", &c);
	printf("type it the fouth codification number:");
	scanf("%f", &d);
	
	A = a * 10;
	B = b * 10;
	C = c * 10;
	D = d * 10;
	
	a1 = A - 7;
	b2 = B - 7;
	c3 = C - 7;
	d4 = D - 7;
	
	printf(" the decodification number is: %d%d%d%d", a1, b2, c3, d4 );
	
	return 0;
}