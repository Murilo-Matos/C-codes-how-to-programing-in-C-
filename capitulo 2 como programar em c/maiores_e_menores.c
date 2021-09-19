#include <stdio.h>

int main(void)

{
	// declaração de variáveis
	int a;
	int b;
	int c;
	int d;
	int e;
	int maior1;
	int maior2;
	int maioral;
	int menor1;
	int menor2;
	int menor_de_todos;
		
	// entrada de dados	
	printf("digite o primeiro numero:");
	scanf("%d", &a);
	printf("digite o segundo numero:");
	scanf("%d",&b);
	printf("digite o terceiro numero:");
	scanf("%d", &c);
	printf("digite o quarto numero:");
	scanf("%d", &d);
	printf("digite o quinto numero:");
	scanf("%d", &e);
	
	// processamento e conclusão
	// algoritmo do maior
	if( a >= b)
		maior1 = a;
	
	if( b >= a)
		maior1 = b;
	
	if( c >= d)
		maior2 = c;
	
	if( d >= c)
		maior2 = d;
	
	if( maior1 >= maior2)
		maioral = maior1;
	
	if( maior2 >= maior1)
		maioral = maior2;
	
	if(maioral >= e)
		printf("o maior e: %d\n", maioral);
	if(e >= maioral)
		printf("o maior e: %d\n", e);
	
	//algoritmo do menor
	if( a <= b)
		menor1 = a;
	
	if( b <= a)
		menor1 = b;
	
	if( c <= d)
		menor2 = c;
	
	if( d <= c)
		menor2 = d;
	
	if( menor1 <= menor2)
		menor_de_todos = menor1;
	
	if(menor2 <= menor1)
		menor_de_todos = menor2;
	
	if(menor_de_todos <= e)
		printf("o menor e: %d\n", menor_de_todos);
	
	if(e <= menor_de_todos)
		printf("o menor e: %d\n", e);
	
	
	return 0;
 		
}