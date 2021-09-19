#include<stdio.h> 

int main(void)
{
	int a1, a2, a3;
	int b1, b2, b3;
	int L1;
	int L2;
	int base;
	
	printf("type it L1 of your triangle:");
	scanf("%d", &L1);
	printf("type it L2 of your triangle:");
	scanf("%d", &L2);
	printf("type it a base for your triangle:");
	scanf("%d", &base);
	
	a1 = L1 + L2; 
	b1 = L1 - L2; 
	a2 = base + L2;
	b2 = base - L2;
	a3 = base + L1;
	b3 = base - L1; 
	
	if(base < a1)
	{
		if(base > b1)
		{
			if(L1 < a2)
			{
				if(L1 > b2)
				{
					if(L2 < a3)
					{
						if(L2 > b3)
						{
							printf("\nthis is a triangle\n");
						}
						else
						{
							printf("\nthis is not a triangle\n");
						}
					}
					else
					{
						printf("\nthis is not triangle\n");
					}
				}
				else
				{
					printf("\nthis is not a triangle\n");
				}
			}
			else
			{
				printf("\nthis is not a triangle\n");
			}
				
		}
		else
		{
			printf("\nthis is not a triangle\n");
		}
	}
	else
	{
		printf("\nthis is not a triangle\n");
	}
	return 0;
}