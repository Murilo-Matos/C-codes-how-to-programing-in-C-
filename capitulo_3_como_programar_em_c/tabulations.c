#include <stdio.h>

int main(void)
{
	int N = 1;
	int A;
	
	printf("N\t\tN*10\t\tN*100\t\tN*1000\n");
	
	
	while (N <= 10)
	{
		A = N * 1;
		printf("%d\t\t", A);
		A = N * 10;
		printf("%d\t\t", A);
		A = N * 100;
		printf("%d\t\t", A);
		A = N * 1000;
		printf("%d\t\t\n", A);
		
		N++;
	}
	
	return 0;
}