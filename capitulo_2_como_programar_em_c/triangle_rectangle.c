#include<stdio.h>

int main(void)
{
	int a, b, c;
	int h;
	int L;
	int base;
	
	printf("type it the high:");
	scanf("%d", &h);
	printf("type it the side:");
	scanf("%d", &L);
	printf("type it the base:");
	scanf("%d", &base);
	
	a = (L * L);
	b = (h * h);
	c = (base * base);
	
	if(a == b + c)
	{
		printf("\nthis is a triangle rectangle\n");
	}
	else
	{
		printf("\nthis isn't a triangle rectangle\n");
	}
	return 0;
}
