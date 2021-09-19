#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int i = 1;
	int potencia = 1;
	
	printf("digite x: ");
	scanf("%d", &x);
	printf("digite y: ");
	scanf("%d", &y);
	
	while(i <= y)
	{
		potencia *= x;
		i++;
		
	}
	
	printf("potencia: %d", potencia);
	
	return 0;
}