#include <stdio.h>

int main(void)

{
	//declaração de variável
	int num1;
	int num2;
	int resultado;
	
	//entrada de dados
	printf("digite um numero:");
	scanf("%d", &num1);
	printf("digite outro numero:");
	scanf("%d", &num2);
	
	//processamento
	resultado = num1 % num2;
	
	//saída de dados
	if(resultado == 0)
		printf("e multiplo");
	
	if(resultado != 0)
		printf("nao e multiplo");
	
	return 0;
		
}