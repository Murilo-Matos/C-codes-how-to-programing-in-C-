#include<stdio.h>

int main (void)
{
	int n;
	int line = 0;
	int column = 0;
	
	printf("type it the number of squar's side:");
	scanf("%d", &n);
	
	if(n > 20)
	{
		printf("\nthis input is not valite\n");
	}
	else
	{
		if(n == 1)
		printf("*");
	
		else
		{
			while(column != n)
		{
			while(line != n)
			{
				printf("*");
				line++;
			}
			printf("\n");
			column++;
			line = 0;
		}
		}
		
	}

	return 0;
}