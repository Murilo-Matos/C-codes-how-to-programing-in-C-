#include <stdio.h>

int main (void)

{
	//declara��o de vari�veis
	float raio;
	float diametro;
	float circuferencia;
	float area;
	
	//entrada de dados
	printf("digite o raio do circulo:");
	scanf("%f", &raio);
	
	//processamento
	diametro = 2 * raio;
	circuferencia = 2 * 3.14 * raio;
	area = 3.14 * (raio * raio);
	
	//sa�da de dados
	printf(" diametro: 2 * raio = %f\n", diametro);
    printf(" circuferencia: 2 * 3,14 = %f\n", circuferencia);
	printf(" area: 3,14 * (raio * raio) = %f\n", area);
	
	
	return 0;
}