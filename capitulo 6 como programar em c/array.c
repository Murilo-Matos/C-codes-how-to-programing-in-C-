#include<stdio.h> 

int main(void)
{
	int n[10];
	int i;
	
	
	for(i = 0; i < 10; i++)
	{
		n[i] = 0;
	}
	
	printf("%s%13s\n","element","value");
	
	for(i = 0; i < 10; i++)
	{
		printf("%7d%9d\n", i, n[i]);
	}
	
	return 0;
}