#include<stdio.h>

int main(void)
{
	int column = 0;
	int line = 0;
	int n;
	
	printf("type it a number:");
	scanf("%d",&n);
	
	if(column == 0)
	{
		while(line != n)
		{
			printf("*");
			line++;
		}
		column++;
		printf("\n");
		line = 0;
		
		while(column != n)
		{
				if(line == 0)
		{
			printf("*");
			line++;
			
			while(line != n)
			{
				line++;
			}
		}
		 if (line == n)
			printf("*");
		}
	   	line = 0;	
	}
	
	else
	{
		if(column == n)
		{
			while(line != n)
			{
				printf("*");
				line++;
			}
		}
	}
	
	return 0;
}