#include<stdio.h>

int main(void)
{
	int A,B,C,a,b,c;
	int s1,s2,s3;
	int na1,nb2,nc3;
	
	printf("write a cont's number:");
	scanf("%d", &A);
	printf("\ntype it a second cont's number:");
	scanf("%d", &B);
	printf("\ntype it a third cont's number:");
	scanf("%d", &C);
	printf("\ntype it a credit's limits of client %d:", A);
	scanf("%d", &a);
	printf("\nother credit's limits (client %d):", B);
	scanf("%d", &b);
	printf("\nother credit's limits (client %d):", C);
	scanf("%d", &c);
	printf("\ntype it a balance(value owes) (client %d):", A);
	scanf("%d",&s1);
	printf("\nother balance (client %d):", B);
	scanf("%d", &s2);
	printf("\nother balance (client %d):", C);
	scanf("%d", &s3);
	
	na1 = a/2;
	
	nb2 = b/2;
	
	nc3 = c/2;
	
	
	if(s1 > na1)
	{
		printf("\nthe client with cont %d have the balance bigger than the new limit\n", A);
	}
	else if(s2 > nb2)
	{
		printf("\nthe client with cont %d have  the balance bigger than the new limit\n", B);
	}
	else if(s3 > nc3)
	{
		printf("\nthe client with cont %d have the balance bigger than the new limit\n", C);
	}
	
	return 0;
}