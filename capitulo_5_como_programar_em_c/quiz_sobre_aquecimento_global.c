#include <stdio.h>
#include<string.h>

int main(void){
	char answer[4];
	char yes[4] = "sim";
	char no[4] = "nao";
	int counter = 0;
	int value = 0;
	
	printf("\nA emissao de gases do efeito estufa por atividades humanas \nentre 2000 e 2010 foram as maiores da historia?\n");
	printf("\nDigite sim ou nao: ");
	scanf("%s", answer);
	
	value = strcmp(answer,yes);
	
	if(value == 0){
		counter++;
	}
	
	printf("\nA agrofloresta ajuda a aumentar o aquecimento global?\n");
	printf("\nDigite sim ou nao: ");
	scanf("%s", answer);

	value = strcmp(answer,no);
	
	if(value == 0){
		counter++;
	}
		
	printf("\nDesde de 1970, o total de emissoes de dioxido de carbono advindos\nde combustiveis fosseis e cimento tem triplicado?\n");
	printf("\nDigite sim ou nao: ");
	scanf("%s", answer);

	value = strcmp(answer,yes);
	
	if(value == 0){
		counter++;
	}
	
	printf("\nA emissao de gases por veiculos faz bem para o meio ambiente?\n");
	printf("\nDigite sim ou nao: ");
	scanf("%s", answer);

	value = strcmp(answer,no);
	
	if(value == 0){
		counter++;
	}

	printf("\nBolsonaro foi reconhecido como um agente que defende o meio ambiente?\n");
	printf("\nDigite sim ou nao: ");
	scanf("%s", answer);

	value = strcmp(answer,no);
	
	if(value == 0){
		counter++;
	}
	
	if(counter == 5){
		printf("\nExcelente!!\n");
	}
	else if(counter == 4){
		printf("\nMuito bom!\n");
	}
	else if(counter <= 3){
		printf("\nHora de aumentar seus conhecimentos sobre o aquecimento global\n\n");
	}
	printf("\nsites pesquisados: \nhttps://warmheartworldwide.org/\nhttps://www.thersa.org/\nestadao\n");
	
		
	return 0;
}