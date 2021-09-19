#include <stdio.h>

int main(void)
{
	int soma = 0;
	int x = 1;
	
	while(x <= 10)
	{
		soma += x;
		x++;
	}
	
	printf("soma:%d", soma);
	
	return 0;
}