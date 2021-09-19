#include<stdio.h>

int main (voide)

{
	int x;
	int y;
	
	printf("tyoe it y:");
	scanf("%d", &y);
	printf("type it x:");
	scanf("%d", &x);
	
	if(y == 8)
	{
		if(x == 5)
			printf("@@@@\n");
	}
	
	else
	{
		printf("#####\n");
		printf("$$$$$\n");
		printf("&&&&&\n");
	}
	
	return 0;
}