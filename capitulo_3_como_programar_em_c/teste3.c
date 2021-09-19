#include <stdio.h>

int main (void)
{
	int contador = 1;
	int numero = 0;
	int maior = 0;
	
	while(contador <= 11)
	{
		printf("digite um numero:");
		scanf("%d", &numero);
		
		if(numero >= maior)
			maior = numero;
		
		contador++;
	}
	
	printf("maior: %d", maior);
	
	return 0;
}