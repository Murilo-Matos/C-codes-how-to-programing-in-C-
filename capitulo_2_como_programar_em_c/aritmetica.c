# include <stdio.h>

int main (void)

{
	
	int valor1, valor2, soma, produto, diferenca, quociente, modulo;
	
	printf("digite um numero: ");
	scanf("%d", &valor1);
	
	printf("digite outro numero:");
	scanf("%d", &valor2);
//--------------------------------------------------------------------------
//Processamento
//--------------------------------------------------------------------------
	
	soma = valor1 + valor2;
	produto = valor1 * valor2;
	diferenca = valor1 - valor2;
	quociente = valor1 / valor2;
	modulo = valor1 % valor2;
	
	printf("soma: %d \n", soma);
	printf("produto: %d \n", produto);
	printf("diferenca: %d \n", diferenca);
	printf("quociente: %d \n", quociente);
	printf("modulo: %d \n", modulo);
	
	
	return 0;
}