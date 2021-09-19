#include <stdio.h>

int main (void)

{
//Delcaração de variáveis	
	
	int a = 0;
	int b = 0;
	int c = 0;
	int maior = 0;
	
//Entrada de Dados
	
	printf("entre com o primeiro numero:");
	scanf("%d", &a);
	printf("entre com o segundo numero:");
	scanf("%d", &b);
	printf("entre com o terceiro numero:");
	scanf("%d", &c);

//Processamento
	
	if(a >= b)
		maior = a;		
	if(b >= a)
		maior = b;
	if(maior >= c)
		printf("imprima: %d", maior);
	if(c >= maior)
		printf("imprima:%d", c);
	
	return 0;
}