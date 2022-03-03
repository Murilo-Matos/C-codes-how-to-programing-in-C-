#include<stdio.h>
#include<math.h>


int main(void){
	
	printf("valor absoluto de 7,5: %.2f\n",fabs(7.5));
	printf("arrendonda 7,5 ao maior inteiro não maior que 7,5: %.2f\n",floor(7.5));
	printf("valor absoluto de 0,0: %.2f\n",fabs(0.0));
	printf("arrendonda 0,0 ao menor inteiro não menor que 0,0: %.2f\n",ceil(0.0));
	printf("valor absoluto de -6,4: %.2f\n",fabs(-6.4));
	printf("arrendonda -6.4 ao menor inteiro não menor que -6.4: %.2f\n",ceil(-6.4));
	printf("%.2f\n",ceil(-fabs(-8 + floor(-5.5))));
	return 0;
}