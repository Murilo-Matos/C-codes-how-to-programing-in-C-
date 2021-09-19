#include <stdio.h>

int main(voide)
{
	int x, y;
	
	printf("type it a numbe:");
	scanf("%d", &x);
	printf("type it a  number:");
	scanf("%d", &y);
	
	if( x < 10)
	{
		if(y > 10)
			printf("*****\n");
	}
	
	else
	{
		printf("####\n");
		printf("$$$$$\n");
	}
	return 0;	
}