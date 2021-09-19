#include <stdio.h>

int main (void)

{
	int num1;
	int num2;
	int num3;
	int resultado;
	
	printf("digite um numero: ");
	scanf("%d", &num1);
	
	printf("digite outro numero: ");
	scanf("%d", &num2);
	
	printf("digite mais um numero: ");
	scanf("%d", &num3);
	
	resultado = num1 * num2 * num3;
	
	printf("resultado: %d", resultado);
	
	return 0;
}