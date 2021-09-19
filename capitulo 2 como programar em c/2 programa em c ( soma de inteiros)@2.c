 /* Figura 2.5: fig02_05.c
   Programa de adição */
 #include <stdio.h>
   
 /* função main inicia execução do programa */
 int main( void )
 {
	int inteiro1; /* primeiro numero a ser informado pelo o usuario */
	int inteiro2; /* segundo numero a ser informado pelo o usuario */
	int soma; /* variável em que a soma sera mantida */
	
	printf( "Digite o primeiro inteiro\n" ); /* prompt */
	scanf( "%d", &inteiro1); /* lê um inteiro*/
	
	printf( "Digite o segunto inteiro\n" );  /* prompt */
	scanf( "%d", &inteiro2); /* lê um inteiro*/
	
	soma = inteiro1 + inteiro2; /* atribui o total a soma*/
	
	printf( "A soma é %d\n", soma ); /* print soma */
	
    return 0; /*indica que o programa foi concluido com sucesso*/
 } /* fim da main*/
