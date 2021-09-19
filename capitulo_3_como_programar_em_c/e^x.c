#include<stdio.h> 

int main(void)
{
	float ex;
	float x = 1;
	float n1 = 1;
	float n2 = 2;
	float n3 = 6;
	
	ex = 1 + x / n1 + (x * x) / n2 + (x * x * x) / n3;
	
	
	printf("the value of constant e^x is:%.2f", ex);
	
	return 0;
}