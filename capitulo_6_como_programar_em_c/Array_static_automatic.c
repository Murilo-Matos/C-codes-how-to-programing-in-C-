#include<stdio.h> 

void staticArrayInit(void);
void automaticArrayInit(void);


int main(void)
{
	printf("First call for each function:\n");
	staticArrayInit();
	automaticArrayInit();
	
	printf("\n\nSecond call for each function:\n");
	staticArrayInit();
	automaticArrayInit();
	return 0;
}

void staticArrayInit(void)
{
	static int array1[3];
	int i;
	
	printf("\nValues in input of StaticArrayInit:\n");
	
	for(i = 0; i <= 2; i++)
	{
		printf("array1[%d] = %d ", i, array1[i]);
	}
	
	printf("\nValues in exit of StaticArrayInit:\n");
	
	for(i = 0; i <= 2; i++)
	{
		printf("array1[%d] = %d ", i, array1[i] +=5);
	}
}

void automaticArrayInit(void)
{
	int array2[3] = {1, 2, 3};
	int i;
	
	printf("\n\nValues in input of automaticArrayInit:\n");
	
	for(i = 0; i <= 2; i++)
	{
		printf("array2[%d] = %d ", i, array2[i]);
	}
	
	printf("\nValues in exit of automaticArrayInit:\n");
	
	for(i = 0; i <= 2; i++)
	{
		printf("array2[%d] = %d ", i, array2[i] += 5);
	}
}