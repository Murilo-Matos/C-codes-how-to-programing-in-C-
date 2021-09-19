#include <stdio.h>

int main(void)
{
	float account;
	float initialBalance;
	float charges;
	float credits;
	float limit;
	float newBalance;
	
	printf("type it your number account (-1 for stop):");
	scanf("%f", &account);
	
	while( account != -1)
	{
		printf("type it your initial balance:");
		scanf("%f", &initialBalance);
		printf("type it your charges:");
		scanf("%f", &charges);
		printf("type it your credits:");
		scanf("%f", &credits);
		printf("type it your limit:");
		scanf("%f", &limit);
		
		newBalance = (initialBalance + charges - credits);
		
		if( newBalance > limit )
			printf("account: %.2f\n", account);
			printf("limit: %.2f\n", limit);
			printf("balance: %.2f\n", newBalance);
			printf("credit's limit ultrapassed\n");
			
		printf("type it your number account (-1 for stop):");
		scanf("%f", &account);  
	}
	
	return 0;
}