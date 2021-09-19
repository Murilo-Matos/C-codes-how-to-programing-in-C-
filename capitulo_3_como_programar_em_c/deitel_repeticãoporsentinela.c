/* Programa da m�dia da turma com repeti��o controlada por contador */

#include <stdio.h>

int main (void)
{
 	int total ; /* n�mero de notas digitadas */
	int contador ; /* valor da nota */
	int nota; /* soma das notas */
	
	float media; /* n�mero em ponto flutuante */
	
	/* fase de inicializa��o */
	total = 0; /* inicializa total */
	contador = 0; /* inicializa contador do loop */
	
	/* fase de processamento*/
	/* inicializa a primeira nota do usu�rio */ 
	printf("digite a nota (-1 pra parar):"); /*prompt pra entrada */
	scanf("%d", &nota); /* l� a nota */
	
	/* loop enquanto valor da sentinela n�o foi lido */
	while(nota != -1)
	{
		total = total + nota; /* soma total a nota */
		contador++; /* incrementa ao contador */
		
		/* recebe a proxima nota do usuario */ 
		printf("digite a pr�xima a nota (-1 pra parar):");
		scanf("%d", &nota);
		
	}
	/* fase de finaliza��o */
	/* se o usuario digiyou prlo menos uma nota */
	if(contador != 0)
	{
		/* calcula as medias de todas as notas lidas */
		media = (float)total / contador; /* evita truncar */ 
		
		/*exibe a m�dia com dois digitos de precis�o */
		printf("media:%.2f", media);
	}   /* fim do if */
	
	else 
	{   /* se nenhuma nota foi informada*/
		printf("nota nenhuma foi informada");

	}   /*fim do else */

	return 0; /* indica que o programa foi conclu�do com sucesso */
} /*fim da fun��o */

