#include<stdio.h> 

int main(void)
{
	int n; 
	int total = 1;

	printf("type it a number:");
	scanf("%d", &n);
	
	while(n != 1)
	{
		total = total * n;
		n--;
	}
	printf("\nthe fatorial of your number is: %d\n", total);
	
	return 0;
}