#include<stdio.h>
#include<math.h>


int main(void){
	
	printf("raiz de 900: %.2f\n",sqrt(900.0));
	printf("exponecial de 1: %.2f\n",exp(1));
	printf("log de 2,718282: %.2f\n",log(2.718282));
	printf("log10 de 1: %.2f\n",log10(1));
	printf("valor absoluto de 13,5: %.2f\n",fabs(13.5));
	printf("arrendonda 9,2 ao menor inteiro não menor que 9,2: %.2f\n",ceil(9.2));
	printf("arrendonda 9,2 ao maior inteiro não maior que 9,2: %.2f\n",floor(9.2));
	printf("2,7 elevado a potencia: %.2f\n",pow(2,7));
	printf("modulo de 13,657 / 2,333 como um número em ponto flutuante: %.2f\n",fmod(13.657,2.333));
	printf("seno de 0,0: %.2f\n",sin(0.0));
	printf("cosseno de 0,0: %.2f\n",cos(0.0));
	printf("tangente de 0,0: %.2f\n",tan(0.0));
	return 0;
}