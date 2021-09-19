#include <stdio.h>

int main(void)
{
	int counter = 1;
	int N = 3;
	int A;
	
	printf("A\t\tA+2\t\tA+4\t\tA+6\t\t\n");
	
	while(counter <= 5)
	{
		A = N + 0;
		printf("%d\t\t", A);
		A = N + 2;
		printf("%d\t\t", A);
		A = N + 4;
		printf("%d\t\t", A);
		A = N + 6;
		printf("%d\t\t\n", A);
		
		counter++;
		N = N + 3;
	}
	
	return 0;
}