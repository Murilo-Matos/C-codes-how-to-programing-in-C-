#include<stdio.h> 

int main(void)
{
	int a,b;
	
	printf("write a number:");
	scanf("%d", &a);
	
	if(a > 30 || a < 1)
	{
		printf("\nthis value isnt't vality\n");
		printf("\n");
	}
	
	else if( a < 30 || a > 1)
	{
		printf("\n");
		
		for(b = 0; b!=a ; b++)
	{
		printf("*");
	}
	
		printf("\n");
	}
	
	return 0;
}