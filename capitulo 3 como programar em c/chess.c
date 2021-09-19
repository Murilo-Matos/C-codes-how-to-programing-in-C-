#include<stdio.h> 

int main(void)
{
	int counter = 1;
	int column = 1;
	
	while(column <= 8)
	{
		while(counter <= 8)
		{
			printf("*");
			printf(" ");
			counter++;
	
		}
		
		printf("\n");
		counter = 1;
		
		while(counter <= 8)
		{
			printf(" ");
			printf("*");
			counter++;
		}
		printf("\n");
		counter = 1;
		column++;
	}
	
	return 0;
}