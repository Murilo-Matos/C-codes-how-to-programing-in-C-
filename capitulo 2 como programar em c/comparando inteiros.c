#include <stdio.h>

int main (void)

{
	int num1;
	int num2;
	
	printf("digite o primeiro numero:");
	scanf("%d", &num1);
	printf("digite o segundo numero:");
	scanf("%d", &num2);
	
	if(num1 == num2)
	{
		printf("\n estes numeros sao iguais\n");
	}
	
	if(num1 > num2)
	{
		printf("\n o primeiro numero e maior que o segundo\n");
	}
	
	if(num1 < num2)
	{
		printf("\n o segundo numero e maior que o primeiro\n");
	}
	
	
	
	
	return 0;
}