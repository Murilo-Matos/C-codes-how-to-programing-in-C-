#include<stdio.h>

int main(void)
{
	int a1, a2, a3, a4, a5;
	int b1, b2, b3, b4, b5;
	int n;
	int total;
	
	printf("type it the binary number with five digits:");
	scanf("%d", &n);
	
	a1 = n % 10;
	a2 = n  % 100;
	a2 = a2 / 10;
	a3 = n % 1000;
	a3 = a3 / 100;
	a4 = n % 10000;
	a4 = a4 / 1000;
	a5 = n / 10000;

	//----------------------
	printf("a1: %d\n", a1);
	printf("a2:%d\n", a2);
	printf("a3:%d\n", a3);
	printf("a4: %d\n", a4);
	printf("a5: %d\n", a5);
	
	//----------------------
	b1 = a1 * 1;
	b2 = a2 * 2;
	b3 = a3 * 4;
	b4 = a4 * 8;
	b5 = a5 * 16;
	
	//----------------------
	total = b1 + b2 + b3 + b4 + b5;
	
	
	printf("\nthe equivalent decimal number is: %d\n", total);
	
	return 0;
}