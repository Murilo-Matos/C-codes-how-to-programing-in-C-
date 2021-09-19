#include <stdio.h>

int main (void)

{
	float sales;
	float payment;
	float product;
	float x;
	
	printf("type it your sales:");
	scanf("%f", &sales);
	
	while(sales != -1)
	{
		product = 9 * sales;
		x = product / 100;
		payment = x + 200;
		
		printf("the payment is: %.2f\n", payment);
		printf("\ntype it your sales:");
		scanf("%f", &sales);
	}
	
	return 0;
} 