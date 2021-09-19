#include <stdio.h> /* biblioteca padrão é incluida no programa */

int main (void) /* função main inicia o programa*/

{
	/*declaração de variáveis */
	int num1; 
	int num2; 
	int soma;
	
	/* entrada dos dados*/
	printf("digite um numero: ");
	scanf("%d", &num1);
	printf("digite outro numero: ");
	scanf("%d", &num2);
	
	/*cálculo*/
	soma = num1 + num2;
	
	/*resultado*/
	printf("resultado: %d",soma);
	
	return 0;
}