 /* Figura 2.5: fig02_05.c
   Programa de adi��o */
 #include <stdio.h>
   
 /* fun��o main inicia execu��o do programa */
 int main( void )
 {
	int inteiro1; /* primeiro numero a ser informado pelo o usuario */
	int inteiro2; /* segundo numero a ser informado pelo o usuario */
	int soma; /* vari�vel em que a soma sera mantida */
	
	printf( "Digite o primeiro inteiro\n" ); /* prompt */
	scanf( "%d", &inteiro1); /* l� um inteiro*/
	
	printf( "Digite o segunto inteiro\n" );  /* prompt */
	scanf( "%d", &inteiro2); /* l� um inteiro*/
	
	soma = inteiro1 + inteiro2; /* atribui o total a soma*/
	
	printf( "A soma � %d\n", soma ); /* print soma */
	
    return 0; /*indica que o programa foi concluido com sucesso*/
 } /* fim da main*/
