#include<stdio.h>

int main(void)
{
	int n, counter, b, total = 0;
	
	printf("write the number of digites that you want add:");
	scanf("%d", &n);
	
	for(counter = 1; counter <= n; counter++){
		
		printf("write a number:");
		scanf("%d", &b);
		total += b;
	}
	
	printf("total: %d", total);
	
	return 0;
}

