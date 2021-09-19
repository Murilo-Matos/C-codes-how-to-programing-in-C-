#include <stdio.h>

int main (void)
{
	int number; 
	int approved = 0;
	int disapproved = 0;
	int student = 1;
	
	while(student <= 10)
	{
		printf("type it 1 for approved and 2 for disapproved:");
		scanf("%d", &number);
		
		if(number == 1)
		{
			approved++;
		}
		else if(number != 2)
		{
			printf("\ntype it a validate input\n");
			student--;
		}		
		else
		{
			disapproved++;
		}
		student++;
	}
	
	printf("approved: %d\n", approved);
	printf("disapproved:%d\n", disapproved);
	
	return 0;
}