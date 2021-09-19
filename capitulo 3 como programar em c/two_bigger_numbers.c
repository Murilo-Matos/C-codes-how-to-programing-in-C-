#include <stdio.h>

int main(void)
{
	int counter = 1;
	int bigger =0;
	int bigger2 = 0;
	int number =0;
	
	while(counter <= 10)
	{
		printf("type it a number:");
		scanf("%d", &number);
		
		if (counter == 1)
		{
			if(number >= bigger)
				bigger = number;
		}
		
		else
		{
			if (number >= bigger)
			{
				bigger2 = bigger;
				
				bigger = number;
			}
			else
			{
				if(number > bigger2)
					bigger2 = number;
			}
			
		}
		counter++;		
	}
	printf("the two biggers number: %d %d", bigger, bigger2);
	
	return 0;
}