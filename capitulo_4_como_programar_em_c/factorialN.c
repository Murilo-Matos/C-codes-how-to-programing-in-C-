#include<stdio.h> 

int main(void)

{
	double total = 1;
	int counter;
	
	for(counter = 1; counter <= 20; counter++)
	{
		total = total * counter;
		printf("%-21.2f\t", total);
		
		if(counter % 2 == 0)
		{
			printf("\n");
		}
		
	}

	
	return 0;
	
}