#include <stdio.h> /* biblioteca padr�o � incluida no programa */

int main (void) /* fun��o main inicia o programa*/

{
	/*declara��o de vari�veis */
	int num1; 
	int num2; 
	int soma;
	
	/* entrada dos dados*/
	printf("digite um numero: ");
	scanf("%d", &num1);
	printf("digite outro numero: ");
	scanf("%d", &num2);
	
	/*c�lculo*/
	soma = num1 + num2;
	
	/*resultado*/
	printf("resultado: %d",soma);
	
	return 0;
}