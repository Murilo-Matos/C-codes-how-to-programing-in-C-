#include <stdio.h>

int main (void)

{
	// declaração de variáveis
	int a;
	int b;
	int c;
	int soma;
	int media;
	int produto;
	int maior;
	int menor;

	// entrada de dados
	printf("digite tres inteiros diferentes:");
	scanf("%d %d %d", &a, &b, &c);
	
	// processamento e conclusão
	soma = a + b + c;
	printf("a soma e : %d\n",soma);
	
	media = soma / 3;
	printf("a media e :%d\n",media );
	
	produto = a * b * c;
	printf("o produto e:%d\n",produto);
	
	//algoritmo do maior
	if(a >= b)
		maior = a;		
	if(b >= a)
		maior = b;
	if(maior >= c)
		printf("o maior e: %d\n", maior);
	if(c >= maior)
		printf("o maior e:%d\n", c);
	
	//algoritmo do menor
	if(a <= b)
		menor = a;
	if(b <= a)
		menor = b;
	if(menor <= c)
		printf("o menor e: %d\n", menor);
	if(c <= menor)
		printf("o menor e: %d\n", c);

	return 0;
}