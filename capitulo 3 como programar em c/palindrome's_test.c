#include<stdio.h>

int main(void)
{
	int a1, a2, a3;
	int b1, b2;
	int n;
	
	printf("type it a number:");
	scanf("%d", &n);
	
	a1 = n % 10;
	a2 = n % 100;
	a2 = a2 / 10;
	a3 = n % 1000;
	a3 = a3 / 100;
	b1 = n % 10000;
	b1 = b1 / 1000;
	b2 = n % 10000;
	b2 = b2 % 1000;
	b2 = b2 % 100;
	b2 = b2 % 10;
	
	if(a1 == b2)
	{
		if(a2 == b1)
		{
			printf("\nthis number is a palindrome\n");
		}
		else 
		{
			printf("\nthis number isn't a palindrome\n");
		}
	}
	else
	{
		printf("\nthis number isn't a palindrome\n");
	}
	return 0;
}