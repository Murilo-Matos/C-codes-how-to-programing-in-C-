#include<stdio.h>

int main(void)
{
	int x;
	int y;
	
	printf("type it x:");
	scanf("%d", &x);
	printf("type it y:");
	scanf("%d", &y);
	
	if(y == 8)
	{
		if(x == 5)
			printf("@@@@@\n");
		
		else
		{
			printf("######\n");
			printf("$$$$$$\n");
		}
			printf("@@@@@@\n");
	}
	
	return 0;
	
}