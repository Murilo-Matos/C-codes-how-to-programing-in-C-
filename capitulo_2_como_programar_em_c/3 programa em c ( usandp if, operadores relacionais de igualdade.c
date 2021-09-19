/* Figura 2.13: fig02_13.c
usando instruções if, operadores relacionais 
e operadores de igualdade*/
#include<stdio.h>

/*função main inicia execução do progama*/
int main( void )
{
	int num1; /* primerio número do usuário a ser lido*/
	int num2; /* segundo número do usuário a ser lido */
	
	printf( "Entre com dois inteiros e eu lhe direi\n" );
	printf( "as relações que eles satisfazem: " );
	
	scanf("%d%d", &num1, &num2 ); /* lê dois inteiros */
	
	if ( num1 == num2 ){
		printf( "%d é igual a %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 != num2 ){
		printf( "%d não é igual a %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 < num2 ){
		printf( "%d é menor que %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 > num2 ){
		printf( "%d é maior que %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 <= num2 ){
		printf( "%d é menor ou igual %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 >= num2 ){
		printf( "%d é maior que %d\n", num1, num2);
	} /*fim do if*/
	
	return 0; /* indica qu eo programa foi concluído com suscesso */
}/* fim da função main */