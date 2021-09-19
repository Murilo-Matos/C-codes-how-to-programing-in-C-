#include<stdio.h> 
#include<math.h>

int main(void)

{
	double counter;
	int total = 35;
	
	printf("the other fpur next numbers of this sequency is:\n");
	printf("5 7 11 19 35... is:");
	
	for(counter = 5; counter <= 8; counter++)
	{
		total = total + pow(2, counter);
		printf("\n%d\n", total);
		
	}
	
	return 0;
}