/* Programa da média da turma com repetição controlada por contador */

#include <stdio.h>

int main (void)
{
 	int total ; /* número de notas digitadas */
	int contador ; /* valor da nota */
	int nota; /* soma das notas */
	
	float media; /* número em ponto flutuante */
	
	/* fase de inicialização */
	total = 0; /* inicializa total */
	contador = 0; /* inicializa contador do loop */
	
	/* fase de processamento*/
	/* inicializa a primeira nota do usuário */ 
	printf("digite a nota (-1 pra parar):"); /*prompt pra entrada */
	scanf("%d", &nota); /* lê a nota */
	
	/* loop enquanto valor da sentinela não foi lido */
	while(nota != -1)
	{
		total = total + nota; /* soma total a nota */
		contador++; /* incrementa ao contador */
		
		/* recebe a proxima nota do usuario */ 
		printf("digite a próxima a nota (-1 pra parar):");
		scanf("%d", &nota);
		
	}
	/* fase de finalização */
	/* se o usuario digiyou prlo menos uma nota */
	if(contador != 0)
	{
		/* calcula as medias de todas as notas lidas */
		media = (float)total / contador; /* evita truncar */ 
		
		/*exibe a média com dois digitos de precisão */
		printf("media:%.2f", media);
	}   /* fim do if */
	
	else 
	{   /* se nenhuma nota foi informada*/
		printf("nota nenhuma foi informada");

	}   /*fim do else */

	return 0; /* indica que o programa foi concluído com sucesso */
} /*fim da função */

