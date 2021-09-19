#include<stdio.h> 

int main(void)
{
	float e;
	float n1 = 1;
	float n2 = 2;
	float n3 = 6;
	
	e = 1 + 1 / n1 + 1 / n2 + 1 / n3;
	
	printf("\nthe value of constant e is: %.2f\n", e);
	
	return 0;
}