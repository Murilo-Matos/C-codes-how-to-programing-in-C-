#include<stdio.h> 

long factorial(long number);

int main(void)
{
	int i;
	
	for(i = 0; i <= 5; i++)
	{
		printf("%2d! = %ld\n", i, factorial(i));
		printf("variavel local\n");
		printf("%d",i);
		printf("\n\n");
	}
	
	return 0;
}

long factorial(long number)
{
	if (number <= 1)
	{
		return 1;
	}
	else
	{
	{
		printf("parametro da chamada recursiva\n");
		printf("%ld",number);
		printf("\n\n");
		return (number * factorial(number -1));
	}
	}
}
