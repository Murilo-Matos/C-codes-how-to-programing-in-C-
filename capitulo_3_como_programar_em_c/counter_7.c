#include<stdio.h>

int main (void)
{
	int n;
	int total = 0;
	int a1, a2, a3, a4, a5;
	
	printf("type it a whole number:");
	scanf("%d", &n);
	
	a1 = n % 10;
	a2 = n % 100;
	a2 = a2 / 10;
	a3 = n % 1000;
	a3 = a3 / 100;
	a4 = n % 10000;
	a4 = a4 / 1000;
	a5 = n / 10000;
	
	if(a1 == 7)
	{
		total = total + 1;
	}
	if(a2 == 7)
	{
		total = total + 1;
	}
	if(a3 == 7)
	{
		total = total + 1;
	}
	if(a4 == 7)
	{
		total = total + 1;
	}
	if(a5 == 7)
	{
		total = total + 1;
	}
	
	printf("\nthe total of digits equal to 7 is: %d\n", total);
	
	return 0;
}