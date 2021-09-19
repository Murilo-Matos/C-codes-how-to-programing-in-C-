
#include<stdio.h>

int main(voide)
{
	int totalA = 0, totalB = 0;
	int counter = 1;
	int elements;
	

	
	while(counter <= 9)
	{
	   	printf("Type it 1 or 2 for will be elements of any matriz:");
	   	scanf("%d", &elements);
	   	
		if(elements == 1)
		{
			totalA++;
		}
		else if(elements == 2)
		{
			totalB++;
		}
		else
		{
			printf("\nthis input isn't vality\n");
		}
		counter++;
	}
	
	if(totalA == totalB)
	{
		printf("\nthe numbers of 1s and 2s are equais\n");
	}
	else
	{
		printf("\nthe numbers are differents\n");
	}
	
	return 0;
	
	
	
}