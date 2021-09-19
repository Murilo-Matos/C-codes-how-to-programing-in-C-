#include<stdio.h>

int main(voide)
{
	int column = 0;
	int line = 0;
	int n;
	
	printf("type it a number:");
	scanf("%d", &n);
	
	if (n == 1)
	{
		printf("*");
	}
	
	else if(n >= 21)
	{
		printf("\nthe input is validate\n");
	}
	
	else
	{
		if(column == 0)
	{
		while(line != n)
		{
			printf("*");
			line++;
		}
		column++;
		printf("\n");
		line = 1; 
	}
	
	if(column != n)
	{
		while(column != n)
		{
			if(line == 1)
			{
				printf("*");
				line++;
			}
			else if(line != n)
			{
				printf(" ");
				++line;
			}
			else
			{
				printf("*\n");
				column++;
				line = 1;
			}
		}
	}
	if(column == n)
	{
		line = 0;
		while(line != n)
		{
			printf("*");
			line++;
		}
	}
	
	}
	
	return 0;
}