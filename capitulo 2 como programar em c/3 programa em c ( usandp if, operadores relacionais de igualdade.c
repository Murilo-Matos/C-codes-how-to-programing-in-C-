/* Figura 2.13: fig02_13.c
usando instru��es if, operadores relacionais 
e operadores de igualdade*/
#include<stdio.h>

/*fun��o main inicia execu��o do progama*/
int main( void )
{
	int num1; /* primerio n�mero do usu�rio a ser lido*/
	int num2; /* segundo n�mero do usu�rio a ser lido */
	
	printf( "Entre com dois inteiros e eu lhe direi\n" );
	printf( "as rela��es que eles satisfazem: " );
	
	scanf("%d%d", &num1, &num2 ); /* l� dois inteiros */
	
	if ( num1 == num2 ){
		printf( "%d � igual a %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 != num2 ){
		printf( "%d n�o � igual a %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 < num2 ){
		printf( "%d � menor que %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 > num2 ){
		printf( "%d � maior que %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 <= num2 ){
		printf( "%d � menor ou igual %d\n", num1, num2);
	} /*fim do if*/
	
	if ( num1 >= num2 ){
		printf( "%d � maior que %d\n", num1, num2);
	} /*fim do if*/
	
	return 0; /* indica qu eo programa foi conclu�do com suscesso */
}/* fim da fun��o main */