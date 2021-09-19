#include <stdio.h>

int main (void)

{
	//declaração de variáveis
	int numero;
	int resto;
	
	//entrada de dados
	printf("digite um numero:");
	scanf("%d", &numero);
	
	//processamento
	resto = numero % 2;
		
	//saída de dados	
	if(resto == 0)
		printf("\neste numero e par\n");
	
	if(resto != 0)
		printf("\neste numero e impar\n");
	
	return 0;
}